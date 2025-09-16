//jsVersion  : V11.03.00
//========================================================================
// Program   : oprweb0122.js
//
// Written   : 26.02.2014
//
// Function  : Standard Functions Used in oprweb0122 templates
//
// Version   : V10.05.01
//
// Modifications :
// 
//        V10.06.04 07.08.2015  Peter Vela         320416
//                  Refresh page in ApproveTheatre after button click
//                  regardless of return status
//                  Added validation for Theatre Request Booked/Scheduled status
//                  in BookTheatre()
//        V10.06.03 05.08.2015  Peter Vela         320276
//                  Added radix of 10 to setMonth() parseInt()
//        V10.06.02 26.05.2015  Peter Vela         312771
//                  Added calculation for Time and Duration columns in
//                  populateTimeDurationReq() 
//        V10.06.01 01.05.2015  Peter Vela         312771
//                  Added ApproveTheatre()
//                  Added check for undefined in GetPriorityBreachTime()
//                  Added GetPriorityandBreachTimeCompleted()
//                  Changed all GetPriorityandBreachTime... functions
//                  to calculate wait times
//                  Added addScrollBarToCaseList()
//                  Added populateTimeDurationReq()
//                  Added addMinutes()
//                  Added Priority Colors to
//                  GetPriorityandBreachTimeUnscheduled()
//                  GetPriorityandBreachTimeZero()
//                  GetPriorityandBreachTimeOne()
//                  GetPriorityandBreachTimeTwo()
//                  GetPriorityandBreachTimeCompleted()
//        V10.05.04 06.02.2015  Peter Vela         218689
//                  Don't display hours and minutes if zero in
//                  GetPriorityandBreachTimeUnscheduled()
//                  GetPriorityandBreachTimeZero()
//        V10.05.03 08.12.2014  Peter Vela         307850
//                  Modified column display of Breach Time in:
//                  GetPriorityandBreachTime()
//                  GetPriorityandBreachTimeZero()
//                  GetPriorityandBreachTimeOne()
//                  GetPriorityandBreachTimeTwo()
//                  GetPriorityandBreachTimeThree()
//        V10.05.02 18.11.2014  Peter Vela         307781
//                  Added validation for clock stop in 
//                  GetPriorityandBreachTime()
//                  GetPriorityandBreachTimeZero()
//                  GetPriorityandBreachTimeOne()
//                  GetPriorityandBreachTimeTwo()
//                  GetPriorityandBreachTimeThree()
//        V10.05.01 17.09.2014  J.Tan              302391
//                  Increased DFRAME size for UpdateTheatreRequest
//                  Added Surname and Given name to AllocateUR
//        V10.04.00 26.02.2014  Peter Vela         218689
//                  Created js                 
//========================================================================
function SelectPeriodSubmit() {
  if(validateMandatory(SelectPeriod)) {
    document.SelectPeriod.submit();
  }
}
function UpdateTheatreRequest(bkrqreqn,bkrqurno,bkrqvisn) {
  if (bkrqurno=="++++++++") {
    LinkUrl="oprweb01.pbl?reportno=22&template=6&urnumber=" + bkrqurno +
                                               "&admissno=" + bkrqvisn +
                                               "&requestn=" + bkrqreqn;
  } else {
    LinkUrl="oprweb01.pbl?reportno=22&template=7&urnumber=" + bkrqurno +
                                               "&admissno=" + bkrqvisn +
                                               "&requestn=" + bkrqreqn;
  }

  Left=(document.body.clientWidth-1000)/2
  DFrameLink(LinkUrl,0,Left,1000,700)


} 
function GotoUR(bkrqurno,bkrqvisn) {
  location.href="patweb98.pbl?reportno=01&template=001" +
                "&urnumber=" + bkrqurno.replace(/\+/g," ") +
                "&admissno=" + bkrqvisn.replace(/\+/g," ")
}
function AllocateUR(bkrqreqn,bkrqsnam,bkrqgnam) {
  SetCookie('TheatreRequestRedirect',location.href);
  SetCookie('TheatreRequestNumber',bkrqreqn);
  linkUrl="patweb90.pbl?reportno=1&template=201&srchsnam="
           +bkrqsnam.replace(/ /g,"+") +"&srchgnam="
           +bkrqgnam.replace(/ /g,"+");
  DFrameLink(linkUrl,0,50,700,450)
}
function PatientAlerts(bkrqurno,bkrqvisn) {
  location.href="patweb98.pbl?reportno=01&template=003" +
                "&urnumber=" + bkrqurno.replace(/\+/g," ") +
                "&admissno=" + bkrqvisn.replace(/\+/g," ")
}
function GetPriorityandBreachTimeZero() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[tables.length-1].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          currentdate = new Date();
          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (isWhitespace(inputs[y+4].value) && inputs[y+5].value != 2) {
            if (currentdate > prioritydate) {
//            columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (document.getElementById("unsstdin")!=undefined) {
                columns[x+7].innerHTML = displayhours + "hrs " +
                                         displayminutes + "min ";
                columns[x+7].style.backgroundColor="yellow";
              } else {
                columns[x+9].innerHTML = displayhours + "hrs " +
                                         displayminutes + "min ";
                columns[x+9].style.backgroundColor="yellow";
              }

            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (!isWhitespace(inputs[y+2].value)) {
                if (document.getElementById("unsstdin")!=undefined) {
                  columns[x+7].innerHTML = displayhours + "hrs " +
                                           displayminutes + "min ";
                } else {
                  columns[x+9].innerHTML = displayhours + "hrs " +
                                           displayminutes + "min ";

                }
              }
            }
          } else {
            currentdate.setFullYear(inputs[y+6].value.substring(0,4));
            currentdate.setMonth(parseInt(inputs[y+6].value.
                                 substring(4,6),10)-1);
            currentdate.setDate(inputs[y+6].value.substring(6,8));
            currentdate.setHours(inputs[y+4].value.substring(0,2));
            currentdate.setMinutes(inputs[y+4].value.substring(3,5));
            currentdate.setSeconds(inputs[y+4].value.substring(6,8));

            if (currentdate > prioritydate) {
//            columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (document.getElementById("unsstdin")!=undefined) {
                columns[x+7].innerHTML = displayhours + "hrs " +
                                         displayminutes + "min ";
                columns[x+7].style.backgroundColor="yellow";
              } else {
                columns[x+9].innerHTML = displayhours + "hrs " +
                                         displayminutes + "min ";
                columns[x+9].style.backgroundColor="yellow";
              }

            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (!isWhitespace(inputs[y+2].value)) {
                if (document.getElementById("unsstdin")!=undefined) {
                  columns[x+7].innerHTML = displayhours + "hrs " +
                                           displayminutes + "min ";
                } else {
                  columns[x+9].innerHTML = displayhours + "hrs " +
                                           displayminutes + "min ";

                }
              }
            }
          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
            if (document.getElementById("unsstdin")!=undefined) {
              columns[x+7].style.backgroundColor="red";
            } else {
              columns[x+9].style.backgroundColor="red";
            }
//              columns[x].style.backgroundColor="red";
          }

          if (!isWhitespace(inputs[y+7].value)) {
            columns[x].style.backgroundColor="#"+inputs[y+7].value;
          }

      }
    }
  }
}
function GetPriorityandBreachTimeOne() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[3].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          currentdate = new Date();
          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (isWhitespace(inputs[y+4].value) && inputs[y+5].value != 2) {
            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
              columns[x+11].style.backgroundColor="yellow";
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
            }
          } else {
            currentdate.setFullYear(inputs[y+6].value.substring(0,4));
            currentdate.setMonth(parseInt(inputs[y+6].value.
                                 substring(4,6),10)-1);
            currentdate.setDate(inputs[y+6].value.substring(6,8));
            currentdate.setHours(inputs[y+4].value.substring(0,2));
            currentdate.setMinutes(inputs[y+4].value.substring(3,5));
            currentdate.setSeconds(inputs[y+4].value.substring(6,8));

            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
              columns[x+11].style.backgroundColor="yellow";
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
            }

          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
            columns[x+11].style.backgroundColor="red";
          }

          if (!isWhitespace(inputs[y+7].value)) {
            columns[x].style.backgroundColor="#"+inputs[y+7].value;
          }

      }
    }
  }
}
function GetPriorityandBreachTimeTwo() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var clockstartdate = new Date();
  var arrivaldate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[3].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          currentdate = new Date();
          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (isWhitespace(inputs[y+4].value) && inputs[y+5].value != 2) {
            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
              columns[x+11].style.backgroundColor="yellow";
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
            }
          } else {
            currentdate.setFullYear(inputs[y+6].value.substring(0,4));
            currentdate.setMonth(parseInt(inputs[y+6].value.
                                 substring(4,6),10)-1);
            currentdate.setDate(inputs[y+6].value.substring(6,8));
            currentdate.setHours(inputs[y+4].value.substring(0,2));
            currentdate.setMinutes(inputs[y+4].value.substring(3,5));
            currentdate.setSeconds(inputs[y+4].value.substring(6,8));

            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
              columns[x+11].style.backgroundColor="yellow";
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              columns[x+11].innerHTML = displayhours + "hrs " +
                                        displayminutes + "min ";
            }

          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
            columns[x+11].style.backgroundColor="red";
          }

          if (!isWhitespace(inputs[y+7].value)) {
            columns[x].style.backgroundColor="#"+inputs[y+7].value;
          }

      }

//      if (inputs[y].name.substring(0,5)=="clsdt") {
//
//        clockstartdate = new Date();
//        arrivaldate = new Date();
//
//        if (!isWhitespace(inputs[y+3].value)) {
//
//          if (!isWhitespace(inputs[y].value)) {
//            clockstartdate.setFullYear(inputs[y].value.substring(0,4));
//            clockstartdate.setMonth(parseInt(inputs[y].value.substring(4,6))-1);
//            clockstartdate.setDate(inputs[y].value.substring(6,8));
//          }
//
//          if (!isWhitespace(inputs[y+1].value)) {
//            clockstartdate.setHours(inputs[y+1].value.substring(0,2));
//            clockstartdate.setMinutes(inputs[y+1].value.substring(3,5));
//            clockstartdate.setSeconds(inputs[y+1].value.substring(6,8));
//          }
//
//          if (!isWhitespace(inputs[y+2].value)) {
//            arrivaldate.setFullYear(inputs[y+2].value.substring(0,4));
//            arrivaldate.setMonth(parseInt(inputs[y+2].value.substring(4,6))-1);
//            arrivaldate.setDate(inputs[y+2].value.substring(6,8));
//          }
//
//          if (!isWhitespace(inputs[y+3].value)) {
//            arrivaldate.setHours(inputs[y+3].value.substring(0,2));
//            arrivaldate.setMinutes(inputs[y+3].value.substring(3,5));
//            arrivaldate.setSeconds(inputs[y+3].value.substring(6,8));
//          }
//          if (clockstartdate.getTime() > arrivaldate.getTime()) {
//            differenceinmilliseconds = 0;
//          } else {
//            differenceinmilliseconds =
//            Math.abs(arrivaldate.getTime() - clockstartdate.getTime());
//          }
//          differenceinminutes =
//          differenceinmilliseconds / (1000 * 60)
//          displayhours = Math.floor( differenceinminutes / 60);
//          displayminutes = differenceinminutes % 60;
//          displayminutes = parseInt(displayminutes);
//
//          if (parseInt(differenceinminutes) > parseInt(inputs[y+4].value)) {
//            columns[x].style.backgroundColor="red";
//          }
//          columns[x].innerHTML = displayhours + "hrs " +
//                                 displayminutes + "min ";
//        }
//      }
    }
  }
}
function GetPriorityandBreachTimeThree() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[3].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));

          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (isWhitespace(inputs[y+4].value) && inputs[y+5].value != 2) {
            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

//            columns[x+9].innerHTML = "<font color='red'>+ " +
//                                     displayhours + "hrs " +
//                                     displayminutes + "min " +
//                                     "</font>";
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

//            columns[x+9].innerHTML = "- " + displayhours + "hrs " +
 //                                    displayminutes + "min ";
            }
          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
//          columns[x].style.backgroundColor="red";
          }

          if (!isWhitespace(inputs[y+7].value)) {
            columns[x].style.backgroundColor="#"+inputs[y+7].value;
          }

      }
    }
  }
}
function BookTheatre(bkrqurno,bkrqvisn,bkrqreqn,bkrqsurg) {

  var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=43" +
                    "&valdcode=" + bkrqreqn.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    StdPageRefresh();
    return;
  }

  if (isWhitespace(document.LinkForm.sesskeys.value)) {
    SetCookie("BookTheatreReqUrnumberCookie",bkrqurno);
    SetCookie("BookTheatreReqVisitnoCookie",bkrqvisn);
    SetCookie("BookTheatreReqReqnumCookie",bkrqreqn);
    SetCookie("TheatreRequestRedirect",location.href);

//alert(GetCookieData("BookTheatreReqUrnumberCookie"));

    DOCTCODE=bkrqsurg;
    LinkUrl="oprweb01.pbl?reportno=2&template=3&doctcode="+DOCTCODE;
    DFrameLink(LinkUrl,0,0,740,390);
  }
  else {
    LinkForm.urnumber.value=bkrqurno.replace(/\+/g," ");
    LinkForm.reportno.value=9;
    LinkForm.template.value=2;

    SetCookie("BookTheatreReqVisitnoCookie",bkrqvisn);
    SetCookie("BookTheatreReqReqnumCookie",bkrqreqn);
    SetCookie("TheatreRequestRedirect",location.href);

    LinkForm.submit();

  }
}
function ChangeViewandSelectPeriodSubmit(status) {

  if (status=="0") {
    document.SelectPeriod.tablview.value=0;
  }
  else if (status=="1") {
    document.SelectPeriod.tablview.value=1;
  }
  else if (status=="2") {
    document.SelectPeriod.tablview.value=3;
  }
  else if (status=="3") {
    document.SelectPeriod.tablview.value=2;
  }
  else {
    document.SelectPeriod.tablview.value=0;
  }


  SelectPeriodSubmit();
}
function GetPriorityandBreachTime() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[2].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          currentdate = new Date();
          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (isWhitespace(inputs[y+4].value)) {
            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
                columns[x+12].style.backgroundColor="yellow";
              }
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
              }
            }
          } else {

            currentdate.setFullYear(theatreForm.sesskeys.value.substring(0,4));
            currentdate.setMonth(parseInt(theatreForm.sesskeys.value.
                                 substring(4,6),10)-1);
            currentdate.setDate(theatreForm.sesskeys.value.substring(6,8));
            currentdate.setHours(inputs[y+4].value.substring(0,2));
            currentdate.setMinutes(inputs[y+4].value.substring(3,5));
            currentdate.setSeconds(inputs[y+4].value.substring(6,8));

            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
                columns[x+12].style.backgroundColor="yellow";
              }
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
              }
            }
          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
            columns[x+12].style.backgroundColor="red";
          }

      }
    }
  }
}
function GetPriorityandBreachTimeUnscheduled() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[6].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (currentdate > prioritydate) {
//            columns[x].style.backgroundColor="yellow";
            differenceinmilliseconds =
            Math.abs(currentdate.getTime() - displaydate.getTime());
            differenceinminutes =
            differenceinmilliseconds / (1000 * 60)
            displayhours = Math.floor( differenceinminutes / 60);
            displayminutes = differenceinminutes % 60;
            displayminutes = parseInt(displayminutes);

            if (document.getElementById("unsstdin")!=undefined) {
              columns[x+7].innerHTML = displayhours + "hrs " +
                                       displayminutes + "min ";
              columns[x+7].style.backgroundColor="yellow";
            } else {
              columns[x+9].innerHTML = displayhours + "hrs " +
                                       displayminutes + "min ";
              columns[x+9].style.backgroundColor="yellow";
            }
          } else {
            differenceinmilliseconds =
            Math.abs(currentdate.getTime() - displaydate.getTime());
            differenceinminutes =
            differenceinmilliseconds / (1000 * 60)
            displayhours = Math.floor( differenceinminutes / 60);
            displayminutes = differenceinminutes % 60;
            displayminutes = parseInt(displayminutes);

//            if (displayhours!=0 &&
//                displayminutes!=0 &&
//                !isWhitespace(inputs[y+2].value)) {
              if (document.getElementById("unsstdin")!=undefined) {
                columns[x+7].innerHTML = displayhours + "hrs " +
                                         displayminutes + "min ";
              } else {
                columns[x+9].innerHTML = displayhours + "hrs " +
                                         displayminutes + "min ";
              }
//            }
          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
            if (document.getElementById("unsstdin")!=undefined) {
              columns[x+7].style.backgroundColor="red";
            } else {
               columns[x+9].style.backgroundColor="red";
            }
//            columns[x].style.backgroundColor="red";
          }

          if (!isWhitespace(inputs[y+7].value)) {
            columns[x].style.backgroundColor="#"+inputs[y+7].value;
          }

      }
    }
  }
}
function TableSort(OrderColumn) {
 if ( lastOrderColumn == OrderColumn ) {
   if (AscDsc==1) {AscDsc=2;} else {AscDsc=1;} }
 else {
   AscDsc=1; }
 TableOutput(OrderColumn,AscDsc);
 if(document.getElementById("tscookie")!=null)
 {
   SortCookie(OrderColumn);
 }
 TheatreRequestPriorityandBreachTimes();
}

function TableRefresh() {
  if (t.rows.length != 0 ) {
    if (filterToggle==0) {
      TableHeading(printOrder);
    }
    else {
      FilterHeading();
    }
    TableBody();
    if (t.tableTotals.length != 0 ) { TableTotals(); }
    TableEnding();
    if (filterToggle==1) { FilterEnding(); }
  }
  else {
    TableHeading(printOrder);
    TableEnding();
  }

  if (SearchAllFlag) {
    // set focus on search field
    window.setTimeout(function() {
      var el = document.getElementById("searchAll");
      if (el) {
        el.focus();
        el.value = el.value;
        SetCaretPosition("searchAll", -1);  // set cursor at end of input value
      }
    }, 1000);
  }
  TheatreRequestPriorityandBreachTimes();
}


function TheatreRequestPriorityandBreachTimes() {
 if(document.SelectPeriod != undefined &&
    document.SelectPeriod.sortview != undefined)
 {
   switch (parseInt(document.SelectPeriod.sortview.value)) {
   case 0: {
     GetPriorityandBreachTimeZero();
     break;
   }
   case 1: {
     GetPriorityandBreachTimeOne();
     break;
   }
   case 2: {
     GetPriorityandBreachTimeTwo();
     break;
   }
   case 3: {
     GetPriorityandBreachTimeThree();
     break;
   }
  }
 }
 if(document.theatreForm != undefined &&
    document.theatreForm.sortview != undefined)
 {
   switch (parseInt(document.theatreForm.sortview.value)) {
   case 0: {
     GetPriorityandBreachTimeUnscheduled();
     break;
   }
  }
 }
}
function ApproveTheatre(bookreqnum) {
    var serverURL   = "../cgi-bin/emrweb08.pbl?reportno=40" +
                    "&valdcode=" + bookreqnum.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
//alert(returnValue.status);
//  if (returnValue.status==0) {
    StdPageRefresh();
//  }
}
function GetPriorityandBreachTimeCompleted() {
  var currentdate = new Date();
  var prioritydate = new Date();
  var displaydate = new Date();
  var displayhours = 0;
  var displayminutes = 0;
  var differenceinminutes = 0;
  var differenceinmilliseconds = 0;

  tables = document.getElementsByTagName("table");

  columns = tables[tables.length-1].getElementsByTagName("td");

  for (x=0; x<columns.length; x++) {
    inputs = columns[x].getElementsByTagName("input");

    for (y=0; y<inputs.length; y++) {
      if (inputs[y].name.substring(0,5)=="priod") {
//        alert(inputs[y].value+" "+inputs[y+1].value+" "+
//              inputs[y+2].value+" "+inputs[y+3].value);
//        alert(columns[x].style);
//        columns[x].style.backgroundColor="red";

          currentdate = new Date();
          prioritydate = new Date();
          displaydate = new Date();
          if (!isWhitespace(inputs[y+2].value)) {
            prioritydate.setFullYear(inputs[y+2].value.substring(0,4));
            prioritydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            prioritydate.setDate(inputs[y+2].value.substring(6,8));
            displaydate.setFullYear(inputs[y+2].value.substring(0,4));
            displaydate.setMonth(parseInt(inputs[y+2].value.substring(4,6),10)-1);
            displaydate.setDate(inputs[y+2].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y+3].value)) {
            prioritydate.setHours(inputs[y+3].value.substring(0,2));
            prioritydate.setMinutes(inputs[y+3].value.substring(3,5));
            prioritydate.setSeconds(inputs[y+3].value.substring(6,8));
            displaydate.setHours(inputs[y+3].value.substring(0,2));
            displaydate.setMinutes(inputs[y+3].value.substring(3,5));
            displaydate.setSeconds(inputs[y+3].value.substring(6,8));
          }

          if (!isWhitespace(inputs[y].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y].value));
          }

          //alert(prioritydate.toString())

          if (isWhitespace(inputs[y+4].value)) {
            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
                columns[x+12].style.backgroundColor="yellow";
              }
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
              }
            }
          } else {

            currentdate.setFullYear(theatreForm.sesskeys.value.substring(0,4));
            currentdate.setMonth(parseInt(theatreForm.sesskeys.value.
                                 substring(4,6),10)-1);
            currentdate.setDate(theatreForm.sesskeys.value.substring(6,8));
            currentdate.setHours(inputs[y+4].value.substring(0,2));
            currentdate.setMinutes(inputs[y+4].value.substring(3,5));
            currentdate.setSeconds(inputs[y+4].value.substring(6,8));

            if (currentdate > prioritydate) {
//              columns[x].style.backgroundColor="yellow";
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
                columns[x+12].style.backgroundColor="yellow";
              }
            } else {
              differenceinmilliseconds =
              Math.abs(currentdate.getTime() - displaydate.getTime());
              differenceinminutes =
              differenceinmilliseconds / (1000 * 60)
              displayhours = Math.floor( differenceinminutes / 60);
              displayminutes = differenceinminutes % 60;
              displayminutes = parseInt(displayminutes);

              if (columns[x+12]!=undefined) {
                columns[x+12].innerHTML = displayhours + "hrs " +
                                          displayminutes + "min ";
              }
            }

          }

          if (!isWhitespace(inputs[y+1].value)) {
              prioritydate.setMinutes(prioritydate.getMinutes() +
                                      parseInt(inputs[y+1].value));
          }

          if (currentdate > prioritydate) {
            columns[x+12].style.backgroundColor="red";
          }

          if (!isWhitespace(inputs[y+5].value)) {
            columns[x].style.backgroundColor="#"+inputs[y+5].value;
          }

      }
    }
  }
}
function addScrollBarToCaseList() {

  tables = document.getElementsByTagName("table");
  rows = tables[2].getElementsByTagName("tr");

//  alert(tables[2].outerHTML);
  if (rows.length-1 > 10) {
    tables[2].outerHTML="<div style='height:340px;overflow-y: auto;'>" +
                        tables[2].outerHTML + 
                        "</div>";
  }

}
function populateTimeDurationReq() {

  var tables;
  var rows;
  var columns;
  var inputs;
  var addedTime;

  tables = document.getElementsByTagName("table");
  rows = tables[2].getElementsByTagName("tr");

  for (x=0; x<rows.length; x++) {

    columns = rows[x].getElementsByTagName("td");
    inputs = columns[1].getElementsByTagName("input"); 

    if (inputs.length==4) {
      if (rows[x+1]!=undefined) {
        if (rows[x+1].
            getElementsByTagName("td")[1].
            getElementsByTagName("input").
            length==0) {

            columnsDur = rows[x+1].getElementsByTagName("td");
            inputsDur = columnsDur[2].getElementsByTagName("input");
//            alert(inputsDur[0].value);

            addedTime = addMinutes(inputs[0].value,inputs[1].value); 
            addedTime = addMinutes(addedTime,inputs[2].value);
            addedTime = addMinutes(addedTime,inputs[3].value);

            rows[x+1].getElementsByTagName("td")[1].innerHTML=
            addedTime + "<input type=hidden value='" + addedTime + "'>" +
            "<input type=hidden value='" + inputsDur[0].value + "'>" + 
            "<input type=hidden value='" + inputs[2].value + "'>" +
            "<input type=hidden value='" + inputs[3].value + "'>" +
            "&nbsp;";

            rows[x+1].getElementsByTagName("td")[2].innerHTML=
            inputsDur[0].value + " min"
        }
      }
    }
  }

  if (rows[1]!=undefined) {
    if (rows[1].getElementsByTagName("td")[1].innerHTML=="&nbsp;") {

      inputsDur = rows[1].getElementsByTagName("td")[2].
                  getElementsByTagName("input");

      rows[1].getElementsByTagName("td")[1].innerHTML=
      document.getElementById("lastsltt").value +
      "<input type=hidden value='" + document.getElementById("lastsltt").value +
      "'>" +
      "<input type=hidden value='"+inputsDur[0].value+"'>" +
      "<input type=hidden value='" + 
      document.getElementById("breksltt").value + "'>" +
      "<input type=hidden value='" + 
      document.getElementById("prepsltt").value + "'>" +
      "&nbsp;"; 
    }

    for (x=0; x<rows.length; x++) {

      columns = rows[x].getElementsByTagName("td");
      inputs = columns[1].getElementsByTagName("input");

      if (inputs.length==4) {
        if (rows[x+1]!=undefined) {
          if (rows[x+1].
              getElementsByTagName("td")[1].
              getElementsByTagName("input").
              length==0) {

              columnsDur = rows[x+1].getElementsByTagName("td");
              inputsDur = columnsDur[2].getElementsByTagName("input");
//            alert(inputsDur[0].value);

              addedTime = addMinutes(inputs[0].value,inputs[1].value);
              addedTime = addMinutes(addedTime,inputs[2].value);
              addedTime = addMinutes(addedTime,inputs[3].value);

              rows[x+1].getElementsByTagName("td")[1].innerHTML=
              addedTime + "<input type=hidden value='" + addedTime + "'>" +
              "<input type=hidden value='" + inputsDur[0].value + "'>" +
              "<input type=hidden value='" + inputs[2].value + "'>" +
              "<input type=hidden value='" + inputs[3].value + "'>" +
              "&nbsp;";

              rows[x+1].getElementsByTagName("td")[2].innerHTML=
              inputsDur[0].value + " min"
          }
        }
      }
    }
  }
}
function addMinutes(time, minsToAdd) {
  function z(n){ return (n<10? '0':'') + n;};
  var bits = time.split(':');
  var mins = bits[0]*60 + +bits[1] + +minsToAdd;

  return z(mins%(24*60)/60 | 0) + ':' + z(mins%60);  
}
