. V10.12.01 06/02/2018 EC  Added index 2    TSK 0848319
. 5.07.00   14/10/1999 NMH Ported to 5.07
. 6.06 .001 02/06/1999 NMH Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   EMRDLAFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Emergency EMR Deletion Audit                 
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdlaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDLAA1   IFILE    SQL, FIXED=125, KEY="U1-8"                                  
EMRDLAA2   IFILE    SQL, FIXED=125, KEY="U9-16,17-21,1-8" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDAADMN  DIM       8      8        1     Admission Number                   
EMDADATE  DIM       8      8        9     Deletion Date                      
EMDATIME  DIM       5      5        17    Deletion Time                      
EMDAWUID  DIM       10     10       22    Web User ID                        
EMDARECD  DIM       3      3        32    Reason Code (Cat EC)               
EMDACOMM  DIM       40     40       35    Comment                            
EMDASPAR  DIM       50     50       75    Spare                              
.
.End of Record                      125  
.
