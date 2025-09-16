. 5.09 .002 21/07/2000 WEB                                                   
. *----------------------------------------------------------------------
. * Include Name  :   WEBRDTFD.INC
. *
. * Function      :   File Def'n Include for Web Reporting                      
. *                   Report Group Details               
. *
. * File Type     :   SQL
. *
. * File Name     :   webrdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBRDTA1   IFILE    SQL, FIXED=97, KEY="U1-5,6-13,14-16"                        
WEBRDTA2   IFILE    SQL, FIXED=97, KEY="U6-13,14-16,1-5"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBRDGRID  DIM       5      5        1     Report Group ID                    
WBRDPRID  DIM       8      8        6     Program ID                         
WBRDTMID  DIM       3      3        14    Template ID                        
WBRDSPAR  DIM       80     80       17    Spare                              
.
.End of Record                      97   
.
