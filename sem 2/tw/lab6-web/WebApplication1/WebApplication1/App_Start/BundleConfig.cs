using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Optimization;

namespace WebApplication1.Web
{
    public class BundleConfig
    {
        
internal static void RegisterBundles(BundleCollection bundles)
        {
            //style
            bundles.Add(new StyleBundle("~/bundles/bootstrap/css").Include("~/Content/bootstrap.min.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/owl.carousel/css").Include("~/Vendors/Css/owl.carousel.min.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/slicknav/css").Include("~/Vendors/Css/slicknav.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/flaticon/css").Include("~/Vendors/Css/flaticon.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/gijgo/css").Include("~/Vendors/Css/gijgo.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/animate/css").Include("~/Vendors/Css/animate.min.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/animated-headline/css").Include( "~/Vendors/Css/animated-headline.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/magnific-popup/css").Include("~/Vendors/Css/magnific-popup.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/fontawesome-all/css").Include( "~/Vendors/Css/fontawesome-all.min.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/themify-icons/css").Include( "~/Vendors/Css/themify-icons.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/slick/css").Include("~/Vendors/Css/slick.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/nice-select/css").Include("~/Vendors/Css/nice-select.css", new CssRewriteUrlTransform()));
            bundles.Add(new StyleBundle("~/bundles/style/css").Include( "~/Vendors/Css/style.css", new CssRewriteUrlTransform()));

            //scripts
            bundles.Add(new ScriptBundle("~/bundles/modernizr-3.5.0/js").Include( "~/Vendors/vendor/modernizr-3.5.0.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery-1.12.4/js").Include( "~/Vendors/vendor/jquery-1.12.4.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/popper/js").Include( "~/Vendors/popper.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/bootstrap/js").Include( "~/Vendors/bootstrap.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.slicknav/js").Include( "~/Vendors/jquery.slicknav.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/owl.carousel/js").Include( "~/Vendors/owl.carousel.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/slick/js").Include( "~/Vendors/slick.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/wow/js").Include(  "~/Vendors/wow.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/animated.headline/js").Include( "~/Vendors/animated.headline.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.magnific-popup/js").Include( "~/Vendors/jquery.magnific-popup.js"));
            bundles.Add(new ScriptBundle("~/bundles/gijgo/js").Include("~/Vendors/gijgo.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.nice-select/js").Include("~/Vendors/jquery.nice-select.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.sticky/js").Include( "~/Vendors/jquery.sticky.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.counterup/js").Include( "~/Vendors/jquery.counterup.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/waypoints/js").Include(  "~/Vendors/waypoints.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.countdown/js").Include("~/Vendors/jquery.countdown.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/hover-direction-snake/js").Include( "~/Vendors/hover-direction-snake.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/contact/js").Include( "~/Vendors/contact.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.form/js").Include("~/Vendors/jquery.form.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.validate/js").Include("~/Vendors/jquery.validate.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/mail-script/js").Include( "~/Vendors/mail-script.js"));
            bundles.Add(new ScriptBundle("~/bundles/jquery.ajaxchimp/js").Include("~/Vendors/jquery.ajaxchimp.min.js"));
            bundles.Add(new ScriptBundle("~/bundles/plugins/js").Include( "~/Vendors/plugins.js"));
            bundles.Add(new ScriptBundle("~/bundles/main/js").Include( "~/Vendors/main.js"));

        }
    }
}
