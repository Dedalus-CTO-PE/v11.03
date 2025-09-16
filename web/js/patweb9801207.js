//jsVersion  : V11.03.00
//
var serviceArray     = new Array();
var serviceTypeArray = new Array();
var doctorArray      = new Array();
var repeatCodes;
var repeatIndex;
var orderSet;
var orderSets;
var jsonCodes;
var clinicalNotes;
var orderCodes;
var serviceTypes;
var searchTypes;
var orderSetGroups;
var orderSets;
var radiologyGroups;
var saveNotesText;
var saveNotesFlag=false;
var bloodProducts=false;
var formTypeArray  = new Array();
var savedTypeArray = new Array();
var orderedArray   = new Array();
var orderCode='';
var orderNoteType='0';
var orderDescription='';
var orderSpecimen='';
var orderFormtype='';
//
function loadJSON() {
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET","../js/CustomOrderCodes.json",false);
  xmlHttp.send();
  jsonCodes = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
  searchTypes    =jsonCodes["codeSets"][0]["rows"];
  serviceTypes   =jsonCodes["codeSets"][1]["rows"];
  clinicalNotes  =jsonCodes["codeSets"][2]["rows"];
  orderSetGroups =jsonCodes["codeSets"][3]["rows"];
  orderSets      =jsonCodes["codeSets"][4]["rows"];
  orderSetTests  =jsonCodes["codeSets"][5]["rows"];
  codeMapping    =jsonCodes["codeSets"][6]["rows"];
  radiologyGroups=jsonCodes["codeSets"][7]["rows"];
  pathologyGroups=jsonCodes["codeSets"][8]["rows"];
  repeatCodes    =jsonCodes["codeSets"][9]["rows"];
  orderCodes     =jsonCodes["codeSets"][10]["rows"];
}
function dateSelection(el,defaultDate,noDays) {
  var now = new Date();
  defaultDay=defaultDate.substr(0,2)
  defaultMonth=Mth3Num(defaultDate.substr(3,3))-1 
  defaultYear=defaultDate.substr(7,4) 
  now = new Date(defaultYear,defaultMonth,defaultDay,0,0,0);       // midnight
  var today = new Date(defaultYear,defaultMonth,defaultDay,0,0,0); // midnight
  var tomorrow = new Date(today.getTime()+(1*24*60*60*1000));
  var weekday=new Array(7);
  weekday[0]="Sun";
  weekday[1]="Mon";
  weekday[2]="Tue";
  weekday[3]="Wed";
  weekday[4]="Thu";
  weekday[5]="Fri";
  weekday[6]="Sat";
  for (var i=0;i<noDays;i++) {
     var theDay = new Date(now.getTime()+(i*24*60*60*1000));
     dayVal = "0"+theDay.getDate();
     mthVal = "0"+(theDay.getMonth()+1);
     dayVal=dayVal.substr(dayVal.length-2,2);
     mthVal=mth3Name(mthVal.substr(mthVal.length-2,2));
     dateVal = dayVal+' ' + mthVal + ' ' +  theDay.getFullYear();
     dateName=weekday[theDay.getDay()] + ' ' + dateVal;
     if (i==0) { dateName="Today"; }
     if (i==1) { dateName="Tomorrow"; }
     el.options[el.options.length]=new Option(dateName,dateVal);
  }
  var maxIndex=1;
  for (i=0;i<7;i++) {
    cookieName="orderSelectDateIndex"+i;
    usageCount=parseInt(getCookie(cookieName),10);
    if (isNaN(usageCount)) {
      usageCount=0;
      setCookie(cookieName,"0",90);
    }
    if (usageCount>maxIndex) {
      maxIndex=usageCount;
      document.UpdateForm.selectOrderdte.selectedIndex=i;
    }
  }
}
function setDefaultTime(el,defaultTime) {
  for (i=el.options.length-1;i>0;i--) {
    if (el.options[i].value>defaultTime) {
      el.selectedIndex=i
    }
  }
}
function timeSelection(el,defaultTime,timeInterval) {
  var hr=0;
  var mn=0;
  var defaultOption=0;
  var setCurrent=true;
  for (var hr=0;hr<24;hr++) {
    for (var mi=0;mi<60;mi=mi+timeInterval) {
      hrVal="00"+hr;
      miVal="00"+mi;
      timeVal=hrVal.substr(hrVal.length-2,2)+":"+miVal.substr(miVal.length-2,2)
      if (timeVal!="00:00") {
        el.options[el.options.length]=new Option(timeVal,timeVal);
        if ((timeVal>defaultTime.substr(0,5))&&setCurrent) {
          defaultOption=el.options.length-1;
          setCurrent=false;
        }
      }
    }
  }
  el.selectedIndex=defaultOption;
}
function setRepeatCodes() {
 if (repeatCodes.length>0) {
   el=document.getElementById("RepeatSection")
   el.style.display="";
 }
 el=document.UpdateForm.repeatcd
 el.options[el.options.length]=new Option("No Repeat","");
 for(var i=0; i < repeatCodes.length; i++) {
    el.options[el.options.length]=new Option(repeatCodes[i].description,i);
 }
}
//-----------------------------------------------------------------------------
// onload function to initial page startup
//-----------------------------------------------------------------------------
function LoadPage() {
  dateSelection(document.UpdateForm.selectOrderdte,document.UpdateForm.currdate.value,7)
  var defaultTime=document.UpdateForm.currtime.value;
  if (document.UpdateForm.selectOrderdte.selectedIndex>0) defaultTime="06:58";
  timeSelection(document.UpdateForm.selectOrdertim,defaultTime,15)
  loadJSON();
  setRepeatCodes()
  CreateFilters();
  SetCopies(UpdateForm.nocopies,10);
  OptionNo=getCookie("ClinicalOrderSearchType");
  if (isWhitespace(OptionNo)||OptionNo=="unknown") OptionNo=0;
  showOptions(OptionNo);
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Order";
    actionBtn.onclick = function() { SaveForm(); }
  }
}
function SaveForm() {
  ShowSaving();
  setTimeout(function () {submitServiceRequest()},100)
}
//-----------------------------------------------------------------------------
// Check for Code mapping
//-----------------------------------------------------------------------------
function MapTestCode(labCode,testCode) {
  var returnCode=testCode.replace(/\_/g,"").replace(/^\s+|\s+$/g,"");
  for(var i =0; i < codeMapping.length; i++) {
    if (labCode==codeMapping[i].labcode &&
        returnCode==codeMapping[i].fromcode) {
       returnCode=codeMapping[i].tocode
    }
  }
  return returnCode;
}
function CreateFilters() {
 sl=document.getElementById('searchType');
 for(var i =0; i < searchTypes.length; i++) {
   sl.options[sl.options.length]=new Option(searchTypes[i].description,searchTypes[i].code);
 }
 sl=document.getElementById('serviceFilter');
 for(var i =0; i < serviceTypes.length; i++) {
   sl.options[sl.options.length]=new Option(serviceTypes[i].description,serviceTypes[i].code);
 }
}
//-----------------------------------------------------------------------------
//  changeType - check if the search type has been changed
//-----------------------------------------------------------------------------
function changeType(value) {
  var el = document.getElementById('searchType');
  switch(parseInt(el.options[el.selectedIndex].value,10)) {
    case 0:
      ShowPatientTests(value);
      break;
    case 1:
      ShowOrderSets();
      break;
    case 2:
      ShowQuickList(value);
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      ShowOrderCodes(pathologyLabCode,"",value);
      break;
    case 6:
      ShowWardQuickList(value);
      break;
    default:
      break;
  }
}

//-----------------------------------------------------------------------------
// Determine Service Codes Related to Form Type
//-----------------------------------------------------------------------------
function setServiceCodes(formType) {
  for (var i=document.UpdateForm.length-1;i>0;i--) {
    if (document.UpdateForm[i].name=="servicec") {
      document.UpdateForm.removeChild(document.UpdateForm[i]);
    }
  }
  for (var i=0;i<orderedArray.length;i++) {
    OrdDesc=orderedArray[i].description.replace(/&/g,"");
    OrdType=orderedArray[i].type
    if (orderedArray[i].formtype==formType) {
     if (OrdType=="") OrdType="ZZ";
     var serviceCode=(OrdType+'     ').substr(0,5)+
                     (orderedArray[i].code+'          ').substr(0,10)+
                     (OrdDesc+'                                        ').substr(0,40)+
                     orderedArray[i].labcode
     var input = document.createElement("input"); 
     input.setAttribute("type", "hidden"); 
     input.setAttribute("name", "servicec"); 
     input.setAttribute("value", serviceCode ); 
     document.UpdateForm.appendChild(input); 
   }
  }
}
//----------------------------------------------------------------------------------
// Determie List of Different Form Types from the Order Codes
//----------------------------------------------------------------------------------
function setFormtypes() {
  for (i=0;i<orderedArray.length;i++) {
    var addNew=true;
    for (j=0;j<formTypeArray.length;j++) {
      if (formTypeArray[j]==orderedArray[i].formtype) addNew=false;
    }
    if (addNew) {
     formTypeArray[formTypeArray.length]=orderedArray[i].formtype
    }
  }
}
//----------------------------------------------------------------------------------
// Remove Optional Input Fields and Name when they are Blank for Blood Products
//----------------------------------------------------------------------------------
function clearOptNames() {
  if (document.UpdateForm.optfld01.selectedIndex<=0) {
    document.UpdateForm.optnam01.value="";
  }
  if (document.UpdateForm.optfld02.selectedIndex<=0) {
    document.UpdateForm.optnam02.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld03.value)) {
    document.UpdateForm.optnam03.value="";
  }
  if (document.UpdateForm.optfld04.selectedIndex<=0) {
    document.UpdateForm.optnam04.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld05.value)) {
    document.UpdateForm.optnam05.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld06.value)) {
    document.UpdateForm.optnam06.value="";
  }
  if (!document.UpdateForm.optfld08.selectedIndex==1) {
    document.UpdateForm.optnam08.value="";
  }
  if (!document.UpdateForm.optfld09.selectedIndex==1) {
    document.UpdateForm.optnam09.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld10.value)) {
    document.UpdateForm.optnam10.value="";
  }
  if (document.UpdateForm.optfld11.selectedIndex<=0) {
    document.UpdateForm.optnam11.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld12.value)) {
    document.UpdateForm.optnam12.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld13.value)) {
    document.UpdateForm.optnam13.value="";
  }
  if (isWhitespace(document.UpdateForm.optfld14.value)) {
    document.UpdateForm.optnam14.value="";
  }
  if (!document.UpdateForm.optfld16.selectedIndex==1) {
    document.UpdateForm.optnam16.value="";
  }
}
function setRequestDate(repeatNo) {
  el=document.UpdateForm.selectOrderdte
  document.UpdateForm.orderdte.value=el.options[el.selectedIndex].value
  el=document.UpdateForm.selectOrdertim
  document.UpdateForm.ordertim.value=el.options[el.selectedIndex].value
  if (repeatNo==0) return;

  document.UpdateForm.optnam15.value="Order Repeat No : ";
  document.UpdateForm.optfld15.value=repeatNo;
  var FormDate = new Date();
  defaultDate=document.UpdateForm.orderdte.value
  defaultTime=document.UpdateForm.ordertim.value
  defaultDay=defaultDate.substr(0,2)
  defaultMonth=Mth3Num(defaultDate.substr(3,3))-1 
  defaultYear=defaultDate.substr(7,4) 
  defaultHrs=defaultTime.substr(0,2) 
  defaultMin=defaultTime.substr(3,2) 
  FormDate = new Date(defaultYear,defaultMonth,defaultDay,defaultHrs,defaultMin,0);

  var theDay = new Date(FormDate.getTime()+(repeatNo*parseInt(repeatCodes[repeatIndex].hours,10)*60*60*1000));
  dayVal = "0"+theDay.getDate();
  mthVal = "0"+(theDay.getMonth()+1);
  dayVal=dayVal.substr(dayVal.length-2,2);
  mthVal=mth3Name(mthVal.substr(mthVal.length-2,2));
  dateVal = dayVal+' ' + mthVal + ' ' +  theDay.getFullYear();

  document.UpdateForm.orderdte.value=dateVal

  if (!isWhitespace(repeatCodes[repeatIndex].settime)) {
     document.UpdateForm.ordertim.value=repeatCodes[repeatIndex].settime
  }

}
function submitServiceRequest() {
  var postStr="";
  var bool = validateMandatory(UpdateForm);
  if(bool) {
   cookieName="orderSelectDateIndex"+document.UpdateForm.selectOrderdte.selectedIndex;
   setCookie(cookieName,parseInt(getCookie(cookieName),10)+1,90);
   clearOptNames();  // clear optional names
   setFormtypes();   // work out if we have multiple order form types
   repeatIndex=document.UpdateForm.repeatcd.options[document.UpdateForm.repeatcd.selectedIndex].value
   repeatCount=1
   if (!isWhitespace(repeatIndex)) {
     repeatIndex=parseInt(repeatIndex,10)
     repeatCount=repeatCount+parseInt(repeatCodes[repeatIndex].repeats,10)
   }
   for (var r=0;r<repeatCount;r++) {
    setRequestDate(r);
    for (var i=0;i<formTypeArray.length;i++) {
      setServiceCodes(formTypeArray[i]);
      theURL=document.UpdateForm.action;
      document.UpdateForm.formtype.value=formTypeArray[i]
      if (checkSaved(formTypeArray[i],r)) {
        postStr=AJAXOrderString(document.UpdateForm,formTypeArray[i])
        var xmlHttp = createHttpObject();
        xmlHttp.open("POST", theURL, false);
        xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
        xmlHttp.send(postStr);
        if (xmlHttp.status=="200") {
          if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
            savedTypeArray[savedTypeArray.length]=r+"|"+formTypeArray[i]
          }
          else {
           alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
          }
        }
        else {
          alert("Web Service Not Available. Check your Connection and Try Again.");
        }
      }
    }
   }
   if (savedTypeArray.length==(formTypeArray.length*repeatCount)) {
      top.content.location.reload();
   }
  }
  HideSaving();
  return bool
}
function ShowSaving() {
  var SaveDiv=document.getElementById("DisplaySaving");
  SaveDiv.style.display="inline-block";
}
function HideSaving() {
  var SaveDiv=document.getElementById("DisplaySaving");
  SaveDiv.style.display="none";
}
//
//  Check if the form type has already been saved
//  Return True if it needs to be POSTED
//  Return False if it has already been POSTED
//
function checkSaved(formType,repeatNo) {
  var retVal=true;
  for (var i=0;i<savedTypeArray.length;i++) {
     if (savedTypeArray[i]==(repeatNo+"|"+formType)) retVal=false;
  }
  return retVal;
}
//========================================================================
// Format POST String for AJAX Form Post
// Special AJAX Post to Ignore optional field for non Blood Product Orders
//========================================================================
function AJAXOrderString(el,formtype) {
  parameters="";
  for (var i=0;i<el.length;i++) {
   var addField=true;
//   if ((el[i].name.substr(0,6)=="optfld"||el[i].name.substr(0,6)=="optnam")&&formtype!="BP") {
//      addField=false;  // ignore optional fields if not a blood product order
//   }
//   if (el[i].name=="optfld15"||el[i].name=="optnam15") {
//      addField=true;   // Always include Repeat Field
//   }
   if (addField) {
    switch (el[i].type) {
     case 'radio': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       }
       break; }
     case 'checkbox': {
       if (el[i].checked) {
         parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       }
       break; }
     case 'hidden': {
       parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       break; }
     case 'select-one': {
       if (el[i].selectedIndex!=-1) {
         if (el[i].name.substr(0,6)=="optfld") {
           parameters+=el[i].name+"="+encodeURIComponent(el[i].options[el[i].selectedIndex].text) +"&";
         }
         else {
           parameters+=el[i].name+"="+encodeURIComponent(el[i].options[el[i].selectedIndex].value) +"&";
         }
       }
       break; }
     case 'text': {
       parameters+=el[i].name+"="+encodeURIComponent(el[i].value)+"&";
       break; }
     case 'textarea': {
       parameters+=el[i].name+"="+encodeURIComponent(getTextarea(el[i]))+"&";
       break; }
    }
   }
  }
  parameters+='1=1';
  return parameters;
}
//-----------------------------------------------------------------------------
// set options for number of copies
//-----------------------------------------------------------------------------
function SetCopies(ListItem,MaxCopy) {
  for (i=1;i<MaxCopy;i++) {
    ListItem.options[ListItem.options.length]=new Option(i,i);
  }
}
//-----------------------------------------------------------------------------
// patients list with unique test result for current year and previous
//-----------------------------------------------------------------------------
function ShowPatientTests(sType) {
  var obj = new Object();
  var url = "cliweb03.php?reportno=7";
  if(typeof sType != 'undefined') {
    if(sType != "") {
      url  = "cliweb03.php?reportno=6&typflter="+sType.replace(/ /g,"");
    }
  }
  url += "&urnumber="+UpdateForm.urnumber.value.replace(/ /g,"+")+
	 "&numrow=25";
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if ((xmlHttp.responseText).length < 2) {
        ListLocation = document.getElementById("SearchResults");
        if(ListLocation) {
          ListLocation.innerHTML = "<ul class='sectionList'>"+
                                   "<li class='sectionItem' style='text-align:center'>"+
                                   "No Items Found</li></ul>";
	}
	return;
      }
      obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
      OS="<ul class=sectionList>";
      for(var i =0; i < obj.length; i++) {
        displayName=obj[i].description;
        subText=obj[i].testsets;
        if (!isWhitespace(obj[i].testsets)) {
          displayName=obj[i].testsets;
          subText=obj[i].description;
        }
	OS += "<li class=sectionItem onclick=\"AddPatientTest('"+null+"',"+
	       "'"+obj[i].type+"','"+obj[i].code+"','" +obj[i].labcode+"','" +
	       obj[i].description+"','"+obj[i].testsets+"','');\" />"+
	       "<span class='showResultIcon"+obj[i].type.substr(0,2)+
	       "' style='float:left;margin-right:5px;' ></span>"+
	       displayName +
               "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" + 
	       obj[i].labname + "</span>"+
               "<br><span style='font-size:12px;line-height:12px;'>" + 
               subText + "</span></li>" 
      }
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
function OrderSet() {
   this.rows= new Array();
   this.add= _addRow;
}
function _addRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++)
     row[row.length] = arguments[i];
}
function ShowRadGroups() {
  DefaultGroupID=getCookie("ClinicalRadGroupID")
  ListItem=UpdateForm.groupFilter
  ListItem.onchange=ShowRadiology;
  SelectDefault=0;
  ListItem.options.length=0
  for(var i =0; i < radiologyGroups.length; i++) {
    if (DefaultGroupID==radiologyGroups[i].code) SelectDefault=i;
    ListItem.options[ListItem.options.length]=new Option(radiologyGroups[i].description,radiologyGroups[i].code);
  }
  ListItem.selectedIndex=SelectDefault;
}
function ShowLabGroups() {
  DefaultGroupID=getCookie("ClinicalLabGroupID")
  ListItem=UpdateForm.groupFilter
  ListItem.onchange=ShowPathology;
  SelectDefault=0;
  ListItem.options.length=0
  for(var i =0; i < pathologyGroups.length; i++) {
    if (DefaultGroupID==pathologyGroups[i].code) SelectDefault=i;
      ListItem.options[ListItem.options.length]=new Option(pathologyGroups[i].description,pathologyGroups[i].code);
  }
  ListItem.selectedIndex=SelectDefault;
}
function ShowOrderGroups() {
  DefaultGroupID=getCookie("ClinicalOrderGroupID")
  ListItem=UpdateForm.groupFilter
  ListItem.onchange=ShowOrderSets;
  SelectDefault=0;
  ListItem.options.length=0;
  for(var i =0; i < orderSetGroups.length; i++) {
    if (DefaultGroupID==orderSetGroups[i].code) SelectDefault=i;
    ListItem.options[ListItem.options.length]=new Option(orderSetGroups[i].description,orderSetGroups[i].group);
  }
  ListItem.selectedIndex=SelectDefault;
}
function ShowOrderSets() {
  OS="<ul class=sectionList>";
  GroupID=UpdateForm.groupFilter.options[UpdateForm.groupFilter.selectedIndex].value
  setCookie("ClinicalOrderGroupID",GroupID,30)
  for (i=0;i<orderSets.length;i++) {
    if (GroupID==orderSets[i].group) {
      OS += "<li class=sectionItem onclick=\"AddSet('"+
            orderSets[i].group+"','"+orderSets[i].set+"','"+ orderSets[i].note+"')\">" +
            orderSets[i].description +
            "</li>"
    }
  }
  ListLocation = document.getElementById("SearchResults");
  ListLocation.innerHTML = OS+"</ul>";
  
}
function AddSet(GroupID,SetID,Note)  {
  UpdateForm.notetext.value=Note;
  for (i=0;i<orderSetTests.length;i++) {
    if (GroupID==orderSetTests[i].group&&SetID==orderSetTests[i].set) {
      AddTest("","",orderSetTests[i].testcode,orderSetTests[i].labcode,'') 
    }
  }
}
//-----------------------------------------------------------------------------
// display quick list
//-----------------------------------------------------------------------------
function ShowQuickList(type) {
  var obj = new Object();
  var url   = "cliweb03.php?reportno=1&numrow=30";
  if(typeof type != 'undefined') {
    if(type != "") {
      url   = "cliweb03.php?reportno=4&numrow=30&typflter="+type.replace(/ /g,"");
    }
  }
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();

  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
	    //can't find a match then we display a msg
	    //and stop the function
	   if((xmlHttp.responseText).length < 2) {
	     ListLocation = document.getElementById("SearchResults");
	     if(ListLocation) {
	       ListLocation.innerHTML = "<ul class='sectionList'>"+
					"<li class='sectionItem' style='text-align:center'>"+
					"No Items Found</li></ul>";
	     }
	     return;
	   }

	 //we assume there is something from here
	 obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object

	 OS="<ul class=sectionList>";
	 for(var i =0; i < obj.length; i++) {
            displayName=obj[i].description;
            subText=obj[i].testsets;
            if (!isWhitespace(obj[i].testsets)) {
              displayName=obj[i].testsets;
              subText=obj[i].description;
            }
            OS += "<li class=sectionItem onclick=\"AddPatientTest('"+null+"',"+
               "'"+obj[i].type+"','"+obj[i].code+"','" +obj[i].labcode+"','" +
               obj[i].description+"','"+obj[i].testsets+"','');\" />"+
               "<span class='showResultIcon"+obj[i].type.substr(0,2)+
               "' style='float:left;margin-right:5px;' ></span>"+
               displayName +
               "<span  style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" +
               obj[i].labname + "</span>"+
               "<br><span style='font-size:12px;line-height:12px;'>" +
               subText + "</span></li>"
	 }

	 ListLocation = document.getElementById("SearchResults");
	 ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
//-----------------------------------------------------------------------------
// setup the search panel
//-----------------------------------------------------------------------------
function ShowSearch() {
  OS = "<ul class='sectionList' id='searchItems'></ul>";
  ListLocation = document.getElementById("SearchResults");
  ListLocation.innerHTML = OS;
}
function ResetSearch() {
  ListLocation = document.getElementById("searchItems");
  ListLocation.innerHTML = "";
  el=document.getElementById("searchOrderText");
  el.value="";
  el.focus();
}
function CommonList(labcode) {
 ListLocation = document.getElementById("SearchResults");
 var url   = "cliweb03.php?reportno=12&numrow=30&labflter="+labcode
 var xmlHttp = createHttpObject();
 xmlHttp.open('GET',url,true);
 xmlHttp.send();
 xmlHttp.onreadystatechange = function() {
   if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
     if((xmlHttp.responseText).length < 2) {
       if(ListLocation) {
       	 ListLocation.innerHTML = "<ul class='sectionList' id='searchItems'>"+
       	                          "<li class='sectionItem' style='text-align:center'>"+
                              	   "No Items Found</li></ul>";
       }
       return;
    }
    obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
    OS="<ul class='sectionList' id='searchItems'>";
    for(var i =0; i < obj.length; i++) {
       displayName=obj[i].description;
       subText=obj[i].testsets;
       if (!isWhitespace(obj[i].testsets)) {
         displayName=obj[i].testsets;
         subText=obj[i].description;
       }
       OS += "<li class=sectionItem onclick=\"AddPatientTest('"+null+"',"+
             "'"+obj[i].type+"','"+obj[i].code+"','" +obj[i].labcode+"','" +
             obj[i].description+"','"+obj[i].testsets+"','');\" />"+
             "<span class='showResultIcon"+obj[i].type.substr(0,2)+
             "' style='float:left;margin-right:5px;' ></span>"+
             displayName +
             "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" +
              obj[i].labname + "</span>"+
              "<br><span style='font-size:12px;line-height:12px;'>" +
              subText + "</span></li>"
       }
       ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
//-----------------------------------------------------------------------------
// change panels 
//-----------------------------------------------------------------------------
function showOptions(searchOption) {
  sl=document.getElementById('searchType');
  for (i=0;i<sl.options.length;i++) {
    if (sl.options[i].value==searchOption) sl.selectedIndex=i;
  }
  setCookie("ClinicalOrderSearchType",searchOption,30)
  var searchOrderText = document.getElementById('searchOrderText');
  searchOrderText.style.display='none';
  var groupFilter = document.getElementById('groupFilter');
  groupFilter.style.display='none';
  var serviceFilter = document.getElementById('serviceFilter');
  serviceFilter.style.display='';
  var serviceCode = (serviceFilter[serviceFilter.selectedIndex].value);
  switch(parseInt(searchOption,10)) {
    case 0:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowPatientTests(serviceCode);
      break;
    case 1:
      serviceFilter.style.display='none';
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowOrderGroups();
      groupFilter.style.display='';
      ShowOrderSets();
      break;
    case 2:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowQuickList(serviceCode);
      break;
    case 3:
      searchOrderText.style.display='';
      serviceFilter.style.display='none';
      ShowSearch();
      searchOrderText.focus();
      break;
    case 4:
      searchOrderText.style.display='';
      serviceFilter.style.display='none';
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowRadGroups();
      groupFilter.style.display='';
      ShowRadiology();
      break;
    case 5:
      searchOrderText.style.display='';
      serviceFilter.style.display='none';
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowLabGroups();
      groupFilter.style.display='';
      ShowPathology();
      break;
    case 6:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      ShowWardQuickList(serviceCode);
      break;
    default:
      break;
  }
}
function ShowRadiology() {
  GroupID=UpdateForm.groupFilter.options[UpdateForm.groupFilter.selectedIndex].value
  setCookie("ClinicalRadGroupID",GroupID,30)
  ShowOrderCodes(radiologyLabCode,GroupID,"");
}
function ShowPathology() {
  GroupID=UpdateForm.groupFilter.options[UpdateForm.groupFilter.selectedIndex].value
  setCookie("ClinicalLabGroupID",GroupID,30)
  ShowOrderCodes(pathologyLabCode,GroupID,"");
}
//-----------------------------------------------------------------------------
// doctor keyword search for the search panel
//-----------------------------------------------------------------------------
function doctorSearch(value) {
  var obj = new Object();
  var url   = "../cgi-bin/AutoSuggest.php?reportno=1&rowcount=10&keywords="+ value;
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if ((xmlHttp.responseText).length < 2) {
        ListLocation = document.getElementById("searchDoctor");
        if (ListLocation) {
          ListLocation.innerHTML = "<ul class='sectionList'>"+
                                   "<li class='sectionItem' style='text-align:center'>"+
                                   "No Matching Doctors Found</li></ul>";
	}
	return;
      }
      obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
      var OS2=" ";
      for(var i =0; i < obj.length; i++) {
        OS2 += "<li class=sectionItem onclick=\"AddDoctor("+
               "'"+obj[i].code+"','"+obj[i].value+"');\" />"+
               obj[i].value +
               "<br><span class=subText>"+obj[i].subtext+
               "</span></li>";
      }
      ListLocation = document.getElementById("searchDoctor");
      ListLocation.innerHTML = OS2;
    }
  }
}
//-----------------------------------------------------------------------------
// add the doctor to the array list
//-----------------------------------------------------------------------------
function AddDoctor(drCode,drName){
  var doctors = document.getElementById('doctors');
  var found = false;
  for (var i = 0; i < doctorArray.length; i++) {
    if (drCode.replace(/ /g,"") == doctorArray[i].replace(/ /g,"")) {
      found = true;
      alert("Copy to "+drName.replace(/\s$/ig,"")+" already exist");
      break;
    }
  }
  if (!found) {
    doctorArray.push(drCode);
    doctors.innerHTML += "<div onclick='removeItem(this,\""+
                         drCode+"\",\""+drName+"\",doctorArray,\"doctors\");'"+
                         " style='padding-bottom:15px;'>"+ drName +
                         "<input type=\"hidden\" name=\"copiesto\" "+
                         " value=\""+drCode+"^"+drName+"\" />"+ "</div>";
  }
}
//-----------------------------------------------------------------------------
// submit to web service the keyword search
//-----------------------------------------------------------------------------
function checkType(stringName,searchKeyword,div,e) {
  var delayTime = 100; // 100ms

  if (!e) { e = window.event; }

  clearTimeout(window.timeoutId);

  if (stringName.value.length > 1) {
    if (e.keyCode == 8 || e.keyCode == 46) {
      window.timeoutId = setTimeout( function() { searchKeyword(stringName.value); },delayTime);
    } else if (e.keyCode < 32 || (e.keyCode >= 33 && e.keyCode <= 56) ||
	      (e.keyCode >= 112 && e.keyCode <= 123)) {
      return;
    } else {
      window.timeoutId = setTimeout( function() { searchKeyword(stringName.value); },delayTime);
    }
  } else if (stringName.value.length == 0) {
      ListLocation = document.getElementById(div);
      ListLocation.innerHTML = "";
  }
}
//-----------------------------------------------------------------------------
// add the service to the array list
//-----------------------------------------------------------------------------
function AddPatientTest(url,resultType,resultCode,labCode,resultDesc,TestSet) {
  if (isWhitespace(TestSet)) {
    mapCode=MapTestCode(labCode,resultCode)
    if (!isWhitespace(mapCode)) {
      AddTest(url,resultType,mapCode,labCode,resultDesc);
    } else {
      AddTest(url,resultType,resultCode,labCode,resultDesc);
    }
    return;
  }
  var resultCodes=TestSet.split(",")
  for (var i=0;i<resultCodes.length;i++) {
    mapCode=MapTestCode(labCode,resultCodes[i])
    if (!isWhitespace(mapCode)) {
      AddTest(url,resultType,mapCode,labCode,resultDesc);
    }
  }
}
function AddTest(url,resultType,resultCode,labCode,resultDesc) {
  var services = document.getElementById('services');
  var found = false;
  if (LookupTest(labCode,resultCode)) {
    duplicateTests="";
    for(var i = 0; i < serviceArray.length; i++) {
      if(resultCode.replace(/ /g,"") == serviceArray[i].replace(/ /g,"")) {
        orderedArray.splice(-1,1);
        found = true; //reject duplicates
        duplicateTests+="\n"+orderDescription;
        break;
      }
    }
    if (!isWhitespace(duplicateTests)) {
      alert("Requests already exists for: "+duplicateTests);
    }
    if (!found&&AdditionalFields(labCode,orderCode,orderNoteType)) {
      serviceArray.push(orderCode);
      iconStr=resultType.substr(0,2);
      if (isWhitespace(iconStr)) iconStr="TX";
      OS = "<div onclick='removeOrder(this,\""+orderCode+"\",\""+orderDescription+
           "\",serviceArray,\"services\",\""+orderNoteType+"\");'"+
           " style='padding-bottom:15px;'>"+
           "<span class='showResultIconDD"+
           "' style='float:left;margin-right:5px;' ></span>"+ orderDescription
      if (orderFormtype=="NR") {
        OS += "<span style='color:red;'> (No Rebate)</span>"
      }
      if (!isWhitespace(orderSpecimen)) {
        OS += "<br><span style='margin-left:25px;font-size:12px;line-height:12px;'>"+
              orderSpecimen+"</span>"
      }
      OS += "</div>";
      services.innerHTML += OS;
    }
  }
}
//
// Find test Code
//
function LookupTest(labCode,resultCode) {
 orderCode='';
 orderDescription='';
 orderSpecimen='';
 orderFormtype='';
 orderNoteType='0';
 labCode=trim(labCode);
 resultCode=trim(resultCode);
 for(var i=0; i < orderCodes.length; i++) {
    if (orderCodes[i].code==resultCode&&
        orderCodes[i].labcode==labCode) {
      orderCode=orderCodes[i].code;
      orderDescription=orderCodes[i].description;
      orderSpecimen=orderCodes[i].specimen;
      orderFormtype=orderCodes[i].formtype;
      orderedArray[orderedArray.length]=orderCodes[i];
      orderNoteType=orderCodes[i].notes;
      if (orderCodes[i].notes=="1") document.UpdateForm.notetext.className="Mandatory";
     }
 }
 if (isWhitespace(orderCode)) {
   alert("This test is not currently configured for electronic orders : "+resultCode+" for "+labCode);
   return false;
 }
 else {
   return true;
 }
}
//-----------------------------------------------------------------------------
// remove the order from the array list
//-----------------------------------------------------------------------------
function removeOrder(obj,itemName,itemDesc,collectionArray,div,fieldType) {
  var collection = document.getElementById(div);
  for(var i = 0; i < collectionArray.length; i++) {
    if(itemName == collectionArray[i]) {
       confirmMsg="Are you sure you want to remove "+itemDesc;
       if (confirm(confirmMsg)) {
         removeAdditionalFields(collectionArray[i],fieldType);
         orderedArray.splice(i,1);
         collectionArray.splice(i,1);
         collection.removeChild(obj);
       } 
       break;
     }
  }
}
//-----------------------------------------------------------------------------
// remove the doctor from the array list
//-----------------------------------------------------------------------------
function removeItem(obj,itemName,itemDesc,collectionArray,div) {
  var collection = document.getElementById(div);
  for(var i = 0; i < collectionArray.length; i++) {
    if(itemName == collectionArray[i]) {
       confirmMsg="Are you sure you want to remove "+itemDesc;
       if (confirm(confirmMsg)) {
          collectionArray.splice(i,1);
          collection.removeChild(obj);
       } 
       break;
     }
  }
}
function displayDoctorSearchPanel() {
  var notePanel = document.getElementById('noteList');
  var doctorPanel = document.getElementById('doctorList');
  var servicePanel = document.getElementById('serviceList');
  var searchText = document.getElementById('searchText');
  doctorPanel.style.display = '';
  servicePanel.style.display='none';
  notePanel.style.display='none';
  searchText.focus();
}
function displayServiceSearchPanel() {
  var notePanel = document.getElementById('noteList');
  var doctorPanel = document.getElementById('doctorList');
  var servicePanel = document.getElementById('serviceList');
  doctorPanel.style.display = 'none';
  notePanel.style.display='none';
  servicePanel.style.display='';
}
//-----------------------------------------------------------------------------
// display quick list
//-----------------------------------------------------------------------------
function ShowOrderCodes(labCode,groupCode,typeCode) {
 if (groupCode==0) {
   CommonList(labCode);
 }
 else {
   typeCode=typeCode.replace(/ /g,"");
   OS="<ul class='sectionList' id='searchItems'>";
   for(var i =0; i < orderCodes.length; i++) {
    if (orderCodes[i].labcode==labCode&&
        (orderCodes[i].group==groupCode||isWhitespace(groupCode))&&
        (orderCodes[i].type==typeCode||isWhitespace(typeCode))
       ) {
      formTypeName=""
      if (orderCodes[i].formtype=="NR") formTypeName="<span style='color:red;'> (No Rebate)</span>"
      OS += "<li class=sectionItem onclick=\"AddTest('"+null+"'," +
            "'"+orderCodes[i].type+"','" +
            orderCodes[i].code+"','" +
            orderCodes[i].labcode+"','" +
            orderCodes[i].description+"','" +
            orderCodes[i].specimen+"');\" />"+
            "<span class='showResultIcon"+orderCodes[i].type.substr(0,2)+
            "' style='float:left;margin-right:5px;' ></span>"+
            orderCodes[i].description + formTypeName +
            "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" +
            orderCodes[i].labname + "</span>"+
            "<br><span style='font-size:12px;line-height:12px;'>" +
            orderCodes[i].specimen + "</span></li>"
     }
   }
   ListLocation = document.getElementById("SearchResults");
   ListLocation.innerHTML = OS+"</ul>";
 }
}
function SearchOrderCodes(sString) {
 OS="<ul class=sectionList>";
 searchExp= new RegExp(sString,"i");
 for(var i =0; i < orderCodes.length; i++) {
    if (searchExp.test(orderCodes[i].code)) {
        formTypeName=""
        if (orderCodes[i].formtype=="NR") formTypeName="<span style='color:red;'> (No Rebate)</span>"
        OS += "<li class=sectionItem onclick=\"AddTest('"+null+"'," +
              "'"+orderCodes[i].type+"','" +
              orderCodes[i].code+"','" +
              orderCodes[i].labcode+"','" +
              orderCodes[i].description+"','" +
              orderCodes[i].specimen+"');ResetSearch();\" />"+
              "<span class='showResultIcon"+orderCodes[i].type.substr(0,2)+
              "' style='float:left;margin-right:5px;' ></span>"+
              orderCodes[i].description + formTypeName +
              "<span style='font-size:10px;position:absolute;right:30px;margin-top:-5px;'>" +
              orderCodes[i].labname + "</span>"+
              "<br><span style='font-size:12px;line-height:12px;'>" +
              orderCodes[i].specimen + "</span>"+
              "</li>"
   }
 }
 for(var i =0; i < orderCodes.length; i++) {
    if (!(searchExp.test(orderCodes[i].code))) {
      if (searchExp.test(orderCodes[i].description)
        ||searchExp.test(orderCodes[i].search)){
        formTypeName=""
        if (orderCodes[i].formtype=="NR") formTypeName="<span style='color:red;'> (No Rebate)</span>"
        OS += "<li class=sectionItem onclick=\"AddTest('"+null+"'," +
              "'"+orderCodes[i].type+"','" +
              orderCodes[i].code+"','" +
              orderCodes[i].labcode+"','" +
              orderCodes[i].description+"','" +
              orderCodes[i].specimen+"');ResetSearch();\" />"+
              "<span class='showResultIcon"+orderCodes[i].type.substr(0,2)+
              "' style='float:left;margin-right:5px;' ></span>"+
              orderCodes[i].description + formTypeName +
              "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" + 
              orderCodes[i].labname + "</span>"+
              "<br><span style='font-size:12px;line-height:12px;'>" + 
              orderCodes[i].specimen + "</span>"+
              "</li>"
    }
  }
 }
 ListLocation = document.getElementById("searchItems");
 ListLocation.innerHTML = OS+"</ul>";
}
function removeAdditionalFields(obj,fieldType) {
  if (fieldType=="2") {
    bloodProducts=false;
    HideField("field01");
    HideField("field02");
    HideField("field03");
    HideField("field04");
    HideField("field05");
    HideField("field06");
    HideField("field08");
    HideField("field09");
  }
  if (fieldType=="3") {
    bloodProducts=false;
    HideField("field01");
    HideField("field11");
    HideField("field12");
    HideField("field13");
    HideField("field14");
    OptionalField("optfld01");
    OptionalField("optfld11");
  }
  if (fieldType=="4") {
    bloodProducts=false;
    HideField("field16");
    OptionalField("optfld16");
  }
  if (fieldType=="5") {
    bloodProducts=false;
    HideField("field01");
    HideField("field02");
    HideField("field03");
    HideField("field04");
    HideField("field05");
    HideField("field06");
    HideField("field08");
    HideField("field09");
    OptionalField("optfld01");
  }
}
function AdditionalFields(labCode,resultCode,fieldType) {
  if (fieldType=="2") {
    bloodProducts=true;
//    DisplayField("field01");
//    DisplayField("field05");
//    DisplayField("field06");
  }
  if (fieldType=="3") {
    bloodProducts=true;
    DisplayField("field01");
    DisplayField("field11");
    MandateField("optfld01");
    MandateField("optfld11");
  }
  if (fieldType=="4") {
    bloodProducts=true;
    DisplayField("field16");
    MandateField("optfld16");
  }
  if (fieldType=="5") {
    bloodProducts=true;
    DisplayField("field01");
    DisplayField("field05");
    DisplayField("field06");
    MandateField("optfld01");
  }
  return true;
}
//
// Number of Units.  
//  Blood Group & Crossmatch Show type and transfusion reason 
//  Blood Products no additional fields
//
function setField01(el) {
  if (document.getElementById("field11").style.display=="none") {
    HideField("field02");
    HideField("field04");
    OptionalField("optfld02");
    document.getElementById("optfld02").selectedIndex=0;
    OptionalField("optfld04");
    if (el.options[el.selectedIndex].value!="") {
      MandateField("optfld02");
      document.getElementById("optfld02").selectedIndex=1;
      MandateField("optfld04");
      DisplayField("field02");
      DisplayField("field04");
    }
  }
}
//
// Type
//  For RBC Show Special Requirements
//
function setField02(el) {
  HideField("field03");
  if (el.options[el.selectedIndex].value==1) {
    DisplayField("field03");
  }
}
//
// Reason for Transfusion
//  for Pre-operative
//     - Mandate Operation Details
//     - Show Transfusion in last 3 months
//     - if female >12 <55 Show Pregnancy
//
function setField04(el) {
  HideField("field08");
  HideField("field09");
  HideField("field10");
  OptionalField("optfld05");
  OptionalField("optfld06");
  OptionalField("optfld08");
  OptionalField("optfld09");
  HideField("field05");
  HideField("field06");
  clrResultValue("optfld10");
  if (el.options[el.selectedIndex].value==1) {
    DisplayField("field05");
    DisplayField("field06");
    MandateField("optfld05");
    MandateField("optfld06");
    DisplayField("field08");
    MandateField("optfld08");
    if (UpdateForm.patientSex.value.replace(/ /g,"")!="Male") {
      if (UpdateForm.patientAge.value.match(/yrs/)) {
        ageInt=parseInt(UpdateForm.patientAge.value.replace(/ yrs/g,"").replace(/ /g,""),10)
        if (ageInt>12 && ageInt <55)  {
          DisplayField("field09");
          MandateField("optfld09");
        }
      }
    }
  }
  if (el.options[el.selectedIndex].value==2) {
    DisplayField("field10");
    setResultValue("optfld10",setHaemoglobin);
  }
}
function MandateField(id) {
  el=document.getElementById(id)
  el.className+=' Mandatory';
}
function OptionalField(id) {
  el=document.getElementById(id)
  el.className=el.className.replace(/ Mandatory/,"");
}
function setField11(el) {
  HideField("field12");
  HideField("field13");
  HideField("field14");
  clrResultValue("optfld12");
  clrResultValue("optfld13");
  clrResultValue("optfld14");
  if (el.options[el.selectedIndex].value==1) {
    DisplayField("field12");
    setResultValue("optfld12",setINR);
  }
  if (el.options[el.selectedIndex].value==2) {
    DisplayField("field13");
    setResultValue("optfld13",setPlatelets);
  }
  if (el.options[el.selectedIndex].value==3) {
    DisplayField("field14");
    setResultValue("optfld14",setFibrinogen);
  }
}
function setField03(el) {
}
function setField05(el) {
}
function setField06(el) {
}
function setField08(el) {
}
function setField09(el) {
}
function setField10(el) {
}
function setField16(el) {
}
function clrResultValue(id,resultType) {
    el=document.getElementById(id);
    el.value="";
}
function setResultValue(id,resultType) {
  el=document.getElementById(id);
  pathURL=document.UpdateForm.action.replace(/cgi-bin\/.*/,"cgi-bin/");
  resultTypeArr=resultType.split("|");
  theURL=pathURL+"cliweb10.pbl?reportno=6&template=8&urnumber="+UpdateForm.urnumber.value.replace(/ /g,"+")+
         "&admissno="+UpdateForm.admissno.value.replace(/ /g,"+")+
         "&filtrlab="+resultTypeArr[0]+
         "&filtrocs="+resultTypeArr[1]+
         "&filtroty="+resultTypeArr[2]
  var xmlHttp = createHttpObject();
  xmlHttp.open("GET", theURL, false);
  xmlHttp.send();
  if (xmlHttp.status=="200") {
    returnVal=xmlHttp.responseText.split("|");
    if (returnVal.length>0) {
      if (returnVal[0]=="0") {
        var MaxAgeDays = resultTypeArr[4];
        if (resultAge(returnVal[1])<=MaxAgeDays) {
          dtString=returnVal[1].substr(6,2)+"/"+
                   returnVal[1].substr(4,2)+"/"+
                   returnVal[1].substr(0,4)
          msgText="Use "+resultTypeArr[3]+" of "+trim(returnVal[4])+ " recorded on "+dtString+" ?"
          if (returnVal[2]=="NM") {
            if (confirm(msgText)) { el.value=returnVal[3] }
          }
          else {
            if (confirm(msgText)) { el.value=trim(returnVal[4]); }
          }
        }
      }
    }
  } else {
    alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
// Return the Age of the Result as Number of Days
function resultAge(datetime) {
  if (isWhitespace(datetime)) { return 9999; }
  var yyyy = datetime.substr(0,4);
  var mm = datetime.substr(4,2);
  var dd = datetime.substr(6,2);
  var thisDate= new Date(yyyy,parseInt(mm,10)-1,dd,00,01);
  var today= new Date();
  if (isWhitespace(clientOffsetTime)) { setServerDateTime(); }
  today.setTime(today.getTime() + parseInt(trim(clientOffsetTime),10));
  var one_day=1000*60*60*24;
  var AgeInDays=Math.floor((today.getTime()-thisDate.getTime())/(one_day));
  return AgeInDays;
}
function bloodProductNoteText() {
  el=document.getElementById("field04");
  if (el.style.display=="") { 
    setNoteText01() 
  } else {
    el=document.getElementById("field05");
    if (el.style.display=="") { 
      setNoteText01() 
    } else {
      el=document.getElementById("field11");
      if (el.style.display=="") {
        setNoteText02();
      } else {
        el=document.getElementById("field16");
        if (el.style.display=="") {
          setNoteText03();
        } 
      } 
    }
  }
}
function setNoteText01() {
  un="";ty="";sr="";rs="";
  un=UpdateForm.optfld01.options[UpdateForm.optfld01.selectedIndex].text
  if (UpdateForm.optfld02.selectedIndex>0) {  /* if type selected */
    ty=UpdateForm.optfld02.options[UpdateForm.optfld02.selectedIndex].text }
  if (UpdateForm.optfld03.selectedIndex>0) {  /* if special requirement selected */
    sr=UpdateForm.optfld03.options[UpdateForm.optfld03.selectedIndex].text }
  if (UpdateForm.optfld04.options[UpdateForm.optfld04.selectedIndex].value!="3") {  /* if not Other */
    rs=UpdateForm.optfld04.options[UpdateForm.optfld04.selectedIndex].text }
  op=UpdateForm.optfld05.value
  dt=UpdateForm.optfld06.value.substr(0,6)
  tf=UpdateForm.optfld08
  pi=UpdateForm.optfld09
  hb=UpdateForm.optfld10.value
  OS=""
  if (!isWhitespace(un))   OS+=ty+" "+un+"\n";
  if (!isWhitespace(rs))   OS+=rs+"\n";
  if (!isWhitespace(sr))   OS+=sr+"\n";
  if (!isWhitespace(op))   OS+="Op:"+op+"("+dt+")\n";
  if (tf.selectedIndex==1) OS+="Trans last 3 mths\n";
  if (pi.selectedIndex==1) OS+="Preg last 3 Mths\n";
  if (!isWhitespace(hb))   OS+="Hb: "+hb+" g/L\n";
  if (isWhitespace(saveNotesText)) UpdateForm.notetext.value=OS;
  else UpdateForm.notetext.value=saveNotesText+'\n'+OS;
}
function setNoteText02() {
  OS=""
  pr="";
  un=UpdateForm.optfld01.options[UpdateForm.optfld01.selectedIndex].text
  if (UpdateForm.optfld11.options[UpdateForm.optfld11.selectedIndex].value!="9") {   /* if not Other */
    pr=UpdateForm.optfld11.options[UpdateForm.optfld11.selectedIndex].text }
  if (!isWhitespace(pr))                        OS+="Product:"+pr+"\n";
  if (!isWhitespace(un))                        OS+="Units: "+un+"\n";
  if (!isWhitespace(UpdateForm.optfld12.value)) OS+="INR: "+UpdateForm.optfld12.value+"\n";
  if (!isWhitespace(UpdateForm.optfld13.value)) OS+="Platelets: "+UpdateForm.optfld13.value+" 10x9/L\n";
  if (!isWhitespace(UpdateForm.optfld14.value)) OS+="Fibrinogen: "+UpdateForm.optfld14.value+" g/L\n";
  if (isWhitespace(saveNotesText)) UpdateForm.notetext.value=OS;
  else UpdateForm.notetext.value=saveNotesText+'\n'+OS;
}
function setNoteText03() {
  OS=""
  pr="";
  if (UpdateForm.optfld16.options[UpdateForm.optfld16.selectedIndex].value!="99") { /* if not Other */
    pr=UpdateForm.optfld16.options[UpdateForm.optfld16.selectedIndex].text }
  if (!isWhitespace(pr))                        OS+="Component : "+pr+"\n";
  if (isWhitespace(saveNotesText)) UpdateForm.notetext.value=OS;
  else UpdateForm.notetext.value=saveNotesText+'\n'+OS;
}
function DisplayField(fieldName) {
  el=document.getElementById(fieldName);
  el.style.display='';
}
function HideField(fieldName) {
  el=document.getElementById(fieldName);
  el.style.display='none';
}
//-----------------------------------------------------------------------------
// display quick list
//-----------------------------------------------------------------------------
function ShowWardQuickList(type) {
  var obj = new Object();
  var url = "cliweb03.php?reportno=10&numrow=30"+
            "&wardcode="+PatientLinks.wardcode.value;
  if(typeof type != 'undefined') {
    if(type != "") {
      url = "cliweb03.php?reportno=11&numrow=30&typflter="+type.replace(/ /g,"")+
            "&wardcode="+PatientLinks.wardcode.value;
    }
  }
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if ((xmlHttp.responseText).length < 2) {
        ListLocation = document.getElementById("SearchResults");
	if (ListLocation) {
	  ListLocation.innerHTML = "<ul class='sectionList'>"+
                                   "<li class='sectionItem' style='text-align:center'>"+
                                   "No Items Found</li></ul>";
	}
	return;
      }
      obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
      OS="<ul class=sectionList>";
      for (var i =0; i < obj.length; i++) {
        displayName=obj[i].description;
        subText=obj[i].testsets;
        if (!isWhitespace(obj[i].testsets)) {
          displayName=obj[i].testsets;
          subText=obj[i].description;
        }
        OS += "<li class=sectionItem onclick=\"AddPatientTest('"+null+"',"+
              "'"+obj[i].type+"','"+obj[i].code+"','" +obj[i].labcode+"','" +
              obj[i].description+"','"+obj[i].testsets+"','');\" />"+
              "<span class='showResultIcon"+obj[i].type.substr(0,2)+
              "' style='float:left;margin-right:5px;' ></span>"+
              displayName +
              "<span style='font-size:10px;position: absolute;right:30px;margin-top:-5px;'>" +
              obj[i].labname + "</span>"+
              "<br><span style='font-size:12px;line-height:12px;'>" +
              subText + "</span></li>"
      }
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
//-----------------------------------------------------------------------------
// Shortcuts for Clinical Notes
//-----------------------------------------------------------------------------
function listNoteText() {
  var notePanel = document.getElementById('noteList');
  var doctorPanel = document.getElementById('doctorList');
  var servicePanel = document.getElementById('serviceList');
  doctorPanel.style.display = 'none';
  notePanel.style.display='';
  servicePanel.style.display='none';
  if (useDoctorNotesList) {
    showNotesList();
  }
  else {
    OS = '<ul class=sectionList>';
    for(var i =0; i < clinicalNotes.length; i++) {
       OS += "<li class=sectionItem onclick=\"AddNoteText('"+clinicalNotes[i].description+"');\" />"+
            clinicalNotes[i].description +"</li>";
    }
    OS += '</ul>';
    ListLocation = document.getElementById("NoteResults");
    ListLocation.innerHTML = OS;
  }
}
function AddNoteText(noteText) {
  UpdateForm.notetext.value+=noteText;
}
function showNotesList() {
  var obj = new Object();
  var url = "cliweb03.php?reportno=13&numrow=30&urnumber="+
            UpdateForm.urnumber.value.replace(/ /g,"+")
  var xmlHttp = createHttpObject();
  xmlHttp.open('GET',url,true);
  xmlHttp.send();
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4 && xmlHttp.status == 200) {
      if ((xmlHttp.responseText).length < 2) {
        ListLocation = document.getElementById("NoteResults");
       	if (ListLocation) {
       	  ListLocation.innerHTML = "<ul class='sectionList'>"+
                                   "<li class='sectionItem' style='text-align:center'>"+
                                   "No Items Found</li></ul>";
	       }
       	return;
      }
      obj = eval("("+xmlHttp.responseText+")"); //convert text to javascript object
      OS = '<ul class=sectionList>';
      for(var i =0; i < obj.length; i++) {
        OS += "<li class=sectionItem onclick=\"AddNoteText('"+obj[i].description+"');\" />"+
              obj[i].description +"</li>";
      }
      OS += '</ul>';
      ListLocation = document.getElementById("NoteResults");
      ListLocation.innerHTML = OS+"</ul>";
    }
  }
}
function notesText(limitField, limitNum, e) {
  if (!e) { e = window.event; }

  // replace "&" with "and"
  if (e.shiftKey && e.keyCode == 55) {
    limitField.value = limitField.value.substring(0, limitField.value.length-1)+'and ';
  }

  // check text limit
  if (limitField.value.length > limitNum) {
    limitField.value = limitField.value.substring(0, limitNum);
    alert(limitField.title+" only allows "+limitNum+" character to be entered.");
  }
}
function getTextarea(el) {
  textareaValue=""
  lines=el.value.split("\n")
  for (var j=0;j<lines.length;j++) {
    if (lines[j].length>el.cols) {
      textareaValue+=breakLine(lines[j],el.cols);
    }
    else {
      textareaValue+=lines[j]+"\n";
    }
  }
  return textareaValue;
}
function breakLine(textValue,colLength) {
  returnValue="";
  while (textValue.length>colLength) {
    if (textValue.lastIndexOf(" ",colLength)>0) {
      returnValue+=textValue.substr(0,textValue.lastIndexOf(" ",colLength)) +"\n";
      textValue=textValue.substr(textValue.lastIndexOf(" ",colLength)+1);
    }
    else {
      returnValue+=textValue.substr(0,colLength) +"\n";
      textValue=textValue.substr(colLength+1);
    }
  }
  returnValue+=textValue
  return returnValue;
}
function setCookie(c_name,value,expiredays) {
 var exdate=new Date();
 exdate.setDate(exdate.getDate()+parseInt(expiredays));
 document.cookie=c_name+ "=" +escape(value)+ ((expiredays==null) ? "" : ";expires="+exdate.toGMTString());
}

function getCookie(c_name) {
if (document.cookie.length>0) {
  c_start=document.cookie.indexOf(c_name + "=");
  if (c_start!=-1) {
    c_start=c_start + c_name.length+1;
    c_end=document.cookie.indexOf(";",c_start);
    if (c_end==-1) c_end=document.cookie.length;
    return unescape(document.cookie.substring(c_start,c_end));
    }
  }
return "";
}
function Mth3Num(mmm) {
   switch(mmm) {
     case "Jan": mth3="01"; break;
     case "Feb": mth3="02"; break;
     case "Mar": mth3="03"; break;
     case "Apr": mth3="04"; break;
     case "May": mth3="05"; break;
     case "Jun": mth3="06"; break;
     case "Jul": mth3="07"; break;
     case "Aug": mth3="08"; break;
     case "Sep": mth3="09"; break;
     case "Oct": mth3="10"; break;
     case "Nov": mth3="11"; break;
     case "Dec": mth3="12"; break;
   }
  return mth3;
}
function mth3Name(mm) {
   mth3="";
   switch(mm) {
     case "01": mth3="Jan"; break;
     case "02": mth3="Feb"; break;
     case "03": mth3="Mar"; break;
     case "04": mth3="Apr"; break;
     case "05": mth3="May"; break;
     case "06": mth3="Jun"; break;
     case "07": mth3="Jul"; break;
     case "08": mth3="Aug"; break;
     case "09": mth3="Sep"; break;
     case "10": mth3="Oct"; break;
     case "11": mth3="Nov"; break;
     case "12": mth3="Dec"; break;
   }
  return mth3;
}
