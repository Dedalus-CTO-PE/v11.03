. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSGKMFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   General Ledger Interface Key Master
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsgkmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSGKMA1   IFILE    SQL, FIXED=76, KEY="U1-20"                                  
CCSGKMA2   IFILE    SQL, FIXED=76, KEY="U21-55,1-20"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCGKKEY   DIM       20     20       1     General Ledger Key                 
CCGKDES   DIM       35     35       21    Description                        
CCGKSPA   DIM       20     20       56                                       
.
.End of Record                      76   
.
