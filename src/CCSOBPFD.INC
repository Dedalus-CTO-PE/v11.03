. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSOBPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Outpatient Price Table B           
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsobpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSOBPA1   IFILE    SQL, FIXED=48, KEY="U1-6,7-9"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCOBCID   DIM       6      6        1     Clinic ID                          
CCOBREF   DIM       3      3        7     Referral Source                    
CCOBPRI   FORM      12.2   8        10    Price                              
CCOBSPA   DIM       30     30       18    Spare                              
.
.End of Record                      48   
.
