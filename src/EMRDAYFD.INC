. V5.07.000 14/10/1999 NMH Ported to 5.07
. V6.06.001 13/09/1999 NMH Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   EMRDAYFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Emergency Day Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdayaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDAYA1   IFILE    SQL, FIXED=42, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDYDAT   DIM       8      8        1     Date                               
EMDYCNT   FORM      4      3        9     Count of patients for day          
EMDYSPA   DIM       30     30       12    Spare                              
.
.End of Record                      42   
.
