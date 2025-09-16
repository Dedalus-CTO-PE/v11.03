. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEANDMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Nursing DRG Cost Variations        
. *
. * File Type     :   SQL
. *
. * File Name     :   ceandmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEANDMA1   IFILE    SQL, FIXED=54, KEY="U1-4"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CENDDRGC  DIM       4      4        1     DRG Code                           
CENDFC1   FORM      6.4    6        5     Factor Cost 1                      
CENDFC2   FORM      6.4    6        11    Factor Cost 2                      
CENDFC3   FORM      6.4    6        17    Factor Cost 3                      
CENDFC4   FORM      6.4    6        23    Factor Cost 4                      
CENDFC5   FORM      6.4    6        29    Factor Cost 5                      
CENDSPA   DIM       19     19       35    Spare                              
.
.End of Record                      54   
.
