. *----------------------------------------------------------------------
. * Include Name  :   SCRGPHFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Graph Display Temporary Table
. *
. * File Type     :   SQL
. *
. * File Name     :   scrgphaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRGPHA1   IFILE    SQL, FIXED=108, KEY="U1-3,4-6"                              
SCRGPHA2   IFILE    SQL, FIXED=108, KEY="U1-3,7-27,4-6"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCGPPER   DIM       3      3        1     Period                             
SCGPITM   DIM       3      3        4     Item                               
SCGPVAL   DIM       21     21       7     Value                              
SCGPDES   DIM       80     80       28    Period Description                 
.
.End of Record                      108  
.
