. V9.04.01 10/08/2005 EC  Added mandatory for discharge CAR 57816
. V9.00.02 07/08/2001 dc  added Index 4
. V9.00.01 24/05/2001 SB       Adding Responsibility Code
. V5.07.01 20/07/1999 Nicole   Added Extract Field Number
. V6.06.01 04/03/1999 BGA New Table
. *----------------------------------------------------------------------
. * Include Name  :   EMRWFMFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Web Mandatory Fields               
. *
. * File Type     :   SQL
. *
. * File Name     :   emrwfmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRWFMA1   IFILE    SQL, FIXED=143, KEY="U1-5"                                  
EMRWFMA2   IFILE    SQL, FIXED=143, KEY="U111-111,1-5"                          
EMRWFMA3   IFILE    SQL, FIXED=143, KEY="U113-115,1-5"                          
EMRWFMA4   IFILE    SQL, FIXED=143, KEY="U116-118,1-5"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMWFFLD   DIM       5      5        1     Field Number                       
EMWFIDE   DIM       35     35       6     IBA Description                    
EMWFDES   DIM       35     35       41    Site Description                   
EMWFSDE   DIM       35     35       76    Screen Description                 
EMWFMAN   DIM       1      1        111   Mandatory                          
.                                         0 = No
.                                         1 = Yes
EMWFIDP   DIM       1      1        112   Injury Dependent Data              
.                                         0 = No
.                                         1 = Yes
EMWFEXF   DIM       3      3        113   Extract Field Number               
EMWFRES   DIM       3      3        116   Responsibilty (category EZ)        
EMWFMND   DIM       1      1        119   Mandatory For Transaction          
.                                         0 = No Transactions
.                                         1 = Discharge
EMWFSPA   DIM       23     23       120   Spare Variable                     
.
.End of Record                      143  
.
