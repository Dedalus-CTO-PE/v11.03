. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7ZPNFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Patient Name Segment                                 *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7zpnaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY29                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7ZPN01  IFILE     SQL, FIXED=272, KEY="U1-20,21-23,24-25,26-27,28-29"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DZPNIN01  DIM      20         20          1       Message id
ZPNIN02   DIM       3          3         21       Segment id
DZPNIN03  DIM       2          2         24       Segment counter
DZPNIN04  DIM       2          2         26       Sequence no
DZPNIN05  DIM       2          2         28       Counter
ZPN001    DIM      30         30         30       Surname
ZPN002    DIM      30         30         60       Given name
ZPN003    DIM      30         30         90       Middle name
ZPN004    DIM       8          8        120       Suffix
ZPN005    DIM       8          8        128       Prefix
ZPN006    DIM       8          8        136       Degree
ZPN007    DIM       2          2        144       Name type code
ZPN008    DIM      26         26        146       Date/time last updated
ZPN009    DIM     100        100        172       Spare
.
.End of Record                          272
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
ZPNIN01   FORM     20          1       Message id
ZPNIN03   FORM      2         24       Segment counter
ZPNIN04   FORM      2         26       Sequence no
ZPNIN05   FORM      2         28       Counter
