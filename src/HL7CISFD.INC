. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7CISFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      HL7 CIS Broadcast Message Header File                *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7cisaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY20, KEY37, KEY40, KEY44                           *
. *                                                                           *
. *       Modifications:                                                      *
. *            V10.04.01 06/01/2014  Don Nguyen       CAR 294472              *
. *                      Increased record size and spare variable size.       *
. *                      Moved H7CIUSID, H7CIHOSP and H7CIUTIM out of spare.  *
. *            V10.03.02 30/06/2013  Davin S          CAR 279183              *
. *                      Added h7ciutim (Allref Update Time) to spare         *
. *            V10.03.01 02/04/2013  Davin            CAR 270648              *
. *                      Added H7CIUSID & H7CIHOSP to spare                   *
. *            V10.00.02 18/04/2011  Steve Armstrong  240692                  *
. *                      Added H7CIRTAG & H7CISTAG                            *
. *            V10.00.01 13/03/2010  Steve Armstrong  135505                  *
. *                      Add H7CITRID & HLCIINCL - Trigger identifier and     *
. *                      Program Include                                      *
. *            V9.05.B01 27/02/2006  Mike Laming   CAR 81335                  *
. *                      Add H7CIACTN - Action flag - A=Add, U=Update         *
. *            V9.04.00  01/09/2005  Davin                                    *
. *                      Created FD                                           *
. *                                                                           *
. *****************************************************************************
.
HL7CISA1  IFILE     SQL, FIXED=193, KEY="U1-20"
HL7CISA2  IFILE     SQL, FIXED=193, KEY="U21-21,22-37,1-20"
HL7CISA3  IFILE     SQL, FIXED=193, KEY="U21-21,55-70,1-20"
HL7CISA4  IFILE     SQL, FIXED=193, KEY="U38-40,21-21,22-37,1-20"
HL7CISA5  IFILE     SQL, FIXED=193, KEY="U71-78,22-37,1-20"
HL7CISA6  IFILE     SQL, FIXED=193, KEY="U79-86,22-37,1-20"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DH7CIMES  DIM     20         20           1       Message id
H7CISTAT  DIM      1          1          21       Status (W - Waiting,
.                                                         R - Rejected,
.                                                         D - Delivered)
H7CIDTTM  DIM     16         16          22       Date/Time (ccyymmddhh:mm:ss)
H7CIMETP  DIM      3          3          38       Message type
H7CIOPER  DIM      4          4          41       Operator id
H7CIPORT  DIM      2          2          45       Port
H7CIPGID  DIM      8          8          47       Program id
H7CIDDAT  DIM     16         16          55       Delivery Date/Time
.                                                     (ccyymmddhh:mm:ss)
H7CIURNO  DIM      8          8          71       U/R Number
H7CIVISN  DIM      8          8          79       Visit Number
H7CIACTN  DIM      1          1          87       Action (A-Add U-Update)
H7CITRID  FORM     4          3          88       Trigger Identifier
H7CIINCL  DIM      8          8          91       Trigger Program Include
H7CIRTAG  DIM     20         20          99       Receiving Application Tag
.                                                    (HL7REGEN)
H7CISTAG  DIM      3          3         119       Sending Facility Tag
.                                                    (HL7REGEN)
H7CIUSID  DIM     10         10         122       Web User ID
H7CIHOSP  DIM      3          3         132       Web User Hospital ID
H7CIUTIM  DIM      8          8         135       Allref Update Time (HH:MM:SS)
H7CISPAR  DIM     50         50         143       Spare
.
.End of Record                          193
.
.Stored in spare variable
.------------------------
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
H7CIMESI  FORM     20          1       Message id
