. V5.08.001 31/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSATYFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Allocation Type Master
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsatyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSATYA1   IFILE    SQL, FIXED=80, KEY="U1-4"                                   
CCSATYA2   IFILE    SQL, FIXED=80, KEY="U5-39,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCATATY   DIM       4      4        1     Allocation Type                    
CCATDES   DIM       35     35       5     Description                        
CCATTQY   FORM      12.4   9        40    Total Quantity                     
CCATSPA   DIM       31     31       49    Spare                              
.
.End of Record                      80   
.
