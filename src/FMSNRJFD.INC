. *----------------------------------------------------------------------
. * Include Name  :   FMSNRJFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   General User Template Control
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrjaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRJA1   IFILE    SQL, FIXED=120, KEY="U1-4,5-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNJUID   DIM       4      4        1     User ID                            
FMNJSEQ   DIM       3      3        5     Sequence ID                        
FMNJDES   DIM       35     35       8     Description                        
FMNJSTA   FORM      1      2        43    Report Status (1=only if perd lock)
FMNJTYP   FORM      1      2        45    Report Type (0=FMS 1=UNIX)         
FMNJREP   DIM       3      3        47    Report Code                        
FMNJCMD   DIM       50     50       50    Unix Command                       
FMNJSPA   DIM       20     20       100   Spare                              
.
.End of Record                      120  
.
