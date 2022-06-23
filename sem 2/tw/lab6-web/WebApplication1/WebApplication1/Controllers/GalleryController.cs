using AutoMapper;
using System;
using System.Collections.Generic;
using System.IO;
using System.Web.Mvc;
using WebApplication1.Attributes;
using WebApplication1.BusinessLogic.DBModel;
using WebApplication1.BusinessLogic.Interfaces;
using WebApplication1.Domain.Entities.Images;
using WebApplication1.Models.Images;

namespace WebApplication1.Controllers
{

    public class GalleryController : Controller
    {
        // GET: Gallery
        
            

            private IGalerie _galerie;

            public GalleryController()
            {
                var bl = new BussinesLogic.BussinesLogic();
                _galerie = bl.GetGalerieBL();
            }

          

            public ActionResult Index()
            {
                var data = _galerie.GetGalerieData();

                PImageData new_list = new PImageData
                {
                    ImageList = new List<Image>()
                };

                foreach (var img in data)
                {
                    Mapper.Initialize(cfg => cfg.CreateMap<Image, Image>());
                    var local = Mapper.Map<Image>(img);
                    new_list.ImageList.Add(local);
                }

                return View(new_list);
            }
        [HttpPost]
        [AdminMode]
        [ValidateAntiForgeryToken]
        public ActionResult Add(PImageData model)
            {
                string fileName = Path.GetFileNameWithoutExtension(model.ImageFile.FileName);
                string extension = Path.GetExtension(model.ImageFile.FileName);
                fileName = fileName + DateTime.Now.ToString("yymmssfff") + extension;
                model.Image.ImagePath = "~/Images/gallery/" + fileName;
                fileName = Path.Combine(Server.MapPath("~/Images/gallery/"), fileName);
                model.ImageFile.SaveAs(fileName);

                IDbTable new_img = new IDbTable();

                Mapper.Initialize(cfg => cfg.CreateMap<Image, Image>());
                var image = Mapper.Map<Image>(model.Image);

                using (ImageContext db = new ImageContext())
                {
                    new_img.ImageID = image.ImageID;
                    new_img.Title = image.Title;
                    new_img.ImagePath = image.ImagePath;

                    db.Images.Add(new_img);
                    db.SaveChanges();
                }
                return RedirectToAction("Index", "Gallery");
            }

        [AdminMode]
        public ActionResult ImageDelete(string  ImageID)
        {
            var bl = new BussinesLogic.BussinesLogic();
            _galerie = bl.GetGalerieBL();
            int id = int.Parse(ImageID);
            _galerie.DeleteImage(id);
            return RedirectToAction("Index", "Gallery");
        }
 
    }
}