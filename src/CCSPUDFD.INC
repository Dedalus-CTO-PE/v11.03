. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPUDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Patient Service User Defined Class Names
. *
. * File Type     :   SQL
. *
. * File Name     :   ccspudaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPUDA1   IFILE    SQL, FIXED=61, KEY="U1-1,2-5"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPUCLS   DIM       1      1        1     Class Number                       
CCPUCOD   DIM       4      4        2     Code                               
CCPUDES   DIM       35     35       6     Description                        
CCPUSPA   DIM       20     20       41    SPare                              
.
.End of Record                      61   
.
