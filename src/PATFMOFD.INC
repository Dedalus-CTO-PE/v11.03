. 5.09 .001 16/10/2000 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATFMOFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund Moeity Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   patfmoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATFMOA1   IFILE    SQL, FIXED=54, KEY="U1-6,7-14,15-17"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFMHFCD  DIM       6      6        1     Health Fund Code                   
PTFMHFTB  DIM       8      8        7     Health Fund Table                  
PTFMBTYP  DIM       3      3        15    Bed Type                           
PTFMSDAM  FORM      12.2   8        18    Same Day amount                    
PTFMOVAM  FORM      12.2   8        26    Overnight amount                   
PTFMSPAR  DIM       20     20       34    Spare                              
.
.End of Record                      54   
.
