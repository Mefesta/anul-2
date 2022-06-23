using WebApplication1.BussinesLogic.Interfaces;
using System.Web;
using WebApplication1.Domain.Entities.User;
using WebApplication1.BussinesLogic.Core;

namespace WebApplication1.BussinesLogic
{
    public class SessionBL : UserApi, ISession
    {
        public HttpCookie GenCookie(string loginCredential)
        {
            return Cookie(loginCredential);
        }

        public ULoginResp UserLogin(ULoginData data)
        {
            return UserLoginAction(data);
        }


        public ULoginResp UserRegister(URegisterData data)
        {
            return UserRegisterAction(data);
        }

        public UserMinimal GetUserByCookie(string apiCookieValue)
        {
            return UserCookie(apiCookieValue);
        }
    }
}
