using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using WebApplication1.Domain.Enums;

namespace WebApplication1.Models
{
	public class DataRequest
	{
		public string UserName { get; set; }
		public URole Level { get; set; }
		
	}

}