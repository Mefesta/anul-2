using System.Data.Entity;
using WebApplication1.Domain.Entities.User;

namespace WebApplication1.BussinesLogic.DBModel
{
    public class SessionContext : DbContext
    {
        public SessionContext() : base("name=eUseControl")
        {
        }

        public virtual DbSet<Session> Sessions { get; set; }
    }
}
