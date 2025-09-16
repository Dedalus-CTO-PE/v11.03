. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSIPRFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Inpatient Price Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsipraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSIPRA1   IFILE    SQL, FIXED=42, KEY="U1-4"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCIPDRGC  DIM       4      4        1     DRG Code                           
CCIPPRI   FORM      12.2   8        5     Price                              
CCIPSPA   DIM       29     29       13    Spare                              
.
.End of Record                      42   
.
