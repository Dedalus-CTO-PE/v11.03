. V6.00.001 08/10/1993 Nez New File
. *----------------------------------------------------------------------
. * Include Name  :   FMSNRLFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Reporting Header Details
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrlaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRLA1   IFILE    SQL, FIXED=98, KEY="U1-3,4-4,5-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNLCOD   DIM       3      3        1     Report Code                        
FMNLTYP   DIM       1      1        4     Report Type (0=Templates, 1=Normal)
FMNLUNQ   DIM       3      3        5     Unique Line Number                 
FMNLLIN   DIM       70     70       8     Line                               
FMNLSPA   DIM       20     20       78    Spare                              
.
.End of Record                      98   
.
