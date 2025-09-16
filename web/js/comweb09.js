//==============================================================================
//jsVersion  : V11.03.00
//==============================================================================
//  comweb11 functions
//==============================================================================
//

//Function that takes the contents of the text box and places it
//in the input.
function getText(dbref, textboxref) {

  document.getElementById(dbref).value =
     document.getElementById(textboxref).value;
}

//Checks to see whether the inactive flag is set, and ticks the innactive box
function checkInactiveValue(inactive,d_inactive){
 
  if (inactive.value=='0' || inactive.value==' '){
    d_inactive.checked=true;
  }
}

//Checks to see whether the inactive flag is set, and ticks the innactive box
function checkInfinityValue(inactive,d_inactive){

  if (inactive.value=='1'){
    d_inactive.checked=true;
  }
}

function checkDates06(date1,date2) {

   if (!isWhitespace(date2.value)) {
     if (!CheckDateRange(date1,date2)){
        date1.focus();
        return false;
     }
   }
   return true;
}

function getInactiveValue(inactive,d_inactive) {

  inactive.value = checkCheckBoxInverse(d_inactive.checked);

}

function EditLookUp02() {
  SelectCode.template.value=3
  SelectCode.emaci001.value=SelectCode.startkey.value
  Left=(document.body.clientWidth-450)/2
  DFrameSubmit(SelectCode,0,Left,450,250)
}

function changeInfinity() {
  
  var allowInfinity = document.getElementById("emacc009");
  var maxScore = document.getElementById("emacc006");
 
  if (allowInfinity.checked == true) {
    maxScore.disabled = true;
    maxScore.value = ""; 

    if(navigator.userAgent.indexOf("compatible") == -1) {
      maxScore.classList.add('ReadOnly');
      maxScore.classList.remove('Mandatory');
      maxScore.classList.remove('Number');
    } else {
      maxScore.className += ' ReadOnly';
      maxScore.className -= ' Mandatory';
      maxScore.className -= ' Number';
    }
  } else {

    maxScore.disabled = false;

    if(navigator.userAgent.indexOf("compatible") == -1) {
      maxScore.classList.remove('ReadOnly');
      maxScore.classList.add('Mandatory');
      maxScore.classList.add('Number');
    } else {
      maxScore.className -= ' ReadOnly';
      maxScore.className += ' Mandatory';
      maxScore.className += ' Number';
    }
  }
}

function checkCheckBox(isChecked){

  var checkBoxValue="0";

  if (isChecked==true) {
    checkBoxValue="1";
  }

  return checkBoxValue;
}

function checkCheckBoxInverse(isChecked){

  var checkBoxValue="0";

  if (isChecked==false) {
    checkBoxValue="1";
  }

  return checkBoxValue;
}


