. V9.09.001 12/02/2008 JH  Created for CAR 157574                            
. *----------------------------------------------------------------------
. * Include Name  :   BOKUNQFD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Booking/Unique Id Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   bokunqaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKUNQA1   IFILE    SQL, FIXED=123, KEY="U1-8,9-18"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKUNVISN  DIM       8      8        1     Booking number                     
BKUNUNIQ  DIM       10     10       9     Unique ID                          
BKUNLADM  DIM       8      8        19    Linked Admission number            
BKUNWEBL  DIM       10     10       27    Web User Id who linked             
BKUNDATL  DIM       8      8        37    Date linked (CCYYMMDD)             
BKUNTIML  DIM       8      8        45    Time linked (hh:mm:ss)             
BKUNSPAR  DIM       70     70       53    Spare                              
.
.End of Record                      123  
.
