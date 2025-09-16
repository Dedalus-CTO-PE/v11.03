. *----------------------------------------------------------------------
. * Include Name  :   PMSNDBTD.INC
. *
. * Function      :   CGI variables for PMSNDBTD - pmsndbaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V11.03.02  10/10/2023  Peter Vela    Task 0935874
.             Added NIHC Path URL, Patient Summary URL, MyHR Viewer URL
.  V11.03.01  31/08/2023  Peter Vela    Task 0935874
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Start Description
.----     ----      ------ ----- -----------
PMNDB001  DIM       50     1     NIHC IHI Device Name
PMNDB002  DIM       100    51    NIHC IHI Device Description
PMNDB003  DIM       50     151   JKS Generation Date (Info Only)
PMNDB004  DIM       500    201   NIHC IHI Device Directory Path
PMNDB005  DIM       3      701   Hospital ID
PMNDB006  DIM       50     704   JKS Expiration Date (Info Only)
PMNDB007  DIM       255    754   NIHC Path URL
PMNDB008  DIM       255    1009  NIHC Patient Summary Page URL
PMNDB009  DIM       255    1264  NIHC MyHR Viewer URL
