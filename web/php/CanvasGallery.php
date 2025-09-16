<?php
	/*

   Program : CanvasGallery.php
   Purpose : Return Javascript Array of images from a directory to 
             show in a image gallery. Note directory passed as base64 encoded
             to hide the actual name of the directory to the user.
             Enhancement? Condsider MD5 passphrase to secure.
   Author  : B.G.Ackland 24.02.2014

	*/
 error_reporting(0);
	header("Content-Type: text/javascript");
 $dir   = (isset($_REQUEST["d"])) ? $_REQUEST["d"] : null;
 if ($dir == null) {
   echo "Image Library Not Available";
   exit;
 }
	$directory_handle = opendir($dir);
	$item = 1;
	if ($directory_handle != FALSE) {
	 	while($var = readdir($directory_handle)) {
     $image_type="";
	    $type = strtolower(substr($var, strrpos($var, ".")));
   		if (($type == ".jpg") or ($type == ".jpeg")) $image_type = "jpeg";
	    if ($type == ".png") $image_type = "png";
	    if ($type == ".gif") $image_type = "gif";
	 		 if ($image_type!="") {
	 	    echo "imgName[" . ($item) . "] = '" . $var . "';\n";
	 	    echo "imgFile[" . ($item) . "] = '" . urlencode(base64_encode($var)) . "';\n";
	 	    echo "imgPath[" . ($item) . "] = '" . urlencode(base64_encode($dir)) . "';\n";
      	$item++;
	 			}
	 	}
	}
?>
