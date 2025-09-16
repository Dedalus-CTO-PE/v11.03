. 5.09 .003 21/07/2000 WEB                                                   
. *----------------------------------------------------------------------
. * Include Name  :   WEBRURFD.INC
. *
. * Function      :   File Def'n Include for Web Reporting                      
. *                   Web User Report Groups            
. *
. * File Type     :   SQL
. *
. * File Name     :   webruraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBRURA1   IFILE    SQL, FIXED=96, KEY="U1-10,11-15"                            
WEBRURA2   IFILE    SQL, FIXED=96, KEY="U11-15,1-10"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBRUUSID  DIM       10     10       1     Web User ID                        
WBRUGRID  DIM       5      5        11    Report Group ID                    
WBRUSPAR  DIM       80     80       16    Spare                              
.
.End of Record                      96   
.
