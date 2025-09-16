//jsVersion  : V11.03.00
/***********************************************************************
/* Program   : outweb0505001.js
/*
/* Written   : 10.07.2009 Saroeun Soeur
/*
/* Function  : namespace to keep js function specific to template outweb0505001.html
/*
/* Version   :
/*
/* V9.12.03  12/10/2010 Ebon Clements CAR 216102
/*           Added replace space with plus to redirects
/* V9.12.02  24/12/2009 Ebon Clements CAR 212781
/*           Added newsltyp2 to newVisitTypeDefault()
/* V9.12.01  10/07/2009 Saroeun Soeur CAR 150767
/*           created functions setVisitType,setVisitType1,updateSlot,deleteSlot,
/*           newVisitTypeDefault,showGroupBookingDFrame           
/*
 ***********************************************************************/

var IBA = {};

IBA.Standard = {};

IBA.Standard.Outweb0505001 = {};

IBA.Standard.Outweb0505001 =
{
 /**********************************************************************
  * setVisitType - selects the visitType and set the otmab002 cgi
  * ready for posting to the web server
  **********************************************************************/
 setVisitType:
 function()
 {
   var visitType = document.getElementById("newsltyp1");
   var availability = document.getElementById("newsltyp2");
   var viscode = document.getElementById("otmab002");

   visitType.className = "Mandatory SelectBig";
   availability.className = "";
   availability.selectedIndex = 0;
   viscode.value = visitType.value;
 },

 /**********************************************************************
  * setVisitType1 - selects the visitType and set the otmab002 cgi
  * ready for posting to the web server
  **********************************************************************/
 setVisitType1:
 function()
 {
   var visitType = document.getElementById("newsltyp1");
   var availability = document.getElementById("newsltyp2");
   var viscode  = document.getElementById("otmab002");

   availability.className = "Mandatory SelectBig";
   visitType.className = "";
   visitType.selectedIndex = 0;
   viscode.value = availability.value;
 },
 /**********************************************************************
  * updateSlot - post to the web server with a status of 'M' - multiple
  * slot update
  **********************************************************************/
 updateSlot:
 function()
 {
   var visitType = document.getElementById("newsltyp1");
   var availability = document.getElementById("newsltyp2");

   multipleSlot.reportno.value = "5";
   multipleSlot.updttype.value = "M";

   if(visitType.selectedIndex != 0 || availability.selectedIndex != 0)
   {
      // we want to redirect to the current page
      multipleSlot.redirect.value = "outweb05.pbl?reportno=5&template=1" +
                   "&otcli001="+multipleSlot.otcli001.value.replace(/ /g,"+") +
                   "&otcli006="+multipleSlot.otcli006.value.replace(/ /g,"+") +
                   "&otmas001="+multipleSlot.otmas001.value.replace(/ /g,"+") +
                   "&otmas002="+multipleSlot.otmas002.value.replace(/ /g,"+") +
                   "&othed005="+multipleSlot.othed005.value.replace(/ /g,"+") +
                   "&othed006="+multipleSlot.othed006.value.replace(/ /g,"+");
      
      multipleSlot.submit();
   }
   else
     alert("Nothing to update");
 },
 /**********************************************************************
  * deleteSlot  - post to the web server with a status of 'O' - multiple
  * slot deletion
  **********************************************************************/
 deleteSlot:
 function()
 {
   multipleSlot.reportno.value = "5";
   multipleSlot.updttype.value = "O";
    
   //we want to redirect to the current page
   multipleSlot.redirect.value = "outweb05.pbl?reportno=5&template=1" +
                "&otcli001="+multipleSlot.otcli001.value.replace(/ /g,"+") +
                "&otcli006="+multipleSlot.otcli006.value.replace(/ /g,"+") +
                "&otmas001="+multipleSlot.otmas001.value.replace(/ /g,"+") +
                "&otmas002="+multipleSlot.otmas002.value.replace(/ /g,"+") +
                "&othed005="+multipleSlot.othed005.value.replace(/ /g,"+") +
                "&othed006="+multipleSlot.othed006.value.replace(/ /g,"+");

   multipleSlot.submit();
 },
 /**********************************************************************
  * newVisitTypeDefault - we want the visitType drop down menu to default
  * to no selection
  **********************************************************************/
 newVisitTypeDefault:
 function()
 {
    var visitType = document.getElementById("newsltyp1");
    visitType.selectedIndex = 0;
    var visitType2 = document.getElementById("newsltyp2");
    visitType2.selectedIndex = 0;
 },
 /**********************************************************************
  * showGroupBookingDFrame - popup the DFrame for changing multiple slot
  * times 
  **********************************************************************/
 showGroupBookingDFrame:
 function()
 {
   SelectCode.reportno.value=5;
   SelectCode.template.value=14;
   Left=(document.body.clientWidth-370)/2;
   DFrameSubmit(SelectCode,0,Left,370,260);

 }

 //append template specific functions below
};

