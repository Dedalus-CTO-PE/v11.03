//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb7501001.js
//
// Written   : 01.08.2003 
//
// Function  : Standard Functions Used in PATWEB75  Report 1
//
//=============================================================================
//                 Template:001
//=============================================================================
var ItemNo=100;    // Need this to be 100 as the cgi var has to be 8 chars
var itemcont=0;    // start of coding section counter
var code;
var rowflag=0;
//=============================================================================
//                   Function For Input Of CMBS Item Codes
//=============================================================================
function LookupProc(admissno,RETuniq,RETproc,IncTy,RETitem){
  var PopUpFrameDoc = DFrameStart();
  window.admissno=admissno;
  window.RETproc=RETproc;
  window.RETuniq=RETuniq;
  window.RETitem=RETitem;
  PopUpFrameDoc.location.href = "../lookups/NZProcedureSearchFrame.html";
  SearchFrameShow();
}

//----------------------------------------------------------------------------
//        Stops backspace key from navigating the browser backwards on 
//        a readOnly field
//----------------------------------------------------------------------------
function preventBackSpaceKeyOnLoad()
{
    var body = document.getElementsByTagName("body");

    body[0].onkeydown = function()
    {

     if (event.keyCode==8 && event.srcElement.type == "text" && 
        event.srcElement.readOnly == true)
     {
       event.keyCode=0;
       return event.keyCode;
     }
    }
}

function SetNextRow() {  // Function for first Row only as it sets following
  if (ItemNo==101) {   // Rows data for reference Session & Amount
    rowflag=1;
  }
//Test for any blank lines
  var blankflag=false;
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      if (isWhitespace(document.AddForm.elements[i].value)) {
        blankflag=true;   // Found a blank row set true
        break; }}}

    if (blankflag) {
      FindBlank() // a blank line had already been created - use it
     SetFocus()  // Set the focus
    } else {
      document.AddForm.counter.value++;
      AddMBS();
    }
}

function AddMBS() {
  if (document.AddForm.cfeetyp!=undefined){
    if ((document.AddForm.cfeetyp.value=="5") && 
      (document.AddForm.visittyp.value=="3")) {
      AddNZMBS()
      return;
    }
  }

  ItemNo++;

  RCHTML = "<input type=hidden name=dummy id=dummy >" +
           "<input type=hidden name=gstap" + ItemNo +
           " id=gstap" + ItemNo + ">" +
           "<input type=hidden name=gstcd" + ItemNo +
           " id=gstcd" + ItemNo + ">" +
           "<input type=hidden name=iamnt" + ItemNo +
           " id=iamnt" + ItemNo + ">" +
           "<input type=hidden name=patpr" + ItemNo +
           " id=patpr" + ItemNo + ">" +
           "<input type=hidden name=rebpr" + ItemNo +
           " id=rebpr" + ItemNo + ">" +
           "<input type=hidden name=efdat" + ItemNo +
           " id=efdat" + ItemNo + ">" +
           "<input type=hidden name=uniqu" + ItemNo +
           " id=uniqu" + ItemNo + ">" +
           "<input type=hidden name=count" + ItemNo +
           " id=count" + ItemNo + " value=" + ItemNo + ">" +
           "<table width=100% border=0 align=center " +
           "cellpadding=1 cellspacing=0>" +
           "<tr><td width=15%><input type=text size=11 " +
           "maxlength=12 name=mdate" + ItemNo +
           " id=mdate" + ItemNo +
           " class='Date Mandatory' title='Item Date'" +
           " onblur=CheckIDate(AddForm.mdate" + ItemNo + ");>" +
           "<img notab src='../images/DateTimeStamp.gif' " +
           "class='Icon' alt='Current' " +
           "date='AddForm.mdate" + ItemNo + "'>" +
           "<img notab src='../images/DateLookup.gif' " +
           "class='Icon' alt='Show Calendar' " +
           "date='AddForm.mdate" + ItemNo + "'>" +
           "</td>" +
           "<td width=10%><input type=text size=10 maxlength=9" +
           " name=itemn" + ItemNo + " id=itemn" + ItemNo +
           " onblur='GetDesc(AddForm.itemn" + ItemNo +
                           ",AddForm.descp" + ItemNo +
                           ",AddForm.mdate" + ItemNo +
                           ",AddForm.qunty" + ItemNo +
                           ",AddForm.refnc" + ItemNo +
                           ",AddForm.sessn" + ItemNo +
                           ",AddForm.camnt" + ItemNo +
                           ",AddForm.gstap" + ItemNo +
                           ",AddForm.gstcd" + ItemNo +
                           ",AddForm.iamnt" + ItemNo +
                           ",AddForm.patpr" + ItemNo +
                           ",AddForm.rebpr" + ItemNo +
                           ",AddForm.uniqu" + ItemNo +
                           ",AddForm.sttim" + ItemNo +
                           ",AddForm.entim" + ItemNo +
           ");'" +
           "title='Item'></td>" +
           "<td>" +
           "<input type=text size=30 name=descp" + ItemNo +
           " id=descp" + ItemNo + " maxlength=30 " +
           "title='Item Description'></td>" +

           "<td width=5%>" +
           "<input type=text size=4 name=qunty" + ItemNo +
           " id=qunty" + ItemNo + " maxlength=4  min=1 " +
           " title='Quantity' " +
           "onblur='setAmount(AddForm.qunty" + ItemNo + 
                            ",AddForm.iamnt" + ItemNo + 
                            ",AddForm.camnt" + ItemNo + ");'"+
           "></td>" +

           "<td width=11%>" +
           "<input type=text size=12 name=refnc" + ItemNo +
           " id=refnc" + ItemNo + " maxlength=12" +
           " title='Reference'></td>" +

           "<td width=5%>" +
           "<input type=text size=2 name=sessn" + ItemNo +
           " id=sessn" + ItemNo +
           " maxlength=2 title='Session' " +
           "onblur='setSess(AddForm.sessn" + ItemNo + 
                          ",AddForm.count" + ItemNo + 
                          ",AddForm.efdat" + ItemNo + 
                          ",AddForm.camnt" + ItemNo + 
                          ",AddForm.mdate" + ItemNo +
                          ",AddForm.itemn" + ItemNo + ");'></td>" +

           "<td width=10%>" +
           "<input type=text size=5 name=sttim" + ItemNo +
           " id=sttim" + ItemNo +
           " maxlength=5 title='Start Time'" +
           " onchange=setTimes(AddForm.sttim" + ItemNo +
                             ",AddForm.entim" + ItemNo +");>" +
           "<img src='../images/TimeLookup.gif' class=Icon " +
           "onclick=TimeLookupFrame(AddForm.sttim" + ItemNo +");>" +
           "</td>" +
           "<td width=10%>" +
           "<input type=text size=5 name=entim" + ItemNo +
           " id=entim" + ItemNo +
           " maxlength=5 title='End Time'" +
           " onchange=setTimes(AddForm.sttim" + ItemNo +
                             ",AddForm.entim" + ItemNo +");>" +
           "<img src='../images/TimeLookup.gif' class=Icon " +
           "onclick=TimeLookupFrame(AddForm.entim" + ItemNo +");>" +
           "</td>" +

           "<td width=12%>" +
           "<input type=text size=8 name=camnt" + ItemNo +
           " id=camnt" + ItemNo +
           " maxlength=8 min=-99999.99 max=99999.99" +
           "title='Amount' onblur='SetNextRow()';>" +
           "<img src='../images/ClearIcon.gif' class='Icon'" +
           " onclick=ClrItm(AddForm.mdate" + ItemNo + 
                          ",AddForm.itemn" + ItemNo + 
                          ",AddForm.descp" + ItemNo + 
                          ",AddForm.refnc" + ItemNo +
                          ",AddForm.qunty" + ItemNo +
                          ",AddForm.gstap" + ItemNo +
                          ",AddForm.gstcd" + ItemNo +
                          ",AddForm.sessn" + ItemNo + 
                          ",AddForm.camnt" + ItemNo + ");>" +
           "</td></tr></table>";
 
  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);


  var pform=document.AddForm;
  for (var i=itemcont; i < pform.length; i++) {
     if (pform.elements[i].name.match(/itemn/)) {
       if (pform.elements[i-1].value=="") {
          pform.elements[i-1].value=pform.currdate.value;
          pform.elements[i+2].value="1";
          if (ItemNo!=101) {  // Subsquent records set to above row 
              pform.elements[i-1].value=pform.elements[i-19].value;
          }
          if (document.AddForm.sjogfocs!=undefined) {
            setfo=pform.elements[i-1];
          } else {
            setfo=pform.elements[i];
          }
          setTimeout('setfo.focus();',150);
          itemcont=i;                      // Start of Coding Section counter
          break;
        }
     }
   }
}

function ClrItm() 
{
  if(document.AddForm.cfeetyp.value == "5" && document.AddForm.visittyp.value == "3")
  {
    if (document.AddForm.counter.value==0)
      ItemNo=100;

    arguments[0].className="Date Mandatory";

    for(var i = 1; i < arguments.length; i++)
    {
      
     if(arguments[i].name)
       j = arguments[i].name.substr(0,5);
 
     if(j != "qunty")
     {
       arguments[i].value= "";
     } 
     else
     {
       arguments[i].value= "1";
     }
     arguments[i].className="";
    }
    arguments[1].focus(); // Set focus back to Item Code input field
  }
  else
  {
    if (document.AddForm.counter.value==0)
    { 
      ItemNo=100; 
    } 
    if (arguments[1].value!="") 
    {  
      document.AddForm.counter.value--;
    }

    arguments[0].className="Date Mandatory";

    for(var i = 1; i < arguments.length; i++) {

     if(arguments[i].name)
       j=arguments[i].name.substr(0,5);

     if (j!="qunty") {
       arguments[i].value=""; 
       arguments[i].className="";
     }
    }

    arguments[1].focus(); // Set focus back to Item Code input field
 }
 
 countRows();

}

//=============================================================================
//   Function Item date against discharge date
//   Remote Script To Get MBS Description
//=============================================================================
function CheckIDate(DateField) {
  
  if (isWhitespace(DateField.value)) { 
//   DateField.className="Date Mandatory"; 
    DateField.value="";
    DateField.select(); 
    return; 
  }
  if (!checkDate(DateField,'Item-Date')) {
     DateField.value="";
     DateField.focus(); 
     return; }
     
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=4" +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&valdadno=" + AddForm.admissno.value.replace(/ /g,"+") +
        "&valdtype=2"

  var returnValue = RSExecute(serverURL);    
  if (returnValue.status!=0) {
     DateField.value="";
     DateField.focus(); 
  }
}
//=============================================================================
//   *I-0848739
//   Function Item date against discharge date without setting the focus on the
//   date field.  The focus is set in AddMBS()/AddNZMBS()
//=============================================================================
function CheckIDateNoFocus(DateField) {

  if (isWhitespace(DateField.value)) {
    DateField.value="";
    return;
  }
  if (!checkDate(DateField,'Item-Date')) {
     DateField.value="";
     return; }

  var serverURL = "../cgi-bin/patweb80.pbl?reportno=4" +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&valdadno=" + AddForm.admissno.value.replace(/ /g,"+") +
        "&valdtype=2"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
     DateField.value="";
  }
}

//=============================================================================
//        Function Calling Remote Scripting To Get MBS Description 
//=============================================================================
function GetDesc(ReturnCode,ReturnDesc,DateField,Quant,Ref,Sess,
                 Amount,GstA,GstC,Iamnt,PatPr,RebPr,NZUnique,Strttim,Endtime)
{
  var code=ReturnCode.name;

  if ((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnDesc.value))) {
    return; 
  }

  var blankflag=false;
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      if (isWhitespace(document.AddForm.elements[i].value)) {
        blankflag=true;   // Found a blank row set true
        break; }}}
    
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  NZUnique.value=NZUnique.value.replace(/ /g,"")
  
//  ReturnDesc.value="";

  if (isWhitespace(ReturnCode.value)) { return; }
    
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=4" +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&valdadno=" + AddForm.admissno.value.replace(/ /g,"+") +
        "&valduniq=" + NZUnique.value.replace(/ /g,"+") +
        "&valdedat=" + DateField.value.replace(/ /g,"+")

  if (document.AddForm.cfeetyp!=undefined){
    if (document.AddForm.cfeetyp.value=="5") {
      serverURL+="&valdtype=3"
    } else {
      serverURL+="&valdtype=1"
    }
  }

  var returnValue = RSExecute(serverURL);    
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnDesc.value=trim(ReturnValue[0]);
    ReturnDesc.value=ReturnDesc.value.toUpperCase()

    if (document.AddForm.cfeetyp!=undefined){
      if (document.AddForm.cfeetyp.value=="5") {
        ReturnDesc.value=trim(ReturnValue[16]);
        ReturnDesc.value=ReturnDesc.value.toUpperCase()
      }
    }

    Amount.value=ReturnValue[1];
    Iamnt.value=ReturnValue[1];          // amount for a single item
    justifyLeft(Amount);
    justifyLeft(Iamnt);

      PatPr.value=ReturnValue[12];
      RebPr.value=ReturnValue[13];

    GstA.value=ReturnValue[10];
    GstC.value=ReturnValue[11];

    ReturnCode.className="Mandatory";
    DateField.className="Date Mandatory";

    if (ReturnValue[7]==0) {
      Sess.value=" "
      Sess.disabled=true;
      Sess.className="Readonly";
      Sess.readOnly=true; 
 
      
      Strttim.disabled=true;
      Strttim.className="Readonly";
      Strttim.readOnly=true;
      

      Endtime.disabled=true;
      Endtime.className="Readonly";
      Endtime.readOnly=true;

    } else {
      Sess.className="Integer Mandatory"; 
      if ((Sess.value=="") || (Sess.value==" ")) {
        Sess.value="1"; 
      }
      Strttim.disabled=false;
      Strttim.className="";
      Strttim.readOnly=false;
      Strttim.onkeydown = null;

      Endtime.disabled=false;
      Endtime.className="";
      Endtime.readOnly=false;
      Endtime.onkeydown = null;
    }

    if (ReturnValue[2]==1) // keyin description ?
    {
      ReturnDesc.className="Mandatory";
      ReturnDesc.readOnly=false;

//      Amount.readOnly=false;
//      Amount.focus();
//      Amount.select();
    }
    else 
    {
      ReturnDesc.className="Readonly"; 
      ReturnDesc.readOnly=true;
//    Amount.readOnly=true;
//    Quant.focus(); 
//    Quant.select();
//    Quant.onkeydown = null; 
    }

    if (ReturnValue[3]==1) // Keyin Price/Amount
    {
      Amount.className="Number Mandatory";
      Amount.readOnly=false;
    }
    else
    {
      if (Iamnt.value==0 && ReturnValue[7]==0) // mbs amount is 0.00 && no warning msg 
      {
        Amount.className="Number Mandatory";
        Amount.readOnly=false;
//        Amount.onkeydown = null;
      }
      else 
      {
        Amount.className="Readonly";
        Amount.readOnly=true;

      }
    }

   if (document.AddForm.cfeetyp!=undefined){
      if ((document.AddForm.cfeetyp.value=="5") && (ReturnValue[3]==1)) {
        Amount.className="Number Mandatory";
        Amount.readOnly=false;
      } else {
        if (document.AddForm.cfeetyp.value=="5") {
          Amount.className="Readonly";
          Amount.readOnly=true;
        }
      }
    }

// if the amount is zero and keyin amount is set to No, then No quantity.

    if ((ReturnValue[1]==0.00) && (ReturnValue[3]==0)) {
        Quant.className="Readonly";
        Quant.readOnly=true; 
        if (document.AddForm.cfeetyp!=undefined){
          if (document.AddForm.cfeetyp.value=="5") {
             Quant.className="Integer";
             Quant.readOnly=false;
             Quant.onkeydown = null;
          }
        }
    }
    else {
        Quant.className="Integer"; 
        Quant.readOnly=false;
        Quant.onkeydown = null;
    }

    if (ReturnValue[4]==1) {
      alert("Warning: This is an Exclusion List Item.");
    }

    if (ReturnValue[5]==1) {
      alert("Warning: MBS Item has been changed.");
    }

    if (ReturnValue[6]==1) {
      alert("Warning: A Prosthetic may need to be entered.");
    }

    if (ReturnValue[8]==1) {
      i=ReturnValue[9];
      alert("Warning: Admission Type Should be " + i);
    }

    if (ReturnValue[8]==2) {
      alert("Warning: Invalid Suggested Admission Type.");
    }

    if (ReturnValue[8]==3) {
      alert("Warning: Item has been Entered in the Previous Invoice.");
    }

    if (ReturnValue[8]==4) {
      alert("Warning: Possible Admission Type Changed Required.");
    }

    if (ReturnValue[8]==5) {
      alert("Warning: Possible Admission Type Changed Required and Item " +
            "has been Entered in Previous Invoice.");
    }

    if (ReturnValue[8]==6) {
     i=ReturnValue[14];
     alert("Warning: Suggested Adm Type: " + i + 
           " for this patient is excluded from " + "auto adm type update.");
    }

       /*
       if(Quant.readOnly)
        {
          Amount.select(); 
          Amount.focus();
        }
        else
        {
          Quant.select();
          Quant.focus();
        }
        */

     if (blankflag) 
    {
      FindBlank() //Re-entering an already entered code, so set focus.
      SetFocus()  // Set the focus
      //document.AddForm.counter.value++;
    }  
    else 
    {
      //document.AddForm.counter.value++;
      //AddMBS();
      Quant.select();
    }

    countRows(); // recount the items

    if ((ReturnValue[3]==1)&&(ReturnValue[10]==2)) {
      Amount.className="Readonly";
      Amount.readOnly=true; 
  
      window.GstA=GstA;
      window.GstC=GstC;
      window.Amount=Amount;
      window.Iamnt=Iamnt;
      window.PatPr=PatPr;
      window.RebPr=RebPr;
      window.Quant=Quant;
      linkURL="patweb75.pbl?reportno=01&template=004" +
              "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") + 
              "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") 

      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,0,Left,350,150)
      return;
    }

    if (ReturnValue[10]==2) {
      window.GstA=GstA;
      window.GstC=GstC;
      window.Quant=Quant;
      linkURL="patweb75.pbl?reportno=01&template=002" +
              "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") + 
              "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") 

      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,0,Left,350,120)
      return;
    }

    if (ReturnValue[3]==1) {
      Amount.className="Readonly";
      Amount.readOnly=true;
      window.Amount=Amount;
      window.Iamnt=Iamnt;
      window.PatPr=PatPr;
      window.RebPr=RebPr;
      window.Quant=Quant;

      linkURL="patweb75.pbl?reportno=01&template=003" +
              "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") + 
              "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") 

      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,0,Left,350,120)
      return;
    }
  } else { 
    Amount.className="Number Mandatory";
    Amount.readOnly=false;
    Amount.onkeydown = null;
    ReturnCode.select(); 
  }
}
function SetFocus() {
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      if (isWhitespace(document.AddForm.elements[i].value) ) {
        document.AddForm.elements[i].focus(); 
        break; }}}
}
function setTimes(time1,time2) {
  if ((isWhitespace(time1.value)) && (isWhitespace(time2.value))) { 
    time1.className=""; 
    time2.className=""; 
  } else {
    if (!isWhitespace(time1.value)) {
        checkTime(time1,'Start Time');
    }
    if (!isWhitespace(time2.value)) {
        checkTime(time2,'End Time');
    }
    time1.className="Time Mandatory"; 
    time2.className="Time Mandatory"; 
  }
  if ((!isWhitespace(time1.value)) && (!isWhitespace(time2.value))) { 
     start = time1.value.replace(/:/g,"");
     endtm = time2.value.replace(/:/g,"");
     if (endtm<start) {
       alert ("End Time cannot be less than Start Time");
       return;
     }
  }
}

function FindBlank() {
  pform=document.AddForm;

  for (var i=0; i < document.AddForm.length; i++) {
    if (pform.elements[i].name==code) {
//      alert("element name: " + pform.elements[i].name); 
       pform.elements[i-1].value=pform.currdate.value;
       pform.elements[i+2].value="1";
       // Subsquent records set to above row 
       if ((ItemNo!=101) && (code!="itemn101")) {  
            pform.elements[i-1].value=pform.elements[i-16].value;
            pform.elements[i+4].value=pform.elements[i-11].value;
       }
//       setfo=pform.elements[i];
//       setTimeout('setfo.focus();',150);
       break;
    }
  }
}
//=============================================================================
//                  Function For Calling MBS Search Frame
//=============================================================================
function MbsProNext(EffDate) {
  var CodeFld;
  var LastCodeFld;
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      LastCodeFld=document.AddForm.elements[i];
      if (isWhitespace(document.AddForm.elements[i].value)) {
        CodeFld=document.AddForm.elements[i];
        break;
      }
    }
  }

  if (CodeFld==undefined||CodeFld==null) {
    CodeFld=LastCodeFld;
  }

  window.ReturnInvoiceMbs="";    // Var to set for calling of Return Function

  if(EffDate!=undefined){
    window.EffDate=EffDate;
    currentfield=CodeFld.name.substr(5,3);
    MbsSearchFrame(CodeFld,AddForm.dummy,EffDate,ValMBS);  // Custom MBS Search 
  } else {
    currentfield=CodeFld.name.substr(5,3);
    MbsSearchFrame(CodeFld,AddForm.dummy,ValMBS);  // Custom MBS Search 
  }
}


function MiscNext() {
  var CodeFld;
  var LastCodeFld;
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      LastCodeFld=document.AddForm.elements[i];
      if (isWhitespace(document.AddForm.elements[i].value)) {
        CodeFld=document.AddForm.elements[i];
        break; 
      }
    }
  }

  if (CodeFld==undefined||CodeFld==null) {
    CodeFld=LastCodeFld;
  }

  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()
  currentfield=CodeFld.name.substr(5,3);
  // Custom Misc.Search 
  MiscChargeSearchFrame(CodeFld,AddForm.dummy,AddForm.multhosp,ValMBS);  
}
function MiscNextNZP() {
  var CodeFld;
  var LastCodeFld;
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      LastCodeFld=document.AddForm.elements[i];
      if (isWhitespace(document.AddForm.elements[i].value)) {
        CodeFld=document.AddForm.elements[i];
        break; 
      }
    }
  }

  if (CodeFld==undefined||CodeFld==null) {
    CodeFld=LastCodeFld;
  }

  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()
  currentfield=CodeFld.name.substr(5,3);
  // Custom Misc.Search
  MiscChargeSearchFrameNZP(CodeFld,AddForm.dummy,AddForm.multhosp,AddForm.srchclam,AddForm.srchcntr,AddForm.srchtabl,ValNZMBS);
}
//------------------------------------------------------------------------
// Function : NZ Private Miscellaneous Charge Code Search
//------------------------------------------------------------------------
function MiscChargeSearchFrameNZP(ReturnCode,ReturnName,MultHosp,claim,cntr,tabl) {
  window.ReturnFunction="";
  for (var i=6; i < MiscChargeSearchFrameNZP.arguments.length; i++) {
    if (typeof(MiscChargeSearchFrameNZP.arguments[i]) == 'function') {
      ReturnFunction=MiscChargeSearchFrameNZP.arguments[i] }
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnHosp="" ;
  if (MultHosp!=undefined) {
    window.ReturnHosp=MultHosp ;
  }
  if (claim!=undefined) {
    window.ReturnClaim=claim ;
  }
  if (cntr!=undefined) {
    window.ReturnCntr=cntr ;
  }
  if (tabl!=undefined) {
    window.ReturnTable=tabl ;
  }
  window.ReturnCode=ReturnCode ;
  window.ReturnName=ReturnName ;
  PopUpFrameDoc.location.href  = "../lookups/MiscChargeSearchFrame.html";
  SearchFrameShow();
}

function ValMBS() {
  setTimeout('ValItm();',400);
}

function ValNZMBS() {
  setTimeout('ValNZItm();',400);
}


function ValItm() {

  p=document.AddForm;
  var namecod1="itemn" + currentfield;
  var namecod2="descp" + currentfield;
  var namecod3="mdate" + currentfield;
  var namecod4="qunty" + currentfield;
  var namecod5="refnc" + currentfield;
  var namecod6="sessn" + currentfield;
  var namecod7="camnt" + currentfield;
  var namecod8="gstap" + currentfield;
  var namecod9="gstcd" + currentfield;
  var nameco10="iamnt" + currentfield;
  var nameco11="patpr" + currentfield;
  var nameco12="rebpr" + currentfield;
  var nameco13="uniqu" + currentfield;
  var nameco14="sttim" + currentfield;
  var nameco15="entim" + currentfield;

 ans=GetDesc(p[namecod1],p[namecod2],p[namecod3],p[namecod4],p[namecod5],p[namecod6],p[namecod7],p[namecod8],p[namecod9],p[nameco10],p[nameco11],p[nameco12],p[nameco13],p[nameco14],p[nameco15]);

  if (!ans) {
    return;
  }
}

function ValNZItm() {

  p=document.AddForm;
  var namecod1="itemn" + currentfield;
  var namecod2="nzdes" + currentfield;
  var namecod3="mdate" + currentfield;
  var namecod4="qunty" + currentfield;
  var namecod5="refnc" + currentfield;
  var namecod6="sessn" + currentfield;
  var namecod7="camnt" + currentfield;
  var namecod8="gstap" + currentfield;
  var namecod9="gstcd" + currentfield;
  var nameco10="iamnt" + currentfield;
  var nameco11="patpr" + currentfield;
  var nameco12="rebpr" + currentfield;
  var nameco13="uniqu" + currentfield;
  var nameco14="sttim" + currentfield;
  var nameco15="entim" + currentfield;

 ans=GetDesc(p[namecod1],p[namecod2],p[namecod3],p[namecod4],p[namecod5],p[namecod6],p[namecod7],p[namecod8],p[namecod9],p[nameco10],p[nameco11],p[nameco12],p[nameco13],p[nameco14],p[nameco15]);

  if (!ans) {
    return;
  }
}


function setSess(session,countx,efdate,amount,idate,itemcode) {
  sessflag="true";
  if (itemcode.value==" ") {
   return;
  }
  count=countx.value-100;
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/sessn/)) {
//    alert(document.AddForm.elements[i].name);
      dtcount=document.AddForm.elements[i].name.substr(6,8);
      dtcount=dtcount-0;   // Convert String to a number
      

   if ((session.value=="") || (session.value==" ")) {
        if (session.className!="Readonly")
           { session.value="1"; }
       sessflag="false";
       return;}

   j=document.AddForm.previtem.value;
   k=document.AddForm.visittyp.value;
   if (k!="3") {
       sessflag="false";
       return;}

// j=0 (No update on subsequence item) j=1 (No MBS item entered previously)
// j=2 (MBS item entered already)

   if ((j!="0") && (sessflag=="true")) {
      if ((dtcount < count)||
         ((dtcount > count) && (document.AddForm.elements[i-4].value!=""))) {
//   alert(document.AddForm.elements[i].value);
//   alert(document.AddForm.elements[i-5].value);
      if ((session.value)==(document.AddForm.elements[i].value) && 
          (idate.value)==(document.AddForm.elements[i-5].value)) {
       sessflag="false"; }
      }
   }

      if ((dtcount > count) && (idate.value==(document.AddForm.elements[i-5].value))) {
        document.AddForm.elements[i].value=session.value;
        
      } 
    } 
  }

   if (j==0) {
       sessflag="false";
       return;}

    if (sessflag=="true") {
// ans=confirm("Possible Admission Type Changed Required. \n\n Ok to Proceed ?")
//       if (!ans) { return; }

     window.efdate=efdate;
     window.amount=amount;
     window.session=session;
     window.idate=idate;
     linkURL="patweb75.pbl?reportno=01&template=005" +
             "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") + 
             "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
             "&effadate=" + efdate.value 

     Left=(document.body.clientWidth-350)/2
     DFrameLink(linkURL,0,Left,350,220)
     return; 
    }
}

function setAmount(quantity,iamnt,amount) 
{
  if (document.AddForm.cfeetyp!=undefined){
    if (document.AddForm.cfeetyp.value=="5") {

      if(quantity.value=="0")
       { alert("Quantity must not be Zero");
         quantity.value="1";
       } else {
         if(isNaN(quantity.value)) {
            alert("Quantity must be Numeric");
            quantity.value="1"
         }
       }
   amount.value = (quantity.value*iamnt.value);
   RoundNumber(amount,2);
   justifyLeft(amount)

      if(amount.readOnly==true){
        SetNextRowNZ();
      } else {
        amount.select();
      }

    }
  }

   amount.value = (quantity.value*iamnt.value);
   RoundNumber(amount,2);
   justifyLeft(amount)

}

function AddNZMBS() {
  uniqprim=document.AddForm.primuniq.value;
  justifyRight(uniqprim);
  ItemNo++;

  RCHTML = "<input type=hidden name=dummy id=dummy >" +
           "<input type=hidden name=gstap" + ItemNo +
           " id=gstap" + ItemNo + ">" +
           "<input type=hidden name=gstcd" + ItemNo +
           " id=gstcd" + ItemNo + ">" +
           "<input type=hidden name=iamnt" + ItemNo +
           " id=iamnt" + ItemNo + ">" +
           "<input type=hidden name=patpr" + ItemNo +
           " id=patpr" + ItemNo + ">" +
           "<input type=hidden name=rebpr" + ItemNo +
           " id=rebpr" + ItemNo + ">" +
           "<input type=hidden name=efdat" + ItemNo +
           " id=efdat" + ItemNo + ">" +
           "<input type=hidden name=sessn" + ItemNo +
           " id=sessn" + ItemNo + ">" +
           "<input type=hidden name=uniqu" + ItemNo + 
           " id=uniqu" + ItemNo + " value='" + uniqprim + "'>" +
           "<input type=hidden name=sttim" + ItemNo +
           " id=sttim" + ItemNo +">" +
           "<input type=hidden name=entim" + ItemNo +
           " id=entim" + ItemNo +">" +
           "<input type=hidden name=count" + ItemNo +
           " id=count" + ItemNo + " value=" + ItemNo + ">" +
           "<table width=100% border=0 align=center " +
           "cellpadding=1 cellspacing=0>" +
           "<tr><td width=10%><input type=text size=12 " +
           "maxlength=12 name=mdate" + ItemNo + " id=mdate" + ItemNo +
           " class='Mandatory' title='Item Date'" +
           " onblur=CheckIDateNoFocus(AddForm.mdate" + ItemNo + ");>" +
           "<img notab src='../images/DateTimeStamp.gif' " +
           "class='Icon' alt='Current' " +
           "date='AddForm.mdate" + ItemNo + "'>" +
           "<img notab src='../images/DateLookup.gif' " +
           "class='Icon' alt='Show Calendar' " +
           "date='AddForm.mdate" + ItemNo + "'>" +
           "</td>" +
           "<td width=10%>" +
           "<select name=incty" + ItemNo + " id=incty" + ItemNo +
           " title='Inclusion Type' >" +
           "<option value='0'>Included in Contract</option>" +
           "<option value='1'>Bill to Patient</option>" +
           "<option value='2'>Extra to Contract</option>" +
           "</select></td>" +
           "<td width=12%>" +
           "<img src='../images/SearchIcon.gif' class='Icon'" +
           " onclick=LookupProc(AddForm.admissno,AddForm.uniqu" + ItemNo +
                              ",AddForm.proced" + ItemNo +
                              ",AddForm.incty" + ItemNo + 
                              ",AddForm.itemn" + ItemNo + ");>" +
           "<input type=text size=9 name=proced" + ItemNo +
           " id=proced" + ItemNo +
           " maxlength=9 title='Procedure' class=readonly "+
           " readonly=true >"+
           "</td>" +
           "<td width=10%><input type=text size=10 maxlength=9" +
           " name=itemn" + ItemNo + " id=itemn" + ItemNo +
           " onblur='GetDesc(AddForm.itemn" + ItemNo +
                           ",AddForm.nzdes" + ItemNo +
                           ",AddForm.mdate" + ItemNo +
                           ",AddForm.qunty" + ItemNo +
                           ",AddForm.refnc" + ItemNo +
                           ",AddForm.sessn" + ItemNo +
                           ",AddForm.camnt" + ItemNo +
                           ",AddForm.gstap" + ItemNo +
                           ",AddForm.gstcd" + ItemNo +
                           ",AddForm.iamnt" + ItemNo +
                           ",AddForm.patpr" + ItemNo +
                           ",AddForm.rebpr" + ItemNo +
                           ",AddForm.uniqu" + ItemNo +
                           ",AddForm.sttim" + ItemNo +
                           ",AddForm.entim" + ItemNo +
           ");'" +
           "title='Item'></td>" +
           "<td width=40%>" +
           "<input type=text size=100 name=nzdes" + ItemNo +
           " id=nzdes" + ItemNo + " maxlength=45 " +
           " title='Item Description'></td>" +

           "<td width=6%>" +
           "<input type=text size=7 name=qunty" + ItemNo +
           " id=qunty" + ItemNo + " maxlength=4 class=Integer min=1 " +
           " title='Quantity' " +
           "onblur='setAmount(AddForm.qunty" + ItemNo + 
           ",AddForm.iamnt" +
           ItemNo + ",AddForm.camnt" + ItemNo + ");'>" +

           "<input type=hidden name=refnc" + ItemNo +
           " id=refnc" + ItemNo + " maxlength=12 " +
           " title='Reference'></td>" +

           "<td width=12%>" +
           "<input type=text size=10 name=camnt" + ItemNo +
           " id=camnt" + ItemNo +
           " maxlength=8 min=-99999.99 max=99999.99" +
           " title='Amount' onblur='SetNextRowNZ();' >" +

           "<img src='../images/ClearIcon.gif' class='Icon'" +
           " onclick=ClrItm(AddForm.mdate" + ItemNo + 
           ",AddForm.itemn" +
           ItemNo + ",AddForm.nzdes" + ItemNo + 
           ",AddForm.refnc" + ItemNo +
           ",AddForm.qunty" + ItemNo +
           ",AddForm.gstap" + ItemNo +
           ",AddForm.gstcd" + ItemNo +
           ",AddForm.sessn" + ItemNo +
           ",AddForm.camnt" + ItemNo + ");>" +
           "</td></tr></table>";


  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);

  var pform=document.AddForm;
  
  for (var i=itemcont; i < pform.length; i++) {
     if (pform.elements[i].name.match(/itemn/)) {
       if (pform.elements[i-3].value=="") {
          //jay code
          pform.elements[i-3].value=pform.currdate.value;
          pform.elements[i-1].value=pform.defproc.value;
          pform.elements[i+2].value="1";

          if (ItemNo!=101) 
          { // Subsquent records set to above row

            pform.elements[i-1].value=pform.elements[i-21].value;

            //retain last default date (mdate)
            var lastDate   = pform.elements[i-23].value;
            //retain last default procedure (proced)
            var lastProcedure = pform.elements[i-21].value;
            //retain last default Inc Type (inctyp)
            var lastIncType   = pform.elements[i-22].value;
            //retain last default uniq (unique)
            var lastUniq   = pform.elements[i-27].value;

            pform.elements[i-3].value = lastDate;
            pform.elements[i-1].value = lastProcedure;
            pform.elements[i-2].selectedIndex= lastIncType;
            pform.elements[i-7].value = lastUniq;

          }

          setfo=pform.elements[i];
          setTimeout('setfo.focus();',150);
          itemcont=i;                      // Start of Coding Section counter
          break;
        }
     }
   }
}

function SetNextRowNZ() 
{  
  var popupopen=document.getElementById('PopUpScreen');
  if(popupopen.style.display!="none") {
    return;
  }
  // Function for first Row only as it sets following

  if(ItemNo==101) // Rows data for reference Session & Amount
    rowflag=1;

  //Test for any blank lines
  var blankflag=false;

  for(var i=0; i < document.AddForm.length; i++) 
  {
    if(document.AddForm.elements[i].name.match(/itemn/)) 
    {
      // mbs item code populated?
      if(isWhitespace(document.AddForm.elements[i].value)) 
      {
        blankflag=true;   // Found a blank row set true
        break; 
      }
    }
  }

  if(blankflag)
  {
      FindBlank() // a blank line had already been created - use it
      SetFocus()  // Set the focus
  } 
  else if(document.AddForm.elements[5].value != "") 
  {
//    document.AddForm.counter.value++;
      AddNZMBS();
  }
}
//-----------------------------------------------------------------
//
//-----------------------------------------------------------------
function countRows()
{
  var counter = document.getElementById("counter");
  var count = 0;

  for(var i = 0 ; i < document.AddForm.length; i++)
  {
   if(document.AddForm.elements[i].name.match(/itemn/))
   {
     if(!isWhitespace(document.AddForm.elements[i].value))
     {
       count++;
     }
   }
  }
 
  if (counter != undefined) {
    counter.value = count;
  }
}
//-------------------------------------------------------------------
//T0859743 - AddMBS for Eclipse Bulk Billing                         
//-------------------------------------------------------------------
function AddMBSBbil(){

//1st row

    RCHTML="<input type=hidden name=dummy id=dummy >" +
                          "<input type=hidden name=gstap" + ItemNo +
                          " id=gstap" + ItemNo + ">" +
                          "<input type=hidden name=gstcd" + ItemNo +
                          " id=gstcd" + ItemNo + ">" +
                          "<input type=hidden name=iamnt" + ItemNo +
                          " id=iamnt" + ItemNo + ">" +
                          "<input type=hidden name=patpr" + ItemNo +
                          " id=patpr" + ItemNo + ">" +
                          "<input type=hidden name=rebpr" + ItemNo +
                          " id=rebpr" + ItemNo + ">" +
                          "<input type=hidden name=efdat" + ItemNo +
                          " id=efdat" + ItemNo + ">" +
                          "<input type=hidden name=uniqu" + ItemNo +
                          " id=uniqu" + ItemNo + ">" +
                          "<input type=hidden name=refnc" + ItemNo +
                          " id=refnc" + ItemNo + ">" +
                          "<input type=hidden name=sessn" + ItemNo +
                          " id=sessn" + ItemNo + ">" +
                          "<input type=hidden name=count" + ItemNo +
                          " id=count" + ItemNo + " value=" + ItemNo + ">" +
                          "<table width=100% border=0 align=center " +
                          "cellpadding=1 cellspacing=0>" +
                          "<tr><td width=11%><input type=text size=11 " +
                          "maxlength=12 name=mdate" + ItemNo + 
                          " id=mdate" + ItemNo +
                          " class='Date Mandatory' title='Item Date'" +
                          " onblur=CheckIDateNoFocus(AddForm.mdate" + ItemNo + ");>" +
                          "<img notab src='../images/DateTimeStamp.gif' " +
                          "class='Icon' alt='Current' " +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "<img notab src='../images/DateLookup.gif' " +
                          "class='Icon' alt='Show Calendar' " +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "</td>" +
                          "<td width=7%><input type=text size=10 maxlength=9" +
                          " name=itemn" + ItemNo + " id=itemn" + ItemNo +
                          " onblur='GetDesc(AddForm.itemn" + ItemNo +
                          ",AddForm.descp" + ItemNo + ",AddForm.mdate" + ItemNo + 
                          ",AddForm.qunty" + ItemNo +  
                          ",AddForm.refnc" + ItemNo + ",AddForm.sessn" + ItemNo +
                          ",AddForm.camnt" + ItemNo + 
                          ",AddForm.gstap" + ItemNo + 
                          ",AddForm.gstcd" + ItemNo + 
                          ",AddForm.iamnt" + ItemNo + 
                          ",AddForm.patpr" + ItemNo + 
                          ",AddForm.rebpr" + ItemNo + 
                          ",AddForm.uniqu" + ItemNo + 
                          ",AddForm.sttim" + ItemNo + 
                          ",AddForm.entim" + ItemNo + 
                          ");'" +
                          "title='Item'></td>" +
                          "<td width=24%>" +
                          "<input type=text size=53 name=descp" + ItemNo +
                          " id=descp" + ItemNo +
                          " maxlength=30 " +
                          "title='Item Description'></td>" +

                          "<td width=5%>" +
                          "<input type=text size=4 name=qunty" + ItemNo +
                          " id=qunty" + ItemNo +
                          " maxlength=4  min=1 " +
                          "title='Quantity' " +
                          "onblur='setAmount(AddForm.qunty" + ItemNo + 
                                  ",AddForm.iamnt" +
                                  ItemNo + ",AddForm.camnt" + ItemNo + ");'></td>" +

                          "<td width=6%>" +
                          "<input type=text size=5 name=sttim" + ItemNo +
                          " id=sttim" + ItemNo +
                          " maxlength=5 title='Start Time'" +
            " onchange=setTimes(AddForm.sttim" + ItemNo +
                                ",AddForm.entim" + ItemNo +");>" +
                          "<img src='../images/TimeLookup.gif' class=Icon " +
                          "onclick=TimeLookupFrame(AddForm.sttim" + ItemNo +");>" +
                          "</td>" +
                          "<td width=6%>" +
                          "<input type=text size=5 name=entim" + ItemNo +
                          " id=entim" + ItemNo +
                          " maxlength=5 title='End Time'" +
            " onchange=setTimes(AddForm.sttim" + ItemNo +
                               ",AddForm.entim" + ItemNo +");>" +
                          "<img src='../images/TimeLookup.gif' class=Icon " +
                          "onclick=TimeLookupFrame(AddForm.entim" + ItemNo +");>" +
                          "</td>" +

                          "<td width=5%>" +
                          "<input type=text size=2 name=durat" + ItemNo +
                          " id=durat" + ItemNo +
                          " maxlength=3 title='Duration'" +
                          "onblur='setDuration(AddForm.durat" + ItemNo + 
                          ",AddForm.acovr" +
                           ItemNo +
                          ");'" +
                          "></td>" +
                          "<td width=8% align=center>" +
                          "<input type=checkbox name=acovr" + ItemNo +
                          " id=acovr" + ItemNo +
                          " title='A/C Override' value='1'>" +
                          "</td>" +

                         "<td width=8%>" +
                         "<input type=text size=8 name=camnt" + ItemNo +
                         " id=camnt" + ItemNo +
                         " maxlength=8 width=8% min=-99999.99 max=99999.99" +
                          "title='Amount' onblur='SetNextRow()';>" +
                          "<img src='../images/ClearIcon.gif' class='Icon'" +
                          " onclick=ClrItm(AddForm.mdate" + ItemNo + 
                          ",AddForm.itemn" +
                          ItemNo + ",descp" + ItemNo + 
                                   ",qunty" + ItemNo +
                                   ",gstap" + ItemNo +
                                   ",gstcd" + ItemNo +
                                   ",durat" + ItemNo +
                                   ",mulpr" + ItemNo +
                                   ",acovr" + ItemNo +
                                   ",dupsr" + ItemNo +
                                   ",srvtx" + ItemNo +
                                   ",hosin" + ItemNo +
                                   ",numpt" + ItemNo +
                                   ",lspnv" + ItemNo +
                                   ",sldmc" + ItemNo +
                                   ",rovrc" + ItemNo +
                          ",camnt" + ItemNo + ");>" +
                          "</td></tr></table>";

  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);
 
//2nd row 
      RCHTML2=
         "<table width=100% border=0 align=center cellpadding=0 cellspacing=0>"+
            "<tr bgcolor=#CCFFFF>" +
            "<td><b>Multi Proc</b></td>" +
            "<td><b>Duplicate Override</b></td>" +
            "<td><b>Service Text</b></td>" +
            "<td><b>Hosp Ind &nbsp;&nbsp;&nbsp;</b>" +
            "<td><b>Number of Patients</b></td>" +
            "<td><b>Restrictive Override</b></td>" +
            "<td><b>SD</b></td>" +
            "<td><b>LSPN</b>" +
            "</td></tr>" +

            "<tr>" +
            "<td align=center>" +
              "<input type=checkbox name=mulpr" + ItemNo +
              " id=mulpr" + ItemNo +
              " title='Multi Proc' value='1'>" +
            "</td>" +
            "<td align=center>" +
              "<input type=checkbox name=dupsr" + ItemNo +
              " id=dupsr" + ItemNo +
              " title='Duplicate Service' value='1'>" +
            "</td>" +
            "<td>" +
              "<input type=text size=50 name=srvtx" + ItemNo +
              " id=srvtx" + ItemNo +
              " maxlength=100 onblur='validateServiceText(this);'" +
              " title='Service Text'>" +
            "</td>" +

            "<td>" +
              "<input type=checkbox name=hosin" + ItemNo +
              " id=hosin" + ItemNo +
              " title='Hospital Indicator' value='1'" +
              " onclick=ServTxtMan(AddForm.hosin" + ItemNo + ",AddForm.srvtx" +
                         ItemNo + ");>" +
              " &nbsp;&nbsp;&nbsp; " +
            "</td>" +
            "<td>" +
              "<input type=text size=5 name=numpt" + ItemNo +
              " id=numpt" + ItemNo +
              " maxlength=2 " +
              " onblur='checkNumber(this);justifyRight(this);'" +
              " title='Number of Patients'>" +
            "</td>" +
            "<td>" +
              "<select name=rovrc" + ItemNo +
              " id=rovrc" + ItemNo +
              " > " +
              "<option></option>" +
              "</select>" +
            "</td>" +
            "<td>" +
              "<select name=sldmc" + ItemNo +
              " id=sldmc" + ItemNo +
              " > " +
              "<option></option>" +
              "</select>" +
            "</td>" +

            "<td>" +
              "<input type=text size=5 name=lspnv" + ItemNo +
              " id=lspnv" + ItemNo +
              " maxlength=6 onblur='validateSixZeroes(this);' " +
              " title='Location Specific Practice No. Value'>" +
            "</td>" +

            "<tr><td colspan=8><hr></td></tr>" +
    "</table>";

  var node2 = document.createElement("RCElement2");
  node2.innerHTML=RCHTML2;
  document.getElementById("RecordCoding").appendChild(node2);

//Restrictive Override Code Options
   document.getElementById('rovrc'+ItemNo).outerHTML =
           document.getElementById('rovrc'+ItemNo).outerHTML.
   replace(document.getElementById('rovrc'+ItemNo).innerHTML,
            document.getElementById('rovrcSPAN').innerHTML);

//Self Deem Code Options 
   document.getElementById('sldmc'+ItemNo).outerHTML =
           document.getElementById('sldmc'+ItemNo).outerHTML.
   replace(document.getElementById('sldmc'+ItemNo).innerHTML,
           document.getElementById('sldmcSPAN').innerHTML);

//Set default date, quantity=1 and set focus on item input
  var pform=document.AddForm;
  for (var i=itemcont; i < pform.length; i++) {
     if (pform.elements[i].name.match(/itemn/)) {
       if (pform.elements[i-1].value=="") {
          pform.elements[i-1].value=pform.currdate.value;
          pform.elements[i+2].value="1";   //set quantity=1
          if (ItemNo!=101) {  // Subsquent records set to above row
              pform.elements[i-1].value=pform.elements[i-29].value;
          }
          if (document.AddForm.sjogfocs!=undefined) {
            setfo=pform.elements[i-1];
          } else {
            setfo=pform.elements[i];
          }
          setTimeout('setfo.focus();',150);
          itemcont=i;                      // Start of Coding Section counter
          break;
        }
     }
   }

}
//-------------------------------------------------------------------
//T0859743 - setDuration Eclipse Bulk Billing
//-------------------------------------------------------------------
function setDuration(duration,acoverride) {

   if (isWhitespace(duration.value)) {return;}

   duration.value=(duration.value*1);
   justifyLeft(duration)

   if (duration.value < 1) {
     alert('Duration must be more than 0.');
     duration.value='';
     duration.select();
     return;
   }

   if (duration.value%15 != 0 ) {
     alert('Duration must be divisible by 15 minutes.');
     duration.value='';
     duration.select();
     return;
   }

   acoverride.select();
}
function validateSixZeroes(lspnfield) {
  if (lspnfield.value=="000000") {
    alert("LSPN value cannot be 000000");
    lspnfield.value="";
  }
}
function validateServiceText(servicetext) {
  if (!TextBlurHandler(servicetext)) {
    CancelEvent(servicetext);
  }
}

function ServTxtMan(hospind,servtext) {
 if(hospind.checked==true) {
   servtext.className="Mandatory";
 } else {
   servtext.className="";
 }
}


//T0859743-end

