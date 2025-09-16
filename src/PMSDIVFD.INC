. V10.02.01 01/07/2011 DS C-240723 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSDIVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Divisions                          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdivaf.dat
. *
. * Index Values  :   KEY14   KEY14                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDIVA1   IFILE    SQL, FIXED=98, KEY="U1-3,4-6,7-9,10-14"                     
PMSDIVA2   IFILE    SQL, FIXED=98, KEY="U1-3,7-9,10-14,4-6"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDIHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
PMDIDIVN  DIM       3      3        4     Division (Cat dv)                  
PMDIUNIT  DIM       3      3        7     Unit (Cat AC)                      
PMDITEAM  DIM       5      5        10    Team (pmstemaf)                    
PMDIACTV  DIM       1      1        15    Active (0=Active/1=Inactive)       
PMDICUID  DIM       10     10       16    WEB User ID Created (websecaf)     
PMDICDAT  DIM       8      8        26    Date Record Created (ccyymmdd)     
PMDICTIM  DIM       8      8        34    Time Record Created (hh:mm:ss)     
PMDIUUID  DIM       10     10       42    WEB User ID Updated (websecaf)     
PMDIUDAT  DIM       8      8        52    Date Record Updated (ccyymmdd)     
PMDIUTIM  DIM       8      8        60    Time Record Updated (hh:mm:ss)     
PMDISPAR  DIM       30     30       68    Spare Variable                     
.
.End of Record                      98   
.
