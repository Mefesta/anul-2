using System.Data.Entity;
using WebApplication1.Domain.Entities.User;

namespace WebApplication1.BussinesLogic.DBModel
{
    class UserContext : DbContext
    {
        public UserContext() : 
            base("name=eUseControl") // connectionstring name define in your web.config
        {
        }

        public virtual DbSet<UDbTable> Users { get; set; }
    }
}
