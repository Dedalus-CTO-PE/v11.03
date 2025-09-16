//jsVersion  : V11.03.00
//========================================================================
// Program   : rcpweb03.js
//
// Written   : 10.11.2003 Lina Vo    
//
// Function  : Standard Functions Used in rcpweb03 templates
//
// Version   : 
//
// V11.02.02 21.06.2022  DA Sarkies      TSK 0920852
//           Added FocusDelay() where focus was being used.
// V10.07.02 27.01.2016  J.Tan           CAR 0303942
//           Mods for Additional payment types
// V10.07.01 21.12.2015  J.Tan           CAR 0303942
//           Mods for Additional payment types
// V10.03.11 21/06/2012  J.Tan           CAR 233264
//           Fixed warning message for Debt collections
// V10.03.10 15/06/2012  J.Tan           CAR 246555
//           Mods checking for Invoice Practice against Register Practice
// V10.03.03 30/05/2012  J.Tan           CAR 265677
//           Fixed ShowDiscount()
// V10.03.02 17/04/2012  J.Tan           CAR 252226
//           Mods for Default Invoice/Deposits receipts registers
// V10.03.01 12/04/2012  J.Tan           CAR 255159
//           Fixed rcpde016 and rcpde017 for ptcnufms<>1
// V10.02.05 28/07/2011  J.Tan           CAR 244159
//           Mods for Credit card surcharge 
// V10.01.04 15/04/2011  Saroeun Soeur   CAR 233901
//           added check for field items in ShowDiscount()
// V10.01.03 23/02/2011  Mike Laming     CAR 233901
//           Add test for System Reg "99" to remove "No Monies" & "Discount" in
//           ShowDiscount()
// V10.01.02 15/11/2010  Mike Laming     CAR 233264
//           Mods to validateInvoice() to check if with "Debt Collection Agency"
// V10.01.01 08/11/2010  J.Tan           CAR 233201
//           Mods if Suspense available when allocating suspense register
// V9.12.06  13/01/2010  J.Tan           CAR 213538
//           Mods checking for Eclipse claim
// V9.12.05  06/01/2009  J.Tan           CAR 174079
//           Changed the dframe size for ShowRegDetail1
// V9.12.04  18/12/2009  Ebon Clements   CAR 210184
//           Changed AddPayment() to allow reg code 98 if health fund receipt
// V9.12.03  10/12/2009  J.Tan           CAR 212183
//           Mods to display warning for keyin Amount greater than receipt amt
// V9.12.02  17/08/2009  Saroeun Soeur   CAR 190933
//           added new js function removePaymentType()
// V9.12.01  14/05/2009  J.Tan           CAR 191023
//           Mods for Change owner of debt
// V9.11.01  17/10/2008  J.Tan           CAR 181087
//           Added disable button (DisButton) function
// V9.09.09  16/04/2008  Ebon Clements   CAR 162994
//           Added ShowDiscount()
// V9.09.08  19/02/2008  Peter Vela      CAR 162070
//           Check for & in validateARInvType
// V9.09.07  19/02/2008  Peter Vela      CAR 162070
//           Check if invtotal is undefined @ SubmitRec2()
// V9.09.06  16/01/2008  Mike Laming     CAR 158013
//           Added className="Mandatory" to function checkPR()
// V9.09.05  02/01/2008  J.Tan           CAR 134035
//           Mods for Internal receipts comments
// V9.09.04  19/12/2007  Jill Habasque   CAR 152740
//           Added justifyRight of rcpde005 in submitRec2()
// V9.09.03  27/09/2007  Ebon Clements   CAR 150704
//           Added validateCodeRecUR() and default receipt reference functions
// V9.09.02  12/09/2007  Jill Habasque   CAR 149117
//           Added chckhosp
// V9.09.01  31/07/2007  Peter Vela      CAR 146466
//           Removed Goverment Agency functionality
// V9.08.03  16/05/2007  Davin           CAR 140729
//           Added check to see if hfundgrp is defined on the current template
// V9.08.02  08/02/2007  Davin           CAR 126848
//           Changed allocatePayment() and UpdatePayment() to pass health fund
//           Added function RCPHealthFundInvoice()
// V9.08.01  23/10/2006  J.Tan           CAR 121855
//           Mods for Sundry Cash sales reg for parameter with No FMS
// V9.07.01  26/06/2006  Mike Laming     CAR 59475
//           Add "rcpde018.select()" on Amount field in defaultAmount()
// V9.04.09  20.10.2005  J.Tan           CAR 58658
//           Mods to display Estimate fund rebate and Existing payment 
//           on funtion validateInvType
// V9.04.08  28.10.2005  Ebon Clements   CAR 80992
//           Added 10 second timeout to UpdatePayment() and AddPayment()
// V9.04.07  25.05.2005  Jill Habasque   CAR 61939
//           Added validateInvTypeMulti
// V9.04.06  30.11.2004  Lina Vo         CAR 55641
//           Changed SubmitRec2() to redirect differently when complflg=1.
//           Added checkPR() function to skip password field when not needed.
// V9.04.05  08.10.2004  Lina Vo         CAR 53878
//           Added ProcessSuspense()
// V9.04.04  28.09.2004  Lina Vo         CAR 53768
//           Set incmpflg=1 in ProcessPayment(), ChangePayment,  
//           CancelReceipt2(), DeleteRec2(), SubmitRec2() to disable
//           Incomplete receipt message.
//           Fixed SubmitRec2() to only validateMultihosp for 
//           Patient Billing, EMR Deposit, OUT Deposit, INP Deposit
// V9.04.03  17.09.2004  Lina Vo         CAR 53054
//           Mod validateInvoice() & validatePPInvoice to validate for 
//           Fully Credited Invoices (valdcrst=1)
// V9.04.02  13.09.2004  Lina Vo         CAR 53324
//           Mod validateMultHosp() and SubmitRec2()
// V9.04.01  19.08.2004  Lina Vo         CAR 52746
//           Added validateMultHosp() function and call in validateInvType()
//========================================================================
// V9.03.16  23.07.2004  Pat Dirito      CAR 51830
//           Added  "../cgi-bin/" to url strings for remote scripting
// V9.03.15  02.07.2004  Lina Vo         51112
//           Changed defaultAmount() & defaultAmtOth() function 
// V9.03.14  18.05.2004  Lina Vo         49767
//           Changed SubmitRec2() to allow overpayment on invoices. 
// V9.03.13  13.05.2004  Lina Vo         49766
//           Changed allocatePayment() and ChangePayment to pass printer fields
// V9.03.12  27.04.2004  Lina Vo         49519
//           Changed validateVisit() to display Invoice Warning message.
// V9.03.11  27.04.2004  Lina Vo         49282
//           Changed AddPayment() to include for extra validation for
//           Non-patient Received From source.
// V9.03.10  26.04.2004  Lina Vo         49281
//           Changed call of Income() to pass extra variable 
//           value=1 for List Type to only display Income, Expense, Asset,
//           Liability & Equity.
//           Added ListType=1 to remote script in ValAcc() to only validate
//           for Open Accounts.
// V9.03.09  20.04.2004  Lina Vo         49159
//           Added defaultAmount() & defaultAmtOth() function.
// V9.03.08  20.04.2004  Lina Vo         49090
//           Added comments for Account receivable validation.
// V9.03.07  27.02.2004  Lina Vo         47921
//           Changed Receipt Allocation functions to remove scanflag option.
//           Private Practice will now use UR number rather than debtor number. 
// V9.03.06  09.02.2004  Jill Habasque   44081
//           Added Suspense Allocation Functions
// V9.03.05  28.01.2004  Lina Vo         44085
//           Removed AddReceipt(), UpdateReceipt(), CancelReceipt() and 
//           SubmitRec() and put into rcpweb0302001 & rcpweb0302002 template.
//           Mods to SetCookieCashierPassword() & GetCookieCashierPassword()
//           to only save & retrieve Cashiers that have Passwords. 
//           Removed chkARAmount() & checkPayFlg() and put in rcpweb0303002 
//           & rcpweb0303003 template.
//           Added new overpay error message in SubmitRec2().
// V9.03.04  28.01.2004  Lina Vo         44084
//           Changed size of Payment Type Dframe
// V9.03.03  23.01.2004  Lina Vo         44073
//           Changed size of Dframe in ShowDetail.                        
// V9.03.02  21.01.2004  Lina Vo         44073
//           Added new RCPPatAllSearchFrame & disableUR.                 
// V9.03.01  19.01.2004  Lina Vo         44073
//           Removed Scanflag from Accounts Receivable validation
// V9.03.00  10.11.2003  Lina Vo         44073
//           Javascript created
//
//========================================================================
//
//------------------------------------------------------------
// Function : Set Cookie data (save cashier password)
//------------------------------------------------------------
function SetCookieCashierPassword(cashier,password) {
  if (!isWhitespace(password.value)) {
    document.cookie = "Cashierid=" + escape(cashier.value) + ";"
    document.cookie = "Cashierpassword=" + escape(password.value) + ";"
  }
}
//------------------------------------------------------------
// Function : Get Cookie data (get cashier password)
//------------------------------------------------------------
function GetCookieCashierPassword() {
  var userid=GetContentCookie("Cashierid");
  if (userid==AddForm.rcpbk004.value) {
    var passwrd=GetContentCookie("Cashierpassword");
    if ((!isWhitespace(passwrd)) && (passwrd!="unknown")) {
      AddForm.password.value=passwrd;
    }
  }
}
//========================================================================
//   Report 2
//========================================================================
//
//------------------------------------------------------------
// Function : check if Password required                   
//------------------------------------------------------------
function checkPR(cashDrawer,password) {
  if (isWhitespace(cashDrawer.value)) { return;; }
  if (cashDrawer.value.substr(6,1)==1) {
    password.className="Mandatory";
    password.tabIndex=2;
    password.focus();
  }
  else {
    password.className="";
    password.value="";
    password.tabIndex=-1;  // skip password field
  }
}
//------------------------------------------------------------
// Function : Validate Cashier Password - Remote Script
//------------------------------------------------------------
function checkPasswrd(cashDrawer,password) {
  if (isWhitespace(cashDrawer.value)) { return;; }
  var serverURL = "../cgi-bin/rcpweb02.pbl?reportno=2" +
                  "&valdcode=" + cashDrawer.value.replace(/ /g,"+") +
                  "&password=" + password.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    SetCookieCashierPassword(cashDrawer,password);
    return true;
  }
  else {
    password.value="";
    cashDrawer.focus();
    return false;
  }
}
//------------------------------------------------------------
// Function : Get Cheque Account - Remote Script
//------------------------------------------------------------
function getChqAcct(drawer,chqacct,defchqno) {
  chqacct.selectedIndex=0;
  if (validateRCP(1,drawer,defchqno)) {
    if (!isWhitespace(defchqno.value)) {
      for (var i=0; i < chqacct.length; i++) {
        if (trim(chqacct.options[i].value)==trim(defchqno.value)){
          chqacct.selectedIndex=i; }
      }
    }
  }
}
//------------------------------------------------------------
//  Function : Show Receipt Type Dframe
//------------------------------------------------------------
function ShowDetail(linkurl) {
  Left=(document.body.clientWidth-400)/2
  DFrameLink(linkurl,250,Left,400,220);
}
//------------------------------------------------------------
//  Function : Validate Input Receipt header & Payment Type
//------------------------------------------------------------
function ValidateReceipt() {
  if (isWhitespace(AddForm.rcpbk001.value)) {
    var numoptions=0
    if (validateMandatory(AddForm)) {  
      if (!checkPasswrd(AddForm.rcpbk004,AddForm.password)) {
        AddForm.rcpbt023.selectedIndex=0;
        return false;
      }
      if (AddForm.patdebtr.checked==true) {
        numoptions+=1;
        AddForm.rcpbk007.value="0";
        AddForm.rcpbk008.value="";
      }
      if (!isWhitespace(AddForm.hlthfund.value)) {
        numoptions+=1;
        AddForm.rcpbk007.value="1";
        AddForm.rcpbk008.value=AddForm.hlthfund.value;
      }
      if (!isWhitespace(AddForm.insrcode.value)) {
        numoptions+=1;
        AddForm.rcpbk007.value="2";
        AddForm.rcpbk008.value=AddForm.insrcode.value;
      }
//      if (!isWhitespace(AddForm.govtagnc.value)) {
//        numoptions+=1;
//        AddForm.rcpbk007.value="3";
//        AddForm.rcpbk008.value=AddForm.govtagnc.value;
//      }
      if (AddForm.hfundgrp!=undefined) {
        if (!isWhitespace(AddForm.hfundgrp.value)) {
          numoptions+=1;
          AddForm.rcpbk007.value="4";
          AddForm.rcpbk008.value=AddForm.hfundgrp.value;
        }
      }
      if (numoptions==0) {
        alert("Please choose a Received From source.");
        AddForm.patdebtr.focus();
        AddForm.rcpbt023.selectedIndex=0;
        return false;
      }
      else {
        if (numoptions>1) {
          alert("There can only be one Received From source.");
          AddForm.rcpbt023.selectedIndex=0;
          AddForm.rcpbk007.value="";
          AddForm.rcpbk008.value="";
          AddForm.patdebtr.focus();
          return false;
        }
      }
      if ((AddForm.rcpbt023.value.substr(3,1)==1)&&(AddForm.patdebtr.checked==false)) {
        alert("Only Received From Patient/Debtor can have Cash Payment Type.");
        AddForm.rcpbt023.selectedIndex=0;
        return false;
      }
      if ((AddForm.rcpbt023.value.substr(3,1)==5)&&(AddForm.patdebtr.checked==false)) {
        alert("Only Received From Patient/Debtor can have " +
              "Money Order Payment Type.");
        AddForm.rcpbt023.selectedIndex=0;
        return false;
      }
      return true;
    }
    else {
      AddForm.rcpbt023.selectedIndex=0;
      return false;
    }
  }
  else {
    if ((AddForm.rcpbt023.value.substr(3,1)==1)&&(AddForm.rcpbk007.value!=0)) {
      alert("Only Received From Patient/Debtor can have Cash Payment Type.");
      AddForm.rcpbt023.selectedIndex=0;
      return false;
    }
    if ((AddForm.rcpbt023.value.substr(3,1)==5)&&(AddForm.rcpbk007.value!=0)) {
      alert("Only Received From Patient/Debtor can have " +
            "Money Order Payment Type.");
      AddForm.rcpbt023.selectedIndex=0;
      return false;
    }
    return true;
  }
}
//------------------------------------------------------------
// Function : Go to Allocate Payment Screen
//------------------------------------------------------------
function allocatePayment() {
  if (parseFloat(AddForm.accmtotl.value)==0) {
    alert("Accumulative Amount cannot be zero.");
    return;
  }
  if (AddForm.hfundgrp!=undefined) {
  linkurl="rcpweb03.pbl?reportno=3&template=1" +
          "&rcpbk001=" + AddForm.rcpbk001.value.replace(/ /g,"+") +
          "&rcpbk004=" + AddForm.rcpbk004.value.replace(/ /g,"+") + 
          "&printflg=" + AddForm.printflg.value.replace(/ /g,"+") +
          "&selprint=" + AddForm.selprint.value.replace(/ /g,"+") +
          "&nocopies=" + AddForm.nocopies.value.replace(/ /g,"+") +
          "&hlthfund=" + AddForm.hlthfund.value.replace(/ /g,"+") +
          "&hfundgrp=" + AddForm.hfundgrp.value.replace(/ /g,"+");
  } else {
  linkurl="rcpweb03.pbl?reportno=3&template=1" +
          "&rcpbk001=" + AddForm.rcpbk001.value.replace(/ /g,"+") +
          "&rcpbk004=" + AddForm.rcpbk004.value.replace(/ /g,"+") + 
          "&printflg=" + AddForm.printflg.value.replace(/ /g,"+") +
          "&selprint=" + AddForm.selprint.value.replace(/ /g,"+") +
          "&nocopies=" + AddForm.nocopies.value.replace(/ /g,"+") +
          "&hlthfund=" + AddForm.hlthfund.value.replace(/ /g,"+");
  }
  location.href=linkurl;
}
//------------------------------------------------------------
// Function : Go to Allocate Payment Screen
//------------------------------------------------------------
function ChangePayment() {
  AddForm.incmpflg.value=1;
  linkurl="rcpweb03.pbl?reportno=2&template=1" +
          "&rcpbk001=" + AddForm.rcpbk001.value.replace(/ /g,"+") +
          "&rcpbk004=" + AddForm.rcpbk004.value.replace(/ /g,"+") +
          "&printflg=" + AddForm.printflg.value.replace(/ /g,"+") +
          "&selprint=" + AddForm.selprint.value.replace(/ /g,"+") +
          "&nocopies=" + AddForm.nocopies.value.replace(/ /g,"+");
  location.href=linkurl;
}
//------------------------------------------------------------
//  Function : Display appropriate fields for payment type
//------------------------------------------------------------
function showPayments(thisForm) {

  if (thisForm.rcpbt023.value.substr(3,1)==1) {
    PaymentOption.innerHTML=CashPayment.innerHTML;
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML="";
    return;
  }
  if (thisForm.rcpbt023.value.substr(3,1)==2) {
    PaymentOption.innerHTML=ChequePayment.innerHTML;
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML="";
    return;
  }
  if (thisForm.rcpbt023.value.substr(3,1)==3) {
    PaymentOption.innerHTML=CreditPayment.innerHTML;
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML="";
    return;
  }
  if (thisForm.rcpbt023.value.substr(3,1)==4) {
    PaymentOption.innerHTML=DirDepositPayment.innerHTML;
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML="";
    return;
  }
  if (thisForm.rcpbt023.value.substr(3,1)==5) {
    PaymentOption.innerHTML=MoneyOrderPayment.innerHTML;
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML="";
    return;
  }
  if (thisForm.rcpbt023.value.substr(3,1)==6) {
    PaymentOption.innerHTML=EFTPOSPayment.innerHTML;
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML=EFTPOSPayer.innerHTML;
    return;
  }
  if (thisForm.rcpbt023.value.substr(3,1)==7) {
    PaymentOption.innerHTML="";
    PayerOption.innerHTML=CARDPayer.innerHTML;

    if (thisForm.rcpbt023.value.substr(3,1)==7) {
     if (thisForm.surchamt!=undefined) {
      if(thisForm.surchamt.value=="1"){
        SurchargeOption.innerHTML=CreditSurcharge.innerHTML;
        return;
      }
     }
    }
    SurchargeOption.innerHTML="";
    return;
  }
  else {
    PaymentOption.innerHTML="";
    SurchargeOption.innerHTML="";
    PayerOption.innerHTML="";
  }
}
//------------------------------------------------------------
//  Function : Show Card type only when EFT Type is Credit
//------------------------------------------------------------
function checkCard(thisForm) {
  if (thisForm.rcpbt023.value.substr(3,1)!=6) {
    return;
  }
  if (thisForm.rcpbt016[0].checked==1) {
     thisForm.rcpbt013.disabled=true;
     thisForm.rcpbt013.className="Readonly";
  }
  else {
     thisForm.rcpbt013.disabled=false;
     thisForm.rcpbt013.className="Mandatory";
  }
}
function checkSurchrg(thisForm) {
  if ((!isWhitespace(thisForm.rcpbt013.value.substr(25,3))) &&
      (thisForm.rcpbt013.value.substr(25,1)!=0)) {
    if (thisForm.drwercrd.value!=0) {
      SurchargeOption.innerHTML="";
    } else {
      SurchargeOption.innerHTML=CreditSurcharge.innerHTML;
    }
  } else {
    SurchargeOption.innerHTML="";
  }
}
//
//========================================================================
//   Report 3
//========================================================================
//
//------------------------------------------------------------
//  Function : Show Invoice/Visit Detail Dframe
//------------------------------------------------------------
function AddPayment() {
  if (isWhitespace(AddForm.rcpde004.value)) { 
    return; 
  }
  register=AddForm.rcpde004.value.substr(0,3);
  systemcd=parseInt(AddForm.rcpde004.value.substr(3,2),10);
//
// Received Payment From Health Fund, Insurance Co, Govt Agency can 
// only have registers with system Codes 1-Patient Billing, 2-Priv Pract,
// 5-Account Receivable & 99-Suspense.
//
  if (AddForm.rcpbk007.value!=0) {
     if ((systemcd==1) ||
         (systemcd==2) ||
         (systemcd==5) ||
         (systemcd==98) ||
         (systemcd==99)) {
     }
     else {
       alert("Received Payments from Health Fund, Insurance Co or Govt Agency "
             + "\ncan only have registers with System Codes: "
             + "\n 1 - Patient Billing," 
             + "\n 2 - Private Practice," 
             + "\n 5 - Account Receivable/Sundry Debtors, " 
             + "\n99 - Suspense.");
       AddForm.rcpde004.selectedIndex=0;
       return;
     }
  }
  linkurl="rcpweb03.pbl?reportno=3&template=002" +  
          "&rcpbk001=" + AddForm.rcpbk001.value +
          "&rcpde004=" + register +
          "&printinv=" + AddForm.printinv.value +
          "&tmotfrst=10&tmotnext=10";

  if ((systemcd==5) ||
      (systemcd==92) ||
      (systemcd==94) ||
      (systemcd==95) ||
      (systemcd==98)) {
    ShowRegDetail2(linkurl);
  }
  else {
    ShowRegDetail1(linkurl);
  }
}
//------------------------------------------------------------
//  Function : Show Invoice/Visit Detail Dframe for suspense allocation
//------------------------------------------------------------
function AddSuspensePayment() {
  if (isWhitespace(AddForm.rcpde004.value)) {
    return;
  }
  register=AddForm.rcpde004.value.substr(0,3);
  systemcd=parseInt(AddForm.rcpde004.value.substr(3,2),10);
  SuspAvail=AddForm.rccnsusp.value;
  if(trim(SuspAvail)!=1) {
    if(systemcd==99){
       alert("Cannot allocate to another suspense register.");
       return;
    }
  }
  linkurl="rcpweb03.pbl?reportno=3&template=002" +  
          "&rcpde004=" + register +
          "&susalloc=1";
  if ((systemcd==5) ||
      (systemcd==92) ||
      (systemcd==94) ||
      (systemcd==95) ||
      (systemcd==98)) {
    ShowRegDetail2(linkurl);
  }
  else {
    ShowRegDetail1(linkurl);
  }
}
//------------------------------------------------------------
//  Function : Show Update/Delete Receipt Type Dframe
//------------------------------------------------------------
function UpdatePayment(receiptno,trncount,systemcd,hlthfund,hfundgrp) {
  if (hfundgrp!=undefined) {
  linkurl="rcpweb03.pbl?reportno=3&template=003" +
          "&rcpbk001=" + receiptno.replace(/ /g,"+") +
          "&systemcd=" + systemcd.replace(/ /g,"+") +
          "&rcpde003=" + trncount.replace(/ /g,"+") +
          "&hlthfund=" + hlthfund.replace(/ /g,"+") +
          "&hfundgrp=" + hfundgrp.replace(/ /g,"+") +
          "&tmotfrst=10&tmotnext=10"; 
  } else {
  linkurl="rcpweb03.pbl?reportno=3&template=003" +
          "&rcpbk001=" + receiptno.replace(/ /g,"+") +
          "&systemcd=" + systemcd.replace(/ /g,"+") +
          "&rcpde003=" + trncount.replace(/ /g,"+") +
          "&tmotfrst=10&tmotnext=10";
  }

  if ((systemcd==5) ||
      (systemcd==92) ||
      (systemcd==94) ||
      (systemcd==95) ||
      (systemcd==98)) {
    ShowRegDetail2(linkurl);
  }
  else {
    ShowRegDetail1(linkurl);
  }
}
//------------------------------------------------------------
//  Function : Show Update/Delete Suspense Receipt Type Dframe
//------------------------------------------------------------
function UpdateSuspensePayment(receiptno,trncount,systemcd) {
  linkurl="rcpweb03.pbl?reportno=3&template=003" +
          "&rcpbk001=" + receiptno.replace(/ /g,"+") +
          "&systemcd=" + systemcd.replace(/ /g,"+") +
          "&susalloc=1" +
          "&rcpde003=" + trncount.replace(/ /g,"+");
  if ((systemcd==5) ||
      (systemcd==92) ||
      (systemcd==94) ||
      (systemcd==95) ||
      (systemcd==98)) {
    ShowRegDetail2(linkurl);
  }
  else {
    ShowRegDetail1(linkurl);
  }
}
//------------------------------------------------------------
//  Function : Show Register Dframe
//------------------------------------------------------------
function ShowRegDetail1(linkurl) {
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,250,Left,900,350);
}
//------------------------------------------------------------
//  Function : Show Register Dframe
//------------------------------------------------------------
function ShowRegDetail2(linkurl) {
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,140,Left,900,430);
}
//------------------------------------------------------------
//  Function : Cancel All Receipt Details Entered
//------------------------------------------------------------
function CancelReceipt2() {
  AddForm.incmpflg.value=1;
  AddForm.nextpage.value=1;
  AddForm.redirect.value="rcpweb03.pbl?reportno=2&template=001"
  AddForm.updttype.value="C";
  AddForm.submit();
}
//------------------------------------------------------------
//
//------------------------------------------------------------
function ProcessPayment() {
  // disable button to avoid double clicking
  DisButton();
  if (AddForm.allctotl.value==AddForm.rcpbk003.value) {
    AddForm.incmpflg.value=1;
    AddForm.redirect.value="rcpweb03.pbl?reportno=2&template=001"
    AddForm.updttype.value="F";
    AddForm.submit();
  }
  else {
    alert("Totals are Unbalanced");
    return;
  }
}
function DisButton() {
  document.AddForm.finishbt.disabled=true;
  setInterval('document.AddForm.finishbt.disabled=false',6000);
}
//------------------------------------------------------------
//
//------------------------------------------------------------
function ProcessSuspense() {
  if (AddForm.allctotl.value==AddForm.suspamnt.value) {
    AddForm.incmpflg.value=1;
    AddForm.redirect.value="rcpweb02.pbl?reportno=3&template=001"
    AddForm.updttype.value="F";
    AddForm.submit();
  }
  else {
    alert("Totals are Unbalanced");
    return;
  }
}
//------------------------------------------------------------
//  Function : Display appropriate fields for payment type
//------------------------------------------------------------
function showAllocation(thisForm) {
  if (thisForm.systemcd.value==1) {         // Patient Billing
    RegisterOption1.innerHTML=InvoiceDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    thisForm.rcpde005.focus();
    return;
  }
  if (thisForm.systemcd.value==2) {      // Private Practice
    RegisterOption1.innerHTML=PPInvoiceDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    //thisForm.rcpde014[0].checked=true;
    thisForm.rcpde005.focus();
    return;
  }
  if (thisForm.systemcd.value==5) {      // Sundry Debtors/Account Receivable 
    RegisterOption1.innerHTML=ARInvoiceDetail.innerHTML;
    SetRefAR();
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML=ARInvoiceItems.innerHTML;
    thisForm.rcpde005.focus();
    return;
  }
  if (thisForm.systemcd.value==90)  {      // Emergency Deposits
    RegisterOption1.innerHTML=EMRDepositDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    if (!isWhitespace(AddForm.rcpde004.value)) {
      thisForm.rcpde006.focus();
    }
    return;
  }
  if ((thisForm.systemcd.value==91)||       // Outpatient Deposits
      (thisForm.systemcd.value==97)) {      // Patient Deposits
    RegisterOption1.innerHTML=DepositDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    if (!isWhitespace(AddForm.rcpde004.value)) {
      thisForm.rcpde006.focus();
    }
    return;
  }
  if (thisForm.systemcd.value==96) {  // Private Practice,Allied Health Deposits
    RegisterOption1.innerHTML=PPDepositDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    //thisForm.rcpde014[0].checked=true;
    thisForm.rcpde007.focus();
    return;
  }
  if (thisForm.systemcd.value==92) {        // Cash Sales Incl. GST
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=GSTCashSalesDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankGSTCashSalesDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==94) {        // Sundry Debtor Receipts
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=SundryDebtorDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankSundryDebtorDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==95) {        // Sundry Cash Sales  
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=SundryCashSalesDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankSundryCashSalesDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==98) {        // Internal Reciepts   
    RegisterOption1.innerHTML=NameAddrNotes.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=InternalDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankInternalDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==99) {        // Suspense Payment
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    defaultAmtOth(thisForm);
    thisForm.rcpde008.focus();
    return;
  }
}
//------------------------------------------------------------
//  Function : Display appropriate fields for Updte payment type
//------------------------------------------------------------
function showUpdateAllocation(thisForm) {
  if (thisForm.systemcd.value==1) {         // Patient Billing
    RegisterOption1.innerHTML=InvoiceDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    PrintOption.innerHTML=ButtonPrint.innerHTML;
    thisForm.rcpde005.focus();
    return;
  }
  if (thisForm.systemcd.value==2) {      // Private Practice
    RegisterOption1.innerHTML=PPInvoiceDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    //if (thisForm.scanflag.value==1) {
    //  thisForm.rcpde014[0].checked=true;
    //}
    //else {
    //  thisForm.rcpde014[1].checked=true;
    //}
    PrintOption.innerHTML="";
    thisForm.rcpde005.focus();
    return;
  }
  if (thisForm.systemcd.value==5) {      // Sundry Debtors/Account Receivable 
    RegisterOption1.innerHTML=ARInvoiceDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML=ARInvoiceItems.innerHTML;
    PrintOption.innerHTML="";
    thisForm.rcpde005.focus();
    return;
  }
  if (thisForm.systemcd.value==90)  {      // Emergency Deposits
    RegisterOption1.innerHTML=EMRDepositDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    if (!isWhitespace(thisForm.rcpde006.value)) {
      thisForm.rcpde007.className="Readonly";
      thisForm.rcpde007.readOnly=true;
//    thisForm.pmisrch.disabled=true;
    }
    PrintOption.innerHTML="";
    thisForm.rcpde006.focus();
    return;
  }
  if ((thisForm.systemcd.value==91)||       // Outpatient Deposits
      (thisForm.systemcd.value==97)) {      // Patient Deposits
    RegisterOption1.innerHTML=DepositDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    PrintOption.innerHTML="";
    thisForm.rcpde006.focus();
    return;
  }
  if (thisForm.systemcd.value==96) {  // Private Practice,Allied Health Deposits
    RegisterOption1.innerHTML=PPDepositDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    //if (thisForm.scanflag.value==1) {
    //  thisForm.rcpde014[0].checked=true;
    //}
    //else {
    //  thisForm.rcpde014[1].checked=true;
    //}
    PrintOption.innerHTML="";
    thisForm.rcpde007.focus();
    return;
  }
  if (thisForm.systemcd.value==92) {        // Cash Sales Incl. GST
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=GSTCashSalesDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankGSTCashSalesDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    for (var i=0; i < thisForm.rcpde022.length; i++) {
      if (thisForm.rcpde022.options[i].value==thisForm.gstcode.value){
        thisForm.rcpde022.selectedIndex=i; } 
    }
    for (var i=0; i < thisForm.ledgerno.length; i++) {
      if (thisForm.ledgerno.options[i].value==
                                 thisForm.rcpde016.value.substr(0,2)){
        thisForm.ledgerno.selectedIndex=i; } 
    }
    PrintOption.innerHTML="";
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==94) {        // Sundry Debtor Receipts
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=SundryDebtorDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankSundryDebtorDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    PrintOption.innerHTML="";
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==95) {        // Sundry Cash Sales  
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=SundryCashSalesDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankSundryCashSalesDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    PrintOption.innerHTML="";
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==98) {        // Internal Reciepts   
    RegisterOption1.innerHTML=NameAddrNotes.innerHTML;
    if (thisForm.ptcnufms.value=="1") {
      RegisterOption2.innerHTML=InternalDetail.innerHTML;
    } else {
      RegisterOption2.innerHTML=BlankInternalDetail.innerHTML;
    }
    RegisterOption3.innerHTML="";
    PrintOption.innerHTML="";
    thisForm.rcpde008.focus();
    return;
  }
  if (thisForm.systemcd.value==99) {        // Suspense Payment
    RegisterOption1.innerHTML=NameAddrDetail.innerHTML;
    RegisterOption2.innerHTML="";
    RegisterOption3.innerHTML="";
    PrintOption.innerHTML="";
    thisForm.rcpde008.focus();
    return;
  }
}
//------------------------------------------------------------
//  Function : Validate & Submit Add/Update Register Details Dframe
//------------------------------------------------------------
function SubmitRec2(thisForm) {
  if (validateMandatory(thisForm)) {
    if (thisForm.rcpde005!=undefined) {
      if (!isWhitespace(thisForm.rcpde005.value)) {
        justifyRight(thisForm.rcpde005);}
    }
    // if Multi Hospital is Used
    if ((thisForm.systemcd.value==1) ||   // patient billing
       (thisForm.systemcd.value==90) ||   // emr deposit
       (thisForm.systemcd.value==91) ||   // out deposit
       (thisForm.systemcd.value==97))  {  // inp deposit
      if (!validateMultHosp(thisForm.ibcnmhos,thisForm.rcpde004,
                          thisForm.rcpde006)) {
        InitialiseForms()   // put focus on first field on screen
        return;
      } 
    } 

    if(thisForm.rcpde018.className!="Readonly") {
     if (parseFloat(thisForm.rcpde018.value)==0) {
       alert("Please enter Amount.");
       thisForm.rcpde018.select();
       return;
     }
    }

    if (parseFloat(thisForm.rcpde018.value) > 
        parseFloat(parent.AddForm.rcpbk003.value)) {
      alert("Warning: Amount cannot be greater than Receipt Amount.");
//      return;
    }
    if ((thisForm.systemcd.value==1) ||  // Patient Billing        
        (thisForm.systemcd.value==2)) {  // Private Practice       
      if ((parseFloat(thisForm.rcpde018.value))>
          (parseFloat(thisForm.balancea.value))) {
          alert("Warning: Amount exceeds Outstanding Invoice Amount." +
                " This will cause an overpayment.");
      }
    }
    if (thisForm.systemcd.value==5) {  // Acc Rec Debtors        
      if (thisForm.checkfnd!=undefined) {
        if (thisForm.checkfnd.value==1) {
          if ((parseFloat(thisForm.invtotal.value))!=
              (parseFloat(thisForm.rcpde018.value))) {
            alert("Amount does not match Total Payment Amount.");
            return; 
          }
        }
      }
      if ((parseFloat(thisForm.rcpde018.value))>
          (parseFloat(thisForm.balancea.value))) {
        // Allow overpayment & prepayment in debtors
        if (thisForm.rccnovrp.value==0) {
          alert("Amount cannot exceed Outstanding Invoice Amount.");
          return; 
        }
        else {
          alert("Warning: Amount exceeds Outstanding Invoice Amount." +
                " This will cause an overpayment.");
        }
      }
    }
    thisForm.rcpbk001.value=parent.AddForm.rcpbk001.value;
    thisForm.rcpbk003.value=parent.AddForm.rcpbk003.value;
    thisForm.rcpbk004.value=parent.AddForm.rcpbk004.value;
    thisForm.printflg.value=parent.AddForm.printflg.value;
    thisForm.selprint.value=parent.AddForm.selprint.value;
    thisForm.nocopies.value=parent.AddForm.nocopies.value;
    thisForm.printinv.value=parent.AddForm.printinv.value;

   if (thisForm.ptcnufms.value=="1") {
    if ((thisForm.systemcd.value==94) ||  // Sundry Debtors Receipts
        (thisForm.systemcd.value==95) ||  // Sundry Cash Sales
        (thisForm.systemcd.value==98)) {  // Internal Reciepts     
      thisForm.rcpde016.value=thisForm.ledgerno.value.substr(0,2) +
                              thisForm.accntcod.value.substr(0,12);
      thisForm.rcpde017.value=thisForm.bankld01.value.substr(0,2) +
                              thisForm.bankld01.value.substr(3,12);
    }
    if (thisForm.systemcd.value==92) {  // GST Sundry Cash Sales
      thisForm.rcpde016.value=thisForm.ledgerno.value.substr(0,2) +
                              thisForm.accntcod.value.substr(0,12);
      thisForm.rcpde017.value=thisForm.bankld01.value.substr(0,2) +
                              thisForm.bankld01.value.substr(3,12);
      thisForm.rcpde023.value=thisForm.gstcon01.value.substr(0,2) +
                              thisForm.gstcon01.value.substr(3,12);
    }
   }

    if (isWhitespace(thisForm.rcpde004.value)) {
      thisForm.rcpde004.value=thisForm.register.value;
    }
    if (thisForm.susalloc.value=="1"){
      thisForm.suscount.value=parent.AddForm.rcpde003.value;
      thisForm.redirect.value="rcpweb03.pbl?reportno=5&template=1"
    }
   
    if (thisForm.name=="AddForm") {
      if (thisForm.complflg.value==1) {
        thisForm.nextpage.value=0;
        thisForm.redirect.value="";
        amount=parseFloat(thisForm.allctotl.value) +
               parseFloat(thisForm.rcpde018.value);
        if (amount!=parseFloat(thisForm.rcpbk003.value)) {
          thisForm.complflg.value=0;
        }
      }
      else {
        if (!isWhitespace(parent.AddForm.rcpde004.value)) {
          if (thisForm.reportno.value!=8) {  // don't set redirect for report 8
            thisForm.nextpage.value=1;
            thisForm.redirect.value="rcpweb03.pbl?reportno=3&template=2"
          }
        }
      }
    }
    parent.AddForm.incmpflg.value=1;
    thisForm.submit();
  }
}
function DeleteRec2(thisForm) {
  parent.AddForm.incmpflg.value=1;
  thisForm.printflg.value=parent.AddForm.printflg.value;
  thisForm.selprint.value=parent.AddForm.selprint.value;
  thisForm.nocopies.value=parent.AddForm.nocopies.value;
  setFormactn('D');
}
//------------------------------------------------------------
// Function : Patient Debtor Search Frame
//------------------------------------------------------------
function RCPPatPPDebtSearch(ReturnUR,ReturnName,ReturnInvoice,systemcd,patflg){
  ReturnFunction="" ;
  for (var i=4; i < RCPPatPPDebtSearch.arguments.length; i++) {
    if (typeof(RCPPatPPDebtSearch.arguments[i]) == 'function') {
      ReturnFunction=RCPPatPPDebtSearch.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnCode=ReturnInvoice ;
  window.IBASystem=parseInt(systemcd.value,10);
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href="patweb90.pbl?reportno=1&template=18";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Patient Debtor Search Frame
//------------------------------------------------------------
function RCPPatARDebtSearch(ReturnUR,ReturnName,ReturnInvoice,systemcd,thisForm){
  ReturnFunction="" ;
  for (var i=4; i < RCPPatARDebtSearch.arguments.length; i++) {
    if (typeof(RCPPatARDebtSearch.arguments[i]) == 'function') {
      ReturnFunction=RCPPatARDebtSearch.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnCode=ReturnInvoice ;
  window.IBASystem=parseInt(systemcd.value,10);
  window.ReturnForm=thisForm ;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "priweb01.pbl?reportno=4&template=3";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Patient Search Frame
//------------------------------------------------------------
function RCPPatientSearchFrame(ReturnUR,ReturnName,ReturnVisInv,systemcd){
  ReturnFunction="" ;
  for (var i=4; i < RCPPatientSearchFrame.arguments.length; i++) {
    if (typeof(RCPPatientSearchFrame.arguments[i]) == 'function') {
      ReturnFunction=RCPPatientSearchFrame.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnCode=ReturnVisInv ;
  window.IBASystem=parseInt(systemcd.value,10);
  window.SystemCode=systemcd;
  var PopUpFrameDoc = DFrameStart();
  PopUpFrameDoc.location.href = "patweb90.pbl?reportno=1&template=18";
  SearchFrameShow();
}
//------------------------------------------------------------
// Function : Patient Search Frame
//------------------------------------------------------------
function RCPPatAllSearchFrame(ReturnUR,ReturnName,ReturnVisInv,systemcd){
  ReturnFunction="" ;
  for (var i=4; i < RCPPatAllSearchFrame.arguments.length; i++) {
    if (typeof(RCPPatAllSearchFrame.arguments[i]) == 'function') {
      ReturnFunction=RCPPatAllSearchFrame.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnCode=ReturnVisInv ;
  window.IBASystem=parseInt(systemcd.value,10);
  window.SystemCode=systemcd;
  DFrameStart()
  linkurl="patweb90.pbl?reportno=1&template=18"
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,130,Left,900,440);
}
//------------------------------------------------------------
// Function : Health Fund Invoice List
//------------------------------------------------------------
function RCPHealthFundInvoice(ReturnUR,ReturnName,ReturnVisInv,systemcd){
  ReturnFunction="" ;
  for (var i=4; i < RCPHealthFundInvoice.arguments.length; i++) {
    if (typeof(RCPHealthFundInvoice.arguments[i]) == 'function') {
      ReturnFunction=RCPHealthFundInvoice.arguments[i] }
  }
  window.ReturnName=ReturnName ;
  window.ReturnUR=ReturnUR ;
  window.ReturnCode=ReturnVisInv ;
  window.IBASystem=parseInt(systemcd.value,10);
  window.SystemCode=systemcd;
  Results.innerHTML="";
  DFrameStart()
  linkurl="patweb76.pbl?reportno=1&template=25" +
          "&hlthfund=" + AddForm.hlthfund.value.replace(/ /g,"+") +
          "&hfundgrp=" + AddForm.hfundgrp.value.replace(/ /g,"+") +
          "&chckhosp=" + AddForm.wbsehosp.value.replace(/ /g,"+") +
          "&rcpde004=" + AddForm.rcpde004.value.substr(0,3).replace(/ /g,"+");
  Left=(document.body.clientWidth-900)/2
  DFrameLink(linkurl,130,Left,900,440);
}
//------------------------------------------------------------
// Function : Validate Visit with UR and Visit Type
//------------------------------------------------------------
function validateVisType(urnumber,patname,admissno,systemcd,reference) {
  system=parseInt(systemcd.value,10);
  if (isWhitespace(admissno.value)) {
    if (system!=90) {       // Emergency Deposit
      urnumber.value="";
      patname.value="";
      reference.value="";
    }
    return;;
  }
  else {
    urnumber.value="";
    patname.value="";
    reference.value="";
  }
  type=0;
  if (system==90) {
    type=1;         // Emergency
  }
  else if (system==91) {
    type=2;         // Outpatient
  }
  else if (system==96) {
    type=10;         // Allied Health, Private Practice
  }
  else if (system==97) {
    type=3;         // Inpatient
  }
  if (!validateVisit(admissno,urnumber,type)) {
    urnumber.value="";
    patname.value="";
    reference.value="";
    admissno.focus();
  }
  else {
    justifyRight(urnumber);
    validateCodeRecUR(urnumber,patname,reference);
  }
}
//------------------------------------------------------------
// Function : Validate Visit Remote Script 
//------------------------------------------------------------
function validateVisit(admissno,urnumber,visittyp) {
  ReturnFunction="" ;
  for (var i=3; i < validateVisit.arguments.length; i++) {
    if (typeof(validateVisit.arguments[i]) == 'function') {
      ReturnFunction=validateVisit.arguments[i] }
    else {
      validateVisit.arguments[i].value=""; }  }
  if (isWhitespace(admissno.value)) return;;
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=56" +
                  "&valdcode=" + admissno.value.replace(/ /g,"+") +
                  "&valdurno=" + urnumber.value.replace(/ /g,"+") +
                  "&valdtype=" + visittyp;
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    if (isWhitespace(urnumber.value)) {
       urnumber.value=ReturnValue[1];
    }
    var warnflag=ReturnValue[2];
    if (warnflag==1) {
      alert("Warning: An Invoice already exists for this visit");
    }
    j=3
    for (var i=3; i < validateVisit.arguments.length; i++) {
       if (typeof(validateVisit.arguments[i]) != 'function') {
         j++
         validateVisit.arguments[i].value=ReturnValue[j] } 
    }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } 
    return true;
  }
  else {
    admissno.value="";
    return false;}
}
function validatePMIDebtor(pmiradio,urnumber,patname,reference) {
  //if (pmiradio[0].checked==true) {
  if (pmiradio.value==1) {
    validateCodeRecUR(urnumber,patname,reference);
  }
  else {
//    validateCode(59,urnumber,patname);
    alert("Private Practice debtor number is no longer used.");
    return;
  }
}
function setClear(thisForm) {
  clrFields(thisForm.accntcod,thisForm.accntnam,
            thisForm.bankld01,thisForm.bankld02,
            thisForm.chqacc01,thisForm.chqacc02,
            thisForm.dbaccn01,thisForm.dbaccn02,
            thisForm.gstcon01,thisForm.gstcon02);
}
function validateAccount(thisForm) {
  if (isWhitespace(thisForm.accntcod.value)) { return; }
  if (!isWhitespace(thisForm.ledgerno.value)) {
  ValAcc(thisForm.accntcod,thisForm.accntnam,
         thisForm.bankld01,thisForm.bankld02,
         thisForm.chqacc01,thisForm.chqacc02,
         thisForm.dbaccn01,thisForm.dbaccn02,
         thisForm.gstcon01,thisForm.gstcon02,
         thisForm.ledgerno)
  } else {
     alert("Default Ledger must be entered."); }
}
function ValAcc(ReturnCode,ReturnName,BankLed,BankLedDsc,
                ChqAcc,ChqAccDsc,DebAcc,DebAccDsc,
                Gst,GstDsc,LedgerNo) {
  a=LedgerNo.selectedIndex;
  acctcode=LedgerNo.options[a].value + ReturnCode.value;
  var serverURL = "../cgi-bin/rcpweb01.pbl?reportno=4" +
                  "&valdcode=" + acctcode.replace(/ /g,"+") +
                  "&listtype=1";

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    BankLed.value=trim(ReturnValue[1])
    BankLedDsc.value=trim(ReturnValue[2])    
    ChqAcc.value=trim(ReturnValue[3])
    ChqAccDsc.value=trim(ReturnValue[4])
    DebAcc.value=trim(ReturnValue[5])
    DebAccDsc.value=trim(ReturnValue[6])
    Gst.value=trim(ReturnValue[7])
    GstDsc.value=trim(ReturnValue[8])
//  SetGST();
  }
  else {
    ReturnCode.value="";
    ReturnName.value="";
    ReturnCode.select();
    ReturnCode.focus();
  }
}
function ChkLedgerCr(thisForm) {
  p=document.UpdateForm;
  if (!isWhitespace(thisForm.ledgerno.value)) {
  Income(thisForm.ledgerno,thisForm.accntcod,thisForm.accntnam,
                           thisForm.bankld01,thisForm.bankld02,
                           thisForm.chqacc01,thisForm.chqacc02,
                           thisForm.dbaccn01,thisForm.dbaccn02,
                           thisForm.gstcon01,thisForm.gstcon02,"1");
  } 
  else {
     alert("Default Ledger must be entered."); 
  }
}
//------------------------------------------------------------
// Function : Default Amount with Invoice Bal - only when blank          
//------------------------------------------------------------
function defaultAmount(thisForm) {
  if ((!isWhitespace(thisForm.rcpde018.value)) &&
      (parseFloat(thisForm.rcpde018.value)>0)) {
    return;
  }
  var totalbal=0;
  totalbal=thisForm.rcpbk003.value-thisForm.allctotl.value;
  if ((totalbal>0) && (thisForm.balancea.value>0)) {
    if (totalbal>thisForm.balancea.value) {
      thisForm.rcpde018.value=thisForm.balancea.value;
      RoundNumber(thisForm.rcpde018,2);
    }
    else {
      thisForm.rcpde018.value=totalbal;
      RoundNumber(thisForm.rcpde018,2);
    }
    thisForm.rcpde018.select();
  }
}
//------------------------------------------------------------
// Function : Default Amount - only when blank          
//------------------------------------------------------------
function defaultAmtOth(thisForm) {
  if ((!isWhitespace(thisForm.rcpde018.value)) &&
      (parseFloat(thisForm.rcpde018.value)>0)) {
    return;
  }
  var totalbal=0;
  totalbal=thisForm.rcpbk003.value-thisForm.allctotl.value;
  if (totalbal>0) {
    thisForm.rcpde018.value=totalbal;
    RoundNumber(thisForm.rcpde018,2);
  }
}
//------------------------------------------------------------
// Function : Validate Invoice with UR and Visit Type
//------------------------------------------------------------
function validateInvType(thisForm) {
  if (isWhitespace(thisForm.rcpde005.value)) {
    thisForm.rcpde006.value="";
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.rcpde015.value="";
    thisForm.balancea.value="";
    thisForm.visttype.value="";
    thisForm.tinvamnt.value="";
    thisForm.invrebat.value="";
    thisForm.amntpaid.value="";
    thisForm.eclipclm.value="";
    return;;
  }

  // Right justify invoice number
  justifyRight(thisForm.rcpde005);
  if (validateInvoice(thisForm.rcpde005,thisForm.rcpde006,
                  thisForm.rcpde007,thisForm.visttype,
                  thisForm.balancea,thisForm.tinvamnt,
                  thisForm.invrebat,thisForm.amntpaid,
                  thisForm.eclipclm)) {
    // if Multi Hospital is Used
    if (!validateMultHosp(thisForm.ibcnmhos,thisForm.rcpde004,
                          thisForm.rcpde006)) {
      return;
    }
    // Right justify UR
    justifyRight(thisForm.rcpde007);   
    // validate UR and get Patient name
   if(validateCodeRecUR(thisForm.rcpde007,thisForm.patientn,thisForm.rcpde015)){ 
      // get default amount for invoice if blank
      defaultAmount(thisForm);
   }
  }
  else {
    thisForm.rcpde006.value="";
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.rcpde015.value="";
    thisForm.balancea.value="";
    FocusDelay(thisForm.rcpde005);
  }
}

function validateInvoice(invoicen,admissno,urnumber,visittyp,outstamt,invctotl,invrebat,invcpaid,eclipclm) {
 if (isWhitespace(invoicen.value)) {
   return false;
 }

 var Url = "../cgi-bin/patweb80.pbl?reportno=51" +
           "&valdcode="+invoicen.value.replace(/ /g,"+") +
           "&valdtype=1&valdcrst=1";

 var returnValue = RSExecute(Url);    //Remote Script To validate invoice no
 var debtagnt = "";

 if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   invoicen.value=ReturnValue[0];
   justifyRight(invoicen);
   admissno.value=ReturnValue[1];
   urnumber.value=ReturnValue[2];
   visittyp.value=ReturnValue[3];
   outstamt.value=ReturnValue[4];
   invctotl.value=ReturnValue[5];
   invrebat.value=ReturnValue[6];
   invcpaid.value=ReturnValue[7];
   eclipclm.value=ReturnValue[8];
   debtagnt=ReturnValue[9];

  if (document.AddForm.ptcnprdc!=undefined) {
   if(document.AddForm.ptcnprdc.value=="1") {
    if (debtagnt=='3') {
     if(!confirm("Warning: Visit with Debt Collection Agency." +
                 "\n Please Refer to Procedure Manual.")) {
     invoicen.value="";
     FocusDelay(invoicen);
     return true; }
    }
   }
  }

   if (eclipclm.value=='1') {
     if(!confirm("Warning: There is an Eclipse claim associated " +
                 "with this Invoice.")) {
     invoicen.value="";
     FocusDelay(invoicen);
     return true; }
   }

   return true;
 }
 else {

  invoicen.value="";
  FocusDelay(invoicen);
  return false;
 }

}
//------------------------------------------------------------
// ***** Multi Database only *****
// Function : Validate Invoice with UR and Visit Type and Hospital ID 
//------------------------------------------------------------
function validateInvTypeMulti(thisForm) {
  if (isWhitespace(thisForm.rcpde005.value)) {
    thisForm.rcpde006.value="";
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.balancea.value="";
    thisForm.visttype.value="";
    return;;
  }
  // Right justify invoice number
  justifyRight(thisForm.rcpde005);
  if (validateInvoiceMulti(thisForm.rcpde005,thisForm.rcpde006,
                  thisForm.rcpde007,thisForm.visttype,
                  thisForm.balancea,thisForm.muldhosp)) {
    // Right justify UR
    justifyRight(thisForm.rcpde007);
    // validate UR and get Patient name
    if(validateCode(8,thisForm.rcpde007,thisForm.patientn)) {
      // get default amount for invoice if blank
      defaultAmount(thisForm);
    }
  }
  else {
    thisForm.rcpde006.value="";
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.balancea.value="";
    thisForm.rcpde005.focus();
  }
}
function validateInvoiceMulti(invoicen,admissno,urnumber,visittyp,
                              outstamt,hospital) {
 if (isWhitespace(invoicen.value)) {
   return false;
 }
 var Url = "../cgi-bin/patweb80.pbl?reportno=51" +
           "&valdcode="+invoicen.value.replace(/ /g,"+") +
           "&valdtype=1&valdcrst=1" +
           "&muldhosp="+hospital.value.replace(/ /g,"+");
 var returnValue = RSExecute(Url);    //Remote Script To validate invoice no
 if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   invoicen.value=ReturnValue[0];
   justifyRight(invoicen);
   admissno.value=ReturnValue[1];
   urnumber.value=ReturnValue[2];
   visittyp.value=ReturnValue[3];
   outstamt.value=ReturnValue[4];
   return true;
 }
 else {
  invoicen.focus();
  return false;
 }
}
//
//------------------------------------------------------------
// Function : Validated register hospital Id against Visit's hospital Id
//
// No focus or field deletion on errors for cases where 
// incorrect registers selected. A close template can be 
// done without deleting any incorrect fields
//------------------------------------------------------------
function validateMultHosp(multihos,register,admissno) {
 if (multihos.value!=1) { 
   return true;
 }
 if ((isWhitespace(register.value)) || 
     (isWhitespace(admissno.value))) {
   return true;
 }
 var Url = "../cgi-bin/rcpweb02.pbl?reportno=4" +
           "&valdcode=" + register.value.substr(0,3).replace(/ /g,"+") +
           "&admissno=" + admissno.value.replace(/ /g,"+");
 var returnValue = RSExecute(Url);    //Remote Script To validate invoice no
 if (returnValue.status==0) {
   return true;
 }
 else {
  return false;
 }
}
//------------------------------------------------------------
// Function : Validate Invoice with UR and Visit Type
//------------------------------------------------------------
function validatePPInvType(thisForm) {
  if (isWhitespace(thisForm.rcpde005.value)) {
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.rcpde015.value="";
    thisForm.balancea.value="";
    return;;
  }
  justifyRight(thisForm.rcpde005);
  if (validatePPInvoice(thisForm.rcpde005,thisForm.rcpde007,thisForm.rcpde014,
                  thisForm.balancea,thisForm.rcpde004)) {
     //if (thisForm.rcpde014[0].checked==true) {
     if (thisForm.rcpde014.value==1) {
       justifyRight(thisForm.rcpde007);
       if (!validateCodeRecUR(thisForm.rcpde007,thisForm.patientn,thisForm.rcpde015)) {
         thisForm.rcpde007.value="";
         thisForm.patientn.value="";
         thisForm.rcpde015.value="";
         thisForm.rcpde005.focus();
         return;
       }
       else {
         defaultAmount(thisForm);
       }
     }
     else {
     //  justifyRight(thisForm.rcpde007);
     //  if (!validateCode(59,thisForm.rcpde007,thisForm.patientn)) {
     //    thisForm.rcpde007.value="";
     //    thisForm.patientn.value="";
     //    thisForm.rcpde005.focus();
     //    return;
     //  }
       alert("Private Practice Debtor Number no longer used.");
       thisForm.rcpde005.focus();
       return;
     }
  }
  else {
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.rcpde015.value="";
    thisForm.balancea.value="";
    FocusDelay(thisForm.rcpde005);
    return;
  }
}
function validatePPInvoice(invoicen,urnumber,scanflag,outstamt,regist) {
 if (isWhitespace(invoicen.value)) {
   return false;
 }

 var Url = "../cgi-bin/patweb80.pbl?reportno=57" +
           "&valdcode="+invoicen.value.replace(/ /g,"+") +
           "&valdcrst=1"; 
 var returnValue = RSExecute(Url);    //Remote Script To validate invoice no
 if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   invoicen.value=ReturnValue[0];
   justifyRight(invoicen);
   urnumber.value=ReturnValue[1];
   if (ReturnValue[2]==1) {
   //  scanflag[0].checked=true;
     scanflag.value=1;
   }
   else {
   //  scanflag[1].checked=true;
     alert("Cannot use invoice with old Debtor number");
     FocusDelay(invoicen);
     return false;
   }

  if ((!isWhitespace(ReturnValue[4])) && (!isWhitespace(regist.value.substr(0,3)))) {
   if((ReturnValue[4])!=(regist.value.substr(0,3))) {
    if(!confirm("Warning: Invoice Practice does NOT match Register Practice."))
    {
     FocusDelay(invoicen);
     return false;
    }
   }
  }

   outstamt.value=ReturnValue[3];
   return true;
 }
 else {
  FocusDelay(invoicen);
  return false;
 }
}
function PatDebtSearchFrame(patname,urnumber,visitno,patflg) {
  //if (patflg[1].checked==true) {
  if (patflg.value==0) {
    DebtorPPSearchFrame(patname,urnumber);
  }
  else {
    PatientSearchFrame(patname,urnumber,visitno,SetRefA);
  }
}
//------------------------------------------------------------
// Function : Get Account Receivable Invoice Items
//------------------------------------------------------------
function getARInvoice(thisForm) {
//
// validate Acc Rec invoice number and get debtor number, name & inv amt.
//
  validateARInvType(thisForm);
//
// if different invoice number entered, submit form to get invoice items.
//
  if (trim(thisForm.oldinv.value)!=trim(thisForm.rcpde005.value)) {
    thisForm.updttype.value="";
    thisForm.submit();
  }
}
//------------------------------------------------------------
// Function : Validate Account Receivable Invoice & Debtor Number
//------------------------------------------------------------
function validateARInvType(thisForm) {
  if (isWhitespace(thisForm.rcpde005.value)) {
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.balancea.value="";
  }
//
// validate Invoice number
//
  if (validateARInvoice(thisForm.rcpde005,thisForm.rcpde007,
                  thisForm.balancea)) {
//
// validate debtor number (returned from validate invoice)
//
     thisForm.rcpde007.value=thisForm.rcpde007.value.replace(/&/g,"~");
//     alert(thisForm.rcpde007.value);
     if (!validateCode(60,thisForm.rcpde007,thisForm.patientn)) {
       thisForm.rcpde007.value="";
       thisForm.rcpde005.value="";
     }
     else {
       thisForm.rcpde007.value=thisForm.rcpde007.value.replace(/~/g,"&");
       defaultAmount(thisForm);
     }
  }
  else {
    thisForm.rcpde007.value="";
    thisForm.patientn.value="";
    thisForm.balancea.value="";
    thisForm.rcpde005.value="";
  }
}
//------------------------------------------------------------
// Validate Acc Rec Invoice number
//    Returns Debtor number and outstanding amount.
//------------------------------------------------------------
function validateARInvoice(invoicen,urnumber,outstamt) {
 if (isWhitespace(invoicen.value)) {
   return false;
 }
 var Url = "../cgi-bin/patweb80.pbl?reportno=58" +
           "&valdcode="+invoicen.value.replace(/ /g,"+"); 
 var returnValue = RSExecute(Url);    //Remote Script To validate invoice no
 if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   invoicen.value=ReturnValue[0];
   urnumber.value=ReturnValue[1];
   outstamt.value=ReturnValue[2];
   return true;
 }
 else {
  invoicen.focus();
  return false;
 }
}
function disableUR(admissno,urnumber,pmisrch) {
  if (isWhitespace(admissno.value)) {
    urnumber.className="Mandatory";
    urnumber.readOnly=false;
    pmisrch.disabled=false;
  }
  else {
    urnumber.className="Readonly";
    urnumber.readOnly=true;
    pmisrch.disabled=true;
  }
}
//------------------------------------------------------------
// Validate a U/R using remote scripting and if appropriate
// default the patient name to the receipt reference
//------------------------------------------------------------
function validateCodeRecUR(ReturnCode,ReturnName,ReturnRef) {
  ReturnFunction="" ;
  ReturnName.value="";
  ReturnRef.value="";
  for (var i=3; i < validateCodeRecUR.arguments.length; i++) {
    if (typeof(validateCodeRecUR.arguments[i]) == 'function') {
      ReturnFunction=validateCodeRecUR.arguments[i] }
    else {
      validateCodeRecUR.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=8&returnfm=3" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    if(!isWhitespace(ReturnValue[1])) {
      ReturnRef.value=trim(ReturnValue[1])
    }
    j=0
    for (var i=3; i < validateCodeRecUR.arguments.length; i++) {
       if (typeof(validateCodeRecUR.arguments[i]) != 'function') {
         j++
         validateCodeRecUR.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() }
    return true;
    }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    ReturnCode.focus();
    return false;
     }
}
function SetRefA() {
 if(document.AddForm.rccndref.value=="1") {
   validateCodeRecUR(AddForm.rcpde007,AddForm.patientn,AddForm.rcpde015);
 }
}
function SetRefAR() {
 if(document.AddForm.rccndref.value=="1") {
   if(isWhitespace(document.AddForm.rcpde015.value)) {
     if(!isWhitespace(document.AddForm.patientn.value)) {
       document.AddForm.rcpde015.value=trim(document.AddForm.patientn.value)
     }
   }
 }
}
function SetURRef() {
 if(document.AddForm.rccndref.value=="1") {
   if(isWhitespace(document.AddForm.rcpde015.value)) {
     document.AddForm.rcpde015.value=trim(document.AddForm.defltref.value);
     UpCase(document.AddForm.rcpde015);
   }
 }
}

function ShowDiscount(theForm) {
 if(theForm.rccndisc.value=="1") {

   //-- VERY IMPORTANT IF YOU CALL THIS JS in multiple templates --
   //-- check if the field exist, other wise put the field as hidden
   //-- in all template.

   //typeof field != 'undefined' - checks the field to see if it exist on the template
   if(typeof Discount != 'undefined') {
     Discount.style.display="none";
   }

   if(typeof DiscountName != 'undefined') {
     DiscountName.style.display="none";
   }

   if(document.getElementById('copies')) {
     document.getElementById('copies').colSpan="3";
     document.getElementById('copies').innerHTML="&nbsp;&nbsp;Copies";
   }
 } else {
   if(typeof  DiscountName != 'undefined') {
     DiscountName.style.display="";
   }

   if(typeof Discount != 'undefined') {
     Discount.style.display="";
   }
 }

 system=theForm.rcpde004.value.substr(3,2);
 if (system=="99") {
   //-- VERY IMPORTANT IF YOU CALL THIS JS in multiple templates --
   //-- check if the field exist, other wise put the field as hidden
   //-- in all template.

   if(typeof NomoniesName != 'undefined') {
      NomoniesName.style.display="none";
   }

   if(typeof NomoniesChkb != 'undefined') {
     NomoniesChkb.style.display="none";
   }

 } else {

   if(typeof NomoniesName != 'undefined') {
     NomoniesName.style.display="";
   }

   if(typeof NomoniesName != 'undefined') {
     NomoniesChkb.style.display="";
   }

 }
}

/*****************************************************************************
 * remove payment type credit card from payment option
 */
function removePaymentType(id)
{
  // remove credit card payment type flag
  var isRemovePaymentType = document.getElementById("rccnrcct").value;

  // payment type selection menu
  var paymentOptions = document.getElementById(id);

  // object exist?
  if(isRemovePaymentType && paymentOptions)
  {
    if(isRemovePaymentType == 1)
    {
      for(var i = 0; i < paymentOptions.length; i++)
      {
        if(paymentOptions[i].text.match("Credit") !== null)
        {
           var element = paymentOptions[i];
           paymentOptions.removeChild(element);
        }
      }
    }
  }

}

//-----------------------------------------------------------------------
// Function : Get Cheque Account and Default Inv.Register - Remote Script
//-----------------------------------------------------------------------
function getChqAcctInvReg(drawer,chqacct,defchqno,registno,definvrg) {
  chqacct.selectedIndex=0;

  if (validateRCPInvReg(1,drawer,defchqno,definvrg)) {
    if (!isWhitespace(defchqno.value)) {
      for (var i=0; i < chqacct.length; i++) {
        if (trim(chqacct.options[i].value)==trim(defchqno.value)){
          chqacct.selectedIndex=i; }
      }
    }

   if (isWhitespace(registno.value)) {
    registno.selectedIndex=0;
    if (!isWhitespace(definvrg.value)) {
      for (var i=0; i < registno.length; i++) {
       if (trim(registno.options[i].value.substring(0,3))==(trim(definvrg.value.substring(0,3)))){
          registno.selectedIndex=i; }
      }
    }
   }
  }

}

function validateRCPInvReg(OptionNumber,ReturnCode,ReturnName,ReturnInvReg) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateRCPInvReg.arguments.length; i++) {
    if (typeof(validateRCPInvReg.arguments[i]) == 'function') {
      ReturnFunction=validateRCPInvReg.arguments[i] }
    else {
      validateRCPInvReg.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  temp="../cgi-bin/rcpweb02.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var serverURL   = "../cgi-bin/rcpweb02.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnInvReg.value=trim(ReturnValue[1])
    return true;
    }
  else {
    if (ReturnCode.select) ReturnCode.select();
    if (ReturnCode.focus)  ReturnCode.focus();
    return false;
     }
}

//---------------------------------------------------------------------------
// Function : Get Cheque Account and Default Deposit Register - Remote Script
//---------------------------------------------------------------------------
function getChqAcctDepReg(drawer,chqacct,defchqno,registno,defdeprg) {
  chqacct.selectedIndex=0;

  if (validateRCPDepReg(1,drawer,defchqno,defdeprg)) {
    if (!isWhitespace(defchqno.value)) {
      for (var i=0; i < chqacct.length; i++) {
        if (trim(chqacct.options[i].value)==trim(defchqno.value)){
          chqacct.selectedIndex=i; }
      }
    }

    registno.selectedIndex=0;
    if (!isWhitespace(defdeprg.value)) {
      for (var i=0; i < registno.length; i++) {
       if (trim(registno.options[i].value.substring(0,3))==(trim(defdeprg.value.substring(0,3)))){
          registno.selectedIndex=i; }
      }
    }
  }

}

//----------------------------------------------------------------
function validateRCPDepReg(OptionNumber,ReturnCode,ReturnName,ReturnDepReg) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=3; i < validateRCPDepReg.arguments.length; i++) {
    if (typeof(validateRCPDepReg.arguments[i]) == 'function') {
      ReturnFunction=validateRCPDepReg.arguments[i] }
    else {
      validateRCPDepReg.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  temp="../cgi-bin/rcpweb02.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var serverURL   = "../cgi-bin/rcpweb02.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    ReturnDepReg.value=trim(ReturnValue[2])
    return true;
    }
  else {
    if (ReturnCode.select) ReturnCode.select();
    if (ReturnCode.focus)  ReturnCode.focus();
    return false;
     }
}

