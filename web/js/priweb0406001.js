//jsVersion  : V11.03.00
//========================================================================
// Program   : priweb0406001.js
//
// Function  : Standard Functions Used in priweb0406001 templates
//
// Version   :
//            V11.03.00 03.07.2023  J.Tan         TSK 0847250
//            Created include - PP Receipts Processing
//========================================================================
//----------------------------------------------------------------------
// Get Private practice list for doctor code, user id and defaulted
// practice code
//----------------------------------------------------------------------
function DebtMovement() {
  if (document.SelectPeriod.filtauto.value == 2) {
      document.getElementById('DebtReason1').innerHTML
        = document.getElementById('Reason1').innerHTML;
      document.getElementById('DebtReason2').innerHTML
        = document.getElementById('Reason2').innerHTML;
      document.getElementById('AgentCollect').innerHTML
        = document.getElementById('NoAgent').innerHTML;

  } else {
      document.getElementById('DebtReason1').innerHTML = "";
      document.getElementById('DebtReason2').innerHTML = "";
      document.getElementById('AgentCollect').innerHTML
        = document.getElementById('NoAgent').innerHTML;
  }

}

function ChkCollectAgent() {
  if( document.SelectPeriod.reasmove.value.substr(3,1)=="D") {
      document.getElementById('AgentCollect').innerHTML
        = document.getElementById('Agent').innerHTML;
  } else {
      document.getElementById('AgentCollect').innerHTML
        = document.getElementById('NoAgent').innerHTML;
  }
}


function TickAssignAll() {
  if (document.SelectPeriod.filtauto.value == "0") {
    alert ("Processing Option must be selected");
    document.SelectPeriod.reasgall.checked = false
    return;
  }

  var c = new Array();
  c = document.getElementsByTagName('input');
  for (var i = 0; i < c.length; i++) {

    if (c[i].type == 'checkbox') {
      if (c[i].name.substring(0,5) == 'asg00') {

        if (document.SelectPeriod.reasgall.checked==true) {
            c[i].checked=true;

            if (document.SelectPeriod.reasmove!=undefined) {
              document.SelectPeriod.reasmove.className="Mandatory";
            }
            if (document.SelectPeriod.debtagnt!=undefined) {
             document.SelectPeriod.debtagnt.className="Mandatory";
            }
        } else {
            c[i].checked=false;
            if (document.SelectPeriod.reasmove!=undefined) {
              document.SelectPeriod.reasmove.className="";
            }
            if (document.SelectPeriod.debtagnt!=undefined) {
             document.SelectPeriod.debtagnt.className="";
            }
        }
      }
    }
  }
}

function TickPrtAll() {
  var c = new Array();
  c = document.getElementsByTagName('input');
  for (var i = 0; i < c.length; i++) {

    if (c[i].type == 'checkbox') {
      if (c[i].name.substring(0,5) == 'prt00') {
        if (document.SelectPeriod.rprntall.checked==true) {
            c[i].checked=true;
            if (document.SelectPeriod.selprint!=undefined) {
              document.SelectPeriod.selprint.className="Mandatory";
            }
        } else {
            c[i].checked=false;
            if (document.SelectPeriod.selprint!=undefined) {
              document.SelectPeriod.selprint.className="";
            }
        }
      }
    }
  }
}

function updateAssignDebt() {
  if (document.SelectPeriod.filtauto.value == "0") {
    alert ("Processing Option must be selected");
    return;
  }

  document.SelectPeriod.reasgall.checked=false;

  DebtMovement();

  var c = new Array();
  c = document.getElementsByTagName('input');
  for (var i = 0; i < c.length; i++) {

    if (c[i].type == 'checkbox') {
      if (c[i].name.substring(0,5) == 'asg00') {

        if (c[i].checked==true) {
           if (document.SelectPeriod.reasmove!=undefined) {
             document.SelectPeriod.reasmove.className="Mandatory"; }
           if (document.SelectPeriod.debtagnt!=undefined) {
             document.SelectPeriod.debtagnt.className="Mandatory"; }
           return;
        }
     }
   }
  }

  if (document.SelectPeriod.reasmove!=undefined) {
   document.SelectPeriod.reasmove.className="";
  }
  if (document.SelectPeriod.debtagnt!=undefined) {
     document.SelectPeriod.debtagnt.className="";
  }
}

function updatePrintInv() {
  document.SelectPeriod.rprntall.checked=false;
  var c = new Array();
  c = document.getElementsByTagName('input');
  for (var i = 0; i < c.length; i++) {

    if (c[i].type == 'checkbox') {
      if (c[i].name.substring(0,5) == 'prt00') {

        if (c[i].checked==true) {
           if (document.SelectPeriod.selprint!=undefined) {
             document.SelectPeriod.selprint.className="Mandatory"; }
           return;
        }
     }
   }
  }
  if (document.SelectPeriod.selprint!=undefined) {
     document.SelectPeriod.selprint.className="";
  }
}

function GoProcess () {
  SelectPeriod.showflag.value = "1";

 var printstat = ChkPrtBox();

 if (printstat==true) {

    var serverURL   = "../cgi-bin/patweb62.pbl?reportno=4" +
                      "&progname=PRIWEB04" +
                      "&reptnumb=6" +
         "&prntcode=" + document.SelectPeriod.selprint.value.replace(/ /g,"+")

    var returnValue = RSExecute(serverURL);
/////

   var c = new Array();
   c = document.getElementsByTagName('INPUT');

   for (var i = 0; i < c.length; i++) {

    if (c[i].type == 'checkbox') {
      if (c[i].name.substring(0,5) == 'prt00' ||
          c[i].name.substring(0,5) == 'asg00' ) {

        y=(c[i].name);
        x= 'inv00' + c[i].name.substring(5,8)

        if (c[i].checked==true) {
          AddField(y,1);
          AddField(x,c[i].value);
        } else {
          AddField(y,0);
        }
     }
    }
  }
    document.ProcessForm.filtauto.value=document.SelectPeriod.filtauto.value;
    if (document.SelectPeriod.filtauto.value == 2) {
      if (document.SelectPeriod.reasmove!=undefined) {
       document.ProcessForm.reasmove.value=document.SelectPeriod.reasmove.value;
      }
      if (document.SelectPeriod.debtagnt!=undefined) {
       document.ProcessForm.debtagnt.value=document.SelectPeriod.debtagnt.value;
      }
    }
    document.ProcessForm.selprint.value=document.SelectPeriod.selprint.value;
    document.ProcessForm.updatety.value="4";

    SubmitHidden(ProcessForm);
 }
}

function ChkPrtBox() {

  if(!validateMandatory(SelectPeriod)) {
    PostFilter();
    return false;
  }

  var c = new Array();
  c = document.getElementsByTagName('INPUT');
  for (var i = 0; i < c.length; i++) {

   if (c[i].type == 'checkbox') {
     if (c[i].name.substring(0,5)== 'prt00' && c[i].checked==true) {
        return true;
     }
     if (c[i].name.substring(0,5)== 'asg00' && c[i].checked==true) {
        return true;
     }
   }

  }
 alert('No Patient selected');
 return false;
}

function AddField(a,b) {
        var the_field;
        var billingForm = document.getElementById('ProcessForm');
          the_field = document.createElement('INPUT');
          the_field.setAttribute('type', 'hidden');
          the_field.setAttribute('name', a);
          the_field.id = a;
          the_field.setAttribute('value', 'b');
          the_field.value = b;
          billingForm.appendChild(the_field);
}


