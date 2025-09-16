. 5.09 .001 21/07/2000 WEB                                                   
. *----------------------------------------------------------------------
. * Include Name  :   WEBRGMFD.INC
. *
. * Function      :   File Def'n Include for Web Reporting                      
. *                   Report Group Master                
. *
. * File Type     :   SQL
. *
. * File Name     :   webrgmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBRGMA1   IFILE    SQL, FIXED=121, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBRGGRID  DIM       5      5        1     Report Group ID                    
WBRGDESC  DIM       35     35       6     Description                        
WBRGSPAR  DIM       80     80       41    Spare                              
.
.End of Record                      121  
.
