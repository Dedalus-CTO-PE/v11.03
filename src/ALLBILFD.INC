. V9.00.001 20/05/2001 SB  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLBILFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Billing Table                      
. *
. * File Type     :   SQL
. *
. * File Name     :   allbilaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLBILA1   IFILE    SQL, FIXED=118, KEY="U1-3,4-6,7-12,13-16"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALBIDEPT  DIM       3      3        1     Department Code (alldepaf)         
ALBICOMP  DIM       3      3        4     Compensation Code (Category CL)    
ALBISERV  DIM       6      6        7     Service Type (allseraf)            
ALBITIME  DIM       4      4        13    Time Range - To                    
ALBIITEM  DIM       9      9        17    Item Number (priitemf)             
ALBICDAT  DIM       8      8        26    Date Record Created (CCYYMMDD)     
ALBICTIM  DIM       8      8        34    Time Record Created (HH:MM:SS)     
ALBICUIT  DIM       10     10       42    WEB User ID Created (websecaf)     
ALBIUDAT  DIM       8      8        52    Date Record Updated (CCYYMMDD)     
ALBIUTIM  DIM       8      8        60    Time Record Updated (HH:MM:SS)     
ALBIUUID  DIM       10     10       68    WEB User ID Created (websecaf)     
ALBISPAR  DIM       40     40       78    Spare Variable                     
.
.End of Record                      118  
.
