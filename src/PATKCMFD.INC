. V9.02.001 13/05/2002 dcc created fd                                        
. *----------------------------------------------------------------------
. * Include Name  :   PATKCMFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient Case Mix Keyword Index 
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKCMA1   IFILE    SQL, FIXED=45, KEY="U1-9,10-24"                             
PATKCMA2   IFILE    SQL, FIXED=45, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCMITM   DIM       9      9        1     Emergency Diagnosis Code           
PTCMKWD   DIM       15     15       10    Key Word                           
PTCMSPA   DIM       20     20       25    Spare                              
.
.End of Record                      45   
.
