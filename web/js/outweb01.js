//jsVersion  : V11.03.00
//========================================================================
// Program   : outweb01.js
//
// Written   : 02.04.2000 Bronko Sosic
//
// Function  : Standard Functions Used in outweb01
//
// Version   : V0.00 02.04.2000 Bronko Sosic
//
//========================================================================
//
//========================================================================
//   Report 2
//========================================================================
function updateParent(code,name,date) {
    parent.parent.ReturnCode.value=code
    parent.parent.ReturnName.value=name
    parent.parent.ReturnDate.value=date
    Left=(document.body.clientWidth-390)/2
    DFrameSubmit(SelectCode,0,Left,390,225)
}
//    parent.parent.PopUpScreen.style.display="none"
