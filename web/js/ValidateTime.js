//jsVersion  : V11.03.00
//d1 = first date
//d2 = second date
//t1 = first time
//t1desc = first time description
//t2 = second time
//t2desc = second time description
// first time must not be greater than second time if dates are equal
function validTime(d1,d2,t1,t1desc,t2,t2desc){
  if(d1.value==d2.value) {
    alert("The dates are equal");
    return false;
  }
  else {
    alert("The dates are not equal");
    return true;
  }
}
