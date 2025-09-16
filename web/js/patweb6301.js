//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb6301.js
//
// Written   : 18/08/2003
//
// Function  : Standard Functions Used in patweb6301 templates
//
//========================================================================
// REPORT 1 - Casemix Matrix  
//========================================================================
function ShowMatrix(claim,cont,hfund,table,rtype,casemix) {
  location.href="patweb63.pbl?reportno=1&template=3" +
               "&pmcmt001=" + claim +
               "&pmcmt064=" + cont +
               "&pmcmt002=" + hfund +
               "&pmcmt003=" + table +
               "&pmcmt004=" + casemix +
               "&pmcmt063=" + rtype +
               "&pmcmt005=     0"
}
function UpdateMatrix(claim,cont,hfund,table,rtype,casemix,count) {
  linkurl="patweb63.pbl?reportno=1&template=5" +
               "&pmcmt001=" + claim +
               "&pmcmt064=" + cont +
               "&pmcmt002=" + hfund +
               "&pmcmt003=" + table +
               "&pmcmt004=" + casemix +
               "&pmcmt063=" + rtype +
               "&pmcmt005=" + count
   Left=(document.body.clientWidth-900)/2
   if (IECompatibilityMode) {
     DFrameLink(linkurl,0,Left,1100,820);
   } else {
     DFrameLink(linkurl,0,Left,1100,690);
   }
}
//
function UpdateCutOffs() {
  linkurl="patweb63.pbl?reportno=1&template=6" + 
          "&pmcmt001="+document.SelectCode.pmcmt001.value +
          "&pmcmt002="+document.SelectCode.pmcmt002.value +
          "&pmcmt003="+document.SelectCode.pmcmt003.value +
          "&pmcmt004="+document.SelectCode.pmcmt004.value +
          "&pmcmt063="+document.SelectCode.pmcmt063.value +
          "&pmcmt064="+document.SelectCode.pmcmt064.value +
          "&pmcmt005=     0"
   Left=(document.body.clientWidth-800)/2
   DFrameLink(linkurl,0,Left,550,400);
}
//
function valHfund(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function valHfundtable(ReturnFund,FundName) {
  if(!isWhitespace(ReturnFund.value)) {
     validateCode(16,ReturnFund,FundName)
     AddForm.pmcmt003.className="Mandatory";
  }
  if(isWhitespace(ReturnFund.value)) {
    ReturnFund.value="";
    FundName.value="";
  }
}
//
function validateMBSCode(OptionNumber,ReturnCode,ReturnName) {
  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=4; i < validateMBSCode.arguments.length; i++) {
    if (typeof(validateMBSCode.arguments[i]) == 'function') {
      ReturnFunction=validateMBSCode.arguments[i] }
    else {
      validateMBSCode.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/oprweb01.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=trim(ReturnValue[0])
    j=0
    for (var i=4; i < validateMBSCode.arguments.length; i++) {
       if (typeof(validateMBSCode.arguments[i]) != 'function') {
         j++
         validateCode.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.select();
    return false;
     }
}
//
function DisplayDivDStat(theForm) {
  p=theForm;
  ind=theForm.pmcmt021.value
  if(ind!="1"&&ind!="3") {
    DisStat1.innerHTML=DisStatBlank.innerHTML;
    DisStat2.innerHTML=DisStatBlank.innerHTML;
    document.getElementById("pmcmt022").value="";
    document.getElementById("pmcmt023").value="";
    document.getElementById("pmcmt024").value="";
    document.getElementById("pmcmt025").value="";
    document.getElementById("pmcmt026").value="";
  }else {
    DisStat1.innerHTML=DisStat11.innerHTML;
    DisStat2.innerHTML=DisStat22.innerHTML;
    p.category.value="D "
    selectOptionsInd("54",p.category.value,p.pmcmt022,p.d_pmcmt022.value);
    selectOptionsInd("54",p.category.value,p.pmcmt023,p.d_pmcmt023.value);
    selectOptionsInd("54",p.category.value,p.pmcmt024,p.d_pmcmt024.value);
    selectOptionsInd("54",p.category.value,p.pmcmt025,p.d_pmcmt025.value);
    selectOptionsInd("54",p.category.value,p.pmcmt026,p.d_pmcmt026.value);
  }
}
//
function DisplayDivDDest(theForm) {
  p=theForm;
  ind=theForm.pmcmt027.value;
  if(ind!="1"&&ind!="3") {
    DisDest1.innerHTML=DisDestBlank.innerHTML;
    DisDest2.innerHTML=DisDestBlank.innerHTML;
    document.getElementById("pmcmt028").value="";
    document.getElementById("pmcmt029").value="";
    document.getElementById("pmcmt030").value="";
    document.getElementById("pmcmt031").value="";
    document.getElementById("pmcmt032").value="";
  }else {
    DisDest2.innerHTML=DisDest22.innerHTML;
    DisDest1.innerHTML=DisDest11.innerHTML;
    p.category.value="DD"
    selectOptionsInd("54",p.category,p.pmcmt028,p.d_pmcmt028.value);
    selectOptionsInd("54",p.category,p.pmcmt029,p.d_pmcmt029.value);
    selectOptionsInd("54",p.category,p.pmcmt030,p.d_pmcmt030.value);
    selectOptionsInd("54",p.category,p.pmcmt031,p.d_pmcmt031.value);
    selectOptionsInd("54",p.category,p.pmcmt032,p.d_pmcmt032.value);
  }
}
//
function DisplayDivDRG(theForm) {
  ind=document.getElementById("pmcmt010").value;
  if(ind!="1"&&ind!="3") {
    DisDRG.innerHTML=DRGBlank.innerHTML;
    document.getElementById("pmcmt011").value="";
    return;}
  else {
    DisDRG.innerHTML=DisDRG1.innerHTML;
    return;}
}
function DisplayDivMBS(theForm) {
  ind=theForm.pmcmt012.value;
    if(ind!="1"&&ind!="3") {
      PrimaryMBSF.innerHTML=PrimaryMBSBlank.innerHTML;
      PrimaryMBST.innerHTML=PrimaryMBSBlank.innerHTML;
      document.getElementById("pmcmt013").value="";
      document.getElementById("pmcmt014").value="";
      return;}
    else {
      PrimaryMBSF.innerHTML=PrimaryMBSF1.innerHTML;
      PrimaryMBST.innerHTML=PrimaryMBST1.innerHTML;
      return;}
  }
function DisplayDivSMBS(theForm) {
  ind=theForm.pmcmt015.value;
    if(ind!="1"&&ind!="3") {
      SecondMBSF.innerHTML=SecondMBSBlank.innerHTML;
      SecondMBST.innerHTML=SecondMBSBlank.innerHTML;
      document.getElementById("pmcmt016").value="";
      document.getElementById("pmcmt017").value="";
      return;}
    else {
      SecondMBSF.innerHTML=SecondMBSF1.innerHTML;
      SecondMBST.innerHTML=SecondMBST1.innerHTML;
      return;}
  }
function DisplayDivTMBS(theForm) {
  ind=theForm.pmcmt018.value;
    if(ind!="1"&&ind!="3") {
      TertiaryMBSF.innerHTML=TertiaryMBSBlank.innerHTML;
      TertiaryMBST.innerHTML=TertiaryMBSBlank.innerHTML;
      document.getElementById("pmcmt019").value="";
      document.getElementById("pmcmt020").value="";
      return;}
    else {
      TertiaryMBSF.innerHTML=TertiaryMBSF1.innerHTML;
      TertiaryMBST.innerHTML=TertiaryMBST1.innerHTML;
      return;}
  }
function DisplayDiv4MBS(theForm) {
  ind=theForm.pmcmt072.value;
    if(ind!="1"&&ind!="3") {
      FourthMBSF.innerHTML=FourthMBSBlank.innerHTML;
      FourthMBST.innerHTML=FourthMBSBlank.innerHTML;
      document.getElementById("pmcmt073").value="";
      document.getElementById("pmcmt074").value="";
      return;}
    else {
      FourthMBSF.innerHTML=FourthMBSF1.innerHTML;
      FourthMBST.innerHTML=FourthMBST1.innerHTML;
      return;}
  }
function DisplayDiv5MBS(theForm) {
  ind=theForm.pmcmt075.value;
    if(ind!="1"&&ind!="3") {
      FifthMBSF.innerHTML=FifthMBSBlank.innerHTML;
      FifthMBST.innerHTML=FifthMBSBlank.innerHTML;
      document.getElementById("pmcmt076").value="";
      document.getElementById("pmcmt077").value="";
      return;}
    else {
      FifthMBSF.innerHTML=FifthMBSF1.innerHTML;
      FifthMBST.innerHTML=FifthMBST1.innerHTML;
      return;}
  }
function DisplayDiv6MBS(theForm) {
  ind=theForm.pmcmt078.value;
    if(ind!="1"&&ind!="3") {
      SixthMBSF.innerHTML=SixthMBSBlank.innerHTML;
      SixthMBST.innerHTML=SixthMBSBlank.innerHTML;
      document.getElementById("pmcmt079").value="";
      document.getElementById("pmcmt080").value="";
      return;}
    else {
      SixthMBSF.innerHTML=SixthMBSF1.innerHTML;
      SixthMBST.innerHTML=SixthMBST1.innerHTML;
      return;}
  }

function DisplayDivICD10(theForm) {
  ind=theForm.pmcmt039.value;
    if(ind!="1"&&ind!="3") {
      ICD10X.innerHTML=ICD10Blank.innerHTML;
      ICD10.innerHTML=ICD10Blank.innerHTML;
      ICD102.innerHTML=ICD10Blank.innerHTML;
      ICD103.innerHTML=ICD10Blank.innerHTML;
      document.getElementById("pmcmt040").value="";
      document.getElementById("pmcmt041").value="";
      document.getElementById("pmcmt042").value="";
      document.getElementById("pmcmt043").value="";
      document.getElementById("pmcmt044").value="";
      return;}
    else {
      ICD10X.innerHTML=HeadingICD10.innerHTML;
      ICD10.innerHTML=PrimaryICD10.innerHTML;
      ICD102.innerHTML=PrimaryICD102.innerHTML;
      ICD103.innerHTML=PrimaryICD103.innerHTML;
      return;}
  }

function DisplayDivICO10(theForm) {
  ind=theForm.pmcmt066.value;
    if(ind!="1"&&ind!="3") {
      ICO10X.innerHTML=ICO10Blank.innerHTML;
      ICO10.innerHTML=ICO10Blank.innerHTML;
      ICO102.innerHTML=ICO10Blank.innerHTML;
      ICO103.innerHTML=ICO10Blank.innerHTML;
      document.getElementById("pmcmt067").value="";
      document.getElementById("pmcmt068").value="";
      document.getElementById("pmcmt069").value="";
      document.getElementById("pmcmt070").value="";
      document.getElementById("pmcmt071").value="";
      return;}
    else {
      ICO10X.innerHTML=HeadingICO10.innerHTML;
      ICO10.innerHTML=PrimaryICO10.innerHTML;
      ICO102.innerHTML=PrimaryICO102.innerHTML;
      ICO103.innerHTML=PrimaryICO103.innerHTML;
      return;}
  }

function DisplayDivDisUDF(theForm) {
  p=theForm;
  ind=theForm.pmcmt057.value;
    if(ind!="1"&&ind!="3") {
      DisUDF1.innerHTML=DisUDFBlank.innerHTML;
      DisUDF2.innerHTML=DisUDFBlank.innerHTML;
      document.getElementById("pmcmt058").value="";
      document.getElementById("pmcmt059").value="";
      document.getElementById("pmcmt060").value="";
      document.getElementById("pmcmt061").value="";
      document.getElementById("pmcmt062").value="";
    }else {
      DisUDF1.innerHTML=DisUDF11.innerHTML;
      DisUDF2.innerHTML=DisUDF22.innerHTML;
      theForm.category.value="CC"
      selectOptionsInd("54",p.category,p.pmcmt058,p.d_pmcmt058.value);
      selectOptionsInd("54",p.category,p.pmcmt059,p.d_pmcmt059.value);
      selectOptionsInd("54",p.category,p.pmcmt060,p.d_pmcmt060.value);
      selectOptionsInd("54",p.category,p.pmcmt061,p.d_pmcmt061.value);
      selectOptionsInd("54",p.category,p.pmcmt062,p.d_pmcmt062.value);
    }
  }
function DisplayDivAdmUDF(theForm) {
  p=theForm;
  ind=theForm.pmcmt051.value;
    if(ind!="1"&&ind!="3") {
      AdmUDF1.innerHTML=AdmUDFBlank.innerHTML;
      AdmUDF2.innerHTML=AdmUDFBlank.innerHTML;
      document.getElementById("pmcmt052").value="";
      document.getElementById("pmcmt053").value="";
      document.getElementById("pmcmt054").value="";
      document.getElementById("pmcmt055").value="";
      document.getElementById("pmcmt056").value="";
    }else {
      AdmUDF1.innerHTML=AdmUDF11.innerHTML;
      AdmUDF2.innerHTML=AdmUDF22.innerHTML;
      selectOptionsInd("54",p.admitudf,p.pmcmt052,p.d_pmcmt052.value);
      selectOptionsInd("54",p.admitudf,p.pmcmt053,p.d_pmcmt053.value);
      selectOptionsInd("54",p.admitudf,p.pmcmt054,p.d_pmcmt054.value);
      selectOptionsInd("54",p.admitudf,p.pmcmt055,p.d_pmcmt055.value);
      selectOptionsInd("54",p.admitudf,p.pmcmt056,p.d_pmcmt056.value);
    }
  }
function DisplayDivAdmSrc(theForm) {
  p=theForm;
  ind=theForm.pmcmt033.value;
    if(ind!="1"&&ind!="3") {
      AdmSrc1.innerHTML=AdmSrcBlank.innerHTML;
      AdmSrc2.innerHTML=AdmSrcBlank.innerHTML;
      document.getElementById("pmcmt034").value="";
      document.getElementById("pmcmt035").value="";
      document.getElementById("pmcmt036").value="";
      document.getElementById("pmcmt037").value="";
      document.getElementById("pmcmt038").value="";
    }else {
      AdmSrc1.innerHTML=AdmSrc11.innerHTML;
      AdmSrc2.innerHTML=AdmSrc22.innerHTML;
      p.category.value="S "
      selectOptionsInd("54",p.category,p.pmcmt034,p.d_pmcmt034.value);
      selectOptionsInd("54",p.category,p.pmcmt035,p.d_pmcmt035.value);
      selectOptionsInd("54",p.category,p.pmcmt036,p.d_pmcmt036.value);
      selectOptionsInd("54",p.category,p.pmcmt037,p.d_pmcmt037.value);
      selectOptionsInd("54",p.category,p.pmcmt038,p.d_pmcmt038.value);
    }
}
function selectOptionsInd(OptionNumber,ReturnCode,ReturnSelect,code) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdcatc=" + code
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0;
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         if(SelectValue[2]=="selected"){
           ReturnSelect.options[ReturnSelect.options.length]=
           new Option(SelectValue[1],SelectValue[0],true,true); 
             ReturnSelect.options.selectedIndex=j+1;
         }else{
          ReturnSelect.options[ReturnSelect.options.length]=
           new Option(SelectValue[1],SelectValue[0]); }  
       }
     }
    }else {
    ReturnCode.select();  }
}
function DisplayDivAtyp(theForm){
    p=theForm;
    ind=theForm.pmcmt045.value;
    if(ind!="1"&&ind!="3") {
      AdmTyp1.innerHTML=AdmTypBlank.innerHTML;
      AdmTyp2.innerHTML=AdmTypBlank.innerHTML;
      document.getElementById("pmcmt046").value="";
      document.getElementById("pmcmt047").value="";
      document.getElementById("pmcmt048").value="";
      document.getElementById("pmcmt049").value="";
      document.getElementById("pmcmt050").value="";
    }else {
      AdmTyp1.innerHTML=AdmTyp11.innerHTML;
      AdmTyp2.innerHTML=AdmTyp22.innerHTML;
      theForm.category.value="A "
      selectOptionsInd("54",p.category,p.pmcmt046,p.d_pmcmt046.value);
      selectOptionsInd("54",p.category,p.pmcmt047,p.d_pmcmt047.value);
      selectOptionsInd("54",p.category,p.pmcmt048,p.d_pmcmt048.value);
      selectOptionsInd("54",p.category,p.pmcmt049,p.d_pmcmt049.value);
      selectOptionsInd("54",p.category,p.pmcmt050,p.d_pmcmt050.value);
    }
}
