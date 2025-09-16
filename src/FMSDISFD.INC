. V6.00.001 08/01/1992
. *----------------------------------------------------------------------
. * Include Name  :   FMSDISFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Dissection Codes
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsdisaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSDISA1   IFILE    SQL, FIXED=46, KEY="U1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMDSCODE  DIM       5      5        1     Dissection Code                    
FMDSDESC  DIM       20     20       6     Dissection Description             
FMDSSPAR  DIM       20     20       26    Spare                              
.
.End of Record                      46   
