//jsVersion  : V11.03.04
//=============================================================================
// Program   : patweb7101001.js
//
// Written   : 19.07.2006             
//
// Function  : Standard Functions Used in PATWEB71  Report 1 Template 001
//
//=============================================================================

function RaiseInv() {

     if (document.ItemForm.ptcnppin != undefined && 
         document.ItemForm.pbalance.value!= undefined) {

       if (document.ItemForm.ptcnppin.value=="1" &&
           document.ItemForm.pbalance.value!="0") {

      if(!confirm("'OK' to raise Health Fund Invoice with patient portion " +
        "included. \n " +
        "Cancel to Review Patient Only Invoice. "))
        {
        ShowWaitScreen();
        location.href="patweb71.pbl?reportno=1&template=019" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+")
        return;
        }
       }
     }

     if ( (document.ItemForm.invtotal != undefined) && 
          (document.ItemForm.invtotal.value < 0) ) {
      ans= confirm("This invoice will be raised with a credit balance." +
          " \n\n Click OK to continue with raising an invoice or " +
          " Cancel to go back.")
       if (!ans) { return }
     }


     // disable button to avoid double clicking
       DisButton();

     ShowWaitScreen();

     document.UpdateForm.upadmtyp.value="0";
     ICD10SugClass();

     document.UpdateForm.upadmtyp.value=
     document.UpdateForm.upadmtyp.value.replace(/ /g,"+");

     document.UpdateForm.chngdate.value=
     document.UpdateForm.chngdate.value.replace(/ /g,"+");
     document.UpdateForm.prntflag.value=
     document.UpdateForm.prntflag.value.replace(/ /g,"+");
     document.UpdateForm.urnumber.value=
     document.UpdateForm.urnumber.value.replace(/ /g,"+");
     document.UpdateForm.admissno.value=
     document.UpdateForm.admissno.value.replace(/ /g,"+");
     document.UpdateForm.redirect.value=
     document.UpdateForm.redirect.value.replace(/ /g,"+");

//   var waitMessage="Processing, please wait.<br>"+
//                   "Do NOT Refresh the page or click the BACK button<br>"+
//                   "Please allow up to 15 seconds for Invoice to be generated"
//   DFrameMessage(waitMessage,500,120);

     if (validateMandatory(UpdateForm))
     {
        setTimeout('HideWaitScreen();',15000);
        UpdateForm.target="PopUpFrame";
        UpdateForm.submit();
     }

//   SubmitHidden(UpdateForm);

}

function ICD10SugClass() {
  var serverURL = "../cgi-bin/patweb71.pbl?reportno=15" +
            "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");

    if (ReturnValue[0]==1) {
      return;
    }

    if (ReturnValue[0]==2) {
      alert("Coding is not complete. The Admission Type will not be Updated automatically.");
    }

    if (ReturnValue[0]==3) {
      p=document.UpdateForm.ptcnicls.value
      if (p=="1") {
        alert("No ICD10 Suggested Classification found. \n The Admission Type will not be updated automatically.");
      }
    }

    if (ReturnValue[0]==0) {
      document.UpdateForm.upadmtyp.value="1";

      i=ReturnValue[1];
      p=document.UpdateForm.ptcnicls.value
      if (p=="1") {
        if (!confirm("Admission Type will change to: " + i +
                    " \n\n Ok to Proceed ? ")) {
          document.UpdateForm.upadmtyp.value="0"; }
      }
    }
 }
}

function SXInvoice() {
  if(UpdateForm.ptcndbin.value!="1"){
    if (trim(document.ItemForm.dischrgd.value)=="Current" ||
        trim(document.ItemForm.dischrgd.value)=="On-Leave") {
    ans=confirm("Warning Patient still currently Admitted.\n\n Ok to Proceed ?")
     if (!ans) { return }
    }
  }
  if(trim(UpdateForm.nzpeflag.value)=="1"){
    if(confirm("The Patient is not discharged, do you wish to discharge "
           + "the patient?\n Click Ok to Discharge")){
           linkurl="patweb96.pbl?reportno=05&template=001"+
                   "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+")+
                   "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
           location.href=linkurl;
           DisButton();
           return;
     } else {
           DisButton();
           return;
     }
  }
  if(trim(UpdateForm.nzpeflag.value)=="2"){
    if(!confirm("Theatre Booking has been Cancelled for this Visit\n "
           + "Do you wish to Continue?\n ")){
           DisButton();
           return;
     }
  }
  if(trim(UpdateForm.nzpeflag.value)=="3"){
    if(confirm("Please Check Procedure Details "
           + "\n Click Ok to Edit Procedures")){
           linkurl="oprweb06.pbl?reportno=11&template=001"+
                   "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+")+
                   "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
           location.href=linkurl;
           DisButton();
           return;
     } else {
           DisButton();
           return;
     }

  }
  if(trim(UpdateForm.nzpeflag.value)=="4"){
    if(confirm("Please Update Planned Procedure Details "
           + "\n Click Ok to Edit Procedures")){
           linkurl="oprweb06.pbl?reportno=11&template=001"+
                   "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+")+
                   "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
           location.href=linkurl;
           DisButton();
           return;
     } else {
           DisButton();
           return;
     }

  }
  if(trim(UpdateForm.nzpeflag.value)=="5"){
    if(confirm("Please Update Procedure Duration Details "
           + "\n Click Ok to Edit Procedures")){
           linkurl="oprweb06.pbl?reportno=11&template=001"+
                   "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+")+
                   "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
           location.href=linkurl;
           DisButton();
           return;
     } else {
           DisButton();
           return;
     }
  }
  if(trim(UpdateForm.presflag.value)=="1"){
    if(confirm("Please Check Person Responsible for Account "
           + "\n Click Ok to Edit Details")){
           linkurl="patweb89.pbl?reportno=01&template=022"+
                   "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+")+
                   "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
           location.href=linkurl;
           DisButton();
           return;
     } else {
           DisButton();
           return;
     }

  }
  if(confirm("Are you sure you wish to raise the invoice(s)?")){
    RaiseInv();
  }

}

function DisButton() {
  document.UpdateForm.printbut.disabled=true;
  setTimeout('document.UpdateForm.printbut.disabled=false',15000);
  if (document.UpdateForm.printbec!=undefined) {
    document.UpdateForm.printbec.disabled=true;
    setTimeout('document.UpdateForm.printbec.disabled=false',15000);
  }
}

function AddItem() {
    Left=(document.body.clientWidth-980)/2
    LinkURL="patweb75.pbl?reportno=01&template=001&urnumber=" +
             document.UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&admissno=" +
             document.UpdateForm.admissno.value.replace(/ /g,"+")
    DFrameLink(LinkURL,50,Left,980,430);
 }

function FavItems() {

  Left=(document.body.clientWidth-980)/2

  LinkURL = "oprweb06.pbl?reportno=20&template=001" +
  "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,'+') +
  "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,'+') +
  "&mdate000=" + document.UpdateForm.mdate000.value.replace(/ /g,"+")

  DFrameLink(LinkURL,0,Left,980,800);
}

function InsProv() {
    SetInvRetCookie();
    location.href="patweb75.pbl?reportno=19&template=001" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&ptipr002="+document.PatientLinks.dummy.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+");
 }

function DeleteItem(urnumber,admissno,transnum,chngdesc,chngamnt,recttype) {
    if (recttype=="7") {
    linkURL="patweb71.pbl?reportno=1&template=018" +
            "&urnumber=" + urnumber.replace(/ /g,"+") +
            "&admissno=" + admissno.replace(/ /g,"+") +
            "&transnum=" + transnum.replace(/ /g,"+") +
            "&chngdesc=" + chngdesc.replace(/ /g,"+") +
            "&chngamnt=" + chngamnt.replace(/ /g,"+");
    } else {
    linkURL="patweb71.pbl?reportno=1&template=009" +
            "&urnumber=" + urnumber.replace(/ /g,"+") +
            "&admissno=" + admissno.replace(/ /g,"+") +
            "&transnum=" + transnum.replace(/ /g,"+") +
            "&chngdesc=" + chngdesc.replace(/ /g,"+") +
            "&chngamnt=" + chngamnt.replace(/ /g,"+");
    }
    Left=(document.body.clientWidth-450)/2
    DFrameLink(linkURL,90,Left,450,290)
  }

function DispInv() {
  if (validateMandatory(ItemForm)) {
    if (document.ItemForm.invtodat.value!=document.ItemForm.chngdate.value) {
       document.ItemForm.chngdate.value=document.ItemForm.invtodat.value;
       ItemForm.submit();
    } else {
      alert("Please modify invoice to date before recalculation");
    }
  }
}

function ShowStepdown(urnumber,admissno,chngdate,unqualified,contrcid)
{
   if (document.UpdateForm.scmxflag!=undefined) {
     UpdateForm.cmixflag.value=UpdateForm.scmxflag.value;
   }
   if  (UpdateForm.cmixflag.value=="1") {
     if (document.UpdateForm.cmstrtdt!=undefined) {
       if (chngdate < SetDateYYYYMMDD(UpdateForm.cmstrtdt.value)) {
         UpdateForm.cmixflag.value="0";
       }
     }
     if (unqualified=="U") {
       UpdateForm.cmixflag.value="0";
     }
   }

   if  (UpdateForm.cmixflag.value!="1") {

    linkURL="patweb71.pbl?reportno=4&template=011" +
            "&urnumber=" + urnumber.replace(/ /g,"+") +
            "&admissno=" + admissno.replace(/ /g,"+") +
            "&chngdate=" + chngdate.replace(/ /g,"+") +
            "&bfecontr=" + contrcid.replace(/ /g,"+") +
            "&dispstep=1";
    Left=(document.body.clientWidth-950)/2;
    DFrameLink(linkURL,100,Left,950,480);
   } else {
    linkURL="patweb71.pbl?reportno=4&template=012" +
            "&urnumber=" + urnumber.replace(/ /g,"+") +
            "&admissno=" + admissno.replace(/ /g,"+") +
            "&chngdate=" + chngdate.replace(/ /g,"+") +
            "&dispstep=1";
    Left=(document.body.clientWidth-950)/2;
    DFrameLink(linkURL,0,Left,950,550);
   }

}

function CalcFee() {
  ans=confirm("Are you sure you want to Calculate Doctor Attendance Fees Now ?")
   if (ans)  {
      if (validateMandatory(ItemForm))
        ItemForm.updttype.value = "C";
        ItemForm.submit();
      }
}

function RemDocFee() {
  ans=confirm("Are you sure you want to Remove Doctor Attendance Fees Now ?")
   if (ans)  {
      if (validateMandatory(ItemForm))
        ItemForm.updttype.value = "R";
        ItemForm.submit(); 
      }
}     
        
function AddDisc() {
    if (UpdateForm.discflag.value==1) {
      alert('Doctor Attendance Fees must be Removed First !');
      return;
    }        
    Left=(document.body.clientWidth-500)/2
    LinkURL="patweb71.pbl?reportno=01&template=017" +
            "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
    DFrameLink(LinkURL,250,Left,500,250);
}

function Comments() {
  LinkURL="cliweb06.pbl?reportno=12&template=007&urnumber=" +
           document.UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" +
           document.UpdateForm.admissno.value.replace(/ /g,"+") +
          "&notetype=003"
  Left=(document.body.clientWidth-880)/2
  DFrameLink(LinkURL,50,Left,880,300);
}
function Insurance(){
    SetInvRetCookie();
    location.href="patweb96.pbl?reportno=3&template=015" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
           "&updatety=1";
}
function AdmissType(){
    SetInvRetCookie();
    location.href="patweb96.pbl?reportno=3&template=016" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+")
}
function Stepdown(){
    SetInvRetCookie();
    location.href="patweb71.pbl?reportno=4&template=003" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+")
}
function SetInvRetCookie() {
  document.cookie="InvoiceReturn="+escape(location.href)+";"
}

function ChgProcItems() {
    SetInvRetCookie();
    location.href="patweb75.pbl?reportno=1&template=008" +
         "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+");
}

function AdjustFee() {
    SetInvRetCookie();
    location.href="patweb71.pbl?reportno=1&template=020" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
           "&updatety=1";
}

function Procedure() {
    SetInvRetCookie();
    location.href="patweb89.pbl?reportno=9&template=001" +
           "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
           "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+") +
           "&updatety=1";
}

function setCheckedValue()
{
  if (document,UpdateForm.d_actionplan.checked == true)
  {
    document.UpdateForm.actnplan.value     = "1";
    document.UpdateForm.actncode.className = "Mandatory";
    document.UpdateForm.initdate.className = "Mandatory";
    document.UpdateForm.actncode.disabled  = false;
    document.UpdateForm.initdate.disabled  =false;
  }
  else
  {
    document.UpdateForm.actnplan.value     = "0";
    document.UpdateForm.actncode.className = "";
    document.UpdateForm.initdate.className = "";
    document.UpdateForm.actncode.disabled  = true;
    document.UpdateForm.initdate.disabled  = true;
  }
}
function setCheckedPDF()
{
  if (document,UpdateForm.d_printpdf.checked == true)
  {
    document.UpdateForm.printpdf.value     = "1";
    document.UpdateForm.selprint.className = "ReadOnly";
    document.UpdateForm.selprint.disabled  = true;
  }
  else
  {
    document.UpdateForm.printpdf.value     = "0";
    document.UpdateForm.selprint.className = "Mandatory";
    document.UpdateForm.selprint.disabled  = false;
  }
}
function LinkCertificate() {
    LinkURL="hosweb01.pbl?reportno=04&template=001&urnumber=" +
             document.UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&admissno=" +
             document.UpdateForm.admissno.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-900)/2
    DFrameLink(LinkURL,50,Left,900,400);
}
function ToggleHeader(xDiv) {
  if (xDiv.className=="x-tool-left x-tool-expand") {
    xDiv.className="x-tool-left x-tool-collapse";
    document.getElementById('InvoiceHeader').innerHTML=
    document.getElementById('ShowInvoiceHeader').innerHTML
    document.getElementById('InvoiceHeader').style.display="";
  } 
  else {
    xDiv.className="x-tool-left x-tool-expand";
    document.getElementById('InvoiceHeader').innerHTML="";
    document.getElementById('InvoiceHeader').style.display="none";
  } 
}

function InvPendRedir()
{
  InvoicePendingPath = GetCookieData("InvoicePendingPath");

  if (isWhitespace(InvoicePendingPath)) {
    location.href="patweb71.pbl?reportno=8&template=1&viewtype=0";
    return;
  }

  if (InvoicePendingPath != 'unknown') {
    location.href = InvoicePendingPath;
  }else{
    location.href="patweb71.pbl?reportno=8&template=1&viewtype=0";
  }
}

function LinkICDCoding() {
    LinkURL="patweb98.pbl?reportno=01&template=096&urnumber=" +
             document.UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&admissno=" +
             document.UpdateForm.admissno.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-800)/2
    DFrameLink(LinkURL,50,Left,800,600);
}

function LinkTheaItems() {
    LinkURL="patweb98.pbl?reportno=01&template=022&urnumber=" +
             document.UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&admissno=" +
             document.UpdateForm.admissno.value.replace(/ /g,"+")
    Left=(document.body.clientWidth-800)/2
    DFrameLink(LinkURL,50,Left,800,400);
}

function InvComments() {
  LinkURL="patweb76.pbl?reportno=01&template=046&urnumber=" +
           document.PatientLinks.urnumber.value.replace(/ /g,"+") +
          "&admissno=" +
           document.PatientLinks.admissno.value.replace(/ /g,"+")
  Left=(document.body.clientWidth-880)/2
  DFrameLink(LinkURL,50,Left,880,300);
}

function BulkDelItems() {
    SetInvRetCookie();
    location.href="patweb75.pbl?reportno=1&template=011" +
         "&urnumber="+document.PatientLinks.urnumber.value.replace(/ /g,"+") +
         "&admissno="+document.PatientLinks.admissno.value.replace(/ /g,"+");
}

