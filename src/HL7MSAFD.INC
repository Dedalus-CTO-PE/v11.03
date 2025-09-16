. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7MSAFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Message Acknowledgment Segment                       *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7msaaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7MSA01  IFILE     SQL, FIXED=342, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DMSAIN01  DIM     20         20           1       Message id
DMSAIN02  DIM      2          2          21       Counter
MSA001    DIM      2          2          23       Acknowledgemt code
MSA002    DIM     20         20          25       Message control id
MSA003    DIM     80         80          45       Text message
MSA004    DIM     15         15         125       Expected sequence no
MSA005    DIM      2          2         140       Delayed acknow type
MSA006    DIM    100        100         142       Error condition
MSA007    DIM    100        100         242       Spare
.
.End of Record                          342
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
MSAIN01   FORM     20          1       Message id
MSAIN02   FORM      2         21       Counter
