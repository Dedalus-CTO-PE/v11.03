//jsVersion  : V11.03.00
//========================================================================
var ItemNo=100;
//
//========================================================================
//   Report 1
//========================================================================
function SelectForm() {
for (var i = 0; i < NewNote.clnot001.length; i++) {
      if (NewNote.clnot001.options[i].selected == true) {
        NoteType=NewNote.clnot001.options[i].value
      }
    }
document.SelectNote.template.value=NoteType.substr(3,3);
document.SelectNote.submit();
}
function AddNote(ItemNo){
 document.NewNote.formactn.value=ItemNo;
 document.NewNote.submit();
}
function UpdateNote(ItemNo){
 document.UpdateForm.formactn.value=ItemNo;
 document.UpdateForm.submit();
}
function changeDuration() {   
for (var i = 0; i < NewNote.clnot005.length; i++) { 
  if (NewNote.clnot005.options[i].selected == true) {
    NewNote.clnot009.value="Duration:"+NewNote.clnot005.options[i].text }
  }
}
function changeIncident() {
for (var i = 0; i < NewNote.incident.length; i++) {
  if (NewNote.incident.options[i].selected == true) {
    NewNote.clnot006.value="Incident:"+NewNote.incident.options[i].text }
  }
}
function changeLocation() {
for (var i = 0; i < NewNote.location.length; i++) {
  if (NewNote.location.options[i].selected == true) {
    NewNote.clnot007.value="Location:"+NewNote.location.options[i].text }
  }
}
function changeInjury() {
for (var i = 0; i < NewNote.injury.length; i++) {
  if (NewNote.injury.options[i].selected == true) {
    NewNote.clnot008.value="Injury:"+NewNote.injury.options[i].text }
  }
}
function changeCause() {
for (var i = 0; i < NewNote.cause.length; i++) {
  if (NewNote.cause.options[i].selected == true) {
    NewNote.clnot009.value="Cause:"+NewNote.cause.options[i].text }
  }
}
function DeleteItem(ItemNo){
   if(confirm("Are you sure you wish to delete progress notes?")){
     document.UpdateNote.formactn.value=ItemNo;
     document.UpdateNote.submit();
   }
}
function checkEnquiry(theForm) {
  if(document.getElementById("d_seclevel")== null){ return; };
  if(document.getElementById("d_notelevl")== null){ return; };
  if(isWhitespace(document.getElementById("d_seclevel").value)) {
     document.getElementById("d_seclevel").value="0";
  }
  if(isWhitespace(document.getElementById("d_notelevl").value)) {
     document.getElementById("d_notelevl").value="0";
  }
  var seclev=trim(parseInt(document.getElementById("d_seclevel").value,10));
      seclev=seclev - 0;
  var notelev=trim(parseInt(document.getElementById("d_notelevl").value,10));
      notelev=notelev - 0;
  if (seclev>=notelev) { return; }

  for (var e = 0; e < theForm.elements.length; e++) {
    var el=theForm.elements[e] ;
    switch(el.type) {
      case "text":
          el.disabled = true; break;
      case "select-one":
          el.disabled = true; break;
      case "textarea":
          el.readOnly = true; break;
      case "button":
          if(el.value != "Cancel") {
            el.style.display="none";
            el.disabled = true; 
          }
          break;
      case "checkbox":
          el.disabled = true; break;
      case "hidden":
          break;
     }
  }
  var allimages=document.getElementsByTagName("IMG");
  for (i=0; i<allimages.length; i++) {
      if(!allimages[i].src.match(/Note/)) {
        allimages[i].style.display="none";
      }
  } 
}
//========================================================================
//   Report 2
//========================================================================
function EditLookup02() {
    SelectCode.template.value=2
    SelectCode.clnot001.value=SelectCode.startkey.value
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,225)
}
function ShowDetail02(linkurl) {
  Left=(document.body.clientWidth-390)/2
  DFrameLink(linkurl,0,Left,390,225)
}
function AddFirstMedication(){
  ItemNo=document.NewNote.numbitems.value;
  AddMedications();
}
function SetNextRow() {  // Function for first Row only as it sets following
  if (ItemNo==101) {   // Rows data for reference Session & Amount
    rowflag=1;
  }
//                           Test for any blank lines
  var blankflag=false;
  for (var i=0; i < document.NewNote.length; i++) {
    if (document.NewNote.elements[i].name.match(/drugs/)) {
      if (isWhitespace(document.NewNote.elements[i].value)) {
        blankflag=true;   // Found a blank row set true
        break; }}}

    if (blankflag) {
      FindBlank() // a blank line had already been created - use it
      SetFocus()  // Set the focus
    } else {
///   document.NewNote.counter.value++;
      AddMedications();
    }
}
function FindBlank() {
  pform=document.NewNote;

  for (var i=0; i < document.NewNote.length; i++) {
    if (pform.elements[i].name=="drugs") {
       pform.elements[i+2].value="1";
       // Subsquent records set to above row
       if ((ItemNo!=101) && (drugs!="drugs101")) {
            pform.elements[i-1].value=pform.elements[i-16].value;
            pform.elements[i+4].value=pform.elements[i-11].value;
       }
       break;
    }
  }
}
function SetFocus() {
  for (var i=0; i < document.NewNote.length; i++) {
    if (document.NewNote.elements[i].name.match(/itemn/)) {
      if (isWhitespace(document.NewNote.elements[i].value)) {
        document.NewNote.elements[i].focus();
        break; }}}
}
function AddMedications(){
  var readonly;
  var img;
  var clr;
  var disabledSelect;
  if(document.NewNote.readonly === undefined){
     readonly="";
     img = " <img src=../images/SearchIcon.gif class='Icon'" +
     " onClick=javascript:DefMiscChargeSearchFrame(mcode"+ItemNo+",drugs"+
     ItemNo+");>";
     clr = " <img src=../images/ClearIcon.gif class='Icon'" +
           " onClick=clrFields(mcode" + ItemNo + ",drugs" + ItemNo + ",dosef" +
           ItemNo + ",dosea" + ItemNo + ",frequ" + ItemNo + ",durat" + ItemNo +
           ",quant" + ItemNo + ",instr" + ItemNo + ");>" ;
     disabledSelect = "";
  }
  else{
     readonly=" Class=ReadOnly readonly ";
     img = "";
     clr = "";
     disabledSelect=" disabled "
  }
  ItemNo++;
  Medications.innerHTML+=
  "<table width=100% border=0 align=center " +
  "cellpadding=1 cellspacing=0>" +
  "<tr><td width=30%><input type=text name=mcode"+ ItemNo +
    " maxlength=9 size=9 " + readonly +
    " onchange=validateCode(40,NewNote.mcode"+ItemNo+
    ",NewNote.drugs"+ItemNo+");>" +
    "<input type=text name=drugs"+ ItemNo + readonly + 
    " maxlength=70 size=35>" + img + "</td>"+
    "<td width=10%><select name=dosef" + ItemNo + disabledSelect + ">" +
    "    <option></option>" +
    doseform.innerHTML +
    "    </select></td>" +
    "<td width=10%><input type=text name=dosea" + ItemNo + " maxlength=20 " +
    readonly + " size=10></td>" +
    "<td width=10%><select name=frequ" + ItemNo + disabledSelect + ">" +
    "    <option></option>" +
    frequency.innerHTML +
    "    </select></td>" +
    "<td width=10%><input type=text name=durat" + ItemNo + readonly + 
    " maxlength=20 size=10></td>" +
    "<td width=10%><input type=text name=quant" + ItemNo + " size=10" +
    readonly + "></td>" +
    "<td width=20%><input type=text name=instr" + ItemNo + readonly + 
    " onblur=SetNextRow();> " + clr + "</td></tr></table>"
}
