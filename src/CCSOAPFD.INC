. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSOAPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Outpatient Price A                 
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsoapaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSOAPA1   IFILE    SQL, FIXED=41, KEY="U1-6,7-9,10-12"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCOACID   DIM       6      6        1     Clinic ID                          
CCOADEP   DIM       3      3        7     Department                         
CCOAVTY   DIM       3      3        10    Visit Type                         
CCOAPRI   FORM      12.2   8        13    Price                              
CCOASPA   DIM       20     20       21    Spare                              
.
.End of Record                      41   
.
