. V10.08.02 11/04/2016 SA C-0813931 Added OPCBPDTM                              
. V10.08.01 31/03/2016 SA C-0813931 Added OPCBBWGT                              
. V10.05.00 01/08/2014 DN C-250925 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   OPRCBDFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Caesarean Birth Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   oprcbdaf.dat
. *
. * Index Values  :   KEY12                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRCBDA1   IFILE    SQL, FIXED=167, KEY="U1-10,11-12"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPCBUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPCBCOUN  DIM       2      2        11    Count                              
OPCBBSEX  DIM       1      1        13    Baby Sex                           
OPCBBDOB  DIM       8      8        14    Date of Birth (ccyymmdd)           
OPCBBTME  DIM       8      8        22    Time of Birth (hh:mm:ss)           
OPCBBURN  DIM       8      8        30    Baby UR                            
OPCBCUID  DIM       10     10       38    WEB User ID Created (websecaf)     
OPCBCDAT  DIM       8      8        48    Date Record Created (CCYYMMDD)     
OPCBCTIM  DIM       8      8        56    Time Record Created (HH:MM:SS)     
OPCBUUID  DIM       10     10       64    WEB User ID Updated (websecaf)     
OPCBUDAT  DIM       8      8        74    Date Record Updated (CCYYMMDD)     
OPCBUTIM  DIM       8      8        82    Time Record Updated (HH:MM:SS)     
OPCBDELT  DIM       1      1        90    Delete Indicator (0=No,1=Yes)      
OPCBDUID  DIM       10     10       91    WEB User ID of Delete (websecaf)   
OPCBDDAT  DIM       8      8        101   Date Record Deleted (CCYYMMDD)     
OPCBDTIM  DIM       8      8        109   Time Record Deleted (HH:MM:SS)     
OPCBBWGT  DIM       6      6        117   Birth Weight (grams)               
OPCBPDTM  DIM       8      8        123   Placenta Delivery Time (hh:mm:ss)  
OPCBSPAR  DIM       36     36       131   Spare Variable                     
.
.End of Record                      167  
.
