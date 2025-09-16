//jsVersion  : V11.03.00
//========================================================================
// Program   : mrtweb0109.js
//
// Written   : 17.06.2011 Mike Laming
//
// Function  : Standard Functions Used in mrtweb0109 templates
//
// Version   :
// V10.02.01 21/07/2011 Mike Laming    CAR 240724
//                      Mods to add ResetHomeLocn()
// V10.02.00 17/06/2011 Mike Laming    CAR 240724
//                      Created for "mrtme0.." - selectHosp(),SetHomeHosp(),
//                      SetHomeLocn(), selectHHosp()
//                      Remove indicator "mrcncros"
//========================================================================
function selectHosp(p) {
  if(p.ibcnmhos.value=="1") {
    for (var i =0 ; i < p.mrtme019.length; i++) {
      if (p.mrtme019.options[i].value == p.desthosp.value)
          p.mrtme019.selectedIndex = i ;
    }
  }
}
function SetHomeHosp(p) {
  if(p.ibcnmhos.value=="1") {
    HomeHospTitle.innerHTML=ShowHomeHospTitle.innerHTML;
    HomeHosp.innerHTML=ShowHomeHosp.innerHTML;
  } else {
    HomeHospTitle.innerHTML="";
    HomeHosp.innerHTML=ShowNoHomeHosp.innerHTML;;
  }
}
function selectHHosp(p) {
  if(p.ibcnmhos.value=="1") {
    for (var i =0 ; i < p.mrtme017.length; i++) {
      if (p.mrtme017.options[i].value == p.dflthosp.value)
          p.mrtme017.selectedIndex = i ;
    }
  }
}
function SetHomeLocn(p) {
  if (!isWhitespace(p.mrtme020.value)) {
       p.dflthosp.value = p.mrtme020.value; }
  if (!isWhitespace(p.mrtme017.value)) {
       p.dfltlocn.value = p.mrtme017.value; }

  p.mrtme017.options.length=0;
  p.mrtme017.options[p.mrtme017.options.length]=new Option(" "," ");
  if(p.ibcnmhos.value=="1") {
     MrtMultiHomeLocns(p.mrtme017,p.dfltlocn.value,p.dflthosp.value)
  } else {
     MrtHomeLocns(p.mrtme017,p.dfltlocn.value)
  }
}
function ResetHomeLocn(p) {
  p.dfltlocn.value = p.mrtme017.value;
}
