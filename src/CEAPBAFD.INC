. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPBAFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Patient Service Summary            
. *
. * File Type     :   SQL
. *
. * File Name     :   ceapbaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAPBAA1   IFILE    SQL, FIXED=102, KEY="U1-7,8-11,12-13"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPBPSC   DIM       7      7        1     Patient Service Code               
CEPBYEAR  DIM       4      4        8     Year                               
CEPBPER   DIM       2      2        12    Period                             
CEPBQTY   FORM      12.2   8        14    Total Quantity                     
CEPBCST1  FORM      12.2   8        22    Total Cost 1                       
CEPBCST2  FORM      12.2   8        30    Total Cost 2                       
CEPBCST3  FORM      12.2   8        38    Total Cost 3                       
CEPBCST4  FORM      12.2   8        46    Total Cost 4                       
CEPBCST5  FORM      12.2   8        54    Total Cost 5                       
CEPBSPA   DIM       40     40       62                                       
.
.End of Record                      102  
.
