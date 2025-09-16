. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7MRGFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Merge Patient Information Segment                    *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7mrgaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7MRG01  IFILE     SQL, FIXED=291, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DMRGIN01  DIM     20         20           1       Message id
DMRGIN02  DIM      2          2          21       Counter
MRG001    DIM     20         20          23       Prior pat id - Internal
MRG002    DIM     20         20          43       Prior alternate pat id
MRG003    DIM     20         20          63       Prior pat account no
MRG004    DIM     20         20          83       Prior pat id - External
MRG005    DIM     20         20         103       Prior visit number
MRG006    DIM     20         20         123       Prior alternate visit id
MRG007    DIM     48         48         143       Prior patient name
MRG008    DIM    100        100         191       Spare
.
.End of Record                          291
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
MRGIN01   FORM     20          1       Message id
MRGIN02   FORM      2         21       Counter
