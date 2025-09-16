//jsVersion  : V11.03.00
//========================================================================
// Program   : hicweb0101005.js
//
// Function  : Standard Functions Used in hicweb0101005 templates 
//
// Version   : 
//             V9.05.00 12/04/2006 J.Tan  
//                      Created include
//
//========================================================================
function Action() {
 if (confirm("Are you sure you want to Update Batch Status to Actioned? ")) {
   DisButton(UpdateForm.actnbutton);
   document.UpdateForm.updatety.value="E";
   document.UpdateForm.nextpage.value="0";
   document.UpdateForm.submit();
  }
}

function ReExtrBatch() {
   DisButton(UpdateForm.rextrbutton);
   document.UpdateForm.updatety.value="Y";
   document.UpdateForm.nextpage.value="0";
//  document.UpdateForm.redirect.value="rshweb02.pbl?reportno=1&template=1";
   document.UpdateForm.submit();
}

function ExtrBatch() {
   DisButton(UpdateForm.extrbutton);
   document.UpdateForm.updatety.value="X";
   document.UpdateForm.nextpage.value="0";
//  document.UpdateForm.redirect.value="rshweb02.pbl?reportno=1&template=1";
   document.UpdateForm.submit();
}

function DisButton(buttField) {
  buttField.disabled=true;
  setInterval('buttField.disabled=false',6000);
}

function DispSuper() {
  if (UpdateForm.actioned.value==1) {
        UpdateForm.actnbutton.disabled=true;
  }
  if (UpdateForm.extrflag.value==1) {
        UpdateForm.extrbutton.disabled=true;
  }
  if (UpdateForm.rextrflg.value==1) {
        UpdateForm.rextrbutton.disabled=true;
  }
  if (UpdateForm.depsverf.value==1) {
     UpdateForm.depvbutton.disabled=true;
  }
  ind=document.UpdateForm.supervis.value
  if (ind!="1") {
    SuperAvail.innerHTML="";
  } else {
    SuperAvail.innerHTML=SuperOptions.innerHTML;
  }
}

function MailForm() {
 if (confirm("Are you sure you want to Mail Claim Form? ")) {
   document.DB1NPrintForm.submit();
   if (!isWhitespace(UpdateForm.selprint.value)) {
    document.UpdateForm.updatety.value="N";
    document.UpdateForm.nextpage.value="0";
    document.UpdateForm.submit();
   }
 }
}

function DepVerf() {
 if (confirm("Are you sure the Bank/Batch Reconciled? ")) {
   DisButton(UpdateForm.depvbutton);
   document.UpdateForm.updatety.value="V";
   document.UpdateForm.nextpage.value="0";
   document.UpdateForm.submit();
  }
}

function ResetBatch() {
  if (document.UpdateForm.btchstat.value!=" 1") {
    if (document.UpdateForm.btchstat.value!=" 2") {
      if (document.UpdateForm.btchstat.value!=" 3") {
        if (document.UpdateForm.btchstat.value!=" 4") {
           alert("Invalid Batch Status.");
           return; 
        }
      }
    }
  }

 if (confirm("Are you sure you want to Reset Batch? ")) {
   document.UpdateForm.updatety.value="M";
   document.UpdateForm.nextpage.value="0";
   document.UpdateForm.submit();
  }
}

function ReceiveBatch() {
  if (document.UpdateForm.btchstat.value!=" 1") {
    if (document.UpdateForm.btchstat.value!=" 2") {
      if (document.UpdateForm.btchstat.value!=" 3") {
        if (document.UpdateForm.btchstat.value!=" 4") {
           alert("Invalid Batch Status.");
           return; 
        }
      }
    }
  }

 if (confirm("Are you sure the Batch had been Received Ok? ")) {
   document.UpdateForm.updatety.value="K";
   document.UpdateForm.nextpage.value="0";
   document.UpdateForm.submit();
  }
}

function CloseBatch() {
  if (document.UpdateForm.btchstat.value=="10") {
    alert("Batch has already been Closed.");
    return; 
  }

  if (document.UpdateForm.btchstat.value!=" 9") {
    alert("Deposit has not been Verified yet!");
    return;
   }

 if (confirm("Are you sure you want to Close this Batch? ")) {
   document.UpdateForm.updatety.value="G";
   document.UpdateForm.nextpage.value="0";
   document.UpdateForm.submit();
  }
}

function UpdateBatch() {
  document.UpdateForm.updatety.value="U";
  document.UpdateForm.nextpage.value="0";
  document.UpdateForm.submit();
}


