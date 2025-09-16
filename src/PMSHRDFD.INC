. V9.10.001 11/09/2008 EC  Created FD CAR 174043                             
. V9.10.002 02/12/2008 EC  Added index 2 CAR 174082                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSHRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Housekeeping Request Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshrdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHRDA1   IFILE    SQL, FIXED=240, KEY="U1-3,4-6,7-9,10-17,18-25"              
PMSHRDA2   IFILE    SQL, FIXED=240, KEY="U10-17,18-25,1-3,4-6,7-9"              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHRHOSP  DIM       3      3        1     Hospital Id (pathspaf)             
PMHRWARD  DIM       3      3        4     Ward (patwr1af)                    
PMHRBEDD  DIM       3      3        7     Bed                                
PMHRRDAT  DIM       8      8        10    Request Date (ccyymmdd)            
PMHRRTIM  DIM       8      8        18    Request Time (hh:mm:ss)            
PMHRRSTA  DIM       3      3        26    Requested Housekeeping Stat(Cat BV)
PMHRCSTA  DIM       3      3        29    Completed Housekeeping Stat(Cat BV)
PMHRCWEB  DIM       10     10       32    Completed By (websecaf)            
PMHRCDAT  DIM       8      8        42    Completed Date (ccyymmdd)          
PMHRCTIM  DIM       8      8        50    Completed Time (hh:mm:ss)          
PMHRSTAT  DIM       3      3        58    Satisfactory Status (Cat hw)       
PMHRCOM1  DIM       50     50       61    Comment 1                          
PMHRCOM2  DIM       50     50       111   Comment 2                          
PMHRCRES  DIM       3      3        161   Cleaner Responsible (Cat hx)       
PMHRWEBU  DIM       10     10       164   Updated By (websecaf)              
PMHRDATU  DIM       8      8        174   Date Updated (ccyymmdd)            
PMHRTIMU  DIM       8      8        182   Time Updated (hh:mm:ss)            
PMHRSPAR  DIM       50     50       190   Spare                              
.
.End of Record                      240  
.
