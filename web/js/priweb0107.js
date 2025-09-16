//jsVersion  : V11.03.00
//========================================================================
// Program   : priweb0107.js
//
// Written   : 25/06/2004
//
// Function  : Functions Used in priweb0107XXX.html 
//
//========================================================================
// REPORT 7 - Private Practice G/L Interface Maintenance                  
//========================================================================
//
function ShowSpans(showoption) {
  if (showoption.value=="1") {                       
     InterfaceOptions1.innerHTML=ItemSpan.innerHTML;
     document.getElementById("subsectid").width="20%";
  } else if (showoption.value=="3") {                    
     InterfaceOptions1.innerHTML=JournalSpan.innerHTML;
     document.getElementById("subsectid").width="20%";
  } else {
     InterfaceOptions1.innerHTML="";
  }
  ShowSearchNoSpan();
}
//
function ProcessForm(theForm) {
 ShowSearchSpan(theForm);
 if (validateMandatory(theForm)) {
// Default Items Dframe
  if (theForm.prgli001.value==1)  {
    if (theForm.subsectn.value==1) {
      if (theForm.ptcnufms.value==1) {
        Url="priweb01.pbl?reportno=7&template=2&prgli001=1&subsectn=1"
      }
      else {
        Url="priweb01.pbl?reportno=7&template=3&prgli001=1&subsectn=1"
      }
      ViewInterface(Url);
      return;
    }
// Item - Group codes List
    if (theForm.subsectn.value==2) {
      theForm.submit();
      return;
    }
// Item - Item List
    if (theForm.subsectn.value==3) {
      theForm.submit();
      return;
    }
  }
// Default Journal Dframe
  if (theForm.prgli001.value==3)  {
    if (theForm.subsectn.value==1) {
      if (theForm.ptcnufms.value==1) {
        Url="priweb01.pbl?reportno=7&template=2&prgli001=3&subsectn=1"
      }
      else {
        Url="priweb01.pbl?reportno=7&template=3&prgli001=3&subsectn=1"
      }
      ViewInterface(Url);
      return;
    }
// Journal Codes List                          
    if (theForm.subsectn.value==2) {
      theForm.submit();
      return;
    }
  }
 }
}
function ViewInterface(url) {
  Left=(document.body.clientWidth-850)/2
  DFrameLink(url,50,Left,850,500);
}
function AddInterface(section,subsectn,letter) {
  if (ListForm.ptcnufms.value==1) {
    Url="priweb01.pbl?reportno=7&template=2&newrecrd=1" + 
        "&prgli001=" + section + "&subsectn=" + subsectn + 
        "&prgli002=" + letter;
  }
  else {
    Url="priweb01.pbl?reportno=7&template=3&newrecrd=1" + 
        "&prgli001=" + section + "&subsectn=" + subsectn + 
        "&prgli002=" + letter;
  }
  ViewInterface(Url);
  return;
}
function submitForm(theForm) {
    if (validateMandatory(theForm)) {
      theForm.submit();
    }
}
function FormSubmit(type) {
  document.UpdateForm.updttype.value=type;
  if (type=="A") {
    if (validateMandatory(UpdateForm)) {
       // extra validation for Item Code
       if ((document.UpdateForm.prgli001.value==1) &&
           (document.UpdateForm.subsectn.value==3)) {
          p=document.UpdateForm
          if (!validatePriItem(p.itemflag,p.itemnumb,p.isubnumb,
                               p.currdate,p.itemdesc)) {
            return;;
          }
       }
       document.UpdateForm.submit(); 
    } 
  }
  else if (type=="U") {
    if (validateMandatory(UpdateForm)) {
       document.UpdateForm.submit(); 
    } 
  }
  else if (type=="D") {
      ans=confirm("Are you sure you want to Delete ?")
      if (ans) { document.UpdateForm.submit(); } 
  }
}
//
// Determine fields to be used for relevant sections
// (priweb0104002.html & priweb0104003.html)
//
function ShowGLInterface(theform) {
// Misc Items
  if (theform.prgli001.value==1) {            
    if (theform.ibcnugst.value==2) {                  // Using Aust GST
      GLFields1.innerHTML=GSTAccountsSpan.innerHTML;
      if (theform.ibcnubas.value==1){                 // Using BAS
        GLFields2.innerHTML=BASSpan.innerHTML;
        GLFields3.innerHTML=Items.innerHTML;
      } 
      else {
        GLFields2.innerHTML=Items.innerHTML;
        GLFields3.innerHTML="";
      }
    }
    else {
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      GLFields2.innerHTML=Items.innerHTML;
      GLFields3.innerHTML="";
    }
    showItems(theform);
    return;
  }
// Journals  
  if (theform.prgli001.value==3) {            
    if (theform.gstjrnl.value==1) {
      GLFields1.innerHTML=GSTJournalsFields.innerHTML;
      GLFields2.innerHTML="";
      GLFields3.innerHTML="";
    } else {
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      GLFields2.innerHTML="";
      GLFields3.innerHTML="";
    }
    showJournals(theform);
    return;
  }
}
//
function showItems(theform) {
// Default Items
  if (theform.subsectn.value==1) { 
    SubSectionCode1.innerHTML=DefaultItems.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Group Codes          
  if (theform.subsectn.value==2) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispGroupCode.innerHTML;
    }
    else {
      SubSectionCode1.innerHTML=GroupCode.innerHTML;
    }
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Item Codes          
  if (theform.subsectn.value==3) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispItemCode.innerHTML;
      var itemtype=theform.prgli002.value.substr(3,2);
      if (itemtype==" 1") {
        theform.itemflag.value="AMA";
      }
      else {
        theform.itemflag.value="MBS";
      }
      theform.itemnumb.value=theform.prgli002.value.substr(5,9);
      theform.isubnumb.value=theform.prgli002.value.substr(14,3);
    }
    else {
      SubSectionCode1.innerHTML=ItemCode.innerHTML;
    }
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
}
//
function showJournals(theform) {
// Default Journal
  if (theform.subsectn.value==1) { 
    SubSectionCode1.innerHTML=DefaultJournal.innerHTML;
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
// Journal Codes
  if (theform.subsectn.value==2) { 
    if (theform.newrecrd.value==0) {               // Record found
      SubSectionCode1.innerHTML=DispJournalCode.innerHTML;     
    }
    else {
      SubSectionCode1.innerHTML=JournalCode.innerHTML;     
    }
    SubSectionCode2.innerHTML="";
    SubSectionCode3.innerHTML="";
    return;
  }
}
function checkGSTJrnl(jnrlcode) {
  if (!isWhitespace(jnrlcode.value)) {
    if (trim(jnrlcode.value.substr(14,4))=="G") {
      GLFields1.innerHTML=GSTJournalsFields.innerHTML;
      UpdateForm.gstjrnl.value=1;
    }
    else{
      GLFields1.innerHTML=DebitCreditFields.innerHTML;
      UpdateForm.gstjrnl.value=0;
    }
  }

}
//
function blkLedgerInv() {
  if (isWhitespace(UpdateForm.prgli005.value)) {
    UpdateForm.prgli006.value="";
    UpdateForm.prgli007.value="";
    if (UpdateForm.prgli001.value==5) {
      UpdateForm.creddesc.value="";
      UpdateForm.debidesc.value="";
    }
    else {
      UpdateForm.incmdesc.value="";
      UpdateForm.debtdesc.value="";
      UpdateForm.prgli008.value="";
      UpdateForm.gstcdesc.value="";
    }
    UpdateForm.prgli006.select();
    UpdateForm.prgli006.focus();
  }
  else {
    if (UpdateForm.prgli001.value!=5) {
      getGSTAccount(UpdateForm.prgli005,UpdateForm.prgli006,
                    UpdateForm.prgli007,UpdateForm.debtdesc,
                    UpdateForm.prgli008,UpdateForm.gstcdesc)
    }
  }
}
function blkLedgerToBeInv() {
  if (isWhitespace(UpdateForm.prgli012.value)) {
    UpdateForm.prgli013.value="";
    UpdateForm.prgli014.value="";
    UpdateForm.creddesc.value="";
    UpdateForm.debidesc.value="";
    UpdateForm.prgli013.select();
    UpdateForm.prgli013.focus();
  }
}
function ChkLedger(ledger,account,desc) {
   if (!isWhitespace(ledger.value)) {
      AccountSearchFrame(ledger,account,desc)
   } 
   else {
      alert(ledger.title + " field is empty. Please select Ledger first"); 
      ledger.focus();
   }
}
function clrAcc(code,desc) {
  code.value="";
  desc.value="";
}
function validateAccount(ledger,account,desc) {
  desc.value="";
  if (isWhitespace(account.value)) return;
  if (isWhitespace(ledger.value)) {
    alert(ledger.title + " field is empty. Please select Ledger first"); 
    ledger.focus();
  }
  else {
    acctcode=ledger.value.substr(0,2) + account.value.substr(0,12);
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=52" +
                    "&valdcode=" + acctcode.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      desc.value=trim(ReturnValue[0])
    }
    else {
      account.value="";
      desc.value="";
      account.select();
      account.focus();
    }
  }
}
function getGSTAccount(ledger,account,debtor,debtdesc,gstcontrl,gstdesc) {
  if (UpdateForm.ibcnugst.value!=2) { return; }   // Only Aust GST
  debtor.value="";
  debtdesc.value="";
  gstcontrl.value="";
  gstdesc.value="";
  if (isWhitespace(ledger.value)) {
    alert(ledger.title + " field is empty. Please select Ledger first"); 
    ledger.focus();
  }
  else {
    acctcode=ledger.value.substr(0,2) + account.value.substr(0,12);
    var serverURL   = "../cgi-bin/patweb80.pbl?reportno=53" +
                    "&valdcode=" + acctcode.replace(/ /g,"+")
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      debtor.value=trim(ReturnValue[0])
      debtdesc.value=trim(ReturnValue[1])
      gstcontrl.value=trim(ReturnValue[2])
      gstdesc.value=trim(ReturnValue[3])
      //alert("ledger="+ledger.value+"\naccount="+account.value+
      //  "\ndebtor="+debtor.value+"\ndebtdesc="+debtdesc.value+
      //  "\ngstcontrl="+gstcontrl.value+"\ngstdesc="+gstdesc.value);
    }
    else {
      ledger.select();
      ledger.focus();
    }
  }
}
function chgAccounts() {
  validateAccount(UpdateForm.prgli005,UpdateForm.prgli006,UpdateForm.incmdesc);
  if (isWhitespace(UpdateForm.prgli006.value)) { return; }
  getGSTAccount(UpdateForm.prgli005,UpdateForm.prgli006,
                UpdateForm.prgli007,UpdateForm.debtdesc,
                UpdateForm.prgli008,UpdateForm.gstcdesc);
}
function validatePriItem(ItemType,ItemNumb,SubItemN,CurrDate,ReturnName) {
  ReturnName.value="";
  if (isWhitespace(ItemType.value)) return true;;
  if (isWhitespace(ItemNumb.value)) return true;;
  var serverURL   = "../cgi-bin/priweb05.pbl?reportno=8" +
                    "&valdtype=4" +
                    "&itemtype=" + ItemType.value +
                    "&itemnumb=" + ItemNumb.value.replace(/ /g,"+") +
                    "&subitemn=" + SubItemN.value.replace(/ /g,"+") +
                    "&priml002=" + CurrDate.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    return true;
  }
  else {
    ItemNumb.select();
    ItemNumb.focus();
    return false;
  }
}
