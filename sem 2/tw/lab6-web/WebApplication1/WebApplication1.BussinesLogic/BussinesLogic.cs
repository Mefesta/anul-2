using WebApplication1.BusinessLogic.Interfaces;
using WebApplication1.BusinessLogic.LoginBL;
using WebApplication1.BussinesLogic.Interfaces;

namespace WebApplication1.BussinesLogic
{
    public class BussinesLogic
    {
        public ISession GetSessionBL()
        {
            return new SessionBL();
        }
        public IGalerie GetGalerieBL()
        {
            return new GalerieBL();
        }

       

    }
}
