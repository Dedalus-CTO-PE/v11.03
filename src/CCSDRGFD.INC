. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSDRGFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   DRG Table                           
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsdrgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSDRGA1   IFILE    SQL, FIXED=149, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDGDRGC  DIM       4      4        1     DRG Code                           
CCDGDES   DIM       60     60       5     Description                        
CCDGMDC   DIM       3      3        65    MDC Code                           
CCDGWAR   FORM      1      2        68    Print Warning for DRG              
CCDGTYP   DIM       1      1        70    Type Medical or Procedure          
CCDGSDR   DIM       1      1        71    Same Day Medical Reduction Y/N     
CCDGSDT   DIM       1      1        72    Same Day Target Y/N                
CCDGLOW   FORM      6.2    5        73    Low Boundry Point                  
CCDGHIG   FORM      6.2    5        78    High Boundry Point                 
CCDGSLOS  FORM      6.2    5        83    State Average Inlier LOS           
CCDGSWGT  FORM      6.4    6        88    State Resource Weight              
CCDGNAT   FORM      6.4    6        94    National Weight                    
CCDGNLOS  FORM      6.2    5        100   National Average LOS               
CCDGSPA   DIM       44     44       105   Spare                              
.
.End of Record                      149  
.
