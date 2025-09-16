//jsVersion  : V11.03.00
//========================================================================
// Program   : mehweb0109005.js
//
// Written   : 13.09.2011 Peter Vela
//
// Function  : Functions Used in mehweb0109
//
// Version   :
//             V10.03.04 24/01/2012 Peter Vela CAR 259026
//                       Added whitespace validation to LS Start Date and Time
//                       in CheckStatus()
//             V10.03.03 08/12/2011 J.Tan      CAR 254377
//                       Mods LS End date must be less than Referral End date
//             V10.03.02 28/11/2011 Peter Vela CAR 251561
//                       Added assignment of "23:59:00" to CheckStatus and
//                       CheckStatusUpdate
//             V10.03.01 07/11/2011 Peter Vela CAR 252718
//                       Added CheckStatusUpdate()
//             V10.02.01 27/10/2011 Peter Vela CAR 253848
//                       Fixed date validations in checkLSDate()
//                       and checkLSTime() and CheckStatus()
//
//========================================================================
function CheckStatusUpdate(thisform) {

  var newExpiryDate = new Date();

  if (thisform.mhdls004.value.substr(6,1)=="1")
  {
    if (thisform.mhdls004.value.substr(7,1)=="H")
    {
      if (!isWhitespace(thisform.mhdls002.value)&&
          !isWhitespace(thisform.mhdls004.value.substr(26,6))&&
          !isWhitespace(thisform.mhdls003.value))
      {

        newExpiryDate.setDate(parseInt(thisform.mhdls002.value.substring(0,2)));

        var varMonth = 0;
        if (thisform.mhdls002.value.substr(3,3)=="Jan"){varMonth=0;}
        if (thisform.mhdls002.value.substr(3,3)=="Feb"){varMonth=1;}
        if (thisform.mhdls002.value.substr(3,3)=="Mar"){varMonth=2;}
        if (thisform.mhdls002.value.substr(3,3)=="Apr"){varMonth=3;}
        if (thisform.mhdls002.value.substr(3,3)=="May"){varMonth=4;}
        if (thisform.mhdls002.value.substr(3,3)=="Jun"){varMonth=5;}
        if (thisform.mhdls002.value.substr(3,3)=="Jul"){varMonth=6;}
        if (thisform.mhdls002.value.substr(3,3)=="Aug"){varMonth=7;}
        if (thisform.mhdls002.value.substr(3,3)=="Sep"){varMonth=8;}
        if (thisform.mhdls002.value.substr(3,3)=="Oct"){varMonth=9;}
        if (thisform.mhdls002.value.substr(3,3)=="Nov"){varMonth=10;}
        if (thisform.mhdls002.value.substr(3,3)=="Dec"){varMonth=11;}
        newExpiryDate.setMonth(parseInt(varMonth));

        newExpiryDate.setFullYear(thisform.mhdls002.value.substr(7,4));

        newExpiryDate.setHours(thisform.mhdls003.value.substr(0,2));

        newExpiryDate.setMinutes(thisform.mhdls003.value.substr(3,2));

        newExpiryDate.setSeconds(thisform.mhdls003.value.substr(6,2));

        var newHours = newExpiryDate.getHours() +
                      parseInt(thisform.mhdls004.value.substr(26,6));

        newExpiryDate.setHours(parseInt(newHours));

        varMonth = "   ";
        if (newExpiryDate.getMonth()==0) {varMonth="Jan";}
        if (newExpiryDate.getMonth()==1) {varMonth="Feb";}
        if (newExpiryDate.getMonth()==2) {varMonth="Mar";}
        if (newExpiryDate.getMonth()==3) {varMonth="Apr";}
        if (newExpiryDate.getMonth()==4) {varMonth="May";}
        if (newExpiryDate.getMonth()==5) {varMonth="Jun";}
        if (newExpiryDate.getMonth()==6) {varMonth="Jul";}
        if (newExpiryDate.getMonth()==7) {varMonth="Aug";}
        if (newExpiryDate.getMonth()==8) {varMonth="Sep";}
        if (newExpiryDate.getMonth()==9) {varMonth="Oct";}
        if (newExpiryDate.getMonth()==10) {varMonth="Nov";}
        if (newExpiryDate.getMonth()==11) {varMonth="Dec";}

        thisform.e_mhdls006.value=newExpiryDate.getDate() +" "+
                                           varMonth +" "+
                                           newExpiryDate.getFullYear();

        if(newExpiryDate.getHours().toString().length==1) {
          thisform.e_mhdls007.value="0"+
          newExpiryDate.getHours().toString()+":";
        } else {
          thisform.e_mhdls007.value=
          newExpiryDate.getHours().toString()+":";
        }

        if(newExpiryDate.getMinutes().toString().length==1) {
          thisform.e_mhdls007.value=
          thisform.e_mhdls007.value.toString()+"0"+
          newExpiryDate.getMinutes().toString()+":";
        } else {
          thisform.e_mhdls007.value=
          thisform.e_mhdls007.value.toString()+
          newExpiryDate.getMinutes().toString()+":";
        }

        if(newExpiryDate.getSeconds().toString().length==1) {
          thisform.e_mhdls007.value=
          thisform.e_mhdls007.value.toString()+"0"+
          newExpiryDate.getSeconds().toString();
        } else {
          thisform.e_mhdls007.value=
          thisform.e_mhdls007.value.toString()+
          newExpiryDate.getSeconds().toString();
        }


      }
    }
    else
    {
      if (!isWhitespace(thisform.mhdls002.value)&&
          !isWhitespace(thisform.mhdls004.value.substr(26,6)))
      {
//    alert("1");
        var serverURL   = "../cgi-bin/patweb80.pbl?reportno=96" +
           "&valdcode=" + thisform.mhdls002.value.replace(/ /g,"+") +
           thisform.mhdls004.value.substr(26,6).replace(/ /g,"+") +
           thisform.mhdls004.value.substr(7,1).replace(/ /g,"+") +
           thisform.mhdls003.value.replace(/ /g,"+");


//alert(serverURL);

        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0)
        {
          ReturnValue=returnValue.return_value.split("|")
//alert(ReturnValue);
          thisform.e_mhdls006.value=trim(ReturnValue[0])

          if (thisform.mhdls004.value.substr(9,1)=="M")
          {
            thisform.e_mhdls007.value="23:59:00";
          } else {
            thisform.e_mhdls007.value=thisform.mhdls003.value;
          }
        }
      }
    }
  }
  else
  {
    if (thisform.mhdls004.value.substr(6,1)=="2")
    {
      if (thisform.mhdls004.value.substr(7,1)=="H")
      {
        if (!isWhitespace(thisform.precdate.value)&&
            !isWhitespace(thisform.mhdls004.value.substr(26,6))&&
            !isWhitespace(thisform.prectime.value))
        {

          newExpiryDate.setDate(parseInt(thisform.precdate.value.substring(0,2))
);

          var varMonth = 0;
          if (thisform.precdate.value.substr(3,3)=="Jan"){varMonth=0;}
          if (thisform.precdate.value.substr(3,3)=="Feb"){varMonth=1;}
          if (thisform.precdate.value.substr(3,3)=="Mar"){varMonth=2;}
          if (thisform.precdate.value.substr(3,3)=="Apr"){varMonth=3;}
          if (thisform.precdate.value.substr(3,3)=="May"){varMonth=4;}
          if (thisform.precdate.value.substr(3,3)=="Jun"){varMonth=5;}
          if (thisform.precdate.value.substr(3,3)=="Jul"){varMonth=6;}
          if (thisform.precdate.value.substr(3,3)=="Aug"){varMonth=7;}
          if (thisform.precdate.value.substr(3,3)=="Sep"){varMonth=8;}
          if (thisform.precdate.value.substr(3,3)=="Oct"){varMonth=9;}
          if (thisform.precdate.value.substr(3,3)=="Nov"){varMonth=10;}
          if (thisform.precdate.value.substr(3,3)=="Dec"){varMonth=11;}
          newExpiryDate.setMonth(parseInt(varMonth));

          newExpiryDate.setFullYear(thisform.precdate.value.substr(7,4));

          newExpiryDate.setHours(thisform.prectime.value.substr(0,2));

          newExpiryDate.setMinutes(thisform.prectime.value.substr(3,2));

          newExpiryDate.setSeconds(thisform.prectime.value.substr(6,2));

          var newHours = newExpiryDate.getHours() +
                         parseInt(thisform.mhdls004.value.substr(26,6));

          newExpiryDate.setHours(parseInt(newHours));

          varMonth = "   ";
          if (newExpiryDate.getMonth()==0) {varMonth="Jan";}
          if (newExpiryDate.getMonth()==1) {varMonth="Feb";}
          if (newExpiryDate.getMonth()==2) {varMonth="Mar";}
          if (newExpiryDate.getMonth()==3) {varMonth="Apr";}
          if (newExpiryDate.getMonth()==4) {varMonth="May";}
          if (newExpiryDate.getMonth()==5) {varMonth="Jun";}
          if (newExpiryDate.getMonth()==6) {varMonth="Jul";}
          if (newExpiryDate.getMonth()==7) {varMonth="Aug";}
          if (newExpiryDate.getMonth()==8) {varMonth="Sep";}
          if (newExpiryDate.getMonth()==9) {varMonth="Oct";}
          if (newExpiryDate.getMonth()==10) {varMonth="Nov";}
          if (newExpiryDate.getMonth()==11) {varMonth="Dec";}

          thisform.e_mhdls006.value=newExpiryDate.getDate() +" "+
                                             varMonth +" "+
                                             newExpiryDate.getFullYear();

          if(newExpiryDate.getHours().toString().length==1) {
            thisform.e_mhdls007.value="0"+
            newExpiryDate.getHours().toString()+":";
          } else {
            thisform.e_mhdls007.value=
            newExpiryDate.getHours().toString()+":";
          }

          if(newExpiryDate.getMinutes().toString().length==1) {
            thisform.e_mhdls007.value=
            thisform.e_mhdls007.value.toString()+"0"+
            newExpiryDate.getMinutes().toString()+":";
          } else {
            thisform.e_mhdls007.value=
            thisform.e_mhdls007.value.toString()+
            newExpiryDate.getMinutes().toString()+":";
          }

          if(newExpiryDate.getSeconds().toString().length==1) {
            thisform.e_mhdls007.value=
            thisform.e_mhdls007.value.toString()+"0"+
            newExpiryDate.getSeconds().toString();
          } else {
            thisform.e_mhdls007.value=
            thisform.e_mhdls007.value.toString()+
            newExpiryDate.getSeconds().toString();
          }
        }
      }
      else
      {
        if (!isWhitespace(thisform.precdate.value)&&
            !isWhitespace(thisform.mhdls004.value.substr(26,6)))
        {
//      alert("2");
          var serverURL   = "../cgi-bin/patweb80.pbl?reportno=96" +
             "&valdcode=" + thisform.precdate.value.replace(/ /g,"+") +
             thisform.mhdls004.value.substr(26,6).replace(/ /g,"+") +
             thisform.mhdls004.value.substr(7,1).replace(/ /g,"+") +
             thisform.prectime.value.replace(/ /g,"+");


//alert(serverURL);

          var returnValue = RSExecute(serverURL);
          if (returnValue.status==0)
          {
            ReturnValue=returnValue.return_value.split("|");
//alert(ReturnValue);
            thisform.e_mhdls006.value=trim(ReturnValue[0]);

            if (thisform.mhdls004.value.substr(9,1)=="M")
            {
              thisform.e_mhdls007.value="23:59:00";
            } else {
              thisform.e_mhdls007.value=thisform.prectime.value;
            }
          }
        }
      }
    }
//  else
//  {
//    document.UpdateForm.mehvs003.value="";
//  }
  }
  if (thisform.e_mhdls006.value.length==10) {
     thisform.e_mhdls006.value="0"+thisform.e_mhdls006.value;
  }

}
function CheckStatus(thisform) {

  var newExpiryDate = new Date();

  if (isWhitespace(thisform.mhdls002.value)||
      isWhitespace(thisform.mhdls003.value)) {
    return;
  }

  if (thisform.mhdls004.value.substr(6,1)=="1")
  {
    if (thisform.mhdls004.value.substr(7,1)=="H")
    {
      if (!isWhitespace(thisform.mhdls002.value)&&
          !isWhitespace(thisform.mhdls004.value.substr(26,6))&&
          !isWhitespace(thisform.mhdls003.value))
      {

        newExpiryDate.setDate(parseInt(thisform.mhdls002.value.substring(0,2)));

        var varMonth = 0;
        if (thisform.mhdls002.value.substr(3,3)=="Jan"){varMonth=0;}
        if (thisform.mhdls002.value.substr(3,3)=="Feb"){varMonth=1;}
        if (thisform.mhdls002.value.substr(3,3)=="Mar"){varMonth=2;}
        if (thisform.mhdls002.value.substr(3,3)=="Apr"){varMonth=3;}
        if (thisform.mhdls002.value.substr(3,3)=="May"){varMonth=4;}
        if (thisform.mhdls002.value.substr(3,3)=="Jun"){varMonth=5;}
        if (thisform.mhdls002.value.substr(3,3)=="Jul"){varMonth=6;}
        if (thisform.mhdls002.value.substr(3,3)=="Aug"){varMonth=7;}
        if (thisform.mhdls002.value.substr(3,3)=="Sep"){varMonth=8;}
        if (thisform.mhdls002.value.substr(3,3)=="Oct"){varMonth=9;}
        if (thisform.mhdls002.value.substr(3,3)=="Nov"){varMonth=10;}
        if (thisform.mhdls002.value.substr(3,3)=="Dec"){varMonth=11;}
        newExpiryDate.setMonth(parseInt(varMonth));

        newExpiryDate.setFullYear(thisform.mhdls002.value.substr(7,4));
        
        newExpiryDate.setHours(thisform.mhdls003.value.substr(0,2));

        newExpiryDate.setMinutes(thisform.mhdls003.value.substr(3,2));

        newExpiryDate.setSeconds(thisform.mhdls003.value.substr(6,2));

        var newHours = newExpiryDate.getHours() +
                      parseInt(thisform.mhdls004.value.substr(26,6));

        newExpiryDate.setHours(parseInt(newHours));

        varMonth = "   ";
        if (newExpiryDate.getMonth()==0) {varMonth="Jan";}
        if (newExpiryDate.getMonth()==1) {varMonth="Feb";}
        if (newExpiryDate.getMonth()==2) {varMonth="Mar";}
        if (newExpiryDate.getMonth()==3) {varMonth="Apr";}
        if (newExpiryDate.getMonth()==4) {varMonth="May";}
        if (newExpiryDate.getMonth()==5) {varMonth="Jun";}
        if (newExpiryDate.getMonth()==6) {varMonth="Jul";}
        if (newExpiryDate.getMonth()==7) {varMonth="Aug";}
        if (newExpiryDate.getMonth()==8) {varMonth="Sep";}
        if (newExpiryDate.getMonth()==9) {varMonth="Oct";}
        if (newExpiryDate.getMonth()==10) {varMonth="Nov";}
        if (newExpiryDate.getMonth()==11) {varMonth="Dec";}

        thisform.mhdls006.value=newExpiryDate.getDate() +" "+
                                           varMonth +" "+
                                           newExpiryDate.getFullYear();

        if(newExpiryDate.getHours().toString().length==1) {
          thisform.mhdls007.value="0"+
          newExpiryDate.getHours().toString()+":";
        } else {
          thisform.mhdls007.value=
          newExpiryDate.getHours().toString()+":";
        }

        if(newExpiryDate.getMinutes().toString().length==1) {
          thisform.mhdls007.value=
          thisform.mhdls007.value.toString()+"0"+
          newExpiryDate.getMinutes().toString()+":";
        } else {
          thisform.mhdls007.value=
          thisform.mhdls007.value.toString()+
          newExpiryDate.getMinutes().toString()+":";
        }

        if(newExpiryDate.getSeconds().toString().length==1) {
          thisform.mhdls007.value=
          thisform.mhdls007.value.toString()+"0"+
          newExpiryDate.getSeconds().toString();
        } else {
          thisform.mhdls007.value=
          thisform.mhdls007.value.toString()+
          newExpiryDate.getSeconds().toString();
        }


      }
    }
    else
    {
      if (!isWhitespace(thisform.mhdls002.value)&&
          !isWhitespace(thisform.mhdls004.value.substr(26,6)))
      {
//    alert("1");
        var serverURL   = "../cgi-bin/patweb80.pbl?reportno=96" +
           "&valdcode=" + thisform.mhdls002.value.replace(/ /g,"+") +
           thisform.mhdls004.value.substr(26,6).replace(/ /g,"+") +
           thisform.mhdls004.value.substr(7,1).replace(/ /g,"+") +
           thisform.mhdls003.value.replace(/ /g,"+");


//alert(serverURL);

        var returnValue = RSExecute(serverURL);
        if (returnValue.status==0)
        {
          ReturnValue=returnValue.return_value.split("|")
//alert(ReturnValue);
          thisform.mhdls006.value=trim(ReturnValue[0])

          if (thisform.mhdls004.value.substr(9,1)=="M")
          {
            thisform.mhdls007.value="23:59:00";
          } else {
            thisform.mhdls007.value=thisform.mhdls003.value;
          }
        }
      }
    }
  }
  else
  {
    if (thisform.mhdls004.value.substr(6,1)=="2")
    {
      if (thisform.mhdls004.value.substr(7,1)=="H")
      {
        if (!isWhitespace(thisform.precdate.value)&&
            !isWhitespace(thisform.mhdls004.value.substr(26,6))&&
            !isWhitespace(thisform.prectime.value))
        {

          newExpiryDate.setDate(parseInt(thisform.precdate.value.substring(0,2)));

          var varMonth = 0;
          if (thisform.precdate.value.substr(3,3)=="Jan"){varMonth=0;}
          if (thisform.precdate.value.substr(3,3)=="Feb"){varMonth=1;}
          if (thisform.precdate.value.substr(3,3)=="Mar"){varMonth=2;}
          if (thisform.precdate.value.substr(3,3)=="Apr"){varMonth=3;}
          if (thisform.precdate.value.substr(3,3)=="May"){varMonth=4;}
          if (thisform.precdate.value.substr(3,3)=="Jun"){varMonth=5;}
          if (thisform.precdate.value.substr(3,3)=="Jul"){varMonth=6;}
          if (thisform.precdate.value.substr(3,3)=="Aug"){varMonth=7;}
          if (thisform.precdate.value.substr(3,3)=="Sep"){varMonth=8;}
          if (thisform.precdate.value.substr(3,3)=="Oct"){varMonth=9;}
          if (thisform.precdate.value.substr(3,3)=="Nov"){varMonth=10;}
          if (thisform.precdate.value.substr(3,3)=="Dec"){varMonth=11;}
          newExpiryDate.setMonth(parseInt(varMonth));

          newExpiryDate.setFullYear(thisform.precdate.value.substr(7,4));

          newExpiryDate.setHours(thisform.prectime.value.substr(0,2));

          newExpiryDate.setMinutes(thisform.prectime.value.substr(3,2));

          newExpiryDate.setSeconds(thisform.prectime.value.substr(6,2));

          var newHours = newExpiryDate.getHours() +
                         parseInt(thisform.mhdls004.value.substr(26,6));
 
          newExpiryDate.setHours(parseInt(newHours));

          varMonth = "   ";
          if (newExpiryDate.getMonth()==0) {varMonth="Jan";}
          if (newExpiryDate.getMonth()==1) {varMonth="Feb";}
          if (newExpiryDate.getMonth()==2) {varMonth="Mar";}
          if (newExpiryDate.getMonth()==3) {varMonth="Apr";}
          if (newExpiryDate.getMonth()==4) {varMonth="May";}
          if (newExpiryDate.getMonth()==5) {varMonth="Jun";}
          if (newExpiryDate.getMonth()==6) {varMonth="Jul";}
          if (newExpiryDate.getMonth()==7) {varMonth="Aug";}
          if (newExpiryDate.getMonth()==8) {varMonth="Sep";}
          if (newExpiryDate.getMonth()==9) {varMonth="Oct";}
          if (newExpiryDate.getMonth()==10) {varMonth="Nov";}
          if (newExpiryDate.getMonth()==11) {varMonth="Dec";}

          thisform.mhdls006.value=newExpiryDate.getDate() +" "+
                                             varMonth +" "+
                                             newExpiryDate.getFullYear();

          if(newExpiryDate.getHours().toString().length==1) {
            thisform.mhdls007.value="0"+
            newExpiryDate.getHours().toString()+":";
          } else {
            thisform.mhdls007.value=
            newExpiryDate.getHours().toString()+":";
          }

          if(newExpiryDate.getMinutes().toString().length==1) {
            thisform.mhdls007.value=
            thisform.mhdls007.value.toString()+"0"+
            newExpiryDate.getMinutes().toString()+":"; 
          } else {
            thisform.mhdls007.value=
            thisform.mhdls007.value.toString()+
            newExpiryDate.getMinutes().toString()+":";
          }

          if(newExpiryDate.getSeconds().toString().length==1) {
            thisform.mhdls007.value=
            thisform.mhdls007.value.toString()+"0"+
            newExpiryDate.getSeconds().toString();
          } else {
            thisform.mhdls007.value=
            thisform.mhdls007.value.toString()+
            newExpiryDate.getSeconds().toString();
          }
        }
      }
      else
      {
        if (!isWhitespace(thisform.precdate.value)&&
            !isWhitespace(thisform.mhdls004.value.substr(26,6)))
        {
//      alert("2");
          var serverURL   = "../cgi-bin/patweb80.pbl?reportno=96" +
             "&valdcode=" + thisform.precdate.value.replace(/ /g,"+") +
             thisform.mhdls004.value.substr(26,6).replace(/ /g,"+") +
             thisform.mhdls004.value.substr(7,1).replace(/ /g,"+") +
             thisform.prectime.value.replace(/ /g,"+");


//alert(serverURL);

          var returnValue = RSExecute(serverURL);
          if (returnValue.status==0)
          {
            ReturnValue=returnValue.return_value.split("|");
//alert(ReturnValue);
            thisform.mhdls006.value=trim(ReturnValue[0]);

            if (thisform.mhdls004.value.substr(9,1)=="M")
            {
              thisform.mhdls007.value="23:59:00";
            } else {
              thisform.mhdls007.value=thisform.prectime.value;
            }
          }
        }
      }
    }
//  else
//  {
//    document.UpdateForm.mehvs003.value="";
//  }
  }
  if (thisform.mhdls006.value.length==10) {
     thisform.mhdls006.value="0"+thisform.mhdls006.value;
  }

  thisform.e_mhdls006.value=thisform.mhdls006.value;
  thisform.e_mhdls007.value=thisform.mhdls007.value;

  thisform.mhdls006.defaultValue=thisform.mhdls006.value;
  thisform.mhdls007.defaultValue=thisform.mhdls007.value;
}


function checkLSDate(lsdate,lstime,review,mindate,maxdate) {

 if (!checkDate(lsdate,"Date")) {return;}

 if (!isWhitespace(lsdate.value)) {
  if (SetDateYYYYMMDD(lsdate.value) < SetDateYYYYMMDD(mindate.value))
  {
   if (review==1) {
    alert("Review Date Entered must be after LS Start Date " + mindate.value);
   } else {
    alert("End Date Entered must be after LS Start Date " + mindate.value);
   }
// lsdate.value="";
   lsdate.value=lsdate.defaultValue;
   lsdate.focus();
   return;
  }

  if (!isWhitespace(maxdate.value)) {
   if (SetDateYYYYMMDD(lsdate.value) > SetDateYYYYMMDD(maxdate.value))
   {
     if (review==1) {
     alert("Review Date Entered must be before Expiry Date " + maxdate.value);
     } else {
     alert("End Date Entered must be before Expiry Date " + maxdate.value);
     }
//   lsdate.value="";
     lsdate.value=lsdate.defaultValue;
     lsdate.focus();
     return;
   }
  }
 }
}

function checkLSTime(lsdate,lstime,review,mindate,maxdate,mintime,maxtime) {

  if (!checkTime(lstime,"Time")) {return;}

 if (!isWhitespace(lstime.value)) {
  if (SetDateYYYYMMDD(lsdate.value) == SetDateYYYYMMDD(mindate.value))
  {
   var currtime=trim(mintime.value.replace(/:/g,"")) - 0
   var newrtime=trim(lstime.value.replace(/:/g,"")) - 0
   {
   if(newrtime<currtime){

     if (review==1) {
      alert("Review Time Entered must be after LS Start Time " + mintime.value);
//    lstime.value=maxtime.value;
     } else {
      alert("End Time Entered must be after LS Start Time " + mintime.value);
//    lstime.value="";
     }
     lstime.value=lstime.defaultValue;
     lstime.focus();
     return;
    }
   }
  }

  if (SetDateYYYYMMDD(lsdate.value) == SetDateYYYYMMDD(maxdate.value)) {

   var currtime=trim(maxtime.value.replace(/:/g,"")) - 0
   var newrtime=trim(lstime.value.replace(/:/g,"")) - 0

    if (!isWhitespace(maxtime.value)) {
     if(newrtime>currtime){
       if (review==1) {
       alert("Review Time Entered must be before Expiry Time " + maxtime.value);
        lstime.value=maxtime.value;
       } else {
        alert("End Time Entered must be before Expiry Time " + maxtime.value);
//      lstime.value="";
       }
       lstime.value=lstime.defaultValue;
       lstime.focus();
       return;
     }
    }
  }
 }
}

function checkRefDate(lsdate,lstime,review,refedate,refetime,expdate,exptime) {

 if ((!isWhitespace(lsdate.value)) && (!isWhitespace(refedate.value))) {
  if (SetDateYYYYMMDD(refedate.value) < SetDateYYYYMMDD(lsdate.value))
  {
   if (review==1) {
   alert("LS Start Date Entered must be BEFORE Referral End Date " + refedate.value);
   } else {
   alert("LS End Date Entered must be BEFORE Referral End Date " + refedate.value); }
   lsdate.value="";
   lsdate.focus();
   return;
   }
 }

 if (review==1) {
  if ((!isWhitespace(lsdate.value)) && (!isWhitespace(expdate.value))) {
   if (SetDateYYYYMMDD(expdate.value) < SetDateYYYYMMDD(lsdate.value))
   { 
    alert("LS Start Date Entered must be BEFORE Expiry Date " + expdate.value); 
    lsdate.focus();
    return;
   }
  }
 }
}

function checkRefTime(lsdate,lstime,review,refedate,refetime,expdate,exptime) {

 if ((!isWhitespace(lstime.value)) && (!isWhitespace(refetime.value))) {
  if (SetDateYYYYMMDD(lsdate.value) == SetDateYYYYMMDD(refedate.value))
  {
   var currtime=trim(refetime.value.replace(/:/g,"")) - 0
   var newrtime=trim(lstime.value.replace(/:/g,"")) - 0
   {
   if(currtime<newrtime){
     if (review==1) {
     alert("LS Start Time Entered must be BEFORE Referral End Time " + refetime.value); 
     } else {
     alert("LS End Time Entered must be BEFORE Referral End Time " + refetime.value); }
     lstime.value="";
     lstime.focus();
     return;
   }
  }
 }
 }

 if (review==1) {
  if ((!isWhitespace(lstime.value)) && (!isWhitespace(exptime.value))) {
   if (SetDateYYYYMMDD(lsdate.value) == SetDateYYYYMMDD(expdate.value))
   {
    var currtime=trim(exptime.value.replace(/:/g,"")) - 0
    var newrtime=trim(lstime.value.replace(/:/g,"")) - 0
    {
    if(currtime<newrtime){
     alert("LS Start Time Entered must be BEFORE Expiry Time " + exptime.value);
     lstime.focus();
     return;
     }
    }
   }
  }
 }
}
