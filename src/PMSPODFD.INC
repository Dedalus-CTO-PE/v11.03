. V9.09.001 03/12/2007 JH  Created                                           
. V9.09.002 11/12/2007                                                       
. V9.09.003 13/12/2007 JH  Created for CAR 153381                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSPODFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Outcome Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspodaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPODA1   IFILE    SQL, FIXED=112, KEY="U1-8,15-17"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPOVISN  DIM       8      8        1     Visit Number                       
PMPOCODE  DIM       6      6        9     Outcome Code (pmsadcaf)            
PMPOOCNT  DIM       3      3        15    Outcome Count                      
PMPOGRAD  DIM       1      1        18    Grade (1-9 or 0=N/A)               
PMPODELT  DIM       1      1        19    Delete (1=Yes 2=Supervisor deleted)
PMPOUNIQ  DIM       10     10       20    Unique theatre id                  
PMPOWEBC  DIM       10     10       30    WEB User ID Created (websecaf)     
PMPODATC  DIM       8      8        40    Date Created (ccyymmdd)            
PMPOTIMC  DIM       8      8        48    Time Created (hh:mm:ss)            
PMPOWEBU  DIM       10     10       56    WEB User ID Updated (websecaf)     
PMPODATU  DIM       8      8        66    Date Updated (ccyymmdd)            
PMPOTIMU  DIM       8      8        74    Time Updated (ccyymmdd)            
PMPOSPAR  DIM       30     30       82    Spare                              
.
.End of Record                      112  
.
