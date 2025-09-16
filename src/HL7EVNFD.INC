. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7EVNFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Event Type Segment                                   *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7evnaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7EVN01  IFILE     SQL, FIXED=267, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DEVNIN01  DIM     20         20           1       Message id
DEVNIN02  DIM      2          2          21       Counter
EVN001    DIM      3          3          23       Event type code
EVN002    DIM     26         26          26       Date/time of event
EVN003    DIM     26         26          52       Date/time plan event
EVN004    DIM      3          3          78       Event reason code
EVN005    DIM     60         60          81       Operator id
EVN006    DIM     26         26         141       Event occurred
EVN007    DIM    100        100         167       Spare
.
.End of Record                          267
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
EVNIN01   FORM     20          1       Message id
EVNIN02   FORM      2         21       Counter
