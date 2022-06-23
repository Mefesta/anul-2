using System.Web;
using WebApplication1.Domain.Entities.User;

namespace WebApplication1.BussinesLogic.Interfaces
{
    public interface ISession
    {

        ULoginResp UserLogin(ULoginData data);
        ULoginResp UserRegister(URegisterData data);
        HttpCookie GenCookie(string loginCredential);
        UserMinimal GetUserByCookie(string apiCookieValue);

        
    }
}
