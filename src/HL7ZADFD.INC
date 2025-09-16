. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7ZADFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Patient Address Segment                              *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7zadaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY29                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7ZAD01  IFILE     SQL, FIXED=295, KEY="U1-20,21-23,24-25,26-27,28-29"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DZADIN01  DIM      20         20          1       Message id
ZADIN02   DIM       3          3         21       Segment id
DZADIN03  DIM       2          2         24       Segment counter
DZADIN04  DIM       2          2         26       Sequence no
DZADIN05  DIM       2          2         28       Counter
ZAD001    DIM      30         30         30       Address line 1
ZAD002    DIM      30         30         60       Address line 2
ZAD003    DIM      30         30         90       Address line 3
ZAD004    DIM      25         25        120       City
ZAD005    DIM       8          8        145       State
ZAD006    DIM       6          6        153       Postcode
ZAD007    DIM       8          8        159       Country
ZAD008    DIM       2          2        167       Address type
ZAD009    DIM      26         26        169       Date/time last updated
ZAD010    DIM     100        100        195       Spare
.
.End of Record                          295
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
ZADIN01   FORM     20          1       Message id
ZADIN03   FORM      2         26       Segment counter
ZADIN04   FORM      2         28       Sequence no
ZADIN05   FORM      2         30       Counter
