//jsVersion  : V11.03.00
//========================================================================
//Validate ACC Number
function validateACC()
{
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=26&valdcode="
  + document.UpdateForm.ptclm011.value.replace(/ /g,"+")+"&valdcod2="
  + document.UpdateForm.urnumber.value.replace(/ /g,"+")+"&valdcod3="
  + document.UpdateForm.admissno.value.replace(/ /g,"+");
  var returnValue = RSExecute(serverURL);
  ReturnValue=returnValue.return_value.split("|");
  if ((ReturnValue!="ACC No") && (ReturnValue!=""))
  {
    if(trim(ReturnValue[33])=="")
    {
      document.UpdateForm.d_ptclm069.checked=true;
      document.UpdateForm.ptclm069.value="1";
    }
    else
    {
      if(ReturnValue[35]=="1")
      {
        document.UpdateForm.d_ptclm069.checked=true;
        document.UpdateForm.ptclm069.value="1";
      }
      else
      {
        document.UpdateForm.d_ptclm069.checked=false;
        document.UpdateForm.ptclm069.value="0";
      }
    }

    ContNormalHrs();

    if(ReturnValue[36]=="1")
      document.UpdateForm.d_ptclm070.checked=true;
    else
      document.UpdateForm.d_ptclm070.checked=false;

    ValidateChks();
    var w = document.UpdateForm.ptclm071;
    for (var i=0;i<w.length;i++)
    {
      if(w.options[i].value.substring(0,3)==ReturnValue[37])
        document.UpdateForm.ptclm071.selectedIndex=i;
    }
    document.UpdateForm.ptclm072.value=trim(ReturnValue[38]);
    document.UpdateForm.ptclm073.value=trim(ReturnValue[39]);
    document.UpdateForm.ptclm074.value=trim(ReturnValue[40]);
    var x = document.UpdateForm.ptclm075;
    for (var i=0;i<x.length;i++)
    {
      if (x.options[i].value.substring(0,3)==ReturnValue[41])
        document.UpdateForm.ptclm075.selectedIndex=i;
    }
 
    if(trim(ReturnValue[42])=="")
      document.UpdateForm.ptclm076.value=document.UpdateForm.ptclm008.value;
    else
      document.UpdateForm.ptclm076.value=trim(ReturnValue[42]);

    document.UpdateForm.ptclm077.value=trim(ReturnValue[43]);
  } 
}
 
//Check Hours of Work
function ChkHrs(hrsperday)
{
  var checkid=hrsperday.value.search('[^0-9]')
  if (checkid >= 0) 
  {
    alert(hrsperday.title + " can only be numeric");
    hrsperday.value="";
    hrsperday.focus();
  }

  if (document.UpdateForm.ptclm073.value>24)
  {
    alert("Hours per Day of Alt Work must be <= 24");
    document.UpdateForm.ptclm073.value="";
    document.UpdateForm.ptclm073.focus();
  }
}

//Validate based on Accident Date
function ChkWithAccDate()
{
  var strtDay1  = document.UpdateForm.ptclm072.value.substring(0,2);
  var strtMon1  = document.UpdateForm.ptclm072.value.substring(3,6);
  var strtYear1 = document.UpdateForm.ptclm072.value.substring(7,11);
  var strtMon1 = GetMonthNumber(strtMon1);
  var strtDate1 = strtYear1 + strtMon1 + strtDay1
  var strtDay2  = document.UpdateForm.ptclm008.value.substring(0,2);
  var strtMon2  = document.UpdateForm.ptclm008.value.substring(3,6);
  var strtYear2 = document.UpdateForm.ptclm008.value.substring(7,11);
  var strtMon2 = GetMonthNumber(strtMon2);
  var strtDate2 = strtYear2 + strtMon2 + strtDay2
  if(strtDate1<strtDate2)
  {
    alert("Start Date of Alternative Work should be >= Accident Date");
    document.UpdateForm.ptclm072.value="";
    document.UpdateForm.ptclm072.focus();
  }
} 

//Check return to Normal Work Date
function ChkRetNormDate()
{
  if (!checkDate(document.UpdateForm.ptclm077)) { return false; }
  else if (isWhitespace(document.UpdateForm.ptclm077.value)) { return true; }

  var strtDay4  = document.UpdateForm.ptclm077.value.substring(0,2);
  var strtMon4  = document.UpdateForm.ptclm077.value.substring(3,6);
  var strtYear4 = document.UpdateForm.ptclm077.value.substring(7,11);
  var strtMon4  = GetMonthNumber(strtMon4);
  var strtDate4 = strtYear4 + strtMon4 + strtDay4
  var strtDay2  = document.UpdateForm.ptclm008.value.substring(0,2);
  var strtMon2  = document.UpdateForm.ptclm008.value.substring(3,6);
  var strtYear2 = document.UpdateForm.ptclm008.value.substring(7,11);
  var strtMon2 = GetMonthNumber(strtMon2);
  var strtDate2 = strtYear2 + strtMon2 + strtDay2
  if(strtDate4<strtDate2)
  {
    alert("Return to Normal Work Date should be >= Accident Date");
    document.UpdateForm.ptclm077.value="";
    document.UpdateForm.ptclm077.focus();
  } 

  if (!checkDate(document.UpdateForm.ptclm076)) { return false; }
  else if (isWhitespace(document.UpdateForm.ptclm076.value)) { return true; }

  var strtDay3  = document.UpdateForm.ptclm076.value.substring(0,2);
  var strtMon3  = document.UpdateForm.ptclm076.value.substring(3,6);
  var strtYear3 = document.UpdateForm.ptclm076.value.substring(7,11);
  var strtMon3 = GetMonthNumber(strtMon3);
  var strtDate3 = strtYear3 + strtMon3 + strtDay3
  if(strtDate4<strtDate3)
  {
    alert("Return to Normal Work Date should be >= Full Incapacity Start Date");
    document.UpdateForm.ptclm077.value="";
    document.UpdateForm.ptclm077.focus();
    return false;
  }

  var fullincstrtdate;
  fullincstrtdate=UpdateForm.ptclm076.value;
  AddSubtractDate(UpdateForm.ptclm076,"14","A");  // 14 days inclusive

  var strtDay5  = document.UpdateForm.ptclm076.value.substring(0,2);
  var strtMon5  = document.UpdateForm.ptclm076.value.substring(3,6);
  var strtYear5 = document.UpdateForm.ptclm076.value.substring(7,11);
  var strtMon5 = GetMonthNumber(strtMon5);
  var strtDate5 = strtYear5 + strtMon5 + strtDay5
  UpdateForm.ptclm076.value=fullincstrtdate;
  if (strtDate4>strtDate5) {
    alert("Return to Normal Work Date can't be greater than 14 days after the 'Full Incapacity Start Date");
    document.UpdateForm.ptclm077.value="";
    return false;
  }

  return true;
}

//Validate Future Date of Work
function CheckFutureDate()
{
  if (!checkDate(document.UpdateForm.ptclm076)) { return false; }
  else if (isWhitespace(document.UpdateForm.ptclm076.value)) { return true; }

  var strtDay3  = document.UpdateForm.ptclm076.value.substring(0,2);
  var strtMon3  = document.UpdateForm.ptclm076.value.substring(3,6);
  var strtYear3 = document.UpdateForm.ptclm076.value.substring(7,11);
  var strtMon3  = GetMonthNumber(strtMon3);
  var strtDate3 = strtYear3 + strtMon3 + strtDay3
  var strtDay2  = document.UpdateForm.ptclm008.value.substring(0,2);
  var strtMon2  = document.UpdateForm.ptclm008.value.substring(3,6);
  var strtYear2 = document.UpdateForm.ptclm008.value.substring(7,11);
  var strtMon2 = GetMonthNumber(strtMon2);
  var strtDate2 = strtYear2 + strtMon2 + strtDay2
  if(strtDate3<strtDate2)
  {
    alert("Full Incapacity Start Date should be >= Accident Date");
    document.UpdateForm.ptclm076.value="";
    document.UpdateForm.ptclm076.focus();
  }

  if (!checkDate(document.UpdateForm.ptclm077)) { return false; }
  else if (isWhitespace(document.UpdateForm.ptclm077.value)) { return true; }

  var strtDay4  = document.UpdateForm.ptclm077.value.substring(0,2);
  var strtMon4  = document.UpdateForm.ptclm077.value.substring(3,6);
  var strtYear4 = document.UpdateForm.ptclm077.value.substring(7,11);
  var strtMon4  = GetMonthNumber(strtMon4);
  var strtDate4 = strtYear4 + strtMon4 + strtDay4
  if(strtDate4<strtDate3)
  {
    alert("Full Incapacity Start Date should be <= Return to Normal Work Date");
    document.UpdateForm.ptclm076.value="";
    document.UpdateForm.ptclm076.focus();
    return false;
  }

  return true;
}

//On click of Ok
function SubmitPageOk()
{
  if (document.getElementById("altwrkstdtehd").style.visibility=="visible")
    document.UpdateForm.ptclm072.className="Mandatory";
  else
    document.UpdateForm.ptclm072.className="";

  if (document.getElementById("hpdaltwrkhd").style.visibility=="visible")
    document.UpdateForm.ptclm073.className="Mandatory";
  else
    document.UpdateForm.ptclm073.className="";

  if (document.getElementById("fincpstdtehd").style.visibility=="visible")
    document.UpdateForm.ptclm076.className="Mandatory";
  else
    document.UpdateForm.ptclm076.className=""; 

  if (document.getElementById("fincpstdtevalue").style.visibility=="visible")
  {
    ChkRetNormDate();
    if (document.UpdateForm.d_ptclm070.checked)
    {
      document.UpdateForm.ptclm070.value="1"
      document.UpdateForm.ptclm076.className="";
    }
    else
    {
      document.UpdateForm.ptclm070.value="0"
      document.UpdateForm.ptclm076.className="";
      document.UpdateForm.ptclm076.className="Mandatory";
      document.UpdateForm.ptclm072.className="";
      document.UpdateForm.ptclm073.className="";
    }
  }

  ContNormalHrs();

  if (document.UpdateForm.d_ptclm070.checked)
    document.UpdateForm.ptclm070.value="1"
  else
    document.UpdateForm.ptclm070.value="0"

  if (validateMandatory(UpdateForm)) 
  {
    document.UpdateForm.redirect.value="patweb89.pbl?reportno=01&template=005" 
      + "&urnumber=" + document.UpdateForm.urnumber.value.replace(/ /g,"+")
      + "&admissno=" + document.UpdateForm.admissno.value.replace(/ /g,"+")
      + "&returncd=" + parent.UpdateForm.returncd.value
      + "&systflag=" + document.UpdateForm.systflag.value.replace(/ /g,"+")
      + "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+")
      + "&seriflag=" + document.UpdateForm.seriflag.value.replace(/ /g,"+")
      + "&refrejct=" + document.UpdateForm.refrejct.value.replace(/ /g,"+")

    // Clear Unfit for Work Days/Weeks if nothing selected - TSK 0886828
    if (isWhitespace(document.UpdateForm.ptclm074.value)) {
      document.UpdateForm.ptclm074.value = " ";
    }
    SubmitHidden(UpdateForm);
  }
}

//Validate Continue Normal Hrs of Work
function ContNormalHrs()
{
  if (document.UpdateForm.d_ptclm069.checked)
  {
    document.UpdateForm.ptclm069.value="1";
    document.getElementById("apprvhcphd").style.visibility="hidden";
    document.getElementById("apprvhcpvalue").style.visibility="hidden";
    document.getElementById("apprvhcpvalue").value="";
  }
  else
  {
    document.UpdateForm.ptclm069.value="0";
    document.UpdateForm.d_ptclm069.checked=false;
    document.getElementById("apprvhcphd").style.visibility="visible";
    document.getElementById("apprvhcpvalue").style.visibility="visible";
  }
} 
  
//Validations
function ValidateChks()
{
  if(document.UpdateForm.d_ptclm069.checked)
  {
    UnfitWorkDay.innerHTML=UnfitDayBlank.innerHTML;
    UnfitWorkWeek.innerHTML=UnfitWeekBlank.innerHTML;
    document.getElementById("UnfitWorkHd").style.visibility="hidden";
    document.getElementById("altwrkindhd").style.visibility="hidden";
    document.getElementById("altwrkindvalue").style.visibility="hidden";
    document.getElementById("altwrktypehd").style.visibility="hidden";
    document.getElementById("altwrktypevalue").style.visibility="hidden";
    document.getElementById("altwrkstdtehd").style.visibility="hidden";
    document.getElementById("altwrkstdtevalue").style.visibility="hidden";
    document.getElementById("hpdaltwrkhd").style.visibility="hidden";
    document.getElementById("hpdaltwrkvalue").style.visibility="hidden";
    document.getElementById("altwrkrestrhd").style.visibility="hidden";
    document.getElementById("altwrkrestrvalue").style.visibility="hidden";
    document.getElementById("fincpstdtehd").style.visibility="hidden";
    document.getElementById("fincpstdtevalue").style.visibility="hidden";
    document.getElementById("rtnwrkdtehd").style.visibility="hidden";
    document.getElementById("rtnwrkdtevalue").style.visibility="hidden";
    document.UpdateForm.ptclm071.className="";
    document.UpdateForm.ptclm072.className="";
    document.UpdateForm.ptclm073.className="";
    document.UpdateForm.ptclm074.className="";
    document.UpdateForm.ptclm075.className="";
    document.UpdateForm.ptclm076.className="";
    document.UpdateForm.ptclm077.className="";
    document.UpdateForm.ptclm071.value="";
    document.UpdateForm.ptclm072.value="";
    document.UpdateForm.ptclm073.value="";
    document.UpdateForm.ptclm074.value="";
    document.UpdateForm.ptclm075.value="";
    document.UpdateForm.ptclm076.value="";
    document.UpdateForm.ptclm077.value="";
    document.UpdateForm.awrkcmnt.value="";
  }
  else
  {
    // Only reset visibility if not already visible - TSK 0886828
    if (document.getElementById("altwrkindhd").style.visibility!="visible") {
      UnfitWorkDay.innerHTML=UnfitDayValue.innerHTML;
      UnfitWorkWeek.innerHTML=UnfitWeekValue.innerHTML;
      document.getElementById("altwrkindhd").style.visibility="visible";
      document.getElementById("altwrkindvalue").style.visibility="visible";
      document.getElementById("UnfitWorkHd").style.visibility="visible";
      document.getElementById("altwrktypehd").style.visibility="visible";
      document.getElementById("altwrktypevalue").style.visibility="visible";
      document.getElementById("altwrkstdtehd").style.visibility="visible";
      document.getElementById("altwrkstdtevalue").style.visibility="visible";
      document.getElementById("hpdaltwrkhd").style.visibility="visible";
      document.getElementById("hpdaltwrkvalue").style.visibility="visible";
      document.getElementById("fincpstdtehd").style.visibility="visible";
      document.getElementById("fincpstdtevalue").style.visibility="visible";
      document.getElementById("rtnwrkdtehd").style.visibility="visible";
      document.getElementById("rtnwrkdtevalue").style.visibility="visible";
      document.getElementById("altwrkrestrhd").style.visibility="visible";
      document.getElementById("altwrkrestrvalue").style.visibility="visible";

      // Null Number of Days when Start Date blank - TSK 0886828
      // and Alternate Work checkbox is not ticked
      if (document.UpdateForm.d_ptclm070.checked==false &&
          document.UpdateForm.ptclm076.value=="") {
        document.UpdateForm.ptclm074.value="";
      }
      // Null Number of Days when Start Date blank - TSK 0886828
      // and Alternate Work checkbox is ticked
      if (document.UpdateForm.d_ptclm070.checked &&
          document.UpdateForm.ptclm072.value=="") {
        document.UpdateForm.ptclm074.value="";
      }
    }

    if (document.UpdateForm.d_ptclm070.checked)
    {
      document.UpdateForm.d_ptclm070.value="1";
      document.UpdateForm.ptclm071.className="Mandatory";
      document.UpdateForm.ptclm072.className="Mandatory";
      document.UpdateForm.ptclm073.className="Mandatory";
      document.UpdateForm.ptclm074.className="";
      document.UpdateForm.ptclm075.className="";
      document.UpdateForm.ptclm076.className="";
      //document.UpdateForm.ptclm077.className="";
      document.getElementById("ptclm071").disabled = false;
      document.getElementById("ptclm072").disabled = false;
      document.getElementById("ptclm073").disabled = false;
      document.getElementById("awrkcmnt").disabled = false;
      document.getElementById("awrkcmnt").className = "";
    }
    else
    {
      document.UpdateForm.d_ptclm070.value="0";
      document.UpdateForm.ptclm071.className="";
      document.UpdateForm.ptclm072.className="";
      document.UpdateForm.ptclm073.className="";
      document.UpdateForm.ptclm074.className="Mandatory";
      document.UpdateForm.ptclm075.className="Mandatory";
      document.UpdateForm.ptclm076.className="Mandatory";
      document.UpdateForm.ptclm077.className="Mandatory";
      document.getElementById("ptclm071").disabled = true;
      document.getElementById("ptclm072").disabled = true;
      document.getElementById("ptclm073").disabled = true;
      document.getElementById("awrkcmnt").disabled = true;
      document.getElementById("awrkcmnt").className = "Readonly";
      document.getElementById("ptclm074").disabled = false;
      document.getElementById("ptclm075").disabled = false;
      document.getElementById("ptclm076").readOnly = false;
      document.UpdateForm.ptclm071.value="";
      document.UpdateForm.ptclm072.value="";
      document.UpdateForm.ptclm073.value="";
      document.UpdateForm.awrkcmnt.value="";
    }
  }
}

//Validate Alternative Work Indicator
function AltWorkInd()
{
  if (document.UpdateForm.d_ptclm070.checked)
     document.UpdateForm.d_ptclm070.value="1";
  else
     document.UpdateForm.d_ptclm070.value="0";
}
