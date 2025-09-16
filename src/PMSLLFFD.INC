. 9.02 .001 10/10/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSLLFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Financial Letters List Index       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsllfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLLFA1   IFILE    SQL, FIXED=32, KEY="U1-4,5-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLLSEID  DIM       4      4        1     Selection ID.                      
PMLLVISN  DIM       8      8        5     Visit Number                       
PMLLOSMT  FORM      7.2    6        13    Outstanding Amount                 
PMLLSTAT  DIM       1      1        19    Delete Status Indicator            
PMLLSPAR  DIM       12     12       20    Spare Variable                     
.
.End of Record                      32   
.
