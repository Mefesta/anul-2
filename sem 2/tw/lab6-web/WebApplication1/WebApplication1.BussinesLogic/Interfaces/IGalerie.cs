using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WebApplication1.Domain.Entities.Images;

namespace WebApplication1.BusinessLogic.Interfaces
{
    public interface IGalerie
    {
        List<Image> GetGalerieData();
        void DeleteImage(int ImageID);
    }
}
