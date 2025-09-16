. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7MSHFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Message Header Segment                               *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7mshaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7MSH01  IFILE     SQL, FIXED=1008, KEY="U1-20,21-22"
.
HL7FLFMT  FILE      HL7, FIXED=256
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DMSHIN01  DIM     20         20           1       Message id
DMSHIN02  DIM      2          2          21       Counter
MSH001    DIM      2          2          23       Field separator
MSH002    DIM      4          4          25       Encoding characters
MSH003    DIM    127        127          29       Sending application
MSH004    DIM    127        127         156       Sending facility
MSH005    DIM    127        127         283       Receiving application
MSH006    DIM    127        127         410       Receiving facility
MSH007    DIM     26         26         537       Date/time of message
MSH008    DIM     40         40         563       Security
MSH009    DIM      7          7         603       Message type
MSH010    DIM     20         20         610       Message control id
MSH011    DIM      3          3         630       Processing id
MSH012    DIM      8          8         633       Version id
MSH013    DIM     15         15         641       Sequence number
MSH01401  DIM     90         90         656       Continue pointer 1
MSH01402  DIM     90         90         746       Continue pointer 2
MSH015    DIM      2          2         836       Accept acknow type
MSH016    DIM      2          2         838       Appli acknow type
MSH017    DIM      2          2         840       Country code
MSH018    DIM      6          6         842       Character set
MSH019    DIM     60         60         848       Princ lang of message
MSH020    DIM    100        100         908       Spare
.
.End of Record                         1008
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
MSHIN01   FORM     20          1       Message id
MSHIN02   FORM      2         21       Counter
.
MSH00301  DIM      10                  Sending application id
MSH00302  DIM      50                  Sending application name
MSH00303  DIM      10                  Sending application type
.
MSH00401  DIM       1                  Name space id
MSH00402  DIM     120                  Universal id
MSH00403  DIM       1                  Universal type
.
MSH00501  DIM      10                  Receiving application id
MSH00502  DIM      50                  Receiving application name
MSH00503  DIM      10                  Receiving application type
.
MSH00901  DIM       7                  Message type
MSH00902  DIM       7                  Trigger event
.
MSH014    DIM     127                  Continue pointer
