using System.Web.Mvc;
using WebApplication1.Models;
using WebApplication1.Web.Controllers;

namespace WebApplication1.Controllers
{
    public class HomeController : BaseController
    {
        // GET: Home

        public ActionResult Index()
        {
            SessionStatus();
            if ((string)System.Web.HttpContext.Current.Session["LoginStatus"] != "login")
            {
                return View(new DataRequest());
            }

            var user = System.Web.HttpContext.Current.GetMySessionObject();

            DataRequest data = new DataRequest()
            {
                UserName = user.Username,
                Level = user.Level,

            };

            return View(data);
        }

        public ActionResult About()
        {


            return View();
        }

        public ActionResult Contact()
        {
            return View();
        }
        
        
        public ActionResult Courses()
        {
            return View();
        }
        public ActionResult Elements()
        {
            return View();
        }

        public ActionResult Blog()
        {
            return View();
        }

        public ActionResult Blog_details()
        {
            return View();
        }

        public ActionResult Login()
        {
            return View();
        }
        public ActionResult Register()
        {
            return View();
        }
        public ActionResult Gallery()
        {
            return View();
        }


     
    }
}