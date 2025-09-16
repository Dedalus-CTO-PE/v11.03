. V9.03.000 15/06/2004 LV  Created new                                       
. *----------------------------------------------------------------------
. * Include Name  :   BOKLTLFD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Booking Letter List Index          
. *
. * File Type     :   SQL
. *
. * File Name     :   bokltlaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKLTLA1   IFILE    SQL, FIXED=44, KEY="U1-4,5-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKLLSEID  DIM       4      4        1     Selection ID                       
BKLLBOOK  DIM       8      8        5     Booking/Admission Number           
BKLLSTAT  DIM       1      1        13    Delete Status Indicator            
.                                         Space - No
.                                         1 - Yes
BKLLSPAR  DIM       30     30       14    Spare                              
.
.End of Record                      44   
.
