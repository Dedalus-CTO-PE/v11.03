. V9.03.000 15/06/2004 LV  Created new                                       
. *----------------------------------------------------------------------
. * Include Name  :   BOKLTSFD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Booking Letter Selection Criteria  
. *
. * File Type     :   SQL
. *
. * File Name     :   bokltsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKLTSA1   IFILE    SQL, FIXED=87, KEY="U1-4"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKLSSEID  DIM       4      4        1     Selection ID                       
BKLSDESC  DIM       35     35       5     Selection Description              
BKLSDEPS  DIM       1      1        40    Deposit Paid                       
.                                         Space - All
.                                         N - No
.                                         Y - Yes
BKLSSTDT  DIM       8      8        41    Booking/Admission Start Date       
BKLSENDT  DIM       8      8        49    Booking/Admission End Date         
BKLSSPAR  DIM       30     30       57    Spare                              
.
.End of Record                      87   
.
