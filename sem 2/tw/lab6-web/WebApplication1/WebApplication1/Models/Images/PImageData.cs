using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using WebApplication1.Domain.Entities.Images;

namespace WebApplication1.Models.Images
{
    public class PImageData
    {
        public Image Image { get; set; }
        public List<Image> ImageList { get; set; }
        public HttpPostedFileBase ImageFile { get; set; }
    }
}