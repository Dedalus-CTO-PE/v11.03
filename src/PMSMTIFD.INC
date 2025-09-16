. V11.01.01 18/02/2021 TN C-0888639 Added PMMITMNO - Theatre Team Number        
. V10.14.01 05/05/2019 JT C-0867131 Mod PMMIITYP for NZ Private billing         
. V10.13.02 23/10/2018 TN C-0859743 Added Hospital Indicator using spare variabl
. V10.13.01 19/09/2018 JT C-0863727 Added Restrictive Override Code             
. V10.13.01 16/08/2018 JT C-0859742 Added new fields for Eclipse-Claims Store&Fo
. V10.11.01 31/09/2017 JT C-0837479 Added values to PMMICTYP                    
. V10.10.01 27/04/2017 SA C-0837479 Added PMMICTYP                              
. V10.05.01 04/08/2014 PV C-302164 Added Rebate Reason (CAT Rr)                 
. V10.04.02 17/01/2014 JT C-249828 Added Patient MBS Team/Counter for oprpmbaf  
. V10.04.01 05/01/2014 AP C-295008 Added Date/Time/User Created                 
. V10.03.01 07/11/2013 JT  Mods for Community Billing CAR 283618                
. V9.09.001 24/09/2007 JH  Added CMBS Confirmed                                 
. V9.09.002 02/11/2007 JT  Added index 6 & Added Item type/Schedule fee         
. V9.09.003 15/04/2008 JT  Mods to use PMMIINCT for Ind.to print EMR            
. V                         Procedure date and time on ED invoice               
. *----------------------------------------------------------------------
. * Include Name  :   PMSMTIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Misc.Items and Theatre Charges file
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmtiaf.dat
. *
. * Index Values  :   KEY14   KEY15   KEY23   KEY18   KEY24   KEY24          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMTIA1   IFILE    SQL, FIXED=435, KEY="U1-8,9-14"
PMSMTIA2   IFILE    SQL, FIXED=435, KEY="U1-8,107-107,9-14"
PMSMTIA3   IFILE    SQL, FIXED=435, KEY="U107-107,207-214,1-8,9-14"
PMSMTIA4   IFILE    SQL, FIXED=435, KEY="U1-8,107-107,178-180,9-14"
PMSMTIA5   IFILE    SQL, FIXED=435, KEY="U1-8,244-249,107-107,178-180,9-14"
PMSMTIA6   IFILE    SQL, FIXED=435, KEY="U1-8,257-266,9-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMIVISN  DIM       8      8        1     Visit number                       
PMMITRAN  DIM       6      6        9     Transaction Number                 
PMMIURNO  DIM       8      8        15    U/R Number                         
PMMISYST  DIM       2      2        23    System                             
.                                         1 = Emergency                        
.                                         2 = Outpatient                       
.                                         3 = Inpatient                        
PMMIITEM  DIM       9      9        25    Item Number                        
PMMIDESC  DIM       30     30       34    Description                        
PMMIDES2  DIM       35     35       64    Description 2                      
PMMITDAT  DIM       8      8        99    Transaction date                   
PMMIRTYP  DIM       1      1        107   Record type                        
.                                         1 - ACCOM                            
.                                         2 - THEATRE                          
.                                         3 - MISCELLANEOUS                    
.                                         4 - DOCTORS FEES                     
.                                         5 - CASH RECEIPT                     
.                                         6 - JOURNALS                         
.                                         7 - DISCOUNT                         
.                                         8 - PROCEDURE                        
PMMIREFN  DIM       12     12       108   Reference                          
PMMIAMTT  FORM      12.2   8        120   Gross Total amount                 
PMMIAMTG  FORM      12.2   8        128   Government Portion                 
PMMIAMTH  FORM      12.2   8        136   Orig rate before any disc.allowance
PMMIAMTP  FORM      12.2   8        144   Patient portion amount             
PMMIRBAT  FORM      12.2   8        152   Estimate Rebate amount             
PMMITDOC  DIM       6      6        160   Treating doctor                    
PMMISERV  FORM      5      4        166   Service Number                     
PMMIODOC  DIM       6      6        170   Operating Doctor                   
PMMISESS  DIM       2      2        176   Session (Theatre only)             
PMMIMGRP  DIM       3      3        178   Misc.Group (Mis.&Theatre only)CatFI
.                                         JH-Discount (Cat FI)                 
.                                         JH-Misc.Item/Doctor Chrg Group(Cat FN
.                                         )                                    
PMMIBTCH  DIM       8      8        181   Batch No for Misc.Items,Cash,Jrnl. 
.                                         JH-Misc.Item/Doctor Chrg Group(Cat FI
.                                         )                                    
PMMIINVN  FORM      1      2        189   No of Invoices                     
PMMIGSTA  FORM      1      2        191   Is GST Applicable to this item     
PMMIGSTC  DIM       6      6        193   GST Payable code                   
PMMIGSTM  FORM      12.2   8        199   GST Amount                         
PMMIDUPD  DIM       8      8        207   Date record update                 
PMMITUPD  DIM       8      8        215   Time record updated                
PMMIWUSR  DIM       10     10       223   WEB User ID                        
PMMIMVBR  DIM       1      1        233   Mech.Vent.Billing Record? 1=Yes    
.                                         NZ Private billing - 1 = Pack Item   
PMMIUNIQ  DIM       10     10       234   Unique id for theatre booking      
PMMICNTR  DIM       6      6        244   Contract/Health Fund               
PMMISUNQ  DIM       3      3        250   Subsequence Proc.Unique No(NZ Priv)
.                                         or Banding (CAT TB)(Theatre Only)    
PMMIINCT  DIM       1      1        253   Inclusion Type 0=Inc in contract   
.                                                     0=Inc in contract        
.                                                     1=Bill to Patient        
.                                                     2=Extra to contract      
.                                         OTHERS - Indicator to Print Procedure
.                                                  Date/Time on EMR Invoice    
.                                                  1= Yes, 0=No                
.                                         1=Community billing - item from Regim
.                                         e                                    
PMMISUBN  DIM       3      3        254   Sub Item Code                      
PMMIEDAD  DIM       10     10       257   ED Attending Doctor                
PMMISVTM  DIM       8      8        267   Service Time (HH:MM:SS)            
PMMICCON  DIM       1      1        275   CMBS Confirmed 1=Yes               
PMMISCHF  FORM      3.2    4        276   Schedule Fee (AMA=0,MBS=0.75, 0.85)
PMMIITYP  DIM       1      1        280   Item Type (0=MBS 1=AMA)            
.                                         The following values are for NZ      
.                                         Priv.Billing                         
.                                         2=Exploding Misc.itm(Norecalc.charge)
.                                         3=Not validating Misc.Code(HL7 msg)  
PMMIDTCR  DIM       8      8        281   Date Created                       
PMMITMCR  DIM       8      8        289   Time Created                       
PMMIIDCR  DIM       10     10       297   User ID Created                    
PMMITMNO  DIM       1      1        307   Theatre Team Number (oprpmbaf)     
PMMIPMBS  DIM       3      3        308   Patient Theater MBS Counter        
.                                         (oprpmbaf)                           
PMMIRBRS  DIM       3      3        311   Rebate Reason (CAT Rr)             
PMMICTYP  DIM       1      1        314   Consumption Type                   
.                                         0 or Blank = Used                    
.                                         1 = Not Used                         
.                                         2 = Expired                          
PMMIACOI  DIM       1      1        315   After Care Override Indicator      
.                                         0-No                                 
.                                         1-Yes                                
PMMIDSOV  DIM       1      1        316   Duplicate Service Override         
.                                         0-No                                 
.                                         1-Yes                                
PMMISTXT  DIM       50     50       317   Service Text                       
PMMILSPN  DIM       6      6        367   Location Specific Practice No      
.                                         - LSPN value (can not be 000000)     
PMMIMPOV  DIM       1      1        373   Multi Procedure Override           
.                                         0-No                                 
.                                         1-Yes                                
PMMINMPT  DIM       2      2        374   Number of Patients Seen            
PMMISDCD  DIM       3      3        376   Self Deem Code (Cat Sd)            
PMMITDUR  DIM       3      3        379   Time Duration (Mins)               
PMMIROVR  DIM       3      3        382   Restrictive Override Code (Cat Ro) 
.                                         Associated Field Position 1-2 values:
.                                         SP - Separate Sites                  
.                                         NR - Not Related (care plans)        
.                                         NC - Not for Comparison              
PMMIHOSI  DIM       1      1        385   Hospital Indicator                 
.                                         0 or Blank = No                      
.                                         1 = Yes                              
PMMISPAR  DIM       49     49       386   Spare variable                     
.
.End of Record                      435  
.
