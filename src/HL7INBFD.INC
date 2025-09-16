. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7INBFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      HL7 Inbound File                                     *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7inbaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY20, KEY37                                         *
. *                                                                           *
. *       Modifications:                                                      *
. *                      09/12/2004  Steve Armstrong   CAR 59004              *
. *                                  Added HL7INB04.                          *
. *                      04/12/2001  Steve Armstrong    RCH Store & Forward   *
. *                                  Added H7INDDAT and HL7INB03.             *
. *                                  Also added new status of "D - Delivered".*
. *                                                                           *
. *****************************************************************************
.
HL7INB01  IFILE     SQL, FIXED=105, KEY="U1-20"
HL7INB02  IFILE     SQL, FIXED=105, KEY="U21-21,22-37,1-20"
HL7INB03  IFILE     SQL, FIXED=105, KEY="U21-21,55-70,1-20"
HL7INB04  IFILE     SQL, FIXED=105, KEY="U38-40,21-21,22-37,1-20"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DH7INMES  DIM     20         20           1       Message id
H7INSTAT  DIM      1          1          21       Status (T - to be processed,
.                                                         R - Rejected,
.                                                         D - Delivered)
H7INDTTM  DIM     16         16          22       Date/Time (ccyymmddhh:mm:ss)
H7INMETP  DIM      3          3          38       Message type
H7INOPER  DIM      4          4          41       Operator id
H7INPORT  DIM      2          2          45       Port
H7INPGID  DIM      8          8          47       Program id
H7INDDAT  DIM     16         16          55       Delivery Date/Time
.                                                     (ccyymmddhh:mm:ss)
H7INSPAR  DIM     34         34          71       Spare
.
.End of Record                          105
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
H7INMESI  FORM     20          1       Message id
