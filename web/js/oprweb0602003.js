//jsVersion  : V11.03.00
//========================================================================
// Program   : oprweb0602003.js
//
// Written   : 27/05/2008
//
// Function  : Standard Functions Used in oprweb0602003.html
//
//=============================================================================
//                 Report 2  template:003 
//=============================================================================
var ItemNo=100;    // Need this to be 100 as the cgi var has to be 8 chars
var itemcont=0;    // start of coding section counter
var code;
//=============================================================================
//                   Function For Input Of CMBS Item Codes        
//=============================================================================

function AddItem02() {
  ItemNo++;

  if (document.getElementById("opcncons").value != "1") {
    var newRow = "<input type=hidden name=dummy >" +
                 "<input type=hidden name=consm" + ItemNo +
                 " id=consm" + ItemNo + ">" +
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
                 "<input type=hidden name=uniqu" + ItemNo +
                 " id=uniqu" + ItemNo + ">" +
                 "<input type=hidden name=itmfl" + ItemNo +
                 " id=itmfl" + ItemNo + ">" +
                 "<input type=hidden name=count" + ItemNo +
                 " id=count" + ItemNo + " value=" + ItemNo + ">" +
                 "<table width=100% border=0 align=center " +
                 "cellpadding=0 cellspacing=0>" +
                 "<tr><td width=15%>" +
                 "<input type=text size=10 maxlength=9" +
                 " name=itemn" + ItemNo + " id=itemn" + ItemNo +
                 " onblur='GetDesc(itemn" + ItemNo +
                 ",descp" + ItemNo + 
                 ",consm" + ItemNo + 
                 ",qunty" + ItemNo + 
                 ",camnt" + ItemNo + 
                 ",gstap" + ItemNo + 
                 ",gstcd" + ItemNo + 
                 ",iamnt" + ItemNo + 
                 ",patpr" + ItemNo + 
                 ",rebpr" + ItemNo + 
                 ",itmfl" + ItemNo + 
                 ");'" +
                 "title='Item'></td>" +
                 "<td >" +
                 "<input type=text size=50 name=descp" + ItemNo +
                 " id=descp" + ItemNo +
                 " maxlength=30 title='Item Description'></td>" +

                 "<td width=10%>" +
                 "<input type=text size=4 name=qunty" + ItemNo +
                 " id=qunty" + ItemNo +
                 " maxlength=4 min=1 title='Quantity' " +
                 "onblur='setAmount(qunty" + ItemNo + ",iamnt" +
                 ItemNo + ",camnt" + ItemNo + ");'></td>" +

                 "<td width=15%>" +
                 "<input type=text size=8 name=camnt" + ItemNo +
                 " id=camnt" + ItemNo +
                 " maxlength=8 min=-99999.99 max=99999.99" +
                 "title='Amount' onblur='SetNextRow()';>" +

                 "<img src='../images/ClearIcon.gif' class='Icon'" +
                 " onclick=ClrItm(itemn" + ItemNo +
                 ",descp" + ItemNo + 
                 ",qunty" + ItemNo +
                 ",gstap" + ItemNo +
                 ",gstcd" + ItemNo +
                 ",itmfl" + ItemNo +
                 ",camnt" + ItemNo + ");>" +
                 "</td></tr></table>";

    RecordCoding.insertAdjacentHTML('BeforeEnd',newRow);

    for (var i=itemcont; i < document.AddForm.length; i++) {
      if (document.AddForm.elements[i].name.match(/itemn/)) {
        if (document.AddForm.elements[i].value=="") {
          document.AddForm.elements[i].focus();
          document.AddForm.elements[i].select();
          document.AddForm.elements[i+2].value="1";
          itemcont=i;  // Start of Coding Section counter
          break;
        }
      }
    }
  } 
  else {  // 'opcncons'=1
    var newRow = "<input type=hidden name=dummy >" +
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
                 "<input type=hidden name=uniqu" + ItemNo +
                 " id=uniqu" + ItemNo + ">" +
                 "<input type=hidden name=itmfl" + ItemNo +
                 " id=itmfl" + ItemNo + ">" +
                 "<input type=hidden name=count" + ItemNo +
                 " id=count" + ItemNo + " value=" + ItemNo + ">" +
                 "<table width=100% border=0 align=center " +
                 "cellpadding=0 cellspacing=0>" +
                 "<tr><td width=15%>" +
                 "<input type=text size=10 maxlength=9" +
                 " name=itemn" + ItemNo + " id=itemn" + ItemNo +
                 " onblur='GetDesc(itemn" + ItemNo +
                 ",descp" + ItemNo +
                 ",consm" + ItemNo + 
                 ",qunty" + ItemNo +
                 ",camnt" + ItemNo +
                 ",gstap" + ItemNo +
                 ",gstcd" + ItemNo +
                 ",iamnt" + ItemNo +
                 ",patpr" + ItemNo +
                 ",rebpr" + ItemNo +
                 ",itmfl" + ItemNo +
                 ");'" +
                 "title='Item'></td>" +
                 "<td>" +
                 "<input type=text size=50 name=descp" + ItemNo +
                 " id=descp" + ItemNo +
                 " maxlength=30 title='Item Description'></td>" +

                 "<td width=20%>" +
                 "<select name=consm" + ItemNo + " id=consm" + ItemNo +
                 " class=Readonly title='Consumption Type'>" +
                 "<option value='0'>Used</option>" +
                 "<option value='1'>Not Used</option>" +
                 "<option value='2'>Expired</option>" +
                 "</select></td>" +

                 "<td width=10%>" +
                 "<input type=text size=4 name=qunty" + ItemNo +
                 " id=qunty" + ItemNo +
                 " maxlength=4 min=1 title='Quantity' " +
                 "onblur='setAmount(qunty" + ItemNo + ",iamnt" +
                 ItemNo + ",camnt" + ItemNo + ");'></td>" +

                 "<td width=15%>" +
                 "<input type=text size=8 name=camnt" + ItemNo +
                 " id=camnt" + ItemNo +
                 " maxlength=8 min=-99999.99 max=99999.99" +
                 "title='Amount' onblur='SetNextRow()';>" +

                 "<img src='../images/ClearIcon.gif' class='Icon'" +
                 " onclick=ClrItm(itemn" + ItemNo +
                 ",descp" + ItemNo +
                 ",qunty" + ItemNo +
                 ",gstap" + ItemNo +
                 ",gstcd" + ItemNo +
                 ",consm" + ItemNo +
                 ",itmfl" + ItemNo +
                 ",camnt" + ItemNo + ");>" +
                 "</td></tr></table>";

    RecordCoding.insertAdjacentHTML('BeforeEnd',newRow);

    for (var i=itemcont; i < document.AddForm.length; i++) {
      if (document.AddForm.elements[i].name.match(/itemn/)) {
        if (document.AddForm.elements[i].value=="") {
          document.AddForm.elements[i].focus();
          document.AddForm.elements[i].select();
          document.AddForm.elements[i+3].value="1";
          itemcont=i;  // Start of Coding Section counter
          break;
        }
      }
    }
  }

  if (ItemNo==101) {
     document.AddForm.itemn101.className="Mandatory"; 
     document.AddForm.itemn101.title="Item Code";
     document.AddForm.descp101.title="Item Description";
  }
} 

function SetNextRow() {  // Function for first Row only as it sets following
  if (ItemNo==101) {   // Rows data for reference Session & Amount
    rowflag=1;
  }

  // Test for any blank lines
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
      document.AddForm.itemcont.value++;
      AddItem02();
    }
}

function FindBlank() {
  pform=document.AddForm;

  for (var i=0; i < document.AddForm.length; i++) {
    if (pform.elements[i].name==code) {
       // Subsquent records set to above row
       break;
    }
  }
}

function SetFocus() {
  for (var i=0; i < document.AddForm.length; i++) {
    if (document.AddForm.elements[i].name.match(/itemn/)) {
      if (isWhitespace(document.AddForm.elements[i].value)) {
        document.AddForm.elements[i].focus();
        break; }}}
}

//=============================================================================
//        Function Calling Remote Scripting To Get MBS Description 
//=============================================================================
function GetDesc(ReturnCode,ReturnName,Consp,Quant,Amount,GstA,GstC,Iamnt,PatPr,RebPr,ItmFl){
  var code=ReturnCode.name;
  Miscdate=AddForm.miscdate.value.replace(/ /g,"+");
  Admissno=AddForm.admissno.value.replace(/ /g,"+");
  caseKeys=AddForm.casekeys.value.replace(/ /g,"+");
  teamNumb=AddForm.teamnumb.value
  ReturnCode.value=ReturnCode.value.replace(/ /g,"");
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value))
    return;
  var Url =  "../cgi-bin/patweb80.pbl?reportno=4&valdcode="+ReturnCode.value +
                          "&valdadno=" + Admissno +
                          "&returndt=" + Miscdate +
                          "&valdedat=" + Miscdate +
//                          "&casekeys=" + caseKeys + "&teamnumb=" + teamNumb +
                          "&valdtype=1";

  var returnValue = RSExecute(Url);    //Remote Script To Get MBS Description
  if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   ReturnName.value=trim(ReturnValue[0]);
   ReturnName.value=ReturnName.value.toUpperCase()

    Amount.value=ReturnValue[1];
    Iamnt.value=ReturnValue[1];          // amount for a single item
    justifyLeft(Amount);
    justifyLeft(Iamnt);

      PatPr.value=ReturnValue[12];
      RebPr.value=ReturnValue[13];
      ItmFl.value=ReturnValue[7];

    GstA.value=ReturnValue[10];
    GstC.value=ReturnValue[11];

    ReturnCode.className="Mandatory";

   if (ReturnValue[7]==1) {

 var x = parseInt(document.AddForm.noofitem.value) +
         parseInt(document.AddForm.mbscount.value);

  var y = parseInt(document.AddForm.mbscount.value);
     y++;

    if ( x >= "999") {
       alert('Maximum Number of MBS Items exceeded.');
       ReturnCode.value="";
       ReturnName.value="";
       Amount.value="";
       ReturnCode.select();
       ReturnCode.className="";
       return;
     } else {
       document.AddForm.mbscount.value=y;
     }
  }

   if (ReturnValue[4]==1) {
     alert("Warning: This is an Exclusion List Item.");
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
     i=ReturnValue[9];
     alert("Warning: Adm Type: " + i + " for this patient is excluded from " +
           "auto adm type update.");
   }

    if ((AddForm.chostyp.value==0)&&(ReturnValue[7]==1)) {
      Quant.className="Readonly";
      Quant.readOnly=true;
    }

    if (document.getElementById("opcncons").value=="1") {
      if (ReturnValue[7]==0) {
        Consp.disabled=false;
        Consp.className="";
        Consp.readOnly=false;
      } else {
        Consp.disabled=true;
        Consp.className="Readonly";
        Consp.readOnly=true;
      }
    }

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
      linkURL="oprweb06.pbl?reportno=02&template=006" +
              "&oncology=" + AddForm.oncology.value.replace(/ /g,"+") +
              "&casekeys=" + AddForm.casekeys.value.replace(/ /g,"+") +
              "&admissno=" + AddForm.admissno.value.replace(/ /g,"+")

      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,0,Left,350,120)
      return;
    }

    if (ReturnValue[10]==2) {
      window.GstA=GstA;
      window.GstC=GstC;
      window.Quant=Quant;
      linkURL="oprweb06.pbl?reportno=02&template=005" +
              "&oncology=" + AddForm.oncology.value.replace(/ /g,"+") +
              "&casekeys=" + AddForm.casekeys.value.replace(/ /g,"+") +
              "&admissno=" + AddForm.admissno.value.replace(/ /g,"+")

      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,0,Left,350,120)
      return;
    }

    if (ReturnValue[3]==1) {
      Amount.className="Readonly";
      window.Amount=Amount;
      window.Iamnt=Iamnt;
      window.PatPr=PatPr;
      window.RebPr=RebPr;
      window.Quant=Quant;

      linkURL="oprweb06.pbl?reportno=02&template=004" +
              "&oncology=" + AddForm.oncology.value.replace(/ /g,"+") +
              "&casekeys=" + AddForm.casekeys.value.replace(/ /g,"+") +
              "&admissno=" + AddForm.admissno.value.replace(/ /g,"+")

      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,0,Left,350,120)
      return;
    }

    if (document.getElementById("opcncons").value=="1") {
      if (ReturnValue[7]==0) {
        Quant.value="1";
        Consp.focus();
        return;
      }
    }

    if ((AddForm.chostyp.value==0)&&(ReturnValue[7]==1)) {
      Quant.value="1";
      document.AddForm.itemcont.value++;
      AddItem02();
    } else {
      Quant.select();
      Quant.focus();
    }

  }
 else {
   ReturnCode.select(); }   
}
function setAmount(quantity,iamnt,amount) {
   amount.value=(quantity.value*iamnt.value);
   RoundNumber(amount,2);
   justifyLeft(amount)

   document.AddForm.itemcont.value++;
   AddItem02();

}

//=============================================================================
//                  Function For Calling MBS Search Frame
//=============================================================================
function MbsProNext(EffDate) {
  for (var i=itemcont; i < document.AddForm.length; i++) {
     if (document.AddForm.elements[i].name.match(/itemn/)) { 
       if (isWhitespace(document.AddForm.elements[i].value)) {
        Code=document.AddForm.elements[i]; 
       break; }
       }
    }
  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()

  if(EffDate!=undefined){
    window.EffDate=EffDate ;
    MbsSearchFrame(Code,AddForm.dummy,EffDate);         // Custom MBS Search 
  } else {
    MbsSearchFrame(Code,AddForm.dummy);                // Custom MBS Search 
  }
}
//=============================================================================
//                  Function For Calling Misc.items Search Frame
//=============================================================================
function MiscNext() {
  for (var i=itemcont; i < document.AddForm.length; i++) {
     if (document.AddForm.elements[i].name.match(/itemn/)) {
       if (isWhitespace(document.AddForm.elements[i].value)) {
        Code=document.AddForm.elements[i];
        break; }
       }
    }
  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()
  currentfield=Code.name.substr(5,3);
  // Custom Misc.Search
  DefMiscChargeSearchFrame(Code,AddForm.dummy,AddForm.multhosp);
}
//=============================================================================
//                   Function Called Before Submitting Form
//============================================================================= 
function Warn() {
  if (validateMandatory(AddForm)) {
    DisButton(AddForm.addmbsbt);    // Disable button to avoid double clicking
    AddForm.submit();
  }
}
function DisButton(buttField) {
  buttField.disabled=true;
  setInterval('buttField.disabled=false',6000);
}
//=============================================================================
//        Function Calling Remote Scripting To clear MBS item code and desc.
//=============================================================================
function ClrItm(a,b,c,d,e,f,g) {

  if (document.AddForm.itemcont.value==0) { ItemNo=100; }

  if (arguments[0].value!="") {
    document.AddForm.itemcont.value--;
  }

  if ((a.value!="") && (g.value=="1")) {
    document.AddForm.mbscount.value--;
  }

  for (var i = 0; i < arguments.length; i++) {
    arguments[i].value="";
    arguments[i].className="";
  }
  arguments[0].focus(); // Set focus back to Item Code input field
}
