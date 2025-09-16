//jsVersion  : V11.03.01
//=============================================================================
var ItemNo=100;    // Need this to be 100 as the cgi var has to be 8 chars
var itemcont=0;    // start of coding section counter
var setpos=0;      // Current position of code insertion
var code;
var rowflag=0;
var CurrentItemNo = 0;
//=============================================================================
//                   Function For Input Of CMBS Item Codes
//=============================================================================
function SetNextRow(newamnt,oldamnt,quantity) {// Function for first Row only as it sets following
//  alert("SetNext - " + ItemNo);
    oldamnt.value=newamnt.value;
    setAmount(quantity,oldamnt,newamnt)
    if (ItemNo==101) {   // Rows data for reference Amount
    rowflag=1;
    AddMBS()
    }
}
function SetNextRowDur(newamnt,oldamnt,quantity,duration) {// Function for 
                                          // first Row only as it sets following
//  alert("SetNext - " + ItemNo);
    oldamnt.value=newamnt.value;
    setAmountDur2Dec(quantity,oldamnt,newamnt,duration) 
    if (ItemNo==101) {   // Rows data for reference Amount
    rowflag=1;
    AddMBS()
    }
}
function AddMBS() {
  // First row so don't add any rows till all data filled

  // SL - if first row and item code is blank then do not create a new row.
  // if ((ItemNo==101)&&(rowflag==0)) {      // SL - changed this test
  if ((ItemNo==101)&&(isWhitespace(document.AddForm.itemn101.value))) {  
      setTimeout('document.AddForm.descp101.focus();',50);
    return; }

  ItemNo++;

  if ((document.getElementById("ptcnuimc")!= null &&
      document.getElementById("ptcnuimc").value == "1" && 
      document.getElementById('typeeimc') != null &&
      document.getElementById('typeeimc').value == "1") ||
      (document.getElementById('ptcnuesf') != null &&
      document.getElementById("ptcnuesf").value == "1" &&
      document.getElementById('typestfc') != null &&
      document.getElementById("typestfc").value == "1") ||
      (document.getElementById('ptcnuebb') != null &&
      document.getElementById('ptcnuebb').value == "1" &&
      document.getElementById('typebbil') != null &&
      document.getElementById('typebbil').value == "1")) {
   if((document.getElementById('ptcnuesf') != null &&
       document.getElementById("ptcnuesf").value == "1" &&
       document.getElementById('typestfc') != null &&
       document.getElementById("typestfc").value == "1") ||
      (document.getElementById('ptcnuebb') != null &&
       document.getElementById('ptcnuebb').value == "1" &&
       document.getElementById('typebbil') != null &&
       document.getElementById('typebbil').value == "1")) {

    RCHTML="<input type=hidden name=testc" + ItemNo + 
                          " id=testc" + ItemNo + ">" +
                          "<input type=hidden name=s4flg" + ItemNo + 
                          " id=s4flg" + ItemNo + ">" +
                          "<input type=hidden name=dummy id=dummy>" +
                          "<input type=hidden name=iamnt" + ItemNo + 
                          " id=iamnt" + ItemNo + ">" +
                          "<input type=hidden name=gstap" + ItemNo + 
                          " id=gstap" + ItemNo +">" +
                          "<input type=hidden name=gstcd" + ItemNo + 
                          " id=gstcd" + ItemNo + ">" +
                          "<input type=hidden name=count" + ItemNo +
                          " id=count" + ItemNo +
                          " value=" + ItemNo + ">" +
                          "<table width=100% border=0 align=center " +
                          "cellpadding=1 cellspacing=0>" +

                          "<tr><td width=11%><input type=text size=11 " +
                          "class='NotFuturEdate Mandatory'" +
                          " maxlength=12 name=mdate" + ItemNo +
                          " id=mdate" + ItemNo +
                          " title='Item Date'" +
                          " onblur=valMDate(this,'Item-Date');>" +


                          "<img notab src=../images/DateLookup.gif " +
                          "class='Icon' alt='Show Calendar' " +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "</td>" +

                          "<td width=11%><input type=text size=10 " +
                          "class='Mandatory'" +
                          "maxlength=10 name=mtime" + ItemNo +
                          " id=mtime" + ItemNo +
                          " title='Item Time'>" +

                          "<img notab src=../images/DateTimeStamp.gif " +
                          "class='Icon' alt='Current' " +
                   "onClick='SetCurrentDateTime(null,AddForm.mtime" + ItemNo + 
                                                                       ");'" +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "<img notab src=../images/TimeLookup.gif " +
                          "class='Icon' alt='Time Select' " +
                          "time='AddForm.mtime" + ItemNo + "'>" +

                          "<td width=15%>" +
                          "<select name=dtype" + ItemNo +
                          " id=dtype" + ItemNo +
                          " onchange='SetType(this);'>" +
                          "<option value='M'>MBS</option>" +
                          "<option value='A'>AMA</option>" +
                          "</select>" +

                          "<input type=text size=9 maxlength=9" +
                          " name=itemn" + ItemNo +
                          " id=itemn" + ItemNo +
                          " title='Item'>" +

                          "<input type=text size=3 maxlength=3" +
                          " name=subit" + ItemNo +
                          " id=subit" + ItemNo +
                          " onblur='validatePMBS(AddForm.itemn" + ItemNo +
                          ",AddForm.descp" + ItemNo +
                          ",AddForm.dtype" + ItemNo +
                          ",AddForm.subit" + ItemNo +
                          ",AddForm.mdate" + ItemNo +
                          ");" +
                          "GetDesc(AddForm.dtype" + ItemNo +
                          ",AddForm.itemn" + ItemNo +
                          ",AddForm.subit" + ItemNo +
                          ",AddForm.descp" + ItemNo + 
                          ",AddForm.mdate" + ItemNo +
                          ",AddForm.mtime" + ItemNo + 
                          ",AddForm.qunty" + ItemNo +
                          ",AddForm.camnt" + ItemNo +
                          ",AddForm.gstap" + ItemNo +
                          ",AddForm.gstcd" + ItemNo +
                          ",AddForm.iamnt" + ItemNo +
                          ",AddForm.testc" + ItemNo +
                          ",AddForm.s4flg" + ItemNo +
                          ",AddForm.itype" + ItemNo +
                          ");'" +
                          "title='SubItem'></td>" +

                          "<td width=26%>" +
                          "<input type=text size=53 name=descp" + ItemNo +
                          " id=descp" + ItemNo +
                          " maxlength=30 " +
                          "title='Item Description'></td>" +

                          "<td width=5%>" +
                          "<input type=text size=2 name=qunty" + ItemNo +
                          " id=qunty" + ItemNo +
                          " maxlength=2 value=' 1'" +
                          "title='Quantity'" +
                          "onblur='setAmountDur2Dec(AddForm.qunty" + ItemNo + 
                          ",AddForm.iamnt" + ItemNo + 
                          ",AddForm.camnt" + ItemNo + 
                          ",AddForm.durat" + ItemNo +
                          ");" +
                          "'></td>" +

                          "<td width=5%>" +
                          "<input type=text size=2 name=durat" + ItemNo +
                          " id=durat" + ItemNo +
                          " maxlength=3 title='Duration'" +
                          "onblur='setDuration(AddForm.durat" + ItemNo + 
                                             ",AddForm.acovr" + ItemNo +
                          ");'" +
                          "></td>" +
                          "<td width=8% align=center>" +
                          "<input type=checkbox name=acovr" + ItemNo +
                          " id=acovr" + ItemNo +
                          " title='A/C Override' value='1'>" +
                          "</td>" +

                          "<td width=8%>" +
                          "<input type=text size=8 name=camnt" + ItemNo +
                          " id=camnt" + ItemNo +
                          " maxlength=8 width=8% min=0 max=99999.99" +
                       "title='Amount' onchange='SetNextRowDur(AddForm.camnt" + 
                          ItemNo +
                          ",AddForm.iamnt" + ItemNo + 
                          ",AddForm.qunty" + ItemNo +
                          ",AddForm.durat" + ItemNo +")';>" +

                          "<input type=hidden name=itype" + ItemNo + 
                          " id=itype" + ItemNo +
                          ">" +
                          "<img src=../images/ClearIcon.gif class='Icon'" +
                          " onClick=ClrItm(AddForm.mdate" + ItemNo + 
                          ",AddForm.mtime" +
                          ItemNo + ",AddForm.descp" + ItemNo +
                                   ",AddForm.itype" + ItemNo +
                                   ",AddForm.itemn" + ItemNo +
                                   ",AddForm.subit" + ItemNo +
                                   ",AddForm.qunty" + ItemNo +
                                   ",AddForm.gstap" + ItemNo +
                                   ",AddForm.gstcd" + ItemNo +
                                   ",AddForm.durat" + ItemNo +
                                   ",AddForm.mulpr" + ItemNo +
                                   ",AddForm.acovr" + ItemNo +
                                   ",AddForm.dupsr" + ItemNo +
                                   ",AddForm.srvtx" + ItemNo +
                                   ",AddForm.hosin" + ItemNo +
                                   ",AddForm.numpt" + ItemNo +
                                   ",AddForm.lspnv" + ItemNo +
                                   ",AddForm.sldmc" + ItemNo +
                                   ",AddForm.rovrc" + ItemNo +
                     ",AddForm.camnt" + ItemNo + ");>" +
                          "</td></tr></table>";

  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);

   } else {


    RCHTML="<input type=hidden name=testc" + ItemNo + ">" +
                          "<input type=hidden name=s4flg" + ItemNo + ">" +
                          "<input type=hidden name=dummy >" +
                          "<input type=hidden name=iamnt" + ItemNo + ">" +
                          "<input type=hidden name=gstap" + ItemNo + ">" +
                          "<input type=hidden name=gstcd" + ItemNo + ">" +
                          "<input type=hidden name=count" + ItemNo +
                          " value=" + ItemNo + ">" +
                          "<table width=100% border=0 align=center " +
                          "cellpadding=1 cellspacing=0>" +

                          "<tr><td width=11%><input type=text size=11 " +
                          "class='NotFuturEdate Mandatory'" +
                          " maxlength=12 name=mdate" + ItemNo + 
                          " title='Item Date'" +
                          " onblur=valMDate(this,'Item-Date');>" +


                          "<img notab src=../images/DateLookup.gif " +
                          "class='Icon' alt='Show Calendar' " +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "</td>" +

                          "<td width=11%><input type=text size=10 " +
                          "class='Mandatory'" +
                          "maxlength=10 name=mtime" + ItemNo + 
                          " title='Item Time'>" +

                          "<img notab src=../images/DateTimeStamp.gif " +
                          "class='Icon' alt='Current' " +
                   "onClick='SetCurrentDateTime(null,AddForm.mtime" + ItemNo + 
                          ");'" +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "<img notab src=../images/TimeLookup.gif " +
                          "class='Icon' alt='Time Select' " +
                          "time='AddForm.mtime" + ItemNo + "'>" +

                          "<td width=15%>" +
                          "<select name=dtype" + ItemNo +
                          " onchange='SetType(this);'>" +
                          "<option value='M'>MBS</option>" +
                          "<option value='A'>AMA</option>" +
                          "</select>" +

                          "<input type=text size=9 maxlength=9" +
                          " name=itemn" +
                          ItemNo +
//                          " onblur='validatePMBS(AddForm.itemn" + ItemNo +
//                          ",AddForm.descp" + ItemNo + 
//                          ",AddForm.itype" + ItemNo + 
//                          ",AddForm.subit" + ItemNo + 
//                          ");'" +
                          " title='Item'>" +

                          "<input type=text size=3 maxlength=3" +
                          " name=subit" +
                          ItemNo + 
                          " id=subit" + ItemNo +
                          " onblur='validatePMBS(AddForm.itemn" + ItemNo +
                          ",AddForm.descp" + ItemNo + 
                          ",AddForm.dtype" + ItemNo + 
                          ",AddForm.subit" + ItemNo + 
                          ",AddForm.mdate" + ItemNo +
                          ");" +
                          "GetDesc(AddForm.dtype" + ItemNo +
                          ",AddForm.itemn" + ItemNo + 
                          ",AddForm.subit" + ItemNo + 
                          ",AddForm.descp" + ItemNo + 
                          ",AddForm.mdate" + ItemNo + 
                          ",AddForm.mtime" + ItemNo + 
                          ",AddForm.qunty" + ItemNo + 
                          ",AddForm.camnt" + ItemNo + 
                          ",AddForm.gstap" + ItemNo + 
                          ",AddForm.gstcd" + ItemNo + 
                          ",AddForm.iamnt" + ItemNo + 
                          ",AddForm.testc" + ItemNo + 
                          ",AddForm.s4flg" + ItemNo + 
                          ",AddForm.itype" + ItemNo +
                          ");'" +
                          "title='SubItem'></td>" +

                          "<td width=26%>" +
                          "<input type=text size=53 name=descp" + ItemNo +
                          " maxlength=30 " +
                          "title='Item Description'></td>" +

                          "<td width=5%>" +
                          "<input type=text size=2 name=qunty" + ItemNo +
                          " maxlength=2 value=' 1'" +
                          "title='Quantity'" +
                          "onblur='setAmountDur2Dec(AddForm.qunty" + ItemNo + 
                          ",AddForm.iamnt" +
                          ItemNo + ",AddForm.camnt" + ItemNo + 
                          ",AddForm.durat" + ItemNo +
                          ");" +
                          "'></td>" +

                          "<td width=5%>" +
                          "<input type=text size=2 name=durat" + 
                          ItemNo + " maxlength=3 title='Duration'" +
                          "onblur='setDuration(AddForm.durat" + ItemNo + 
                          ",AddForm.acovr" +
                          ItemNo + 
                          ");'" +  
                          "></td>" +
                          "<td width=8% align=center>" +
                          "<input type=checkbox name=acovr" + ItemNo +
                          " title='A/C Override' value='1'>" + 
                          "</td>" +

                          "<td width=8%>" +
                          "<input type=text size=8 name=camnt" + ItemNo +
                          " maxlength=8 width=8% min=0 max=99999.99" +
                       "title='Amount' onchange='SetNextRowDur(AddForm.camnt" + 
                       ItemNo +
                          ",AddForm.iamnt" + ItemNo + 
                          ",AddForm.qunty" + ItemNo + 
                          ",AddForm.durat" + ItemNo +")';>" +

                          "<input type=hidden name=itype" + ItemNo + ">" +
                          "<img src=../images/ClearIcon.gif class='Icon'" +
                          " onClick=ClrItm(AddForm.mdate" + ItemNo + 
                          ",AddForm.mtime" +
                          ItemNo + ",AddForm.descp" + ItemNo +
                                   ",AddForm.itype" + ItemNo +
                                   ",AddForm.itemn" + ItemNo +
                                   ",AddForm.subit" + ItemNo +
                                   ",AddForm.qunty" + ItemNo +
                                   ",AddForm.gstap" + ItemNo +
                                   ",AddForm.gstcd" + ItemNo +
                                   ",AddForm.durat" + ItemNo +
                                   ",AddForm.mulpr" + ItemNo +
                                   ",AddForm.acovr" + ItemNo +
                                   ",AddForm.dupsr" + ItemNo +
                                   ",AddForm.srvtx" + ItemNo +
                                   ",AddForm.altsp" + ItemNo +
                                   ",AddForm.altsc" + ItemNo +
//                                   ",AddForm.ifccc" + ItemNo +
                                   ",AddForm.ifccv" + ItemNo +
                                   ",AddForm.numpt" + ItemNo +
                                   ",AddForm.lspnv" + ItemNo +
                                   ",AddForm.sldmc" + ItemNo +
                     ",AddForm.camnt" + ItemNo + ");>" +
                          "</td></tr></table>";

  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);

   }
  } else {
    RCHTML="<input type=hidden name=testc" + ItemNo + ">" +
                          "<input type=hidden name=s4flg" + ItemNo + ">" +
                          "<input type=hidden name=dummy >" +
                          "<input type=hidden name=iamnt" + ItemNo + ">" +
                          "<input type=hidden name=gstap" + ItemNo + ">" +
                          "<input type=hidden name=gstcd" + ItemNo + ">" +
                          "<input type=hidden name=count" + ItemNo +
                          " value=" + ItemNo + ">" +
                          "<table width=100% border=0 align=center " +
                          "cellpadding=1 cellspacing=0>" +

                          "<tr><td width=11%><input type=text size=11 " +
                          "class='NotFuturEdate Mandatory'" +
                          " maxlength=12 name=mdate" + ItemNo +
                          " title='Item Date'" +
                          " onblur=valMDate(this,'Item-Date');>" +


                          "<img notab src=../images/DateLookup.gif " +
                          "class='Icon' alt='Show Calendar' " +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "</td>" +

                          "<td width=11%><input type=text size=10 " +
                          "class='Mandatory'" +
                          "maxlength=10 name=mtime" + ItemNo +
                          " title='Item Time'>" +

                          "<img notab src=../images/DateTimeStamp.gif " +
                          "class='Icon' alt='Current' " +
                   "onClick='SetCurrentDateTime(null,AddForm.mtime" + ItemNo + 
                          ");'" +
                          "date='AddForm.mdate" + ItemNo + "'>" +
                          "<img notab src=../images/TimeLookup.gif " +
                          "class='Icon' alt='Time Select' " +
                          "time='AddForm.mtime" + ItemNo + "'>" +

                          "<td width=15%>" +
                          "<select name=dtype" + ItemNo +
                          " onchange='SetType(this);'>" +
                          "<option value='M'>MBS</option>" +
                          "<option value='A'>AMA</option>" +
                          "</select>" +

                          "<input type=text size=9 maxlength=9" +
                          " name=itemn" +
                          ItemNo +
//                          " onblur='validatePMBS(AddForm.itemn" + ItemNo +
//                          ",AddForm.descp" + ItemNo +
//                          ",AddForm.itype" + ItemNo +
//                          ",AddForm.subit" + ItemNo +
//                          ");'" +
                          " title='Item'>" +

                          "<input type=text size=3 maxlength=3" +
                          " name=subit" +
                          ItemNo +
                          " id=subit" + ItemNo +
                          " onblur='validatePMBS(AddForm.itemn" + ItemNo +
                          ",AddForm.descp" + ItemNo +
                          ",AddForm.dtype" + ItemNo +
                          ",AddForm.subit" + ItemNo +
                          ",AddForm.mdate" + ItemNo +
                          ");" +
                          "GetDesc(AddForm.dtype" + ItemNo +
                          ",AddForm.itemn" + ItemNo +
                          ",AddForm.subit" + ItemNo +
                          ",AddForm.descp" + ItemNo + 
                          ",AddForm.mdate" + ItemNo +
                          ",AddForm.mtime" + ItemNo + 
                          ",AddForm.qunty" + ItemNo +
                          ",AddForm.camnt" + ItemNo +
                          ",AddForm.gstap" + ItemNo +
                          ",AddForm.gstcd" + ItemNo +
                          ",AddForm.iamnt" + ItemNo +
                          ",AddForm.testc" + ItemNo +
                          ",AddForm.s4flg" + ItemNo +
                          ",AddForm.itype" + ItemNo +
                          ");'" +
                          "title='SubItem'></td>" +

                          "<td width=26%>" +
                          "<input type=text size=53 name=descp" + ItemNo +
                          " maxlength=30 " +
                          "title='Item Description'></td>" +

                          "<td width=5%>" +
                          "<input type=text size=2 name=qunty" + ItemNo +
                          " maxlength=2 value=' 1'" +
                          "title='Quantity'" +
                          "onblur='setAmount(AddForm.qunty" + ItemNo + 
                          ",AddForm.iamnt" +
                          ItemNo + ",AddForm.camnt" + ItemNo +
                          ");'" +
                          "></td>" +

                          "<td width=8%>" +
                          "<input type=text size=8 name=camnt" + ItemNo +
                          " maxlength=8 width=8% min=0 max=99999.99" +
                          "title='Amount' onchange='SetNextRow(AddForm.camnt" + 
                          ItemNo +
                          ",AddForm.iamnt" + ItemNo + ",AddForm.qunty" + 
                          ItemNo + ")';>" +

                          "<input type=hidden name=itype" + ItemNo + ">" +
                          "<img src=../images/ClearIcon.gif class='Icon'" +
                          " onClick=ClrItm(AddForm.mdate" + ItemNo + 
                          ",AddForm.mtime" +
                          ItemNo + ",AddForm.descp" + ItemNo +
                                   ",AddForm.itype" + ItemNo +
                                   ",AddForm.itemn" + ItemNo +
                                   ",AddForm.subit" + ItemNo +
                                   ",AddForm.qunty" + ItemNo +
                                   ",AddForm.gstap" + ItemNo +
                                   ",AddForm.gstcd" + ItemNo +
                                   ",AddForm.camnt" + ItemNo + ");>" +
                          "</td></tr></table>";

  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);
    
  }


  if ((document.getElementById('ptcnuimc') != null &&
      document.getElementById("ptcnuimc").value == "1" &&
      document.getElementById('typeeimc') != null &&
      document.getElementById('typeeimc').value == "1") ||
      (document.getElementById('ptcnuesf') != null &&
      document.getElementById("ptcnuesf").value == "1" &&
      document.getElementById('typestfc') != null &&
      document.getElementById("typestfc").value == "1") ||
      (document.getElementById('ptcnuebb') != null &&
      document.getElementById('ptcnuebb').value == "1" &&
      document.getElementById('typebbil') != null &&
      document.getElementById('typebbil').value == "1")) {

   if ((document.getElementById('ptcnuesf') != null &&
       document.getElementById("ptcnuesf").value == "1" &&
       document.getElementById('typestfc') != null &&
       document.getElementById("typestfc").value == "1") ||
       (document.getElementById('ptcnuebb') != null &&
       document.getElementById('ptcnuebb').value == "1" &&
       document.getElementById('typebbil') != null &&
       document.getElementById('typebbil').value == "1")) {

    RCHTML=
         "<table width=100% border=0 align=center cellpadding=0 cellspacing=0>"+
            "<tr bgcolor=#CCFFFF>" +
            "<td><b>Multi Proc</b></td>" +
            "<td><b>Duplicate Override</b></td>" +
            "<td><b>Service Text</b></td>" +
            "<td><b>Hosp Ind &nbsp;&nbsp;&nbsp;</b>" +
            "<td><b>Number of Patients</b></td>" +
            "<td><b>Restrictive Override</b></td>" +
            "<td><b>SD</b></td>" +
            "<td><b>LSPN</b>" +
            "</td></tr>" +

            "<tr>" +
            "<td align=center>" +
              "<input type=checkbox name=mulpr" + ItemNo +
              " id=mulpr" + ItemNo +
              " title='Multi Proc' value='1'>" +
            "</td>" +
            "<td align=center>" +
              "<input type=checkbox name=dupsr" + ItemNo +
              " id=dupsr" + ItemNo +
              " title='Duplicate Service' value='1'>" +
            "</td>" +
            "<td>" +
              "<input type=text size=50 name=srvtx" + ItemNo +
              " maxlength=100 onblur='validateServiceText(this);'" +
              " id=srvtx" + ItemNo +
              " title='Service Text'>" +
            "</td>" +

            "<td>" +
              "<input type=checkbox name=hosin" + ItemNo +
              " id=hosin" + ItemNo +
              " title='Hospital Indicator' value='1'" +
              " onclick=ServTxtMan(AddForm.hosin" + ItemNo + 
              ",AddForm.srvtx" +
                         ItemNo + ");>" +
              " &nbsp;&nbsp;&nbsp; " +
            "</td>" +
            "<td>" +
              "<input type=text size=5 name=numpt" + ItemNo +
              " maxlength=2 " +
              " id=numpt" + ItemNo +
              " onblur='checkNumber(this);justifyRight(this);'" +
              " title='Number of Patients'>" +
            "</td>" +
            "<td>" +
              "<select name=rovrc" + ItemNo +
              " id=rovrc" + ItemNo +
              " > " +
              "<option></option>" +
              "</select>" +
            "</td>" +
            "<td>" +
              "<select name=sldmc" + ItemNo +
              " id=sldmc" + ItemNo +
              " > " +
              "<option></option>" +
              "</select>" +
            "</td>" +

            "<td>" +
              "<input type=text size=5 name=lspnv" + ItemNo +
              " maxlength=6 onblur='validateSixZeroes(this);' " +
              " id=lspnv" + ItemNo +
              " title='Location Specific Practice No. Value'>" +
            "</td>" +

            "<tr><td colspan=8><hr></td></tr>" +
    "</table>";

  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);

        document.getElementById('rovrc'+ItemNo).outerHTML =
        document.getElementById('rovrc'+ItemNo).outerHTML.
        replace(document.getElementById('rovrc'+ItemNo).innerHTML,
                document.getElementById('rovrcSPAN').innerHTML);

        document.getElementById('sldmc'+ItemNo).outerHTML =
        document.getElementById('sldmc'+ItemNo).outerHTML.
        replace(document.getElementById('sldmc'+ItemNo).innerHTML,
                document.getElementById('sldmcSPAN').innerHTML);

   } else {

    RCHTML=
         "<table width=100% border=0 align=center cellpadding=0 cellspacing=0>"+
            "<tr bgcolor=#CCFFFF>" +
            "<td><b>Multi Proc</b></td>" +
            "<td><b>Duplicate Override</b></td>" +
            "<td><b>Service Text</b></td>" +
            "<td><b>CCI &nbsp;&nbsp;&nbsp;</b>" +
            "<b>Alternate Service Provider</b></td>" +
            "<td><b>Alternate IFC Code</b></td>" +
            "<td><b>Number of Patients</b></td>" +
            "<td><b>SD</b></td>" +
            "<td><b>LSPN</b>" +
            "</td></tr>" +

            "<tr>" +
            "<td align=center>" + 
              "<input type=checkbox name=mulpr" + ItemNo +
              " id=mulpr" + ItemNo +
              " title='Multi Proc' value='1'>" +
            "</td>" +
            "<td align=center>" + 
              "<input type=checkbox name=dupsr" + ItemNo +
              " id=dupsr" + ItemNo +
              " title='Duplicate Service' value='1'>" +
            "</td>" +
            "<td>" + 
              "<input type=text size=50 name=srvtx" + ItemNo +
              " maxlength=100 onblur='validateServiceText(this);'" +
              " id=srvtx" + ItemNo +
              " title='Service Text'>" +
            "</td>" +
            "<td>" + 
              "<input type=checkbox name=altsp" + ItemNo +
              " id=altsp" + ItemNo +
//" onclick='validateASP(AddForm.altsp"+ItemNo+",AddForm.altsc"+ItemNo+");'  " +
              " title='CCI' value='1'>" +
              " &nbsp;&nbsp;&nbsp; " +             
 
              " <input type=text size=12 maxlength=10 " + 
              " name=altsc" + ItemNo +
              " id=altsc" + ItemNo +
              " title='Alternate HCP' " + 
//              " onblur='ValidateHCP(18,0,this,AddForm.dummy);'> " +
              " onblur='UpCase(this);validateSDoc(AddForm.prhre001,this,AddForm.dummy);'> " +
//              " &nbsp;&nbsp;&nbsp; " +

              " <img src='../images/SearchIcon.gif' class='Icon'" + 
//              " onClick='HCPSearchFrame(AddForm.altsc"+ItemNo+",AddForm.dummy,7);' " +
              " onClick='MPDoctorSearch(AddForm.prhre001,AddForm.altsc"+ItemNo+
              ",AddForm.dummy);'> " +
            "</td>" +
            "<td>" + 
         "<table width=100% border=0 align=center cellpadding=0 cellspacing=0>"+
            "<tr><td>" + 
//              "<input type=checkbox name=ifccc" + ItemNo +
//              " id=ifccc" + ItemNo +
//" onclick='validateAIC(AddForm.ifccc"+ItemNo+",AddForm.ifccv"+ItemNo+");'  " +
//              " title='Alternate IFC' value='1'>" +
//              " &nbsp;&nbsp;&nbsp; " +
            "</td><td>" + 

              "<select name=ifccv" + ItemNo +
              " id=ifccv" + ItemNo + 
              " title='Alternate IFC Code'> " + 
              "<option></option>" + 
              "</select>" + 
            "</td></tr>" +    
         "</table>" +      
            "</td>" +
            "<td>" + 
              "<input type=text size=5 name=numpt" + ItemNo +
              " maxlength=2 " +
              " id=numpt" + ItemNo +
              " onblur='checkNumber(this);justifyRight(this);'" + 
              " title='Number of Patients'>" +
            "</td>" +
            "<td>" + 
              "<select name=sldmc" + ItemNo +
              " id=sldmc" + ItemNo +
              " > " +
              "<option></option>" + 
              "</select>" + 
            "</td>" +
            "<td>" + 
              "<input type=text size=5 name=lspnv" + ItemNo +
              " maxlength=6 onblur='validateSixZeroes(this);' " +
              " id=lspnv" + ItemNo +
              " title='Location Specific Practice No. Value'>" +
            "</td>" +

            "<tr><td colspan=8><hr></td></tr>" + 


    "</table>";

  var node = document.createElement("RCElement");
  node.innerHTML=RCHTML;
  document.getElementById("RecordCoding").appendChild(node);

        document.getElementById('ifccv'+ItemNo).outerHTML = 
        document.getElementById('ifccv'+ItemNo).outerHTML.
        replace(document.getElementById('ifccv'+ItemNo).innerHTML,
                document.getElementById('ifccvSPAN').innerHTML);

        document.getElementById('sldmc'+ItemNo).outerHTML =
        document.getElementById('sldmc'+ItemNo).outerHTML.
        replace(document.getElementById('sldmc'+ItemNo).innerHTML,
                document.getElementById('sldmcSPAN').innerHTML);
    }
  } 

//  alert(RecordCoding.innerHTML);

  var pform=document.AddForm;
  for (var i=itemcont; i < pform.length; i++) {
     if (pform.elements[i].name.match(/dtype/)) {

       if (pform.elements[i-2].value=="") {
          pform.elements[i-2].value=pform.currdate.value;
          pform.elements[i-1].value=pform.currtime.value;
            if (ItemNo!=101) {  // Subsquent records set to above row 
              if ((document.getElementById("ptcnuimc")!= null &&
              document.getElementById("ptcnuimc").value == "1" &&
              document.getElementById('typeeimc') != null &&
              document.getElementById('typeeimc').value == "1") ||
              (document.getElementById("ptcnuesf")!= null &&
              document.getElementById("ptcnuesf").value == "1" &&
              document.getElementById('typestfc') != null &&
              document.getElementById("typestfc").value == "1") ||
              (document.getElementById('ptcnuebb')!= null &&
              document.getElementById('ptcnuebb').value == "1" &&
              document.getElementById('typebbil') != null &&
              document.getElementById("typebbil").value == "1")) {
               if ((document.getElementById("ptcnuesf")!= null &&
               document.getElementById("ptcnuesf").value == "1" &&
               document.getElementById('typestfc') != null &&
               document.getElementById("typestfc").value == "1") ||
               (document.getElementById('ptcnuebb')!= null &&
               document.getElementById('ptcnuebb').value == "1" &&
               document.getElementById('typebbil') != null &&
               document.getElementById("typebbil").value == "1")) {
                pform.elements[i-2].value=pform.elements[i-28].value;
                setfo=pform.elements[i-23];
               } else {
                pform.elements[i-2].value=pform.elements[i-29].value;
                setfo=pform.elements[i-24];
               }
              } else {
                pform.elements[i-2].value=pform.elements[i-18].value;
                setfo=pform.elements[i-13];
              }
            } else {
              setfo=pform.elements[i+1];
            }
          setTimeout('setfo.focus();',150);
          itemcont=i;                      // Start of Coding Section counter
          break;
        }
     }
   }
   if ((document.getElementById("ptcnuimc")!= null &&
        document.getElementById("ptcnuimc").value == "1" &&
        document.getElementById('typeeimc') != null &&
        document.getElementById('typeeimc').value == "1") ||
        (document.getElementById("ptcnuesf")!= null &&
        document.getElementById("ptcnuesf").value == "1" &&
        document.getElementById('typestfc') != null &&
        document.getElementById("typestfc").value == "1") ||
        (document.getElementById('ptcnuebb')!= null &&
        document.getElementById('ptcnuebb').value == "1" &&
        document.getElementById('typebbil') != null &&
        document.getElementById('typebbil').value == "1")) {
     defaultSubItem(ItemNo);

     if ((document.getElementById("ptcnuesf")!= null &&
        document.getElementById("ptcnuesf").value == "1" &&
        document.getElementById('typestfc') != null &&
        document.getElementById("typestfc").value == "1") ||
        (document.getElementById('ptcnuebb')!= null &&
        document.getElementById('ptcnuebb').value == "1" &&
        document.getElementById('typebbil') != null &&
        document.getElementById('typebbil').value == "1")) {
        return;
     }
     if (document.getElementById("prhdclam")!= null &&
         document.getElementById("prhdclam").value != "1") {
       document.getElementById('altsp'+ItemNo).disabled=true;  
     } else {
       document.getElementById('altsp'+ItemNo).checked=true;
     }

   }
}
function ServTxtMan(hospind,servtext) {
 if(hospind.checked==true) {
   servtext.className="Mandatory";
 } else {
   servtext.className="";
 }
}

function ClrItm() {
  if (document.AddForm.counter.value==0) { ItemNo=100; } 
  if (arguments[1].value!="") {  
    document.AddForm.counter.value--;
  }
  for(var i = 0; i < arguments.length; i++) {
    arguments[i].value=""; 
    arguments[i].className=""; 
    if (arguments[i].type=="checkbox") {
      arguments[i].checked=false;
    }
  }
  arguments[0].focus(); // Set focus back to Item Code input field
}

//=============================================================================
//        Function Calling Remote Scripting To Get MBS Description 
//=============================================================================
function GetDesc(ReturnType,ReturnCode,ReturnSubn,ReturnDesc,DateField,TimeField,Quant,Amount,GstA,GstC,Iamnt,Testc,S4flg,ItemType){
  code=ReturnType.name;

//   alert(ReturnType.value);
//   alert(ReturnCode.value);

 var blankflag=false;
  if ((isWhitespace(ReturnCode.value))&&(isWhitespace(ReturnDesc.value))) {
     return; }

    for (var i=0; i < document.AddForm.length; i++) {
      if (document.AddForm.elements[i].name.match(/itemn/)) {

        if (isWhitespace(document.AddForm.elements[i].value)) {
          setpos=i; // If editing already entered codes need to set position.
          blankflag=true;   // Found a blank row set true
          break; }}}

//    if (isWhitespace(ReturnDesc)) {
//     setpos=ItemNo; // If editing already entered codes need to set position.
//   }

  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  ReturnDesc.value="";
  if (isWhitespace(ReturnCode.value)) { return; }
    
  serverURL = "../cgi-bin/priweb02.pbl?reportno=7" +
        "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&valdsubn=" + ReturnSubn.value.replace(/ /g,"+") +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&returntm=" + TimeField.value.replace(/ /g,"+") +
        "&prhre003=" + document.AddForm.prhre003.value.replace(/ /g,"+") +
        "&claimcod=" + document.AddForm.claimcod.value.replace(/ /g,"+") +
        "&urnumber=" + document.AddForm.urnumber.value.replace(/ /g,"+") 

  var returnValue = RSExecute(serverURL);    //Remote Script To Get MBS Description

  if (returnValue.status==0) {
   ReturnValue=returnValue.return_value.split("|");
   ReturnDesc.value=ReturnValue[0];
//   ReturnDesc.value=ReturnDesc.value.toUpperCase()
   Amount.value=ReturnValue[1];
   Iamnt.value=ReturnValue[1];      // amount for single item
   justifyLeft(Amount);
   justifyLeft(Iamnt);

   GstA.value=ReturnValue[2];
   GstC.value=ReturnValue[3];

   ReturnCode.value=ReturnValue[5];
   ReturnCode.className="Mandatory";

//   if (document.getElementById('durat'+ItemNo) != null) {
//     setDurMan(document.getElementById('durat'+ItemNo));
//   }

   ItemType.value=ReturnValue[6];

   if (ReturnValue[7]==1) {
     ReturnDesc.className="Mandatory";  }
   else {
     ReturnDesc.className="ReadOnly"; 
     ReturnDesc.readOnly=true; 
     }

   if (ReturnValue[8]==1) {
     Amount.className="Number Mandatory";
     Amount.readOnly=false;
     }
   else {
     Amount.className="readonly";
     Amount.readOnly=true; 
     }
   Testc.value=ReturnValue[4];


   if ((ReturnValue[2]==2)&&(ReturnValue[4]==1)) {
        window.GstA=GstA;
        window.GstC=GstC;
        window.S4flg=S4flg;
        window.Quant=Quant;
        linkURL="priweb02.pbl?reportno=06&template=004" +
                "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+")

        Left=(document.body.clientWidth-350)/2
        DFrameLink(linkURL,120,Left,350,120) }
  
   else  {
      if (ReturnValue[2]==2) {
        window.GstA=GstA;
        window.GstC=GstC;
        window.Quant=Quant;
        linkURL="patweb75.pbl?reportno=01&template=002" +
                "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+")

        Left=(document.body.clientWidth-350)/2
        DFrameLink(linkURL,120,Left,350,120) }
     
    else {
      if (ReturnValue[4]==1) {
         window.S4flg=S4flg;
         window.Quant=Quant;
         linkURL="priweb02.pbl?reportno=01&template=018" +
                 "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+")

         Left=(document.body.clientWidth-350)/2
         DFrameLink(linkURL,120,Left,350,120)  }
      }
    }

   if (blankflag) {
      FindBlank();
      document.AddForm.counter.value++;
   } else {
      document.AddForm.counter.value++;
      AddMBS();
   }
  }
 else {
   ReturnCode.value="";
   ReturnCode.select(); }

}

function FindBlank() {
  pform=document.AddForm;

  for (var i=0; i < document.AddForm.length; i++) {
    if (pform.elements[i].name==code) {
         pform.elements[i-8].value=pform.currdate.value;
         pform.elements[i-7].value=pform.currtime.value;
       // Subsquent records set to above row 


       if ((ItemNo!=101) && (code!="itemn101")) {  

//            pform.elements[i-8].value=pform.elements[i-17].value;
//            pform.elements[i-7].value=pform.elements[i-16].value;
       }

       setfo=pform.elements[i+3];
       setTimeout('setfo.focus();',150);
       break;
    }
  }
}
//=============================================================================
//                  Function For Calling MBS/AMA Search Frame
//=============================================================================

function ItemNext() {
  for (var i=0; i < document.AddForm.length; i++) {
     if (document.AddForm.elements[i].name.match(/itemn/)) {
       if (isWhitespace(document.AddForm.elements[i].value)) {
        Code=document.AddForm.elements[i];
        if ((document.getElementById("ptcnuimc")!= null &&
         document.getElementById("ptcnuimc").value == "1" &&
         document.getElementById('typeeimc') != null &&
         document.getElementById('typeeimc').value == "1") ||
        (document.getElementById("ptcnuesf")!= null &&
        document.getElementById("ptcnuesf").value == "1" &&
        document.getElementById('typestfc') != null &&
        document.getElementById("typestfc").value == "1")  ||
        (document.getElementById('ptcnuebb')!= null &&
        document.getElementById('ptcnuebb').value == "1" &&
        document.getElementById('typebbil') != null &&
        document.getElementById('typebbil').value == "1")) {
         if ((document.getElementById("ptcnuesf")!= null &&
         document.getElementById("ptcnuesf").value == "1" &&
         document.getElementById('typestfc') != null &&
         document.getElementById("typestfc").value == "1") ||
         (document.getElementById('ptcnuebb')!= null &&
         document.getElementById('ptcnuebb').value == "1" &&
         document.getElementById('typebbil') != null &&
         document.getElementById('typebbil').value == "1")) {
          Itype=document.AddForm.elements[i+5];
         } else {
          Itype=document.AddForm.elements[i+7];
         }
        } else {
          Itype=document.AddForm.elements[i+5];
        }
        Subit=document.AddForm.elements[i+1];
        if (document.getElementById("ptcnuimc")!= null &&
            document.getElementById("ptcnuimc").value == "1" &&
            document.getElementById('typeeimc') != null &&
            document.getElementById('typeeimc').value == "1") {
          Subvalit = document.AddForm.elements[i+1];
        }
        Descp=document.AddForm.elements[i+2];
//        dumdate=document.AddForm.elements[i-3];
        quant=document.AddForm.elements[i+3];
        dummy="";
        break; }
       }
    }
  CurrentItemNo = Itype.name.substring(5,8);
//    alert(Itype.value);
  window.ReturnSpecMbs="";    // Var to set onblur on UpdateParent()
  InpType=Itype;
  if (document.getElementById("ptcnuimc")!= null &&
      document.getElementById("ptcnuimc").value == "1" &&
      document.getElementById('typeeimc') != null &&
      document.getElementById('typeeimc').value == "1") {
    PriMbsSearchFrameSubItem(Itype,Code,Subit,dummy,Descp,
                             Subvalit,InpType,ValMBS);
  } else {
    PriMbsSearchFrame(Itype,Code,Subit,dummy,Descp,InpType,ValMBS); 
  }
}
function SetType(dtype) {
  var namecod1=dtype.name.substring(5,8);
  var namecod2="itype" + namecod1;
  if (dtype.value=="M")  {
    document.AddForm[namecod2].value="M"; }
  else {
    document.AddForm[namecod2].value="A"; }
}


function ValMBS() {
  setTimeout('ValItm();',400);
}


function ValItm() {
  var namecod1="itype" + CurrentItemNo;
  var namecod2="itemn" + CurrentItemNo;
  var namecod3="subit" + CurrentItemNo;
  var namecod4="descp" + CurrentItemNo;
  var namecod5="mdate" + CurrentItemNo;
  var namecod6="mtime" + CurrentItemNo;
  var namecod7="qunty" + CurrentItemNo;
  var namecod8="camnt" + CurrentItemNo;
  var namecod9="gstap" + CurrentItemNo;
  var nameco10="gstcd" + CurrentItemNo;
  var nameco11="iamnt" + CurrentItemNo;
  var nameco12="dtype" + CurrentItemNo;
  var nameco13="testc" + CurrentItemNo;
  var nameco14="s4flg" + CurrentItemNo;
  p=document.AddForm;

  if (p[namecod1].value==" 0") {
      p[nameco12].selectedIndex=0; 
      p[namecod1].value="M";
      }
    else {
      p[nameco12].selectedIndex=1; 
      p[namecod1].value="A";
      }
     
  ans=GetDesc(p[nameco12],p[namecod2],p[namecod3],p[namecod9],p[namecod5],p[namecod6],p[namecod7],p[namecod8],p[namecod9],p[nameco10],p[nameco11],p[nameco13],p[nameco14],p[namecod1]);
  if (!ans) {
    return;
  }
}

function validatePMBS(ReturnCode,ReturnName,ReturnType,ReturnScod,ReturnIdat) {

  ReturnFunction="" ;
  ReturnName.value="";
  for (var i=5; i < validatePMBS.arguments.length; i++) {
    if (typeof(validatePMBS.arguments[i]) == 'function') {
      ReturnFunction=validatePMBS.arguments[i] }
    else {
      validatePMBS.arguments[i].value=""; }  }
  if (isWhitespace(ReturnCode.value)) return;;
//if (isWhitespace(ReturnType.value)) return;;       ------>  CAR 206689
  var serverURL   = "../cgi-bin/allweb01.pbl?reportno=9" +
                    "&valdtype=" + ReturnType.value.replace(/ /g,"+") +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                    "&valdscod=" + ReturnScod.value.replace(/ /g,"+") +
                    "&valdefdt=" + ReturnIdat.value.replace(/ /g,"+")
//alert(serverURL);

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")

//     ReturnName.value=trim(ReturnValue[0])

    j=0
    for (var i=5; i < validatePMBS.arguments.length; i++) {
       if (typeof(validatePMBS.arguments[i]) != 'function') {
         j++
         validatePMBS.arguments[i].value=ReturnValue[j] } }
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction() } }
  else {
    ReturnCode.value="";
    ReturnCode.select();
    return false;
     }
}
function setAmount(quantity,iamnt,amount) {
   amount.value=(quantity.value*iamnt.value);
   RoundNumber(amount,2);
   justifyLeft(amount)
   amount.select();
}

function setAmountDur(quantity,iamnt,amount,duration) {
   amount.value=(quantity.value*iamnt.value);
   RoundNumber(amount,0);
   justifyLeft(amount)
   duration.select(); 
}

function setAmountDur2Dec(quantity,iamnt,amount,duration) {
   amount.value=(quantity.value*iamnt.value);
   RoundNumber(amount,2);
   justifyLeft(amount)
   duration.select();
}

function setDuration(duration,acoverride) {

   if (isWhitespace(duration.value)) {return;} 

   duration.value=(duration.value*1);
   justifyLeft(duration)

   if (duration.value < 1) {
     alert('Duration must be more than 0.');
     duration.value='';
     duration.select();
     return;
   }  

   if (duration.value%15 != 0 ) {
     alert('Duration must be divisible by 15 minutes.');
     duration.value='';
     duration.select();
     return;
   }

//   acoverride.select();
}

function setDurMan(duration) {
  duration.className='Mandatory'; 
  duration.value=15;
}

function unsetDurMan(duration) {
  duration.className='';
}

function valMDate(d)                                                        
{                                                                           
    var rc = checkDate(d,'Item-Date');                                      
    if (!rc) return  false;                                                 
                                                                            
    if (typeof document.AddForm.refdocm != "undefined"                      
       && document.AddForm.refdocm.value ==  "1")                           
    {                                                                       
       var mdate = SetDateYYYYMMDD(d.value);                                
       var rdate = document.AddForm.prhtr006.value;                         
       if (mdate  < rdate)                                                  
       {                                                                    
         rdatex = rdate.substr(6,2) + ' ' + GetMonthName(rdate.substr(4,2)) 
                  + ' ' + rdate.substr(0,4);                                
         alert(d.value + ' is before referral date ' + rdatex);             
         d.focus();                                                         
         return false;                                                      
       }                                                                    
    }                                                                       
    return true;                                                            
} 
function defaultSubItem(ItemNo) {
  if(document.getElementById('defsubit') != null &&
     !isWhitespace(document.getElementById('defsubit').value)) {
    if (document.getElementById('defsubit').value.length > 3) {
      document.getElementById('subit'+ItemNo).value =
      document.getElementById('defsubit').value.substr(0,3); 
    } else {
      document.getElementById('subit'+ItemNo).value =
      document.getElementById('defsubit').value;
    }
  }
}
function validateASP(aspcheckbox,asphcp) {
  if (aspcheckbox.checked) {
    asphcp.className="Mandatory";
  } else {
    asphcp.className="";
  }
}
function validateAIC(aiccheckbox,aicselect) {
  if (aiccheckbox.checked) {
    aicselect.className="Mandatory";
  } else {
    aicselect.className="";
  }
}
function validateSixZeroes(lspnfield) {
  if (lspnfield.value=="000000") {
    alert("LSPN value cannot be 000000");
    lspnfield.value="";
  }
}
function validateServiceText(servicetext) {
  if (!TextBlurHandler(servicetext)) {
    CancelEvent(servicetext);
  }
}
//--------------------------------------------------------------------------
// Function : Private Practice AMA/MBS Code Search Frame Sub Item Validation
//--------------------------------------------------------------------------
function PriMbsSearchFrameSubItem(ReturnType,ReturnCode,ReturnSitm,
                                  ReturnDate,ReturnName,ValSubit)
{

  window.ReturnFunction="";
  for (var i=5; i < PriMbsSearchFrameSubItem.arguments.length; i++)
  {
    if (typeof(PriMbsSearchFrameSubItem.arguments[i]) == 'function')
      ReturnFunction=PriMbsSearchFrameSubItem.arguments[i];
    else
    {
      var ItemType = new Object();
      ItemType=PriMbsSearchFrameSubItem.arguments[i];
    }
  }

  var PopUpFrameDoc = DFrameStart();

  window.ReturnType=ReturnType;
  window.ReturnCode=ReturnCode;
  window.ReturnSitm=ReturnSitm;
  window.ReturnDate=ReturnDate;
  window.ReturnName=ReturnName;
  window.ItemType=ItemType;
  window.ValSubit=ValSubit;

  PopUpFrameDoc.location.href = "../lookups/PriMbsSearchFrameSubItem.html";
  SearchFrameShow();
}
