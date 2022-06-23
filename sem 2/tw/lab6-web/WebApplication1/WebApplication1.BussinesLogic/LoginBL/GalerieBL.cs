using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WebApplication1.BusinessLogic.Interfaces;
using WebApplication1.BussinesLogic.Core;
using WebApplication1.Domain.Entities.Images;

namespace WebApplication1.BusinessLogic.LoginBL
{
    public class GalerieBL : UserApi, IGalerie
    {
        public List<Image> GetGalerieData()
        {
            return GetGalerieDataApi();
        }

        public void DeleteImage(int ImageId)
        {
            DeleteImageAction(ImageId);
        }
    }
}
