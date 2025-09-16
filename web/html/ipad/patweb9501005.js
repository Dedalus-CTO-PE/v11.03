//jsVersion  : V11.03.00
//
function updateParent(ward,wardName,bed,bedstat)  {
  parent.ReturnWard.value=ward
  parent.ReturnName.value=wardName
  selectOptions2('31',ward,parent.ReturnBed);
  parent.ReturnBed.value=bed
  parent.ReturnBedStatus.value=bedstat
  parent.hideSearch()
}
//------------------------------------------------------------
// Get Select List Options
//------------------------------------------------------------
function selectOptions2(OptionNumber,ReturnCode,ReturnSelect) {
  var serverURL   = "../cgi-bin/comweb80.pbl?reportno=" + OptionNumber +
                    "&valdcode=" + ReturnCode.replace(/ /g,"+")
  xmlHttp = createHttpObject();
  xmlHttp.open("GET", serverURL, false);
  xmlHttp.send();
  var returnValue = xmlHttp.responseText
  if (xmlHttp.status==200) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {
    alertify.alert(xmlHttp.responseText);
  }
}
//------------------------------------------------------------
// Function : Init Page
//------------------------------------------------------------
function init() {
  for (var i =0 ; i < document.all.wardcode.length; i++) {
    if (document.all.wardcode.options[i].value==document.search.defward.value.substr(0,3)) {
      document.all.wardcode.selectedIndex=i 
    }
  }
  var rowCount=0
  if (location.href.match(/norecord/)) {
    var ListString = "<ul class=sectionList>";
    var ttable=document.getElementById("SearchResults");
    var trows=ttable.getElementsByTagName("tr");
    var currentWard="";
    for (i=1;i<trows.length;i++) {
      var tcells=trows[i].getElementsByTagName("td")
      if (tcells.length>1) {
        rowCount+=1
        currentBed=tcells[0].innerHTML.replace(/\<\/a\>/,"").replace(/\<.*\>/,"");
        ListString+="<li class=sectionItem>" +
                     currentWard + "/" + currentBed + "<br>" +
                    "<span class=subscriptLeft>Bed Type: " + tcells[1].innerHTML + "</span>" +
                    "<span class=subscriptRight>Extension: "+currentExt+" "+"</span><br>"+
                    "<span class=subscriptLeft>Patient: " + tcells[3].innerHTML + "</span>" +
                    "<span class=subscriptRight>" + tcells[5].innerHTML + "</span>" +
                    "</a></li>"
      }
      else {
        currentWard=tcells[0].innerHTML.replace(/Extension.*/,"").replace(/.* -/,"")
        currentExt=tcells[0].innerHTML.replace(/.*Extension.*-/,"")
      }
    }
    ListString+="</ul>"
  }
  ListLocation = document.getElementById("sectionList");
  var sr=document.getElementById("searchResults");
  ListLocation.innerHTML=ListString;
  ListLocation.style.display="block";
}
function toggleEmpty() {
   var el=document.getElementById("EmptOnly");
   if (el.className.indexOf('togButtonOff')>0) {
     el.className='togButton togButtonOn noHighlight';
     document.search.emptonly.value="1";
   }
   else {
     el.className='togButton togButtonOff noHighlight';
     document.search.emptonly.value="0";
   }
}
function toggleBeds() {
   var el=document.getElementById("BedsOnly");
   if (el.className.indexOf('togButtonOff')>0) {
     el.className='togButton togButtonOn noHighlight';
     document.search.bedsonly.value="1";
   }
   else {
     el.className='togButton togButtonOff noHighlight';
     document.search.bedsonly.value="0";
   }
}
