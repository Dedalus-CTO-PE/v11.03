. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7RECFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      HL7 Received Message Header File                     *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7recaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY20, KEY37, KEY44                                  *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7RECA1  IFILE     SQL, FIXED=90, KEY="U1-20"
HL7RECA2  IFILE     SQL, FIXED=90, KEY="U21-21,22-37,1-20"
HL7RECA3  IFILE     SQL, FIXED=90, KEY="U45-52,22-37,1-20"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DH7REMES  DIM     20         20           1       Message id
H7RESTAT  DIM      1          1          21       Status (R - Received,
.                                                         P - Processed ok,
.                                                         E - Error processing)
H7REDTTM  DIM     16         16          22       Date/Time (ccyymmddhh:mm:ss)
H7REMTYP  DIM      7          7          38       Message type
H7REURNO  DIM      8          8          45       U/R Number
H7REDTPR  DIM     16         16          53       Date/Time processed
H7RESPAR  DIM     21         21          69       Spare
.
.End of Record                           90
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
H7REMESI  FORM     20          1       Message id
