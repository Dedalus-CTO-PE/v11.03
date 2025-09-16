. *----------------------------------------------------------------------
. * Include Name  :   FMSNRKFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Template Reporting Calculation
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrkXX.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRKA1   IFILE    SQL, FIXED=48, KEY="U1-3,4-15,16-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNKREPT  DIM       3      3        1     Template Report Code               
FMNKTACC  DIM       12     12       4     Total Account                      
FMNKSACC  DIM       12     12       16    Sub Account                        
FMNKSPAR  DIM       20     20       28    Spare                              
.
.End of Record                      48   
.
