. v9.00.001 15/06/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   WATESTFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List ESIS Seal Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   watestaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESTA1   IFILE    SQL, FIXED=65, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTESSDAT  DIM       8      8        1     ESIS Seal Date (CCYYMMDD)          
WTESUSID  DIM       10     10       9     Web User ID (websecaf)             
WTESDATE  DIM       8      8        19    Date Entered (CCYYMMDD)            
WTESTIME  DIM       8      8        27    Time Entered (HH:MM:SS)            
WTESSPAR  DIM       30     30       35    Spare Variable                     
.
.End of Record                      65   
.
