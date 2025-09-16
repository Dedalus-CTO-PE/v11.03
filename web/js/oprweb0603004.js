//jsVersion  : V11.03.01
//=============================================================================

function AddData() {
    caseKeys=UpdateForm.casekeys.value.replace(/ /g,"+");
    teamNumb=UpdateForm.teamnumb.value
    AddDataURL="oprweb06.pbl?reportno=02&template=003&casekeys="+caseKeys +
               "&teamnumb="+teamNumb

    if (document.getElementById('nowarnfl')){
       if(document.getElementById('nowarnfl').value=='1'){;
         AddDataURL+="&nowarnfl=1" }
    }

    DFrameLink(AddDataURL,100,100,850,430);

}
function AllMBS() {
    caseKeys=UpdateForm.casekeys.value.replace(/ /g,"+");
    teamNumb=UpdateForm.teamnumb.value
    DFrameLink("patweb98.pbl?reportno=01&template=022&urnumber="+
    UpdateItem.urnumber.value.replace(/ /g,"+")+
    "&admissno="+UpdateItem.admissno.value.replace(/ /g,"+")+
    "&casekeys="+caseKeys +
    "&teamnumb="+teamNumb,100,100,850,430);
}
function TheatreComp() {
   document.UpdateForm.redirect.value="oprweb06.pbl?reportno=3&template=004&"+
           "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+") +
           "&teamnumb=" + document.UpdateForm.teamnumb.value.replace(/ /g,"+") +
           "&jmphflag=" + document.UpdateForm.jmphflag.value.replace(/ /g,"+") 

    document.UpdateForm.updatety.value="C";
    document.UpdateForm.nextpage.value=1;

    if (document.UpdateForm.d_theacomp.checked == true) {
       document.UpdateForm.thercomp.selectedIndex = 0;
       document.UpdateForm.theacomp.value="1";
    } else {
       document.UpdateForm.theacomp.value="0";
    }
    document.UpdateForm.submit();
}

function TheatreInComp() {
   document.UpdateForm.redirect.value="oprweb06.pbl?reportno=3&template=004&"+
           "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+") +
           "&teamnumb=" + document.UpdateForm.teamnumb.value.replace(/ /g,"+") 

    if (document.UpdateForm.thercomp.selectedIndex > 0) {
      document.UpdateForm.d_theacomp.checked = false;
      document.UpdateForm.theacomp.value="0";
    }

    document.UpdateForm.updatety.value="C";
    document.UpdateForm.nextpage.value=1;
    document.UpdateForm.submit();
}

function showImplant() {
  Left=(document.body.clientWidth-750)/2
  LinkUrl="oprweb06.pbl?reportno=7&template=4&casekeys=" +
           PatientLinks.casekeys.value+"&teamnumb="+
           PatientLinks.teamnumb.value;
  DFrameLink(LinkUrl,100,Left,750,350);
}

//**************************************************************************

function initSP() {
     if(document.UpdateForm.showprov.value=="1") {
        PostMBSOption.innerHTML=PostMBS.innerHTML;
        }
     else {
        PostMBSOption.innerHTML=PostMBSBlank.innerHTML;
        }
     if(document.UpdateForm.opcnicom.value=="1") {
       InsertImplantButton.style.display="";
     }
}

function BillProvCMBS(){
   document.UpdateForm.showprov.value="1";
   document.UpdateForm.redirect.value="oprweb06.pbl?reportno=3&template=004&"+
           "&casekeys=" + document.UpdateForm.casekeys.value.replace(/ /g,"+") +
           "&teamnumb=" + document.UpdateForm.teamnumb.value.replace(/ /g,"+") +
           "&showprov=" + document.UpdateForm.showprov.value +
           "&jmphflag=" + document.UpdateForm.jmphflag.value.replace(/ /g,"+") 

    document.UpdateForm.updatety.value="B";
    document.UpdateForm.nextpage.value=1;
    document.UpdateForm.submit();
}

function UpdateLink(scasekey,teamnumb,uniqueky,admissno,rectype,trannumb) {
    linkurl="oprweb06.pbl?reportno=3&template=5" +
            "&casekeys=" + scasekey.replace(/ /g,"+") +
            "&teamnumb=" + teamnumb.replace(/ /g,"+") +
            "&uniqueky=" + uniqueky.replace(/ /g,"+") +
            "&admissno=" + admissno.replace(/ /g,"+") +
            "&irectype=" + rectype.replace(/ /g,"+") +
            "&trannumb=" + trannumb.replace(/ /g,"+");
    DFrameLink(linkurl,30,50,600,240);
  }

//this will remove the row no needed to be displayed
function DeleteProv(obj)
{
  var table = obj.parentNode.parentNode.parentNode;
  var tr = obj.parentNode.parentNode;

  //remove the row
  table.removeChild(tr);

  //CMBS button
  var postprovButton = document.getElementById("postprov");

  //check if there is any items
  if(table.rows.length > 1)
    postprovButton.style.visibility = "visible"; //show CMBS button
  else
    postprovButton.style.visibility = "hidden";  //hide CMBS button

}

function postProv()
{
  var form = document.getElementById("provMBSForm");
  var table = document.getElementById("editTable");
  var arrObject = new Array();

 var x = parseInt(document.UpdateForm.noofitem.value) +
         parseInt(table.rows.length);

 ShowWaitScreen();

  if ( x> "999") {
    alert('Error: Maximum Number of MBS Items will be exceeded.');
    return;
  }

  for(var i = 1; i < table.rows.length; i++)
  {
     var uniqueId = new Object();
     var code = new Object();

     //cell 1 is uniqueId
     uniqueId.value = table.rows[i].cells[1].innerText;
     uniqueId.maxLength = 10;

     //cell 2 is code
     code.className = "Integer";
     code.value =  table.rows[i].cells[2].innerText;
     code.maxLength = 9

     justifyRight(uniqueId);
     justifyLeft(code);

     arrObject.push(uniqueId.value+""+code.value);
  }

  var index = 1;

  for(var i = 0; i < arrObject.length; i++)
  {
     var item = document.createElement("input");
     item.type = "hidden";

     if (index <10) {
       item.id = "provm00"+( index );
       item.name = "provm00"+ ( index );
     } else {
       item.id = "provm0"+( index );
       item.name = "provm0"+ ( index );
     }

     item.value = arrObject[i];

//     alert(item.name+" "+item.value);

     form.appendChild(item);
     index++;
  }
    if(arrObject.length>0)
      form.submit();
    else
      alert('Must be at least one CMBS code.');
}

