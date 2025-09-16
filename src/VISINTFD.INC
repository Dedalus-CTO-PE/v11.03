. V10.04.01  03/01/2014 DN CAR-294454 Moved VSINCHON out of spare variable
. V10.03.01  31/08/2012 PV CAR-266428 Added VSINCHON
. V9.05.001  15/12/2005 DS  Added vsinconf                                    
. *----------------------------------------------------------------------
. * Include Name  :   VISINTFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Interpreter Visit Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   visintaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISINTA1   IFILE    SQL, FIXED=137, KEY="U1-8"                                  
VISINTA2   IFILE    SQL, FIXED=137, KEY="U9-16,17-24,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSINVISN  DIM       8      8        1     Visit/Booking Number               
VSINDATE  DIM       8      8        9     Date Required (CCYYMMDD)           
VSINTIME  DIM       8      8        17    Time Required (HH:MM:SS)           
VSINTYPE  FORM      2      2        25    Visit Type                         
VSINSUBK  DIM       50     50       27    Sub-System Key                     
VSINWUID  DIM       10     10       77    WEB User ID                        
VSINNOTF  DIM       1      1        87    Notified Indicator (0=No,1=Yes)    
VSINUDC1  DIM       3      3        88    User Defined 1 (category Va)       
VSINUDC2  DIM       3      3        91    User Defined 2 (category Vb)       
VSINUDC3  DIM       3      3        94    User Defined 3 (category Vc)       
VSINUDC4  DIM       3      3        97    User Defined 4 (category Vd)       
VSININTP  DIM       10     10       100   Interpreter (PMSHCPFD)             
VSINCONF  DIM       1      1        110   Interpreter Confirmed (0=No,1=Yes) 
VSINCHON  DIM       1      1        111   Chart Only 0=No 1=Yes
VSINSPAR  DIM       25     25       112   Spare Variable                     
.
.End of Record                      137  
.
.     The following field is stored in the spare variable
.
