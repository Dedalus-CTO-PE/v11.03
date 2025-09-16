. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEADEFFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   Default Patient Service Mapping    
. *
. * File Type     :   SQL
. *
. * File Name     :   ceadefaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEADEFA1   IFILE    SQL, FIXED=42, KEY="U1-1,2-4,5-11"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEDEDTY   DIM       1      1        1     Default 1=Theatre,2=Nursing,3=Misc,
.                                         4=Visit
CEDESPC   DIM       3      3        2     Service Provider                   
CEDEPSC   DIM       7      7        5     Patient Service Code               
CEDEQTY1  FORM      6.2    5        12    Qty per 1=Prim. Op,2=Day,3=Dollar, 
.                                         4=Admission
CEDEQTY2  FORM      6.2    5        17    Qty per 2=Non Prim,2=Hrs,3=Trans.  
.                                         4=Discharge
CEDESPA   DIM       20     20       22    Spare                              
.
.End of Record                      42   
.
