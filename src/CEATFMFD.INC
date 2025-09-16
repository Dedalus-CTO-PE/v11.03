. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEATFMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Theatre Clinic/Surgeon Operation Time     
. *
. * File Type     :   SQL
. *
. * File Name     :   ceatfmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEATFMA1   IFILE    SQL, FIXED=41, KEY="U1-6,7-9,10-16"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CETFCLI   DIM       6      6        1     Clinic/Surgeon                     
CETFSPC   DIM       3      3        7     Service Provider                   
CETFPSC   DIM       7      7        10    Patient Service                    
CETFSTM   FORM      2      2        17    Start Time                         
CETFETM   FORM      2      2        19    End Time                           
CETFSPA   DIM       20     20       21    Spare                              
.
.End of Record                      41   
.
