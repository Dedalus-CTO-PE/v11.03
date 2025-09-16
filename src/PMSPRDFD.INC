. 9.05 .001 05/04/2006 JH  Created                                           
. 9.05 .002 11/04/2006 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSPRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   PRS2 Date range table              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsprdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPRDA1   IFILE    SQL, FIXED=71, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPRHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
PMPRSDAT  DIM       8      8        4     Current PRS2 start date (CCYYMMDD) 
PMPREDAT  DIM       8      8        12    Current PRS2 end date (CCYYMMDD)   
PMPRERRF  DIM       1      1        20    Errors exist 0=No 1=Yes            
PMPRLDAT  DIM       8      8        21    Last date PRS2 coding reset        
PMPRSPAR  DIM       42     42       29    Spare                              
.
.End of Record                      71   
.
