//jsVersion  : V11.03.02
//========================================================================
// Program   : patweb7601001.js
//
// Function  : Standard Functions Used in patweb7601001 templates
//
//========================================================================
function AccStatPP() {
  document.PrivPracInv.reportno.value=8
  document.PrivPracInv.template.value=001
  Left=(document.body.clientWidth-220)/2 
  DFrameSubmit(PrivPracInv,190,220,300,100)
} 
     
function PrtInvPP() {

     if (document.showopt != undefined && 
         document.showopt.prdtr030 != undefined) {
       if (!validateMandatory(showopt)) {return;}
     }

   if (document.showopt != undefined && 
         document.showopt.printpdf != undefined) {
         document.PrivPracInv.printpdf.value=document.showopt.printpdf.value
  }
  document.PrivPracInv.reportno.value=5
  document.PrivPracInv.selprint.value=document.showopt.selprint.value
  document.PrivPracInv.nocopies.value=document.showopt.nocopies.value
  SubmitHidden(PrivPracInv);
}

function InpJnlPP() {
  document.PrivPracInv.reportno.value=8
  document.PrivPracInv.template.value=002
  document.PrivPracInv.updttype.value=" "
  DFrameSubmit(PrivPracInv,100,100,500,400)
}

function InsProv() {
    location.href="patweb75.pbl?reportno=19&template=004" +
           "&urnumber="+document.InputWindow.urnumber.value.replace(/ /g,"+") +
           "&ptipr002="+document.InputWindow.invoicen.value.replace(/ /g,"+") +
           "&admissno="+document.InputWindow.admissno.value.replace(/ /g,"+");
 }

function ChangeClaim() {
    LinkURL="priweb02.pbl?reportno=01&template=016&urnumber=" +
             document.InputWindow.urnumber.value.replace(/ /g,"+")
           + "&invoicen=" + document.InputWindow.invoicen.value
           + "&uniqnumb=" + document.InputWindow.uniqnumb.value
           + "&prhre001=" + document.InputWindow.prhre001.value
           + "&prhre002=" + document.InputWindow.prhre002.value
           + "&prhre003=" + document.InputWindow.prhre003.value
           + "&progflag=" + document.InputWindow.progflag.value

    Left=(document.body.clientWidth-700)/2
    DFrameLink(LinkURL,180,150,700,290);
}

function PRFAPP() {
  document.PrivPracInv.reportno.value=1
  document.PrivPracInv.template.value=14
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(PrivPracInv,180,Left,800,400)
}
function CrdAllPP() {
  // disable button to avoid double clicking
  DisButton();

  linkurl="priweb04.pbl?reportno=4&template=1&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&visittyp=" + InputWindow.visittyp.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,170,Left,400,130)
 }

function CrdItmPP() {
 location.href="priweb04.pbl?reportno=4&template=2&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&visittyp=" + InputWindow.visittyp.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+");
 }

function CrdTrnPP() {
 location.href="priweb04.pbl?reportno=4&template=6&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&visittyp=" + InputWindow.visittyp.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+");
 }
function TransPayPP() {
  document.PrivPracInv.reportno.value=8
  document.PrivPracInv.template.value=3
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(PrivPracInv,180,Left,800,310)
}
function JournalAdj() {
  document.InputWindow.updatety.value=0
  document.InputWindow.reportno.value=1
  document.InputWindow.template.value="002"
  DFrameSubmit(InputWindow,100,100,500,400)
}
function JournalEnquiry(journalkey) {
  linkURL="patweb76.pbl?reportno=1&template=053" +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+") +
          "&admissno=" + InputWindow.admissno.value.replace(/ /g,"+") +
          "&urnumber=" + InputWindow.urnumber.value.replace(/ /g,"+") +
          "&journlky=" + journalkey.replace(/ /g,"+")
  Left=(document.body.clientWidth-450)/2
  DFrameLink(linkURL,100,Left,450,220)
}

function PRFAccount() {
  document.InputWindow.updatety.value=0
  document.InputWindow.reportno.value=1
  document.InputWindow.template.value=6
  Left=(document.body.clientWidth-600)/2
  DFrameSubmit(InputWindow,100,Left,600,280)
}

function CrdAll() {
  // disable button to avoid double clicking
  DisButton();

  document.InputWindow.reportno.value=1
  document.InputWindow.template.value=12
  document.InputWindow.updatety.value=0
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(InputWindow,200,Left,800,200)
 }

function CrdItm(urnumber,admissno,invoicen) {
 location.href="patweb76.pbl?reportno=1&template=13&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + InputWindow.admissno.value.replace(/ /g,"+") +
          "&visittyp=" + InputWindow.visittyp.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+");
 }

function CrdTrn(urnumber,admissno,invoicen) {
 location.href="patweb76.pbl?reportno=1&template=16&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + InputWindow.admissno.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+");
 }

function Recptn(urnumber,admissno,invoicen,visittyp) {
 SetCookiePath("InvoiceDetails")
 location.href="rcpweb01.pbl?reportno=6&template=2&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + InputWindow.admissno.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+") +
          "&visittyp=" + InputWindow.visittyp.value.replace(/ /g,"+") +
          "&invcdate=" + InputWindow.invcdate.value.replace(/ /g,"+") +
          "&returnfl=1" +
          "&updttype=R";
 }

function InputRecptn() {
 location.href="rcpweb03.pbl?reportno=4&template=1&urnumber=" +
          InputWindow.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + InputWindow.admissno.value.replace(/ /g,"+") +
          "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+") +
          "&visittyp=" + InputWindow.visittyp.value.replace(/ /g,"+");
 }

function ProviderInv(adm,inv) {
  SetCookiePath('RPList');
  linkURL="patweb79.pbl?reportno=5&template=002" +
          "&admissno=" + adm.value.replace(/ /g,"+") +
          "&nzrpi001=" + adm.value.replace(/ /g,"+") +
          "&invoicno=" + inv.value.replace(/ /g,"+") +
          "&nzrpi002=" + inv.value.replace(/ /g,"+")
  location.href=linkURL;
}

function CshTransfer() {
  document.InputWindow.updatety.value=0
  document.InputWindow.reportno.value=1
  document.InputWindow.template.value=26
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(InputWindow,180,Left,800,310)
}

function OverPayment() {
  document.InputWindow.updatety.value=0
  document.InputWindow.reportno.value=1
  document.InputWindow.template.value=27
  Left=(document.body.clientWidth-800)/2
  DFrameSubmit(InputWindow,180,Left,800,310)
}

function Reassign() {
  document.InputWindow.updatety.value=0
  document.InputWindow.reportno.value=4
  document.InputWindow.template.value=002
  document.InputWindow.updatety.value=1
  Left=(document.body.clientWidth-650)/2
  DFrameSubmit(InputWindow,200,Left,650,400)
}
function ReassignPP() {
    linkURL="priweb04.pbl?reportno=6&template=002" +
            "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+") +
            "&updatety=1" + 
            "&urnumber=" + InputWindow.urnumber.value.replace(/ /g,"+")

    Left=(document.body.clientWidth-650)/2
    DFrameLink(linkURL,100,Left,650,400)

 }

function ActionPlan() {
    linkURL="patweb76.pbl?reportno=1&template=050" +
            "&invoicen=" + InputWindow.invoicen.value.replace(/ /g,"+") +
            "&admissno=" + InputWindow.admissno.value.replace(/ /g,"+") +
            "&urnumber=" + InputWindow.urnumber.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-450)/2
    DFrameLink(linkURL,90,Left,450,300)
  }


function printNCF()
{
  document.InputWindow.updatety.value=0
  document.InputWindow.reportno.value=1
  document.InputWindow.template.value=49
  Left=(document.body.clientWidth-400)/2
  DFrameSubmit(InputWindow,180,Left,400,110)
}

function DisButton() {
  document.showopt.creditall.disabled=true;
  setTimeout('document.showopt.creditall.disabled=false',15000);
}

function setCheckedPDF()
{
  if (document.showopt.d_printpdf.checked == true)
  {
    document.showopt.printpdf.value     = "1";
    document.showopt.selprint.className = "ReadOnly";
    document.showopt.selprint.disabled  = true;
  }
  else
  {
    document.showopt.printpdf.value     = "0";
    document.showopt.selprint.className = "Mandatory";
    document.showopt.selprint.disabled  = false;
  }
}
