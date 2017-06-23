using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Assets.Scripts
{
    public class LoginJsonHandler
    {
        public string message { get; private set; }
        public bool error { get; private set; }
        public LoginJsonCitizen citizen { get; private set; }
       
        public LoginJsonHandler(JSONObject obj)
        {
            if(obj.GetField("message") != null)
            {
                message = obj.GetField("message").str;
            }

            if (obj.GetField("error") != null)
            {
                error = obj.GetField("error").b;
            }

            if (obj.GetField("citizen") != null)
            {
                var x = obj.GetField("citizen");
                citizen = new LoginJsonCitizen(x);
            }

        }

    }

    public class LoginJsonCitizen
    {
        public long id { get; private set; }
        public string name { get; private set; }
        public string has_avatar { get; private set; }
        public string profile_url { get; private set; }
        public string avatar { get; private set; }

        public LoginJsonCitizen(JSONObject obj)
        {
            if (obj.GetField("id") != null)
            {
                id = obj.GetField("id").i;
            }

            if (obj.GetField("name") != null)
            {
                name = obj.GetField("name").str;
            }

            if (obj.GetField("has_avatar") != null)
            {
                has_avatar = obj.GetField("has_avatar").str;
            }

            if (obj.GetField("profile_url") != null)
            {
                profile_url = obj.GetField("profile_url").str;
            }

            if (obj.GetField("avatar") != null)
            {
                avatar = obj.GetField("avatar").str;
            }

        }
    }
}


//GenericJsonHandler j = new GenericJsonHandler(obj);

    /*
                GenericJsonHandler cookiesHandler = new GenericJsonHandler(cookiesAuthObj);
                
                Debug.Log(cookiesAuthObj);
                Debug.Log(cookiesHandler.erpk);
                Debug.Log(cookiesHandler.erpk_mid);
                Debug.Log(cookiesHandler.erpk_plang);
                Debug.Log(cookiesHandler.__cfduid);
                Debug.Log(cookiesHandler.erpk_rm);
                */