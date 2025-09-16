. V10.13.01 25/07/2018 RPH C-0848506 Extended PRCFDOCT from 6 to 10 chars       
. V10.06.01 25/03/2015 JT C-284113 Referral Comments Free Text                  
. *----------------------------------------------------------------------
. * Include Name  :   PRICFXFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Referral Comments Free Text        
. *
. * File Type     :   SQL
. *
. * File Name     :   pricfxaf.dat
. *
. * Index Values  :   KEY39                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRICFXA1   IFILE    SQL, FIXED=240, KEY="U1-8,9-14,15-24,25-27,28-30,31-36,37-39"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRCFUNIQ  DIM       8      8        1     Unique Identifier                  
PRCFPRAC  DIM       6      6        9     Medical Practice                   
PRCFDOCT  DIM       10     10       15    Service Doctor                     
PRCFPIND  DIM       3      3        25    Patient Indicator                  
PRCFCTYP  DIM       3      3        28    Comment Type                       
.                                         001 - PRI Referral Comment           
PRCFNOTE  DIM       6      6        31    Note Number                        
PRCFLINE  DIM       3      3        37    Line Number                        
PRCFCMNT  DIM       100    100      40    Comment                            
PRCFSPAR  DIM       100    100      140   Spare Variable                     
.
.End of Record                      240  
.
