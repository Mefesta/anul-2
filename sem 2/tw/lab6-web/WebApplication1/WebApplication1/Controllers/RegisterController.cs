using System;
using System.Web.Mvc;
using WebApplication1.Domain.Entities.User;
using WebApplication1.Domain.Enums;
using WebApplication1.Models;
using AutoMapper;
using WebApplication1.BussinesLogic.Interfaces;
using WebApplication1.BussinesLogic;

namespace WebApplication1.Controllers
{

    public class RegisterController : Controller
    {
        // GET: Register
        private readonly ISession _session;
        public RegisterController()
        {
            var bl = new BussinesLogic.BussinesLogic();
            _session = bl.GetSessionBL();
        }

        // GET: Login
        public ActionResult Index()
        {
            return View();
        }

        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Index(UserRegister login)
        {
            if (ModelState.IsValid)
            {
                URegisterData data = new URegisterData
                {
                    Email = login.Email,
                    Credential = login.Credential,
                    Password = login.Password,
                    LoginIp = Request.UserHostAddress,
                    LoginDataTime = DateTime.Now
                };

                var userLogin = _session.UserRegister(data);
                if (userLogin.Status)
                {
                    return RedirectToAction("Index", "Home");
                }
                else
                {
                    ModelState.AddModelError("", userLogin.StatusMsg);
                    return View();
                }
            }

            return View();
        }
    }
}