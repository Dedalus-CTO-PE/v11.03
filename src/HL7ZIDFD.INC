. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7ZIDFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Patient ID Extension Segment                         *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7zidaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7ZID01  IFILE     SQL, FIXED=230, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DZIDIN01  DIM      20         20          1       Message id
DZIDIN02  DIM       2          2         21       Counter
ZID001    DIM       2          2         23       Death flag
ZID002    DIM       2          2         25       Interpreter flag
ZID003    DIM       2          2         27       Employed flag
ZID004    DIM      26         26         29       Date death notified
ZID005    DIM      20         20         55       Death source
ZID006    DIM       8          8         75       Occupation code
ZID007    DIM       8          8         83       Education code
ZID008    DIM       5          5         91       Area code
ZID009    DIM       2          2         96       Consolidation status
ZID010    DIM       6          6         98       Total consolidations
ZID011    DIM      26         26        104       Date/time updated
ZID012    DIM     100        100        130       Spare
.
.End of Record                          230
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
ZIDIN01   FORM     20          1       Message id
ZIDIN02   FORM      2         21       Segment counter
