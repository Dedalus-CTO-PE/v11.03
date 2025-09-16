//jsVersion  : V11.03.03
//========================================================================
// Program   : mrtweb0208.js
//
// Written   : 03.08.2002 Pat Dirito
//
// Function  : Standard Functions Used in mrtweb02 report no 8 
//
//========================================================================
//   Report 8 
//========================================================================
function CompleteCoding() {
  UpdateForm.reportno.value="3";
  UpdateForm.updttype.value="F";
  DFrameClear();
  UpdateForm.target="PopUpFrame"
  UpdateForm.submit();
}
function Laterality() {
  if (!isWhitespace(document.UpdateForm.ptcrd008.value)) { 
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=7" +
           "&valdcode=" + document.UpdateForm.ptcrd008.value.replace(/ /g,"+") 
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      ind=ReturnValue[0];
    } else {
      return;   
    }
  } else { ind="0"; }
  if (ind=="1") {
    LateralLabel.innerHTML=laterallabel.innerHTML;
    LateralField.innerHTML=lateralfield.innerHTML;
  } else {
    LateralLabel.innerHTML=blanklabel.innerHTML;
    LateralField.innerHTML=blanklabel.innerHTML;
  }
}
function SetAutopsy() {
  if (isWhitespace(document.UpdateForm.ptdeath.value)) {
    document.UpdateForm.ptcrd024.disabled=true;
    document.UpdateForm.ptcrd040.disabled=true;
  }
}
function SetMan() {
  if (document.UpdateForm.ptcrd023.checked==true) {
    document.UpdateForm.ptcrd025.className="Mandatory";
    document.UpdateForm.ptcrd025.disabled=false;
  } else {
    document.UpdateForm.ptcrd025.className="";
    document.UpdateForm.ptcrd025.value="";
    document.UpdateForm.ptcrd025.disabled=true;
  } 
}
function SetNswLab(thisbox,num) {
  if (thisbox.checked==true) {
    document.UpdateForm.ptcrd020.checked=false;
    document.UpdateForm.ptcrd021.checked=false;
    document.UpdateForm.ptcrd023.checked=false;
    document.UpdateForm.ptcrd025.value="";
    document.UpdateForm.ptcrd025.className="Mandatory";
    document.UpdateForm.ptcrd025.disabled=false;
    if (num==1) {
      document.UpdateForm.ptcrd020.checked=true;
    }
    if (num==2) {
      document.UpdateForm.ptcrd021.checked=true;
    }
    if (num==3) {
      document.UpdateForm.ptcrd023.checked=true;
      document.UpdateForm.ptcrd025.className="";
    }
  } else {
    document.UpdateForm.ptcrd020.checked=false;
    document.UpdateForm.ptcrd021.checked=false;
    document.UpdateForm.ptcrd023.checked=false;
    document.UpdateForm.ptcrd025.value="";
    document.UpdateForm.ptcrd025.className="";
    document.UpdateForm.ptcrd025.disabled=true;
  }
}
function SetManOth() {
  if (document.UpdateForm.ptcrd038.checked==true) {
    document.UpdateForm.ptcrd039.className="Mandatory";
    document.UpdateForm.ptcrd039.disabled=false;
  } else { 
    document.UpdateForm.ptcrd039.className="";
    document.UpdateForm.ptcrd039.value="";
    document.UpdateForm.ptcrd039.disabled=true;
  } 
}
function SubmitPage() {
  if (validateMandatory(UpdateForm)) {
    UpdateForm.target="PopUpFrame"
    UpdateForm.submit();
  }
}
function SubmitPageCanNZ() {
  if (!CheckVal()) { return }
  if (validateMandatory(UpdateForm)) {
    UpdateForm.target="PopUpFrame"
    UpdateForm.submit();
  }
}
function CheckVal() {
  if (document.UpdateForm.ptcrd041.value > 99) {
    alert("Breslow Thickness cannot be greater than 99.");
    return false;
  }
  return true;
}
function validICDDis(OptionNumber,ReturnCode,ReturnName) {
  if (isWhitespace(ReturnCode.value))
    return;

  ReturnCode.value=ReturnCode.value.toUpperCase()
  Codelen=ReturnCode.value.length;
  findot=ReturnCode.value.search('[.]')
  findslash=ReturnCode.value.search('[/]')

  if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
    // Check whether a "/" has been entered for this Procedure code
    // If code not in format M0000/0
    if (findslash != "5") {
      a=ReturnCode.value.substr(0,5);
      b=ReturnCode.value.substr(5,5);
      ReturnCode.value= a + "/" + b;     // Add slash to string
    }
  } else { 
    if ((findot != "3") && (Codelen != "3")) {
      a=ReturnCode.value.substr(0,3);    // Then must be in format A000
      b=ReturnCode.value.substr(3,3);
      ReturnCode.value= a + "." + b;     // Add full stop to string
    }
  }

  var DischDte = UpdateForm.dischdte.value.replace(/ /g,"+");
  valICDDisCode(OptionNumber,ReturnCode,ReturnName,DischDte);
}
function validICDDisCancer(OptionNumber,ReturnCode,ReturnName) {
  if (isWhitespace(ReturnCode.value))
    return;

  ReturnCode.value=ReturnCode.value.toUpperCase()
  Codelen=ReturnCode.value.length;
  findot=ReturnCode.value.search('[.]')
  findslash=ReturnCode.value.search('[/]')

  if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
    // Check whether a "/" has been entered for this Procedure code
    //     // If code not in format M0000/0
    if (findslash != "5") {
      a=ReturnCode.value.substr(0,5);
      b=ReturnCode.value.substr(5,5);
      ReturnCode.value= a + "/" + b;     // Add slash to string
    }
  } else {
    if ((findot != "3") && (Codelen != "3")) {
      a=ReturnCode.value.substr(0,3);    // Then must be in format A000
      b=ReturnCode.value.substr(3,3);
      ReturnCode.value= a + "." + b;     // Add full stop to string
    }
  }

  var DischDte = UpdateForm.dischdte.value.replace(/ /g,"+");
  if (valICDDisCode(OptionNumber,ReturnCode,ReturnName,DischDte)) {
    validateCancerCode(ReturnCode,ReturnName);
  }
}

function valICDDisCode(OptionNumber,ReturnCode,ReturnName,DischDte) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < valICDDisCode.arguments.length; i++) {
    if (typeof(valICDDisCode.arguments[i]) == 'function') {
      ReturnFunction=valICDDisCode.arguments[i] }
    else {
      valICDDisCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&dischdte=" + DischDte;
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=3; i < valICDDisCode.arguments.length; i++) {
       if (typeof(valICDDisCode.arguments[i]) != 'function') {
         j++
         valICDDisCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}

function ShowDetail(linkurl) {
  location.href=linkurl;
}
function RegList() {
  urnumber=document.UpdateForm.urnumber.value.replace(/ /g,"+")
  admissno=document.UpdateForm.admissno.value.replace(/ /g,"+")
  linkurl="mrtweb02.pbl?reportno=8&template=2&urnumber="+urnumber + 
          "&admissno="+admissno
  location.href=linkurl;
}
function RegListDis() {
  urnumber=document.UpdateForm.urnumber.value.replace(/ /g,"+")
  admissno=document.UpdateForm.admissno.value.replace(/ /g,"+")
  linkurl="mrtweb02.pbl?reportno=8&template=5&urnumber="+urnumber + 
          "&admissno="+admissno
  location.href=linkurl;
}
function setFormactn(type) {
  document.UpdateForm.updttype.value=type;
  if (type=="U") {
    if (validateMandatory(UpdateForm)) {
       UpdateForm.target="PopUpFrame";
       document.UpdateForm.submit(); } } 
  else {
    if (type=="D") {
      ans=confirm("Are you sure you want to Delete ?")
      if (ans) { 
        UpdateForm.target="PopUpFrame";
        document.UpdateForm.submit(); } }
    else { 
      UpdateForm.target="PopUpFrame";
      document.UpdateForm.submit(); 
    } 
  } 
}
function setFormCanNZ(type) {
  if (!CheckVal()) { return }
  document.UpdateForm.updttype.value=type;
  if (type=="U") {
    if (validateMandatory(UpdateForm)) {
       UpdateForm.target="PopUpFrame";
       document.UpdateForm.submit(); } }
  else {
    if (type=="D") {
      ans=confirm("Are you sure you want to Delete ?")
      if (ans) {
        UpdateForm.target="PopUpFrame";
        document.UpdateForm.submit(); } }
    else {
      UpdateForm.target="PopUpFrame";
      document.UpdateForm.submit();
    }
  }
}
function PrintReg() {
  urnumber=document.UpdateForm.urnumber.value.replace(/ /g,"+")
  admissno=document.UpdateForm.admissno.value.replace(/ /g,"+")
  linkurl="mrtweb02.pbl?reportno=8&template=7&urnumber="+urnumber + 
          "&admissno="+admissno
  Left=(document.body.clientWidth-300)/2;
  DFrameLink(linkurl,260,Left,300,100)
}
function Resident() {
  ind=document.UpdateForm.restatus.value;
  if (ind!="1") {
    ResidntLabel.innerHTML=residntlabel.innerHTML;
    ResidntField.innerHTML=residntfield.innerHTML;
  } else {
    ResidntLabel.innerHTML=blanklabel.innerHTML;
    ResidntField.innerHTML=blanklabel.innerHTML;
  }
}

function HistologicalAlert() {
  if(document.UpdateForm.ptcnhdps.value=="2") {
    alert("Valid degree of spread of cancer at this admission\n\n" +
    "1 = Localised to the tissue of origin\n" +
    "2 = Invasion of adjacent tissue or organs\n" +
    "3 = Regional lymph nodes\n" +
    "4 = Distant metastases\n" +
    "5 = Not applicable\n" +
    "9 = Unknown" )
  } else {
    if ((document.getElementById("ptcnhdps").value=="3")
    && (document.UpdateForm.dischdte.value >= "20180701")) {
      alert("Valid Histological Grade Number\n\n" +
      "1 = Grade 1: Low grade; Well differentiated, differentiated NOS, ISUP Grade Group 1\n" +
      "2 = Grade 2: Intermediate grade; moderately differentiated, moderately well differentiated,intermediate " +
                    "differentiation ISUP Grade Group 2\n" +
      "3 = Grade 3: High grade, poorly differentiated ISUP Grade Group 3\n" +
      "4 = Grade 4: Undifferentiated,anaplastic ISUP Grade Group 4\n" +
      "5 = ISUP Grade Group 5\n" +
      "9 = Grade or differentiation not determined, not stated or not applicable" )
    } else {
      alert("Valid Histological Grade Number\n\n" +
      "1 = Grade 1/Well differentiated/Differentiated NOS.\n" +
      "2 = Grade 2/Moderately differentiated/Moderately well differentiated/Intermediate differentiation\n" +
      "3 = Grade 3/Poorly differentiated\n" +
      "4 = Grade 4/Undifferentiated/Aanplastic\n" +
      "5 = T-Cell\n" +
      "6 = B-Cell/Pre-B/B-Precursor\n" +
      "7 = Null cell/Non T-non B\n" +
      "8 = NK/Natural Killer cell Unknown or not stated\n" +
      "9 = Grade/differentiation unknown/Grade/cell type not determined,not stated or not applicable" )
    }
  }
}

function CheckHos(ind) {
  if(ind=="1") {
    if(document.UpdateForm.ptcrd097.checked==true) {
      document.UpdateForm.ptcrd098.checked=false;
      document.UpdateForm.ptcrd099.value="";
      document.UpdateForm.ptcrd099.className="Readonly";
      document.UpdateForm.ptcrd099.readOnly=true;
    } else {
      document.UpdateForm.ptcrd098.checked=false;
      document.UpdateForm.ptcrd099.value="";
      document.UpdateForm.ptcrd099.className="";
      document.UpdateForm.ptcrd099.readOnly=false;
    }
  }
  if(ind=="2") {
    if(document.UpdateForm.ptcrd098.checked==true) {
      document.UpdateForm.ptcrd097.checked=false;
      document.UpdateForm.ptcrd099.className="";
      document.UpdateForm.ptcrd099.readOnly=false;
    } else {
      document.UpdateForm.ptcrd097.checked=false;
      document.UpdateForm.ptcrd099.value="";
      document.UpdateForm.ptcrd099.className="Readonly";
      document.UpdateForm.ptcrd099.readOnly=true;
    }
  }
}
function CheckRes(ind) {
  if(ind=="1") {
    document.UpdateForm.ptcrd101.checked=false;
    document.UpdateForm.ptcrd102.checked=false;
    document.UpdateForm.ptcrd103.checked=false;
    document.UpdateForm.ptcrd104.checked=false;
  }
  if(ind=="2") {
    document.UpdateForm.ptcrd100.checked=false;
    document.UpdateForm.ptcrd102.checked=false;
    document.UpdateForm.ptcrd103.checked=false;
    document.UpdateForm.ptcrd104.checked=false;
  }
  if(ind=="3") {
    document.UpdateForm.ptcrd100.checked=false;
    document.UpdateForm.ptcrd101.checked=false;
    document.UpdateForm.ptcrd103.checked=false;
    document.UpdateForm.ptcrd104.checked=false;
  }
  if(ind=="4") {
    document.UpdateForm.ptcrd100.checked=false;
    document.UpdateForm.ptcrd101.checked=false;
    document.UpdateForm.ptcrd102.checked=false;
    document.UpdateForm.ptcrd104.checked=false;
  }
  if(ind=="5") {
    document.UpdateForm.ptcrd100.checked=false;
    document.UpdateForm.ptcrd101.checked=false;
    document.UpdateForm.ptcrd102.checked=false;
    document.UpdateForm.ptcrd103.checked=false;
  }
}
function DeleteMet(num) {
    if (num==1) {
      document.UpdateForm.dummy010.value=document.UpdateForm.dummy011.value;
      document.UpdateForm.ptcrd010.value=document.UpdateForm.ptcrd011.value;
      document.UpdateForm.dummy011.value=document.UpdateForm.dummy012.value;
      document.UpdateForm.ptcrd011.value=document.UpdateForm.ptcrd012.value;
      document.UpdateForm.dummy012.value=document.UpdateForm.dummy110.value;
      document.UpdateForm.ptcrd012.value=document.UpdateForm.ptcrd110.value;
      document.UpdateForm.dummy110.value=document.UpdateForm.dummy111.value;
      document.UpdateForm.ptcrd110.value=document.UpdateForm.ptcrd111.value;
      document.UpdateForm.dummy111.value=document.UpdateForm.dummy112.value;
      document.UpdateForm.ptcrd111.value=document.UpdateForm.ptcrd112.value;
      document.UpdateForm.dummy112.value=" ";
      document.UpdateForm.ptcrd112.value="";
    }
    if (num==2) {
      document.UpdateForm.dummy011.value=document.UpdateForm.dummy012.value;
      document.UpdateForm.ptcrd011.value=document.UpdateForm.ptcrd012.value;
      document.UpdateForm.dummy012.value=document.UpdateForm.dummy110.value;
      document.UpdateForm.ptcrd012.value=document.UpdateForm.ptcrd110.value;
      document.UpdateForm.dummy110.value=document.UpdateForm.dummy111.value;
      document.UpdateForm.ptcrd110.value=document.UpdateForm.ptcrd111.value;
      document.UpdateForm.dummy111.value=document.UpdateForm.dummy112.value;
      document.UpdateForm.ptcrd111.value=document.UpdateForm.ptcrd112.value;
      document.UpdateForm.dummy112.value=" ";
      document.UpdateForm.ptcrd112.value="";
    }
    if (num==3) {
      document.UpdateForm.dummy012.value=document.UpdateForm.dummy110.value;
      document.UpdateForm.ptcrd012.value=document.UpdateForm.ptcrd110.value;
      document.UpdateForm.dummy110.value=document.UpdateForm.dummy111.value;
      document.UpdateForm.ptcrd110.value=document.UpdateForm.ptcrd111.value;
      document.UpdateForm.dummy111.value=document.UpdateForm.dummy112.value;
      document.UpdateForm.ptcrd111.value=document.UpdateForm.ptcrd112.value;
      document.UpdateForm.dummy112.value=" ";
      document.UpdateForm.ptcrd112.value="";
    }
    if (num==4) {
      document.UpdateForm.dummy110.value=document.UpdateForm.dummy111.value;
      document.UpdateForm.ptcrd110.value=document.UpdateForm.ptcrd111.value;
      document.UpdateForm.dummy111.value=document.UpdateForm.dummy112.value;
      document.UpdateForm.ptcrd111.value=document.UpdateForm.ptcrd112.value;
      document.UpdateForm.dummy112.value=" ";
      document.UpdateForm.ptcrd112.value="";
    }
    if (num==5) {
      document.UpdateForm.dummy111.value=document.UpdateForm.dummy112.value;
      document.UpdateForm.ptcrd111.value=document.UpdateForm.ptcrd112.value;
      document.UpdateForm.dummy112.value=" ";
      document.UpdateForm.ptcrd112.value="";
    }
    if (num==6) {
      document.UpdateForm.dummy112.value=" ";
      document.UpdateForm.ptcrd112.value="";
    }
}
function validateChkBoxs() {
  if(document.UpdateForm.ptcrd015.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd016.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd017.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd018.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd019.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd020.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd021.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd022.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd023.checked==true) {
     return true; }
  if(document.UpdateForm.ptcrd024.checked==true) {
     return true; }
  alert("At least one check box in 'Investigation Methods' must be ticked");
  return false;
}
function validateCancerCode(CancerCode,CancerDesc) {
  f = document.UpdateForm;
  var code = CancerCode.value;
  var serverURL   = "../cgi-bin/comweb81.pbl?reportno=56" +
                    "&valdcode=" + CancerCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|");
    if (ReturnValue[0] == "1") {
      alert("Error: ICD10 Diagnosis code selected is not a Cancer code - '" +
            trim(CancerCode.value) + "'.\n" +
            "Cancer Registration requires a Cancer code.")
      CancerCode.value = '';
      CancerDesc.value = '';
    }
  }
}

