. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7QRDFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Query Definition Segment                             *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7qrdaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7QRD01  IFILE     SQL, FIXED=403, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DQRDIN01  DIM      20         20          1       Message id
DQRDIN02  DIM       2          2         21       Counter
QRD001    DIM      26         26         23       Query date/time
QRD002    DIM       2          2         49       Query format code
QRD003    DIM       2          2         51       Query priority
QRD004    DIM      10         10         53       Query id
QRD005    DIM       2          2         63       Deferd response type
QRD006    DIM      26         26         65       Deferd response date
QRD007    DIM      10         10         91       Quantity limit request
QRD008    DIM      60         60        101       Who subject filter
QRD009    DIM      60         60        161       What subject filter
QRD010    DIM      60         60        221       What department data
QRD011    DIM      20         20        281       What data code val
QRD012    DIM       2          2        301       Query results level
QRD013    DIM     100        100        303       Spare
.
.End of Record                          403
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
QRDIN01   FORM     20          1       Message id
QRDIN02   FORM      2         21       Counter
