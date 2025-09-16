//jsVersion  : V11.03.00
//========================================================================
function CreateBatch() {
  document.SelectPeriod.updatety.value='C';
  document.SelectPeriod.nextpage.value='1';
  document.SelectPeriod.btchflag.value='1';
  document.SelectPeriod.submit();
}

function DisButton(raise) {
  raise.disabled=true;
  setInterval(function () { raise.disabled=false; },6000);
}

function Referral(urno,refno,dp,admis,clmno) {
    linkUrl="hicweb01.pbl?reportno=3&template=001" +
            "&urnumber=" + urno.replace(/ /g,"+") +
            "&admissno=" + admis.replace(/ /g,"+") +
            "&deptcode=" + dp.replace(/ /g,"+") +
            "&refrnumb=" + refno.replace(/ /g,"+") +
            "&clmnnumb=" + clmno.replace(/ /g,"+");
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkUrl,0,Left,900,550)
}

function SubmitSearch() {
  document.SelectPeriod.btchflag.value='0';
  if(isWhitespace(SelectPeriod.srchbtch.value)) {
    if(isWhitespace(SelectPeriod.srchprov.value) &&
       isWhitespace(SelectPeriod.srchclty.value) &&
       isWhitespace(SelectPeriod.srchclid.value)) {
      alert("Service Provider,Clinic Type,Clinic ID or Batch No are mandatory for search.");
       return;
    }
  }

  if (!isWhitespace(SelectPeriod.srchbtch.value)) {
    SelectPeriod.btchbutt.disabled=false;
  }
  
  if (isWhitespace(SelectPeriod.srchprov.value)) {
    document.SelectPeriod.srchsdoc.value="";
    document.SelectPeriod.srchsdoc.className=""
  }

  SelectPeriod.submit();
}

function chkBatch() {
 if (isWhitespace(document.SelectPeriod.srchbtch.value)) {
  SelectPeriod.btchbutt.disabled=true;
  } else {
   SelectPeriod.btchbutt.disabled=false;
   document.SelectPeriod.srchclty.value="";
   document.SelectPeriod.srchclid.value="";
   document.SelectPeriod.srchdate.value="";
   document.SelectPeriod.srchprov.value="";
  }

  if ((!isWhitespace(document.SelectPeriod.srchclty.value)) || 
     (!isWhitespace(document.SelectPeriod.srchclid.value)) || 
     (!isWhitespace(document.SelectPeriod.srchprov.value))) {
   SelectPeriod.btchbutt.disabled=true;
   document.SelectPeriod.srchbtch.value="";
  }

}


function ExcldAll() {

  for (var i=0; i < document.SelectPeriod.length; i++) {
    var Item = document.SelectPeriod.elements[i];

    var MatchStr = "claimkey";
    if (Item.name.match(MatchStr)) {
      Item.checked=true;
    }
  }
}

function SetLists() {
 if(!isWhitespace(SelectPeriod.defmprac.value)) {
   if(isWhitespace(SelectPeriod.srchsdoc.value)) {
      setTimeout('GetSDoc();',300);
   }
 }

 if(!isWhitespace(SelectPeriod.srchsdoc.value)) {
      SelectPeriod.srchprov.className="ReadOnly"
      SelectPeriod.srchprov.readOnly=true;
 }
 SetClinicType(SelectPeriod.srchclty,SelectPeriod.defctype.value,SelectPeriod.usersite.value);
 if(isWhitespace(SelectPeriod.deftclid.value)) {
   SelectPeriod.srchclid.value=SelectPeriod.wbseclid.value;
   onClinicID()
 }
// SetClinicId(SelectPeriod.srchclid,SelectPeriod.deftclid.value,SelectPeriod.usersite.value);
 chkBatch();
 ShowCreateBatch();
 DisableExludeAllButton();
}

function ShowCreateBatch() {
  if (SelectPeriod.shwbatch.value == "1") {
    DisButton(SelectPeriod.btchbutt);
    DisButton(SelectPeriod.cancelbutt);
    DisButton(SelectPeriod.allbutt);
    left=(document.body.clientWidth-450)/2
    linkurl="hicweb01.pbl?reportno=01&template=002" +
          "&srchclty=" + SelectPeriod.srchclty.value.replace(/ /g,"+") + 
          "&srchclid=" + SelectPeriod.srchclid.value.replace(/ /g,"+") +
          "&srchbtch=" + SelectPeriod.srchbtch.value.replace(/ /g,"+") +
          "&srchprov=" + SelectPeriod.srchprov.value.replace(/ /g,"+") +
          "&srchprac=" + SelectPeriod.srchprac.value.replace(/ /g,"+") +
          "&srchdate=" + SelectPeriod.srchdate.value.replace(/ /g,"+") +
          "&totbamnt=" + SelectPeriod.totbamnt.value.replace(/ /g,"+") +
          "&srchstat=0" +
          "&btchflag=1";
    DFrameLink(linkurl,320,left,450,250)
  }
}

function DisableExludeAllButton() {
  if(!isWhitespace(SelectPeriod.srchbtch.value)) {
    return;
  }
  if(document.getElementById("allbutt")) {
    document.getElementById("allbutt").disabled=true;
  }
}
function DisabledBatch() {
   document.SelectPeriod.btchbutt.disabled=true;
}


function CheckFormat(nextcode) {
  if(isWhitespace(nextcode.value)) {
    return;
  }
 if(nextcode.value.length != "5") {
   alert(nextcode.title + " must be in the format XYYYY\n" +
         "Where X = Alphabetic and YYYY = Numeric.");
   nextcode.value="";
   setTimeout('FocusDelay(document.SelectPeriod.srchbtch)',250);
   return;
 }
 checkX=nextcode.value.substr(0,1).search('[^a-zA-Z]');
 if (checkX >= 0) {
   alert(nextcode.title + " must be in the format XYYYY\n" +
         "Where X = Alphabetic and YYYY = Numeric.");
   nextcode.value="";
   setTimeout('FocusDelay(document.SelectPeriod.srchbtch)',250);
   return;
 }
 checkYYYY=nextcode.value.substr(1,4).search('[^0-9]');
 if (checkYYYY >= 0) {
   alert(nextcode.title + " must be in the format XYYYY\n" +
         "Where X = Alphabetic and YYYY = Numeric.");
   nextcode.value="";
   setTimeout('FocusDelay(document.SelectPeriod.srchbtch)',250);
   return;
 }
   SubmitSearch();
}

function onClinicID(){
  validId=""+validateCode(25,SelectPeriod.srchclid,SelectPeriod.clindesc);
//  if(validId!='false'){ 
//     SelectPeriod.submit();
//  }
}

function GetServiceProv() {
 SelectPeriod.srchprov.value="";

 if (isWhitespace(SelectPeriod.srchsdoc.value)) {
  SelectPeriod.srchprov.className=""
  SelectPeriod.srchprov.readOnly=false;
  return;
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
//      SubmitSearch();
    }
  }
 }
 else {
   SelectPeriod.srchprov.value=""; }
}

function GetSDoc() {
   SelectPeriod.srchsdoc.value="";
   SelectPeriod.srchsdoc.className="";
   SelectPeriod.srchprov.value="";
   SelectPeriod.srchprov.className="";

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
   selectOptions("5",SelectPeriod.srchprac,SelectPeriod.srchsdoc);
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

function OnHold(ClaimNum) {
   ans=confirm("Are you sure you want to place this Claim On Hold ?")
   if (ans) {
     document.SelectPeriod.clmnnumb.value = ClaimNum;
     document.SelectPeriod.updatety.value='O';
     document.SelectPeriod.nextpage.value='1';
     document.SelectPeriod.btchflag.value='1';
     document.SelectPeriod.submit();
    }
}


