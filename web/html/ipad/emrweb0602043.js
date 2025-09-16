//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/emrweb0602043.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.07.01 23/11/2015 Peter Vela  CAR 321535
//                      Fixed confirm validation in removeItem()
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
// V10.01.01 04.12.2012 B.G.Ackland New Medical Record View Refresh
// V10.01.00 13/04/2012 Version change
// V10.00.00 13/04/2012 Created for Mobility Suite
//
var serviceArray = new Array();
var AJAXCollection = new Array();
var MISCCollection = new Array();
var orderSet;
var quickList;
var quickListGroup;
//-----------------------------------------------------------------------------
// onload function to initial page startup
//-----------------------------------------------------------------------------
function LoadPage() {
  showRebates();
  OptionNo=top.getCookie("ProcedureBillingSearchType");
  if (isWhitespace(OptionNo)||OptionNo=="unknown") OptionNo=0;
  showOptions(OptionNo);
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";
    actionBtn.onclick = function() { submitServiceRequest() }
  }
}
//-----------------------------------------------------------------------------
//  changeType - check if the search type has been changed
//-----------------------------------------------------------------------------
function changeType(value) {
  var searchType = document.getElementById('searchType');
  switch(searchType.selectedIndex) {
    case 0:
      ShowQuickLists();
      break;
    case 1:
      ShowOrderSets();
      break;
    default:
      break;
  }
}

//-----------------------------------------------------------------------------
// submit list of services to server
//-----------------------------------------------------------------------------
function submitServiceRequest() {
  var bool = validateMandatory(UpdateForm);
  if(bool) {
    submitECG();
    submitMisc();
    if (serviceArray.length>0) {
      theURL=UpdateForm.action;
      var postStr=AJAXPostString2(document.UpdateForm)
      var xmlHttp = createHttpObject();
      xmlHttp.open("POST", theURL, false);
      xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
      xmlHttp.send(postStr);
      if (xmlHttp.status=="200") {
        if (xmlHttp.responseText.match(/alert/i)) {
          alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
        }
        if (xmlHttp.responseText.match(/PROCESSING|OK/i)) {
          parent.frames['PatFrame'].refreshScreen();
          parent.CloseDocument();
        }
        else {
          alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
        }
      }
      else {
        alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
      }
    }
    else {
      parent.frames['PatFrame'].refreshScreen();
      parent.CloseDocument();
    }
  }
  return bool
}
function submitECG() {
    var url = "../cgi-bin/patweb75.pbl";
    for(var i = 0; i < AJAXCollection.length; i++){
        var param = serializeForm(ECGForm);
        var xmlHttp = createHttpObject();
        param += "&procdate="+document.getElementById(AJAXCollection[i].procd).value;
        param += "&proctime="+document.getElementById(AJAXCollection[i].proct).value;
        param += "&doctn001="+AJAXCollection[i].doctn.replace(/ /g,"+");
        param += "&itype001="+AJAXCollection[i].itype.replace(/ /g,"+");
        param += "&schdf001="+AJAXCollection[i].schdf.replace(/ /g,"+");
        param += "&pquan001="+AJAXCollection[i].pquan.replace(/ /g,"+");
        param += "&proci001="+AJAXCollection[i].proci.replace(/ /g,"+");
        xmlHttp.open("POST", url ,false);
        xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
        xmlHttp.send(param);
        itemName=AJAXCollection[i].proci+AJAXCollection[i].itype+AJAXCollection[i].schdf+AJAXCollection[i].pquan
        divID=itemName.replace(/ /g,"");
        obj=document.getElementById(divID);
        deleteItem(obj,itemName) 
    }
    remECGPanel();
}
function submitMisc() {
  var url = "../cgi-bin/patweb75.pbl";
  for(var i = 0; i < MISCCollection.length; i++){
    var param = serializeForm(MiscForm);
    var xmlHttp = createHttpObject();
    param += "&procdate="+UpdateForm.procdate.value;
    param += "&proctime="+UpdateForm.proctime.value;
    seqCode=MISCCollection[i].seqcd;
    param += "&tkbox001=0";
    param += "&pquan001="+document.getElementById("pquan"+seqCode).value.replace(/ /g,"+");
    param += "&pamnt001="+document.getElementById("pamnt"+seqCode).value.replace(/ /g,"+");
    param += "&proci001="+document.getElementById("proci"+seqCode).value.replace(/ /g,"+");
    xmlHttp.open("POST", url ,false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(param);
    itemName=MISCCollection[i].proci+MISCCollection[i].itype+
             MISCCollection[i].schdf+MISCCollection[i].pquan
    divID=itemName.replace(/ /g,"");
    obj=document.getElementById(divID);
    deleteItem(obj,itemName) 
  }
}
function serializeForm(form) {
    var string = "";
    for(var i = 0; i < form.length; i++) {
        string += form[i].name+"="+form[i].value+"&";
    }
    string = string.substring(0,string.length-1);
    return string.replace(/ /g,'+');
}
function remECGPanel() {
  var ecgPanel = document.getElementById('ecgPanel');
  AJAXCollection = new Array();
  ecgPanel.innerHTML = ''
  ecgPanel.style.display='none';
}
function addECGPanel(itemNo,itemType,inputNum) {
  var ecgPanel = document.getElementById('ecgPanel');
  AJAXCollection = new Array();
  OS = "<ul class='sectionList'>" 
  for(var i = 0 ; i < inputNum; i++) {
    OS += "<li class='sectionItem'>" +
          "<span class=labelText>ECG "+(i+1)+" Date & Time</span>" +
          "<span class=sectionText>" +
          "<input type=text pattern='[0-9]*' name=ecgDate id=ecgDate"+i+"  size='12' "+
          " onfocus='this.value=\"\";' onblur='checkDate(this,\"Procedure Date\");' class=Mandatory "+
          " value='"+CurrentDat+"'> "+
          " <input type=text pattern='[0-9]*' name=ecgTime id=ecgTime"+i+" size='8' "+
          " onfocus='this.value=\"\";' onblur='checkTime(this,\"Procedure Time\")' class=Mandatory "+
          " value='"+CurrentTim+"'>"+
          "</span></li>";
    var temp = new Object();
    temp.procd = "ecgDate"+i;
    temp.proct = "ecgTime"+i;
    temp.doctn = UpdateForm.doctcode.value;
    temp.schdf = UpdateForm.rebateLevels.options[UpdateForm.rebateLevels.selectedIndex].value;
    temp.proci = itemNo;
    temp.pquan = "1";
    temp.itype = itemType;
    AJAXCollection.push(temp);
  }
  ecgPanel.innerHTML = OS+"</ul>"
  ecgPanel.style.display='';
}
function OrderSet() {
   this.rows    = new Array();
   this.add     = _addRow;
}
function _addRow() {
  this.rows[this.rows.length] = new Array();
  var row = this.rows[this.rows.length-1];
  for(var i = 0; i < arguments.length; i++)
     row[row.length] = arguments[i];
}
function ShowOrderGroups() {
  orderGroup= new OrderSet();
  CreateOrderGroups();
  DefaultGroupID=top.getCookie("ProcedureGroupID")
  ListItem=UpdateForm.groupFilter;
  SelectDefault=0;
  if (ListItem.options.length==0) {
    for (i=0;i<orderGroup.rows.length;i++) {
      if (DefaultGroupID==orderGroup.rows[i][0]) SelectDefault=i;
      ListItem.options[ListItem.options.length]=new Option(orderGroup.rows[i][1],orderGroup.rows[i][0]);
    }
  }
  ListItem.selectedIndex=SelectDefault;
}
function ShowOrderSets() {
  OS="<ul class=sectionList>";
  orderSet= new OrderSet();
  GroupID=UpdateForm.groupFilter.options[UpdateForm.groupFilter.selectedIndex].value
  top.setCookie("ClinicalOrderGroupID",GroupID,30)
  eval("OrderSet"+GroupID+"()");
  for (i=0;i<orderSet.rows.length;i++) {
  OS += "<li class=sectionItem onclick=\"AddSet('"+i+"')\">" +
	orderSet.rows[i][0] +
	"</li>"
  }
  ListLocation = document.getElementById("SearchResults");
  ListLocation.innerHTML = OS+"</ul>";
  
}
function AddSet(setIndex)  {
  procSchdf=UpdateForm.rebateLevels.options[UpdateForm.rebateLevels.selectedIndex].value;
  if (procSchdf=="") {
    alertify.alert("You must select a rebate level before the procedure can be added.")
  }
  else {
    for (i=1;i<orderSet.rows[setIndex].length;i++) {
      procDetails=orderSet.rows[setIndex][i].split("|");
      procCall=""
      if (procDetails.length>3) procCall=procDetails[3]
      AddProcedure(procDetails[0],procDetails[1],procSchdf,"1",procDetails[2],procCall) ;
    }
  }
}
//-----------------------------------------------------------------------------
// add the service to the array list
//-----------------------------------------------------------------------------
function AddProcedure(proci,itype,schdf,pquan,descr,callBack) {
  var services = document.getElementById('services');
  var found = false;
  var resultCode=proci+itype+schdf+pquan
  var resultDesc=descr;
  //scan through service request list and reject duplicate request
  for(var i = 0; i < serviceArray.length; i++) {
     if(resultCode.replace(/ /g,"") == serviceArray[i].replace(/ /g,"")) {
       //reject duplicates
       found = true;
       alertify.alert("Procedure already exists ("+resultDesc+")");
       break;
     }
  }
  if (isWhitespace(UpdateForm.doctcode.value)) {
       found = true;
       alertify.alert("Patient must have a doctor allocated for procedures to be recorded.");
  }
  if (!found) {
     serviceArray.push(resultCode);
     seqCode='00'+serviceArray.length;
     if (seqCode.length==4) seqCode=seqCode.substr(1,3)
     if (seqCode.length==5) seqCode=seqCode.substr(2,3)
     doctn=UpdateForm.doctcode.value
     callBackRem=callBack.replace(/\(.*/,"()").replace(/add/,"rem");
     services.innerHTML += "<div id='" + resultCode.replace(/ /g,"") + "'" +
             " onclick='removeItem(this,\""+resultCode+"\",\""+resultDesc+"\",\""+callBackRem+"\");'"+
	     " style='padding-bottom:15px;'>"+ descr + "(" + UpdateForm.rebateLevels.options[UpdateForm.rebateLevels.selectedIndex].text + ')' +
             "<input type=hidden name=proci"+seqCode+" value='"+proci+"'>" +
             "<input type=hidden name=doctn"+seqCode+" value='"+doctn+"'>" +
             "<input type=hidden name=itype"+seqCode+" value='"+itype+"'>" +
             "<input type=hidden name=schdf"+seqCode+" value='"+schdf+"'>" +
             "<input type=hidden name=pquan"+seqCode+" value='"+pquan+"'>" +
             "</div>";
     if (callBack!="") eval(callBack);
  }
}
//-----------------------------------------------------------------------------
// remove the services from the array list
//-----------------------------------------------------------------------------
function removeItem(obj,itemName,itemDesc,callBack) {
  var services = document.getElementById('services');
  for(var i = 0; i < serviceArray.length; i++) {
    if(itemName == serviceArray[i]) {
      confirmMsg="Are you sure you want to remove "+itemDesc;
      alertify.confirm(confirmMsg, function (e) {    
        if (e) {
          serviceArray.splice(i,1);
          services.removeChild(obj);
          if (callBack!="") eval(callBack);
        }
      });
      break;
    }
  }
}
function deleteItem(obj,itemName) {
  var services = document.getElementById('services');
  for(var i = 0; i < serviceArray.length; i++) {
    if(itemName == serviceArray[i]) {
       serviceArray.splice(i,1);
       services.removeChild(obj);
       break;
     }
  }
}
function ShowQuickGroups() {
  quickListGroup= new OrderSet();
  CreateQuickList();
  DefaultGroupID=top.getCookie("ProcedureGroupID")
  ListItem=UpdateForm.groupFilter;
  SelectDefault=0;
  if (ListItem.options.length==0) {
    for (i=0;i<quickListGroup.rows.length;i++) {
      if (DefaultGroupID==quickListGroup.rows[i][0]) SelectDefault=i;
      ListItem.options[ListItem.options.length]=new Option(quickListGroup.rows[i][1],quickListGroup.rows[i][0]);
    }
  }
  ListItem.selectedIndex=SelectDefault;
}
function ShowQuickLists() {
  OS="<ul class=sectionList>";
  quickList= new OrderSet();
  GroupID=UpdateForm.groupFilter.options[UpdateForm.groupFilter.selectedIndex].value
  for (var i=0;i<quickListGroup.rows.length;i++) {
    if (quickListGroup.rows[i][0]==GroupID) {
      if (quickListGroup.rows[i][2]) {
         eval(quickListGroup.rows[i][2]);
      }
    }
  }
  top.setCookie("ClinicalOrderGroupID",GroupID,30)
  eval("QuickList"+GroupID+"()");
  for (i=0;i<quickList.rows.length;i++) {
  OS += "<li class=sectionItem onclick=\"AddQuickList('"+i+"')\">" +
	quickList.rows[i][0] +
	"</li>"
  }
  ListLocation = document.getElementById("SearchResults");
  ListLocation.innerHTML = OS+"</ul>";
}
function AddQuickList(setIndex) {
    procName=quickList.rows[setIndex][0]
    procDetails=quickList.rows[setIndex][1].split("|")
    procCall=""
    if (quickList.rows[setIndex].length>2) procCall=quickList.rows[setIndex][2]
    procSchdf=UpdateForm.rebateLevels.options[UpdateForm.rebateLevels.selectedIndex].value
    if (procSchdf=="") {
      alertify.alert("You must select a rebate level before the procedure can be added.")
    }
    else {
      if (procDetails[1]=="I") {
        AddMiscItem(procDetails[0],procDetails[1],procSchdf,"1",procName,procCall) 
      } else {
        AddProcedure(procDetails[0],procDetails[1],procSchdf,"1",procName,procCall) 
      }
    }
}
//-----------------------------------------------------------------------------
// change panels 
//-----------------------------------------------------------------------------
function showOptions(searchOption) {
  top.setCookie("ProcedureSearchType",searchOption,30)
  UpdateForm.searchType.selectedIndex=parseInt(searchOption,10);
  var groupFilter = document.getElementById('groupFilter');
  groupFilter.style.display='none';

  switch(parseInt(searchOption,10)) {
    case 0:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      groupFilter.options.length=0;
      ShowQuickGroups();
      groupFilter.style.display='';
      groupFilter.onchange=function () { ShowQuickLists() };
      ShowQuickLists();
      break;
    case 1:
      ListLocation = document.getElementById("SearchResults");
      ListLocation.innerHTML = " ";
      groupFilter.options.length=0;
      ShowOrderGroups();
      groupFilter.style.display='';
      groupFilter.onchange=function () { ShowOrderSets() };
      ShowOrderSets();
      break;
    default:
      break;
  }
}
//-----------------------------------------------------------------------------
// add the misc item to the array list
//-----------------------------------------------------------------------------
function AddMiscItem(proci,itype,schdf,pquan,descr,callBack) {
  var services = document.getElementById('services');
  var found = false;
  var resultCode=proci+itype+schdf+pquan
  var resultDesc=descr;
  //scan through service request list and reject duplicate request
  for(var i = 0; i < serviceArray.length; i++) {
     if(resultCode.replace(/ /g,"") == serviceArray[i].replace(/ /g,"")) {
       //reject duplicates
       found = true;
       alertify.alert("Procedure already exists ("+resultDesc+")");
       break;
     }
  }
  if (isWhitespace(UpdateForm.doctcode.value)) {
       found = true;
       alertify.alert("Patient must have a doctor allocated for procedures to be recorded.");
  }
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=4" +
        "&valdcode=" + proci.replace(/ /g,"+") +
        "&returndt=" + UpdateForm.procdate.value.replace(/ /g,"+") +
        "&valdadno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
        "&valdtype=3"
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|");
     pquan=1;
     pamnt=0;
     if (checkNumber(ReturnValue[12])) {
       pamnt+=parseFloat(ReturnValue[12]);
     }
     if (checkNumber(ReturnValue[13])) {
       pamnt+=parseFloat(ReturnValue[13]);
     }
  } else {
     return;
  }

  if (!found) {
     serviceArray.push(resultCode);
     seqCode='00'+serviceArray.length;
     if (seqCode.length==4) seqCode=seqCode.substr(1,3)
     if (seqCode.length==5) seqCode=seqCode.substr(2,3)
     doctn=UpdateForm.doctcode.value
     callBackRem="remMisc("+seqCode+");"
     services.innerHTML += "<div id='" + resultCode.replace(/ /g,"") + "'" +
	" style='padding-bottom:15px;'>"+ 
        "<span onclick='removeItem(this.parentElement,\""+
         resultCode+"\",\""+resultDesc+"\",\""+callBackRem+"\");'>"+ descr + "&nbsp;"+
        "<input type=hidden id=proci"+seqCode+
        " name=proci"+seqCode+" value='"+proci+"'>" +
        "</span>"+
        "<span style='text-align:right;float:right'>"+
        "Qty <input type=text size=3 class=Number id=pquan"+seqCode+
        " onchange='checkNumber(this)' "+
        " name=pquan"+seqCode+" value='"+pquan+"'>  " +
        "Charge <input type=text size=8 class=Number id=pamnt"+seqCode+
        " onchange='checkNumber(this)' "+
        "  name=pamnt"+seqCode+" value='"+pamnt+"'>" +
        "</span></div>";
     if (callBack!="") eval(callBack);
     var temp = new Object();
     temp.schdf = UpdateForm.rebateLevels.options[UpdateForm.rebateLevels.selectedIndex].value;
     temp.seqcd = seqCode;
     temp.proci = proci;
     temp.pquan = pquan;
     temp.itype = itype;
     MISCCollection.push(temp);
  }
}
function remMisc(seq) {
  seqCode='00'+seq;
  if (seqCode.length==4) seqCode=seqCode.substr(1,3)
  if (seqCode.length==5) seqCode=seqCode.substr(2,3)
  for(var i = 0; i < MISCCollection.length; i++){
    if (MISCCollection[i].seqCode==seqCode) {
       MISCCollection.splice(i,1)
    }
  }
}

