//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0604001.js
//
// Written   : 22.06.2009 Saroeun Soeur
//
// Function  : Standard Functions Used in emrweb0604001.html
//
// Version   :
//
// V9.12.01  Saroeun Soeur CAR XXXXXX
//========================================================================
//
//========================================================================
//  Report 4
//========================================================================
function checkCheckBoxes()
{
  var arrayObj = document.getElementsByTagName("input");
  var element = null;

  if(arrayObj)
  {
    for(var i = 0; i < arrayObj.length;i++)
    {
      if((arrayObj[i].name.substr(0,5)) == "emrcl" && arrayObj[i].type == "hidden" )
      {
        element = document.getElementById("d_"+arrayObj[i].name);

        if(element)
        {
          if(arrayObj[i].value == " " || arrayObj[i].value == "0")
          {
            element.value = "0";
            element.checked = false;
          }
          else
          {
            element.value = "1";
            element.checked = true;
          }
        }
      }
    }
  }
}

function postCheckBoxes()
{
   //check checkbox
  var arrayObj = document.getElementsByTagName("input");
  var element = null;

  if(arrayObj)
  {

    for(var i = 0; i < arrayObj.length;i++)
    {
      if((arrayObj[i].name.substr(0,7)) == "d_emrcl" && arrayObj[i].type == "checkbox" )
      {
        element = document.getElementById(arrayObj[i].name.substr(2,8));

        if(element)
          arrayObj[i].checked == true?element.value = "1":element.value = "0";
      }
    }
  }
}
function cancel()
{
  clinicinfo.updatety.value = " ";
  clinicinfo.submit();
}

function update()
{
 clinicinfo.updatety.value = "U";
 postCheckBoxes();
 clinicinfo.submit();
 alert("Update Complete");
}

