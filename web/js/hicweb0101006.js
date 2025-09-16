//jsVersion  : V11.03.00
//========================================================================
function PrintDB4() {
    left=(document.body.clientWidth-450)/2
    linkurl="hicweb01.pbl?reportno=01&template=021" +
          "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
    DFrameLink(linkurl,200,left,450,150)
}

function PrintIntRef() {
    left=(document.body.clientWidth-450)/2
    linkurl="hicweb01.pbl?reportno=01&template=020" +
          "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
          "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");
    DFrameLink(linkurl,200,left,450,150)
}

function ClaimStatus() {
    left=(document.body.clientWidth-450)/2
    linkurl="hicweb01.pbl?reportno=01&template=011" +
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") ;
    DFrameLink(linkurl,100,left,450,250)
}

function TranInv(ItemKey) {
   ans=confirm("Are you sure you want to Transfer this Item to Invoice ?")

    document.UpdateForm.redirect.value="hicweb01.pbl?reportno=01&template=006" +
            "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") ;
    document.UpdateForm.redirec2.value= 
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") ;

   if (ans) {
     UpdateForm.nextpage.value= "1";
     UpdateForm.itemkeys.value = ItemKey;
     UpdateForm.updatety.value="T";
     UpdateForm.submit();
    }
}

function ReSubmit(ItemKey) {
   ans=confirm("Are you sure you want to Resubmit this Claim ?")
    document.UpdateForm.redirect.value="hicweb01.pbl?reportno=01&template=006" +
            "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") ;
    document.UpdateForm.redirec2.value= 
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") ;

   if (ans) {
     UpdateForm.nextpage.value= "1";
     UpdateForm.itemkeys.value = ItemKey;
     UpdateForm.updatety.value="S";
     UpdateForm.submit();
    }
}

function ReSubAll() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    var Item = document.UpdateForm.elements[i];
    var MatchStr = "resub";
    if (Item.name.match(MatchStr)) {
      Item.checked=true;
    }
  }
}

function Receive(ItemKey) {
    left=(document.body.clientWidth-600)/2
    linkurl="hicweb01.pbl?reportno=01&template=014" +
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
            "&itemkeys=" + ItemKey;
    DFrameLink(linkurl,120,left,650,250)
}

function Reject(ItemKey) {
    left=(document.body.clientWidth-600)/2
    linkurl="hicweb01.pbl?reportno=01&template=007" +
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
            "&itemkeys=" + ItemKey;
    DFrameLink(linkurl,120,left,650,150)
}

function WriteOff(ItemKey) {
    left=(document.body.clientWidth-450)/2
    linkurl="hicweb01.pbl?reportno=01&template=008" +
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
            "&itemkeys=" + ItemKey;
    DFrameLink(linkurl,100,left,450,250)
}

function Adjustment(ItemKey) {
    left=(document.body.clientWidth-450)/2
    linkurl="hicweb01.pbl?reportno=01&template=012" +
            "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") +
            "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
            "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
            "&itemkeys=" + ItemKey;
    DFrameLink(linkurl,100,left,450,250)
}

function CloseClaimFrame() {
  linkurl="hicweb01.pbl?reportno=1&template=4" +
          "&batchkey=" + UpdateForm.batchkey.value.replace(/ /g,"+") +
          "&clmnnumb=" + UpdateForm.clmnnumb.value.replace(/ /g,"+") +
          "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
          "&nextpage=4";
  parent.location.href=linkurl;
}
