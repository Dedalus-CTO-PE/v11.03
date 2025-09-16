. V9.11.001 08/01/2009 ML  Updated to V9.10 specs                               
. V9.10.001 19/09/2008 ML  New Table                                            
. *----------------------------------------------------------------------
. * Include Name  :   MEHPRDFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission RD Record      
. *
. * File Type     :   SQL
. *
. * File Name     :   mehprdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPRDA1   IFILE    SQL, FIXED=240, KEY="U1-8,9-11,12-19"                       
MEHPRDA2   IFILE    SQL, FIXED=240, KEY="U12-19,1-8,9-11"                       
MEHPRDA3   IFILE    SQL, FIXED=240, KEY="U20-27,1-8,9-11,12-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPDXDAT  DIM       8      8        1     Extract Date                       
MHPDXNUM  DIM       3      3        9     Extract No. for this Date          
MHPDVISN  DIM       8      8        12    Referral Id./Visit No.             
MHPDURNO  DIM       8      8        20    UR No./Event HCU Id.               
.                                         *                             
MHPDSTAT  DIM       1      1        28    Transmission Status                
.                                         1=Sent 2=Errors 3=Accepted    
MHPDETYP  DIM       1      1        29    Error Type "E" Error, "W" Warning  
MHPDECNT  DIM       3      3        30    Error Count                        
MHPDWCNT  DIM       3      3        33    Warning Count                      
MHPDERID  DIM       9      9        36    Error/Warning Ref Code             
.                                         * ---- start of RD Record ----
MHPDFVER  DIM       3      3        45    File Version                       
MHPDRFID  DIM       10     10       48    Referral Id                        
MHPDSORG  DIM       8      8        58    Submitting Org Id                  
MHPDORID  DIM       8      8        66    Organisation Id (from AH Dept)     
MHPDOTYP  DIM       3      3        74    Organisation Type                  
MHPDFDAT  DIM       19     19       77    Extract From Date Time             
MHPDTDAT  DIM       19     19       96    Extracted Date Time                
MHPDDELT  DIM       9      9        115   Deleted Flag                       
MHPDTEAM  DIM       6      6        124   Team Code                          
MHPDEHCU  DIM       7      7        130   Event HCU Id. (UR No.)             
MHPDPSEX  DIM       1      1        137   Sex                                
MHPDPDOB  DIM       10     10       138   Date of Birth                      
MHPDRFFR  DIM       2      2        148   Referral From                      
MHPDRFTO  DIM       2      2        150   Referral To                        
MHPDECOD  DIM       2      2        152   Referral End Code                  
MHPDRSTR  DIM       19     19       154   Start Date Time                    
MHPDREND  DIM       19     19       173   End Date Time                      
MHPDSPAR  DIM       48     48       192   Spare                              
.
.End of Record                      240  
.
