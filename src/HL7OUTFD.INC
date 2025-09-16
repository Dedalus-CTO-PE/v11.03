. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7OUTFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      HL7 Outbound File                                    *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7outaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY20                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7OUT01  IFILE     SQL, FIXED=90, KEY="U1-20"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DH7OUMES  DIM     20         20           1       Message id
H7OUDTTM  DIM     16         16          21       Date/Time (ccyymmddhh:mm:ss)
H7OUMETP  DIM      3          3          37       Message type
H7OUSPAR  DIM     50         50          40       Spare
.
.End of Record                           90
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
H7OUMESI  FORM     20          1       Message id
