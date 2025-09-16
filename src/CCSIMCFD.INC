. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSIMCFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Income Misc Components             
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsimcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSIMCA1   IFILE    SQL, FIXED=33, KEY="U1-1,2-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCIMTYP   DIM       1      1        1     Map Type 1=Group,2=Code,3=Journal  
.                                                  4=Ward,5=Adm Type,6=Bed Type 
CCIMCOD   DIM       9      9        2     Map Code                           
CCIMITY   FORM      1      2        11    Income Type 1-9                    
CCIMSPA   DIM       20     20       13                                       
.
.End of Record                      33   
.
