//jsVersion  : V11.03.00
/***********************************************************************
/* Program   : outweb0505014.js
/*
/* Written   : 10.07.2009 Saroeun Soeur
/*
/* Function  : namespace to keep js function specific to template outweb0505014.html
/*
/* Version   : 
/* 
/* V9.12.01  10/07/2009 Saroeun Soeur CAR 150767
/*           created function updateTimeGroupBooking
/*
 ***********************************************************************/

var IBA = {};

IBA.Standard = {};

IBA.Standard.Outweb0505014 = {};

IBA.Standard.Outweb0505014 =
{
 /****************************************************************
  * updateTimeGroupBooking - scans through the parent Frame for 
  * checked checkboxes and then creates hidden fields for posting 
  * back to the web server
  ****************************************************************/
 updateTimeGroupBooking:
 function()
 {
   var formCollection = parent.document.forms;

   for(var i = 0; i < formCollection.length; i++)
   {
     // looks for form name multipleSlot
     if(formCollection[i].name == "multipleSlot")
     {
       //grabs the collection of elements
       var inputElementCollection = formCollection[i];
      
       for(var j = 0; j < inputElementCollection.length; j++)
       {
         //we only concern with checkboxes that are checked
         if(inputElementCollection[j].type == "checkbox" && inputElementCollection[j].checked)
         {
           //create the hidden fields and append it to the form multipleSlot
           var node = document.createElement("input");

           node.name = inputElementCollection[j].name;
           node.id = inputElementCollection[j].id;
           node.type = "hidden";
           node.value = inputElementCollection[j].value;

           AddForm.appendChild(node);
         }
       }
     }
   }
   AddForm.submit();
  }
};

