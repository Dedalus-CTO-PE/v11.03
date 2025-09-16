//jsVersion  : V11.03.00
function showAddress(patient,address1,address2,address3,postcode,ph_private,ph_business) { 
  myWin= open("", "displayWindow", 
    "width=300,height=150,status=no,toolbar=no,menubar=no");
    myWin.document.write("<html><head><title>Address Details</title>");
    myWin.document.write("<style type=text/css>");
    myWin.document.write("TD {");
    myWin.document.write("font-size: 10pt;}");
    myWin.document.write("BODY {");
    myWin.document.write("margin-top: 0pt;");
    myWin.document.write("margin-left: 0pt;");
    myWin.document.write("margin-right: 0pt;");
    myWin.document.write("margin-bottom: 0pt;}");
    myWin.document.write("</style>");
    myWin.document.write("</head><body>");
    myWin.document.write("<table width=100% border=1 cellspacing=0 cellpadding=0><tr>");
    myWin.document.write("<td align=center colspan=2 bgcolor=#FFFF00>");
    myWin.document.write("<b>"+patient+"</td>");
    myWin.document.write("</tr><tr valign=top>");
    myWin.document.write("<td>Address</td>");
    myWin.document.write("<td><b>"+address1+"<br>");
    myWin.document.write(address2+"<br>");
    myWin.document.write(address3+postcode+"</td>");
    myWin.document.write("</tr><tr>");
    myWin.document.write("<td>Home Phone</td>");
    myWin.document.write("<td><b>"+ph_private+"</td>");
    myWin.document.write("</tr><tr>");
    myWin.document.write("<td>Business Phone</td>");
    myWin.document.write("<td><b>"+ph_business+"</td>");
    myWin.document.write("</tr></table>");
    myWin.document.write("<center><p>");
    myWin.document.write("<input type=button value=Close onClick='self.close()'>");
    myWin.document.write("</center>");
    myWin.document.write("</body></html>");
    myWin.document.close();  
}
