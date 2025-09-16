//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb8907001.js
//  
// Written   : 22/02/2008
//    
// Function  : Standard Functions Used in patweb8907001 templates
//    
// Version   : 
//  
// V10.02.02 18/10/2011 Peter Vela    CAR 253188
//                      Removed parseInt in all date validations
// V10.02.01 29/09/2011 Peter Vela    CAR 242151
//                      Added checkAdm72()
//                      Added checkAdmAct()
//                      Added checkPlnDis()
// V9.10.01 24/07/2008  J.Tan         CAR 170392
//                      Mods to initialise employer details variables
// V9.09.01 22/02/2008  J.Tan         CAR 156964
//                      Created include
//========================================================================
function SubmitAdm() {
  MandatoryOk=validateMandatory(document.UpdateForm)
  if (MandatoryOk) {
    SubmitHidden(document.UpdateForm);
    }
}
function DisableIconTime(field) {
  if (field.readOnly == true) {
    alert(field.title+" is for display only")
  } else {
//    TimeLookupFrame(field);
  }
}
function DisableIcon(field) {
  if (field.readOnly == true) {
    alert(field.title+" is for display only")
  } else {
    DateLookupFrame(field);
  }
}

function GetEmpl() {
    var ind=document.UpdateForm.mehlg007.selectedIndex;
    var serverURL="../cgi-bin/mehweb01.pbl?reportno=13" +
                  "&srefcode=" + UpdateForm.mehlg007.value.replace(/ /g,"+") +
                  "&valdcode=" + UpdateForm.mehlg006.value.replace(/ /g,"+")

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      document.UpdateForm.mhhls009.value=trim(ReturnValue[1]);
      document.UpdateForm.mhhls010.value=trim(ReturnValue[2]);
      document.UpdateForm.mhhls011.value=trim(ReturnValue[3]);
      document.UpdateForm.mhhls012.value=trim(ReturnValue[4]);
      document.UpdateForm.mhhls013.value=trim(ReturnValue[5]);
    }
}

function DispEmpl() {
    document.UpdateForm.mehlg006.value=" ";
    document.UpdateForm.mhhls009.value=" ";
    document.UpdateForm.mhhls010.value=" ";
    document.UpdateForm.mhhls011.value=" ";
    document.UpdateForm.mhhls012.value=" ";
    document.UpdateForm.mhhls013.value=" ";
  if (isWhitespace(UpdateForm.mehlg007.value)) {
    document.UpdateForm.mehlg006.className=" ";
    return;
  } else {
    var ind=trim(document.UpdateForm.mehlg007.value);
    if (ind=="A") {
       HeadCode.innerHTML=HeadSCode.innerHTML;
       EmpCode.innerHTML=OrgnACode.innerHTML;
       return;
    }
    if (ind=="L") {
       HeadCode.innerHTML=HeadSCode.innerHTML;
       EmpCode.innerHTML=OrgnLCode.innerHTML;
       return;
    }
    if (ind=="C") {
       HeadCode.innerHTML=HeadSCode.innerHTML;
       EmpCode.innerHTML=OrgnCCode.innerHTML;
       return;
     }
    if (ind=="P") {
       HeadCode.innerHTML=HeadSCode.innerHTML;
       EmpCode.innerHTML=OrgnPCode.innerHTML;
       return;
    } 
     if (ind=="I") {
       HeadCode.innerHTML=HeadSCode.innerHTML;
        EmpCode.innerHTML=OrgnICode.innerHTML;
        return;
      }
    if (ind=="B") {
       HeadCode.innerHTML=HeadSCode.innerHTML;
       EmpCode.innerHTML=OrgnBCode.innerHTML;
       return;
    } 
      if (ind=="D") {
         HeadCode.innerHTML=HeadSCode.innerHTML;
         EmpCode.innerHTML=OrgnDCode.innerHTML;
         return;
      } 
      if (ind=="J") {
         HeadCode.innerHTML=HeadSCode.innerHTML;
         EmpCode.innerHTML=OrgnJCode.innerHTML;
         return;
      } 
       HeadCode.innerHTML=HeadSCode.innerHTML;
       EmpCode.innerHTML=blankECode.innerHTML;
    }
 }
function checkAdm72(thisfield) {

  // Declare and intialise new date object
  var new72HoursPriorDate = new Date();
  var newReceivalDate = new Date();

  if (isWhitespace(document.UpdateForm.mehvs014.value)) {
    return;
  }

  if (!isWhitespace(document.UpdateForm.admndate.value)&&
      !isWhitespace(document.UpdateForm.admntime.value)) {
//------------------------------------------------------------------------------
        // Create the 72 Hours Prior Date Object
        // Set the Date in Date Object
        new72HoursPriorDate.setDate(
                            document.UpdateForm.admndate.value.substring(0,2));

        // Set the Month in Date Object
        var varMonth = 0;
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jan"){varMonth=0;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Feb"){varMonth=1;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Mar"){varMonth=2;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Apr"){varMonth=3;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="May"){varMonth=4;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jun"){varMonth=5;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jul"){varMonth=6;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Aug"){varMonth=7;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Sep"){varMonth=8;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Oct"){varMonth=9;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Nov"){varMonth=10;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Dec"){varMonth=11;}
        new72HoursPriorDate.setMonth(varMonth);

        // Set the Year in Date Object
        new72HoursPriorDate.setFullYear(
                            document.UpdateForm.admndate.value.substr(7,4));

        // Set the Hours in Date Object
        new72HoursPriorDate.setHours(
                            document.UpdateForm.admntime.value.substr(0,2));

        // Set the Minutes in Date Object
        new72HoursPriorDate.setMinutes(
                            document.UpdateForm.admntime.value.substr(3,2));

        // Set the Seconds in Date Object
        new72HoursPriorDate.setSeconds(
                            document.UpdateForm.admntime.value.substr(6,2));

        // Calculate 72 hours prior
        var newHours = new72HoursPriorDate.getHours() - 72;

        //Assign it back to the date object
        new72HoursPriorDate.setHours(newHours);

//------------------------------------------------------------------------------
        // Create the Receival Date Object
        // Set the Date in Date Object
        newReceivalDate.setDate(
                        document.UpdateForm.mehvs014.value.substring(0,2));

        // Set the Month in Date Object
        var varMonth = 0;
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Jan"){varMonth=0;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Feb"){varMonth=1;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Mar"){varMonth=2;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Apr"){varMonth=3;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="May"){varMonth=4;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Jun"){varMonth=5;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Jul"){varMonth=6;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Aug"){varMonth=7;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Sep"){varMonth=8;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Oct"){varMonth=9;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Nov"){varMonth=10;}
        if (document.UpdateForm.mehvs014.value.substr(3,3)=="Dec"){varMonth=11;}
        newReceivalDate.setMonth(varMonth);

        // Set the Year in Date Object
        newReceivalDate.setFullYear(
                        document.UpdateForm.mehvs014.value.substr(7,4));

        if (!isWhitespace(document.UpdateForm.mehvs041.value)) {

          // Set the Hours in Date Object
          newReceivalDate.setHours(
                              document.UpdateForm.mehvs041.value.substr(0,2));

          // Set the Minutes in Date Object
          newReceivalDate.setMinutes(
                              document.UpdateForm.mehvs041.value.substr(3,2));

          // Set the Seconds in Date Object
          newReceivalDate.setSeconds(
                              document.UpdateForm.mehvs041.value.substr(6,2));
        } else {

          // Set the Hours in Date Object
          newReceivalDate.setHours("23");

          // Set the Minutes in Date Object
          newReceivalDate.setMinutes("59");

          // Set the Seconds in Date Object
          newReceivalDate.setSeconds("59");

        }
//------------------------------------------------------------------------------
        // Compare the 2 Date objects: Receival Date cannot be less than
        // 72 hours Prior the Admission Date

//alert(newReceivalDate.getDate() + "/" +
//      newReceivalDate.getMonth() + "/" +
//      newReceivalDate.getFullYear() + " " +
//      newReceivalDate.getHours() + ":" +
//      newReceivalDate.getMinutes() + ":" +
//      newReceivalDate.getSeconds());
//
//alert(new72HoursPriorDate.getDate() + "/" +
//      new72HoursPriorDate.getMonth() + "/" +
//      new72HoursPriorDate.getFullYear() + " " +
//      new72HoursPriorDate.getHours() + ":" +
//      new72HoursPriorDate.getMinutes() + ":" +
//      new72HoursPriorDate.getSeconds());

        if (newReceivalDate < new72HoursPriorDate ) {
          alert("Receival Date can only be up to 72 hours prior to the Admission Date.");
          document.UpdateForm.mehvs014.value="";
          document.UpdateForm.mehvs041.value="";
          thisfield.select();
          thisfield.focus();
          return;
        }

  }

}

function checkAdmAct(thisfield) {

  // Declare and intialise new date object
  var newAdmissionDate = new Date();
  var newAdmActDate = new Date();

  if (isWhitespace(document.UpdateForm.mehvs052.value)) {
    return;
  }

  if (!isWhitespace(document.UpdateForm.admndate.value)&&
      !isWhitespace(document.UpdateForm.admntime.value)) {
//------------------------------------------------------------------------------
        // Create the Admission Date Object
        // Set the Date in Date Object
        newAdmissionDate.setDate(
                         document.UpdateForm.admndate.value.substring(0,2));

        // Set the Month in Date Object
        var varMonth = 0;
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jan"){varMonth=0;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Feb"){varMonth=1;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Mar"){varMonth=2;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Apr"){varMonth=3;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="May"){varMonth=4;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jun"){varMonth=5;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jul"){varMonth=6;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Aug"){varMonth=7;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Sep"){varMonth=8;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Oct"){varMonth=9;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Nov"){varMonth=10;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Dec"){varMonth=11;}
        newAdmissionDate.setMonth(varMonth);

        // Set the Year in Date Object
        newAdmissionDate.setFullYear(
                         document.UpdateForm.admndate.value.substr(7,4));

        // Set the Hours in Date Object
        newAdmissionDate.setHours(
                         document.UpdateForm.admntime.value.substr(0,2));

        // Set the Minutes in Date Object
        newAdmissionDate.setMinutes(
                         document.UpdateForm.admntime.value.substr(3,2));

        // Set the Seconds in Date Object
        newAdmissionDate.setSeconds(
                         document.UpdateForm.admntime.value.substr(6,2));

//------------------------------------------------------------------------------
        // Create the Admit MH Act Date Object
        // Set the Date in Date Object
        newAdmActDate.setDate(
                        document.UpdateForm.mehvs052.value.substring(0,2));

        // Set the Month in Date Object
        var varMonth = 0;
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Jan"){varMonth=0;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Feb"){varMonth=1;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Mar"){varMonth=2;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Apr"){varMonth=3;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="May"){varMonth=4;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Jun"){varMonth=5;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Jul"){varMonth=6;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Aug"){varMonth=7;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Sep"){varMonth=8;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Oct"){varMonth=9;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Nov"){varMonth=10;}
        if (document.UpdateForm.mehvs052.value.substr(3,3)=="Dec"){varMonth=11;}
        newAdmActDate.setMonth(varMonth);

        // Set the Year in Date Object
        newAdmActDate.setFullYear(
                      document.UpdateForm.mehvs052.value.substr(7,4));

        if (!isWhitespace(document.UpdateForm.mehvs053.value)) {

          // Set the Hours in Date Object
          newAdmActDate.setHours(
                              document.UpdateForm.mehvs053.value.substr(0,2));

          // Set the Minutes in Date Object
          newAdmActDate.setMinutes(
                              document.UpdateForm.mehvs053.value.substr(3,2));

          // Set the Seconds in Date Object
          newAdmActDate.setSeconds(
                              document.UpdateForm.mehvs053.value.substr(6,2));
        } else {
          newAdmActDate.setHours("23");

          // Set the Minutes in Date Object
          newAdmActDate.setMinutes("59");

          // Set the Seconds in Date Object
          newAdmActDate.setSeconds("59");
        }
//------------------------------------------------------------------------------
        // Compare the 2 Date objects

//alert(newReceivalDate.getDate() + "/" +
//      newReceivalDate.getMonth() + "/" +
//      newReceivalDate.getFullYear() + " " +
//      newReceivalDate.getHours() + ":" +
//      newReceivalDate.getMinutes() + ":" +
//      newReceivalDate.getSeconds());
//
//alert(new72HoursPriorDate.getDate() + "/" +
//      new72HoursPriorDate.getMonth() + "/" +
//      new72HoursPriorDate.getFullYear() + " " +
//      new72HoursPriorDate.getHours() + ":" +
//      new72HoursPriorDate.getMinutes() + ":" +
//      new72HoursPriorDate.getSeconds());

        if (newAdmActDate < newAdmissionDate ) {
    alert("Admit MH Act Date/Time cannot be prior to the Admission Date/Time.");
          document.UpdateForm.mehvs052.value="";
          document.UpdateForm.mehvs053.value="";
          thisfield.select();
          thisfield.focus();
          return;
        }

  }

}

function checkPlnDis(thisfield) {

  // Declare and intialise new date object
  var newAdmissionDate = new Date();
  var newPlnDisDate = new Date();

  if (isWhitespace(document.UpdateForm.mehvs042.value)) {
    return;
  }

  if (!isWhitespace(document.UpdateForm.admndate.value)&&
      !isWhitespace(document.UpdateForm.admntime.value)) {
//------------------------------------------------------------------------------
        // Create the Admission Date Object
        // Set the Date in Date Object
        newAdmissionDate.setDate(
                         document.UpdateForm.admndate.value.substring(0,2));

        // Set the Month in Date Object
        var varMonth = 0;
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jan"){varMonth=0;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Feb"){varMonth=1;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Mar"){varMonth=2;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Apr"){varMonth=3;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="May"){varMonth=4;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jun"){varMonth=5;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Jul"){varMonth=6;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Aug"){varMonth=7;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Sep"){varMonth=8;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Oct"){varMonth=9;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Nov"){varMonth=10;}
        if (document.UpdateForm.admndate.value.substr(3,3)=="Dec"){varMonth=11;}
        newAdmissionDate.setMonth(varMonth);

        // Set the Year in Date Object
        newAdmissionDate.setFullYear(
                         document.UpdateForm.admndate.value.substr(7,4));

        // Set the Hours in Date Object
        newAdmissionDate.setHours(
                         document.UpdateForm.admntime.value.substr(0,2));

        // Set the Minutes in Date Object
        newAdmissionDate.setMinutes(
                         document.UpdateForm.admntime.value.substr(3,2));

        // Set the Seconds in Date Object
        newAdmissionDate.setSeconds(
                         document.UpdateForm.admntime.value.substr(6,2));

//------------------------------------------------------------------------------
        // Create the Planned Discharge Date Object
        // Set the Date in Date Object
        newPlnDisDate.setDate(
                      document.UpdateForm.mehvs042.value.substring(0,2));

        // Set the Month in Date Object
        var varMonth = 0;
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Jan"){varMonth=0;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Feb"){varMonth=1;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Mar"){varMonth=2;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Apr"){varMonth=3;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="May"){varMonth=4;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Jun"){varMonth=5;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Jul"){varMonth=6;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Aug"){varMonth=7;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Sep"){varMonth=8;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Oct"){varMonth=9;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Nov"){varMonth=10;}
        if (document.UpdateForm.mehvs042.value.substr(3,3)=="Dec"){varMonth=11;}
        newPlnDisDate.setMonth(varMonth);

        // Set the Year in Date Object
        newPlnDisDate.setFullYear(
                      document.UpdateForm.mehvs042.value.substr(7,4));

        if (!isWhitespace(document.UpdateForm.mehvs043.value)) {
          // Set the Hours in Date Object
          newPlnDisDate.setHours(
                              document.UpdateForm.mehvs043.value.substr(0,2));

          // Set the Minutes in Date Object
          newPlnDisDate.setMinutes(
                              document.UpdateForm.mehvs043.value.substr(3,2));

          // Set the Seconds in Date Object
          newPlnDisDate.setSeconds(
                              document.UpdateForm.mehvs043.value.substr(6,2));
        } else {
          // Set the Hours in Date Object
          newPlnDisDate.setHours(23);

          // Set the Minutes in Date Object
          newPlnDisDate.setMinutes(58);

          // Set the Seconds in Date Object
          newPlnDisDate.setSeconds(58);
        }
//------------------------------------------------------------------------------
        // Compare the 2 Date objects

//alert(newAdmissionDate.getDate() + "/" +
//      newAdmissionDate.getMonth() + "/" +
//      newAdmissionDate.getFullYear() + " " +
//      newAdmissionDate.getHours() + ":" +
//      newAdmissionDate.getMinutes() + ":" +
//      newAdmissionDate.getSeconds());
//
//alert(newPlnDisDate.getDate() + "/" +
//      newPlnDisDate.getMonth() + "/" +
//      newPlnDisDate.getFullYear() + " " +
//      newPlnDisDate.getHours() + ":" +
//      newPlnDisDate.getMinutes() + ":" +
//      newPlnDisDate.getSeconds());

        if (newPlnDisDate < newAdmissionDate ) {
         alert("Planned Discharge Date/Time cannot be prior to the Admission Date/Time.");
          document.UpdateForm.mehvs042.value="";
          document.UpdateForm.mehvs043.value="";
          thisfield.select();
          thisfield.focus();
          return;
        }

  }

}

