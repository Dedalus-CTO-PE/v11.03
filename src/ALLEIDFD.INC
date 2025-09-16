. V10.03.00 08/10/2013 DN C-286923 Created new version
. *----------------------------------------------------------------------
. * Include Name  :   ALLEIDFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Extra Inbound Referral Data        
. *
. * File Type     :   SQL
. *
. * File Name     :   alleidaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLEIDA1   IFILE    SQL, FIXED=512, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALEIVISN  DIM       8      8        1     Referral/Visit Number              
ALEIOAPP  DIM       180    180      9     Original Sending Application (HL7) 
ALEISERV  DIM       100    100      189   Service (received by HL7 only)     
ALEIROTH  DIM       50     50       289   Referred By Other                  
ALEIRCON  DIM       100    100      339   Referrer Contact                   
ALEISPAR  DIM       73     73       439   Spare                              
.
.End of Record                      512  
.
