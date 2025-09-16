. V10.14.01 04/02/2019 TT C-0862937 Changed WBSKKWRD size from 30 to 80         
. V10.01.01 28/10/2010 EC  Created FD CAR 233151                                
. *----------------------------------------------------------------------
. * Include Name  :   WEBSKIFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WEB Security ID Keyword Index      
. *
. * File Type     :   SQL
. *
. * File Name     :   webskiaf.dat
. *
. * Index Values  :   KEY90   KEY90                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBSKIA1   IFILE    SQL, FIXED=121, KEY="U1-10,11-90"
WEBSKIA2   IFILE    SQL, FIXED=121, KEY="U11-90,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBSKUSID  DIM       10     10       1     WEB User ID                        
WBSKKWRD  DIM       80     80       11    Key Word                           
WBSKSPAR  DIM       30     30       91    Spare                              
.
.End of Record                      121  
.
