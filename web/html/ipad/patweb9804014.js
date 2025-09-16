//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/patweb9804014.js
//
// Modification
//
// Version   Date       Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.07.01 02.11.2015 Peter Vela  CAR 320917
//                      Added functionality for Comments textarea
// V10.06.01 06.08.2015 Peter Vela  CAR 318408
//                      Commented out javascript error in SubmitForm()
// V10.03.01 06.08.2013 B.G.Ackland CAR 289383
//                      New AJAXPostString2 to fix post encoding
function SubmitForm() {
  if (validateMandatory(UpdateForm)) {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/reloadParentFrame/i)) {
        parent.frames['PatFrame'].refreshScreen();
        parent.CloseDocument();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function ChangeDate() {
  if (validateMandatory(UpdateForm)) {
    theURL=document.UpdateForm.action;
    var postStr=AJAXPostString2(document.UpdateForm)
    var xmlHttp = createHttpObject();
    xmlHttp.open("POST", theURL, false);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    xmlHttp.send(postStr);
    if (xmlHttp.status=="200") {
      if (xmlHttp.responseText.match(/reloadParentFrame/i)) {
        document.location.reload();
      }
      else {
        alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
      }
    }
    else {
      alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
    }
  }
}
function setButtons() {
//  var DaySelect = document.UpdateForm.lastdate
//  DaySelect.onchange=ChangeDate;
  if  (document.UpdateForm.c_pmnut041.value == "1") {
    document.UpdateForm.pmnut041.checked="1";
  }
  var actionBtn = parent.document.getElementById('actionButton');

  if(actionBtn) {

    actionBtn.className = actionBtn.className.replace(/SpanButton/g,"");
    actionBtn.className = actionBtn.className.replace(/Blue/g,"");
    actionBtn.className = actionBtn.className + " SpanButtonBlue";
    actionBtn.innerText = "Save";

     actionBtn.onclick = function() {
        SubmitForm();
     }

  }
}
function setComments() {
  var txtArea = document.getElementById('textacmt');
  if (!txtArea || txtArea == undefined)
    return;

  var arrCmntLines = new Array();
  var sComments = "";
  var nCmntLines = 5;  // because we only store 5 comment lines in our file

  for (var i=0; i < nCmntLines; i++) {
    arrCmntLines[i] = document.getElementById('pmnut0' + (30+i+1) + '').value;

    if (!isWhitespace(arrCmntLines[i])) {
      sComments = sComments + arrCmntLines[i];
    }

    if (i < (nCmntLines-1)) {
      // not the last line
      if (!isWhitespace(arrCmntLines[i])) {
        sComments = trim(sComments) + "\n";
      }
    }
  }

  if (isWhitespace(trim(sComments))) {
    txtArea.value="";
  } else {
    txtArea.value = trim(sComments);  // trim leading & trailing spaces
  }

}
//------------------------------------------------------------
// Checks (and enforces) a limit on the number of lines and
// characters per line for a textarea input.
// Prevents the key input from registering in the textarea if
// limit reached.
//------------------------------------------------------------
function CheckTextAreaLimits(e, TextArea, MaxLines, MaxLineChars) {
  var evt = e ? e : window.event;
  var el = evt.target ? evt.target : evt.srcElement;
  if (!TextArea || TextArea == undefined)
    return false;

  var KEY_ENTER = 13;
  var KEY_BACKSPACE = 8;
  var txtArea = TextArea;
  var maxLines = MaxLines ? MaxLines : txtArea.rows;
  var maxChars = MaxLineChars ? MaxLineChars : txtArea.cols;

  if (evt.keyCode == KEY_BACKSPACE)
    return true;

  if (evt.keyCode == KEY_ENTER) {
    var countLines = txtArea.value.split(/\r*\n/).length;
    if (countLines >= maxLines) {
      alert(maxLines + " lines limit reached");
      CancelEvent(evt);
      return false;
    }
  }
  else if (IsValidInputKey(evt) && !evt.ctrlKey && !evt.altKey) {
    var lines = txtArea.value.split(/\r*\n/);
    var lineNo = GetLineNo(txtArea);
    for (var i=0; i < lines.length; i++) {
      if (i == (lineNo - 1)) {
        if (lines[i].length >= maxChars) {
          alert(maxChars + " characters per line limit reached");
          CancelEvent(evt);
          break;
        }
      }
    }
  }

  return true;
}
//------------------------------------------------------------
// Cancels an event (stops propagation)
//------------------------------------------------------------
function CancelEvent(e) {
  var evt = e ? e : window.event;

  if (evt.preventDefault) {
    evt.preventDefault();
    evt.stopPropagation();
  }
  else {
    evt.returnValue = false;
    evt.cancelBubble = true;
  }

  return false;
}
function SplitComments() {
  var txtArea = document.getElementById('textacmt');
  if (!txtArea || txtArea == undefined)
    return;

  document.getElementById('pmnut031').value="";
  document.getElementById('pmnut032').value="";
  document.getElementById('pmnut033').value="";
  document.getElementById('pmnut034').value="";
  document.getElementById('pmnut035').value="";

  var lines = txtArea.value.split(/\r*\n/);

  for (var i = 0; i < lines.length; i++) {
    if (lines[i]) {
      document.getElementById('pmnut0' + (30+i+1) + '').value = lines[i];
    }
    else {
      document.getElementById('pmnut0' + (30+i+1) + '').value = "";
    }
  }
}
//------------------------------------------------------------
// Returns the current caret/cursor position in the textarea
//------------------------------------------------------------
function GetCaretPos(el) {
  if (!el || el == undefined)
    return 0;

  if (el.selectionStart) {
    // Firefox support
    return el.selectionStart;
  }
  else if (document.selection) {
    // IE support

    var c = "\001";
    var pos = 0;
    r = document.selection.createRange();

    if (r == null)
      return 0;

    dup = r.duplicate();

    dup.moveToElementText(el);
    r.text = c;
    pos = dup.text.indexOf(c);
    r.moveStart('character', -1);
    r.text = "";

    return pos;
  }
}

//------------------------------------------------------------
// Returns the line number (1-n) of the caret/cursor position
// in the textarea.
//------------------------------------------------------------
function GetLineNo(el) {
  if (!el || el == undefined)
    return 0;

  var pos, line = 0;

  pos = GetCaretPos(el);
  if (pos == -1)
    pos = el.value.length;

  line = el.value.substr(0, pos).split(/\r*\n/).length;

  return line;
}

//------------------------------------------------------------
// Returns whether or not the key pressed is valid (string input)
// for a text field.
//------------------------------------------------------------
function IsValidInputKey(e) {
  var evt = e ? e : window.event;

  // Test if Alphanumeric, Numpad, Punctuation, or Space keycode
  if ( (evt.keyCode >= 48 && evt.keyCode <= 90) ||
       (evt.keyCode >= 96 && evt.keyCode <= 111) ||
       (evt.keyCode >= 186 && evt.keyCode <= 192) ||
       (evt.keyCode >= 219 && evt.keyCode <= 222) ||
       (evt.keyCode == 32) ) {
    return true;
  }
  else {
    return false;
  }
}

