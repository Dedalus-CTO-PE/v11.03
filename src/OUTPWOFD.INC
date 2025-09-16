. *----------------------------------------------------------------------
. * Include Name  :   OUTPWOFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   ABF Non-Admitted Price Weights     
. *
. * File Type     :   SQL
. *
. * File Name     :   outpwoaf.dat
. *
. * Index Values  :   KEY9    KEY9                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTPWOA1   IFILE    SQL, FIXED=170, KEY="U1-6,7-9"
OUTPWOA2   IFILE    SQL, FIXED=170, KEY="U7-9,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTPWCNTR  DIM       6      6        1     Contract ID                        
OTPWTIER  DIM       3      3        7     Tier 2 Code - Cat NC               
OTPWPWEI  FORM      10.4   8        10    Price Weight                       
OTPWCDAT  DIM       8      8        18    Date record created                
OTPWCTIM  DIM       8      8        26    Time record created                
OTPWCUID  DIM       10     10       34    Record created by                  
OTPWUDAT  DIM       8      8        44    Date record updated                
OTPWUTIM  DIM       8      8        52    Time record updated                
OTPWUUID  DIM       10     10       60    Record updated by                  
OTPWSPAR  DIM       100    100      70    Spare variable                     
.
.End of Record                      170  
.
