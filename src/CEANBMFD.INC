. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEANBMFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Nursing Admission Factors          
. *
. * File Type     :   SQL
. *
. * File Name     :   ceanbmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEANBMA1   IFILE    SQL, FIXED=57, KEY="U1-3,4-6"                               
CEANBMA2   IFILE    SQL, FIXED=57, KEY="U4-6,1-3"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CENBATY   DIM       3      3        1     Admission Type (Cat A )            
CENBWRD   DIM       3      3        4     Ward                               
CENBFC1   FORM      6.4    6        7     Factor Cost 1                      
CENBFC2   FORM      6.4    6        13    Factor Cost 2                      
CENBFC3   FORM      6.4    6        19    Factor Cost 3                      
CENBFC4   FORM      6.4    6        25    Factor Cost 4                      
CENBFC5   FORM      6.4    6        31    Factor Cost 5                      
CENBSPA   DIM       20     20       37    Spare                              
.
.End of Record                      57   
.
