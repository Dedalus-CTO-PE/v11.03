//jsVersion  : V11.03.00
function periodLink(linkType,periodValue,yearValue) {
a=parseInt(document.PeriodForm.chrttype.value,10)
b=parseInt(document.PeriodForm.chrtvalu.value,10)
c=parseInt(document.PeriodForm.chrtperd.value,10)
document.PeriodForm.template.value=a+b+c
if ( linkType == "0" ) {
document.PeriodForm.fincperd.value=document.PeriodForm.yearperd.value.substring(0,2)
document.PeriodForm.fincyear.value=document.PeriodForm.yearperd.value.substring(2,6)
     }
else { 
document.PeriodForm.fincperd.value=periodValue
document.PeriodForm.fincyear.value=yearValue
     }
document.PeriodForm.submit();
}
