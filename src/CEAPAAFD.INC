. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPAAFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Patient Service Analysis Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   ceapaaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAPAAA1   IFILE    SQL, FIXED=105, KEY="U1-3,4-10,11-14,15-16"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPASPC   DIM       3      3        1     Service Provider                   
CEPAPSC   DIM       7      7        4     Patient Service Code               
CEPAYEAR  DIM       4      4        11    Year                               
CEPAPER   DIM       2      2        15    Period                             
CEPAQTY   FORM      12.2   8        17    Total Quantity                     
CEPACST1  FORM      12.2   8        25    Total Cost 1                       
CEPACST2  FORM      12.2   8        33    Total Cost 2                       
CEPACST3  FORM      12.2   8        41    Total Cost 3                       
CEPACST4  FORM      12.2   8        49    Total Cost 4                       
CEPACST5  FORM      12.2   8        57    Total Cost 5                       
CEPASPA   DIM       40     40       65                                       
.
.End of Record                      105  
.
