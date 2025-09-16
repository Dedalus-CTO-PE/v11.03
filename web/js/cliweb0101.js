//jsVersion  : V11.03.00
//========================================================================
// Program   : cliweb0101.js
//
// Written   : 25.11.2011 Jill Parkinson
//
// Function  : Standard Functions Used in cliweb0101*
//
// Version   :
//
// V10.03.02 16.01.2012  Peter Vela     CAR 258380
//           Added checkAlertUpdate()
// V10.03.01 25.11.2011  Jill Parkinson CAR 249362
//           Created js
//========================================================================
function checkAlertValid(theForm){
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=51&remoteno=1" +
              "&valdcode="+theForm.urnumber.value.replace(/ /g,"+")+
              "&valdcod2="+theForm.alert001.value.substr(0,2).replace(/ /g,"+")+
              "&valdcod3="+theForm.alert002.value.substr(0,3).replace(/ /g,"+")+
              "&valddate="+theForm.alert003.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    return false;
  }
  ReturnValues=returnValue.return_value.split("|")
  result=ReturnValues[0];
// no alert exists
  if(result==0){
    return true;
  }
// Active Alert exists but allows duplicates
  if(result==1){
    if(!confirm("Active Alert "+trim(ReturnValues[1])+" exists. Press "+ "Ok to create a \nnew Active Alert, press Cancel to return "+
            "to Alert Maintenance.")){
            return false;
    } else {
            return true;
    }
  }
// Active Alert exists but does not allow duplicates
  if(result==2){
    alert("Active Alert "+trim(ReturnValues[1])+" exists.  This Alert \n"+
          "Code does not accept duplicate Active Alerts.");
    return false;
  }
// InActive Alert exists
  if(result=='3'){
    if(!confirm("Inactive Alert "+trim(ReturnValues[1])+" exists. Press "+
            "Ok to create \na new Active Alert, press Cancel to return "+
            "to Alert Maintenance.")){
            return false;
    } else {
            return true;
    }
  }
}

function checkAlertValidUpdate(theForm){
  var serverURL = "../cgi-bin/comweb80.pbl?reportno=53&remoteno=1" +
              "&valdcode="+theForm.urnumber.value.replace(/ /g,"+")+
              "&valdcod2="+theForm.alert001.value.substr(0,2).replace(/ /g,"+")+
              "&valdcod3="+theForm.alert002.value.substr(0,3).replace(/ /g,"+")+
              "&valddate="+theForm.alert003.value.replace(/ /g,"+")+
              "&valdcod4="+theForm.alert013.value.substr(0,3).replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    return false;
  }
  ReturnValues=returnValue.return_value.split("|")
  result=ReturnValues[0];
// no alert exists
  if(result==0){
    return true;
  }
// Active Alert exists but allows duplicates
  if(result==1){
    if(!confirm("Active Alert "+trim(ReturnValues[1])+" exists. Press "+ "Ok to create a \nnew Active Alert, press Cancel to return "+
            "to Alert Maintenance.")){
            return false;
    } else {
            return true;
    }
  }
// Active Alert exists but does not allow duplicates
  if(result==2){
    alert("Active Alert "+trim(ReturnValues[1])+" exists.  This Alert \n"+
          "Code does not accept duplicate Active Alerts.");
    return false;
  }
// InActive Alert exists
  if(result=='3'){
    if(!confirm("Inactive Alert "+trim(ReturnValues[1])+" exists. Press "+
            "Ok to create \na new Active Alert, press Cancel to return "+
            "to Alert Maintenance.")){
            return false;
    } else {
            return true;
    }
  }
}

