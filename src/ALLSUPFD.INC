. V10.04.01 20/02/2014 SA C-226788 Added ALSPAPPN                               
. V10.00.001 25/03/2010 EC  Added ALSPQNTY and ALSPPRCE CAR 208232              
. *----------------------------------------------------------------------
. * Include Name  :   ALLSUPFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Encounter Supplies   
. *
. * File Type     :   SQL
. *
. * File Name     :   allsupaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLSUPA1   IFILE    SQL, FIXED=127, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALSPVISN  DIM       8      8        1     Referral/Visit Number              
ALSPENCT  DIM       8      8        9     Encounter Number                   
ALSPSCNT  DIM       8      8        17    Supply count                       
ALSPSCOD  DIM       7      7        25    Supply code (sinciaaf)             
ALSPCDAT  DIM       8      8        32    Date record created (CCYYMMDD)     
ALSPCTIM  DIM       8      8        40    Time record created (HH:MM:SS)     
ALSPCUID  DIM       10     10       48    WEB user ID created (websecaf)     
ALSPUDAT  DIM       8      8        58    Date record updated (CCYYMMDD)     
ALSPUTIM  DIM       8      8        66    Time record updated (HH:MM:SS)     
ALSPUUID  DIM       10     10       74    WEB user ID updated (websecaf)     
ALSPQNTY  FORM      3      3        84    Supply Quantity                    
ALSPPRCE  FORM      12.6   10       87    Supply Price                       
ALSPAPPN  DIM       20     20       97    Approval Number                    
ALSPSPAR  DIM       10     10       117   Spare                              
.
.End of Record                      127  
.
