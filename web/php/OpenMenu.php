<?php
/*
.----------------------------------------------------------------------
. Program       : OpenMenu.php
. Function      : Call from Third Party to webPAS in Patient Context
. Modifications :
.----------------------------------------------------------------------
*/
/* error_reporting(E_ALL); */
if ($_SERVER['REQUEST_METHOD'] !== 'POST') {
  echo "Invalid Request Method";
  exit();
}
$urnumber         = (isset($_REQUEST["urnumber"])) ? 
                           $_REQUEST["urnumber"] : "";
$admissno         = (isset($_REQUEST["admissno"])) ? 
                           $_REQUEST["admissno"] : "";
$menuname         = (isset($_REQUEST["menuname"])) ? 
                           $_REQUEST["menuname"] : "";
$viewname         = (isset($_REQUEST["viewname"])) ? 
                           $_REQUEST["viewname"] : "";
$servicep         = substr($viewname,0,8);
$reportno         = substr($viewname,8,2);
$template         = substr($viewname,10,3);
$MenuPage="../html/".$menuname.".html";
$LoginPage="../cgi-bin/websec01.pbl?reportno=1&template=1";
$ContentPage="../cgi-bin/".$servicep.".pbl?reportno=".$reportno."&template=".$template."&urnumber=".$urnumber."&admissno=".$admissno;
?>
<head>
<link rel="stylesheet" href="../html/standard.css" type="text/css">
<link rel="stylesheet" href="../html/custom.css" type="text/css">
<script language=javascript src="../js/Standard.js"> </script>
<script language=javascript src="../js/Custom.js"> </script>
<script type=text/javascript>
function getContent() {
  var menupage="<?php echo $MenuPage;?>";
  var menu=document.getElementById('menu');
  var content= document.getElementById('content')
  content.src="<?php echo $ContentPage?>";  /* Load Content */
  if  (menu.src!=menupage) {
    menu.src=menupage;
    menu.onload=function() {document.getElementById('menu').style.display='';};
    content.style.display=""; /* Display Content */
  }
}
</script>
</head>
<body>
<iframe style='display:none;' name="menu" id="menu" seamless 
 class=MenuiFrame src="<?php echo $LoginPage?>" onload="getContent()"></iframe>
<iframe style='display:none;' name="content" id="content" seamless 
 class=ContentiFrame ></iframe>
</body>
