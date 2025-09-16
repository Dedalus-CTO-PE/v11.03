//jsVersion  : V11.03.00
//========================================================================
// Program   : hicweb0101003.js
//
// Function  : Standard Functions Used in hicweb0101003 templates 
//
// Version   : 
//             V9.05.01  07/04/2006 J.Tan CAR 98180
//                       Mods for default clinic id
//             V9.05.B00 23/02/2006 J.Tan  
//                       Created include
//
//========================================================================

function CheckFormat(nextcode) {
  if(isWhitespace(nextcode.value)) {
    return;
  }
 if(nextcode.value.length != "5") {
   alert(nextcode.title + " must be in the format XYYYY\n" +
         "Where X = Alphabetic and YYYY = Numeric.");
   nextcode.value="";
//   nextcode.focus();
     setTimeout('DelayFocus(document.SelectPeriod.srchbtch)',250);
   return;
 }
 checkX=nextcode.value.substr(0,1).search('[^a-zA-Z]');
 if (checkX >= 0) {
   alert(nextcode.title + " must be in the format XYYYY\n" +
         "Where X = Alphabetic and YYYY = Numeric.");
   nextcode.value="";
   setTimeout('DelayFocus(document.SelectPeriod.srchbtch)',250);
   return;
 }
 checkYYYY=nextcode.value.substr(1,4).search('[^0-9]');
 if (checkYYYY >= 0) {
   alert(nextcode.title + " must be in the format XYYYY\n" +
         "Where X = Alphabetic and YYYY = Numeric.");
   nextcode.value="";
   setTimeout('DelayFocus(document.SelectPeriod.srchbtch)',250);
   return;
 }
   document.SelectPeriod.srchclty.value="";
   document.SelectPeriod.srchclid.value="";
   document.SelectPeriod.srchprov.value="";
   document.SelectPeriod.srchstat.value="";
   SelectPeriod.submit();
}

function init() {

// if(isWhitespace(SelectPeriod.deftclid.value) &&
//    isWhitespace(SelectPeriod.srchsdoc.value)) {
//    setTimeout('GetSDoc();',100);
// }

 SetClinicType(SelectPeriod.srchclty,SelectPeriod.defctype.value,SelectPeriod.usersite.value);
// SetClinicId(SelectPeriod.srchclid,SelectPeriod.deftclid.value,SelectPeriod.usersite.value);
 SetCookiePath("HicList");
}

function onClinicID(){
  validId=""+validateCode(25,SelectPeriod.srchclid,SelectPeriod.clindesc);
  if(validId!='false'){ 
     SelectPeriod.submit();
  }
}

function PageSubmit() {
  SelectPeriod.submit();
}

function HICErrList(batch) {
  left=(document.body.clientWidth-1000)/2
  linkurl="hicweb01.pbl?reportno=01&template=013" +
          "&batchkey=" + batch.replace(/ /g,"+");
  DFrameLink(linkurl,160,left,1000,400)
}

function GetServiceProv() {
 SelectPeriod.srchprov.value="";

   if (isWhitespace(SelectPeriod.srchsdoc.value)) {
     if (isWhitespace(SelectPeriod.srchclid.value)) {
      SelectPeriod.srchprov.className=""
      SelectPeriod.srchprov.readOnly=false;
      return;
     }
   }

   if (!isWhitespace(SelectPeriod.defmprac.value)) {
      SelectPeriod.srchprov.className="Mandatory";
   }


   if (isWhitespace(SelectPeriod.srchsdoc.value)) {
     if (!isWhitespace(SelectPeriod.srchclid.value)) {
        SubmitSearch();
        return;
     }
   }

 if (!isWhitespace(SelectPeriod.srchprac.value)) {
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=63" +
        "&mediprac=" + SelectPeriod.srchprac.value.replace(/ /g,"+") +
        "&valdcode=" + SelectPeriod.srchsdoc.value.replace(/ /g,"+") +
        "&returnfm=1"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    SelectPeriod.srchprov.value=ReturnValue[1];
    if (isWhitespace(SelectPeriod.srchprov.value)) {
       alert("Service Provider is blank for this Medical Practice and Doctor");
       SelectPeriod.srchprov.value="";
       SelectPeriod.srchprov.className=""
       SelectPeriod.srchprov.readOnly=false;
       return;
    } else {
      SubmitSearch();
    }
  }
 }
 else {
   SelectPeriod.srchprov.value=""; }
}

function GetSDoc() {
   if (!isWhitespace(SelectPeriod.srchsdoc.value)) {
     SelectPeriod.srchprov.value="";
     SelectPeriod.srchprov.className="";
   }

   SelectPeriod.srchsdoc.value="";
   SelectPeriod.srchsdoc.className="";

   if (isWhitespace(SelectPeriod.srchprac.value)) {
     if (!isWhitespace(SelectPeriod.defmprac.value)) {
        SelectPeriod.srchprac.value=SelectPeriod.defmprac.value;
        SelectPeriod.srchprov.value="";
        SelectPeriod.srchprov.className=""
        SelectPeriod.srchsdoc.value="";
        SelectPeriod.srchsdoc.className=""
     } else {
        SelectPeriod.srchprov.value="";
        SelectPeriod.srchprov.className=""
        SelectPeriod.srchprov.readOnly=false;
        SelectPeriod.srchsdoc.value="";
     }
   }

   if (!isWhitespace(SelectPeriod.srchprac.value)) {
//        SelectPeriod.srchprov.className="Mandatory";
   }

   selectOptions("5",SelectPeriod.srchprac,SelectPeriod.srchsdoc);

   if (!isWhitespace(SelectPeriod.srchclid.value)) {
      SubmitSearch();
   }
}

function selectOptions(OptionNumber,ReturnCode,ReturnSelect) {
  var serverURL   = "../cgi-bin/hicweb01.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")

  var returnValue = RSExecute(serverURL);

  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    ReturnCode.select();  }
}

