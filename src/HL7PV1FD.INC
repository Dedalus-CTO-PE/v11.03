. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7PV1FD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Patient Visit Segment                                *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7pv1af.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7PV101  IFILE     SQL, FIXED=1182, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DPV1IN01  DIM      20         20          1       Message id
DPV1IN02  DIM       2          2         21       Counter
PV1001    DIM       4          4         23       Set id
PV1002    DIM       2          2         27       Patient class
PV1003    DIM      80         80         29       Assigned pat location
PV1004    DIM       2          2        109       Admission type
PV1005    DIM      20         20        111       Preadmit number
PV1006    DIM      80         80        131       Prior patient location
PV1007    DIM      60         60        211       Attending doctor
PV1008    DIM      60         60        271       Referring doctor
PV1009    DIM      60         60        331       Consulting doctor
PV1010    DIM       3          3        391       Hospital service
PV1011    DIM      80         80        394       Temporary location
PV1012    DIM       2          2        474       Preadmit test ind
PV1013    DIM       2          2        476       Readmission ind
PV1014    DIM       3          3        478       Admit source
PV1015    DIM       2          2        481       Ambulatory status
PV1016    DIM       2          2        483       VIP indicator
PV1017    DIM      60         60        485       Admitting doctor
PV1018    DIM       2          2        545       Patient type
PV1019    DIM      20         20        547       Visit number
PV1020    DIM      50         50        567       Financial class
PV1021    DIM       2          2        617       Charge price ind
PV1022    DIM       2          2        619       Courtesy code
PV1023    DIM       2          2        621       Credit rating
PV1024    DIM       2          2        623       Contract code
PV1025    DIM       8          8        625       Contract effect date
PV1026    DIM      12         12        633       Contract amount
PV1027    DIM       3          3        645       Contract period
PV1028    DIM       2          2        648       Interest code
PV1029    DIM       2          2        650       Trans bad debt code
PV1030    DIM       8          8        652       Trans bad debt date
PV1031    DIM      10         10        660       Bad debt agency code
PV1032    DIM      12         12        670       Bad debt trans amt
PV1033    DIM      12         12        682       Bad debt reco amt
PV1034    DIM       2          2        694       Delete account ind
PV1035    DIM       8          8        696       Delete account date
PV1036    DIM       3          3        704       Discharge disposition
PV1037    DIM      25         25        707       Disch to location
PV1038    DIM       2          2        732       Diet type
PV1039    DIM       2          2        734       Servicing facility
PV1040    DIM       2          2        736       Bed status
PV1041    DIM       2          2        738       Account status
PV1042    DIM      80         80        740       Pending location
PV1043    DIM      80         80        820       Prior temporary loca
PV1044    DIM      26         26        900       Admit date/time
PV1045    DIM      26         26        926       Discharge date/time
PV1046    DIM      12         12        952       Current pat balance
PV1047    DIM      12         12        964       Total charges
PV1048    DIM      12         12        976       Total adjustments
PV1049    DIM      12         12        988       Total payments
PV1050    DIM      20         20       1000       Alternate visit id
PV1051    DIM       2          2       1020       Visit indicator
PV1052    DIM      60         60       1022       Other healthcare pro
PV1053    DIM     100        100       1082       Spare
.
.End of Record                         1182
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
PV1IN01   FORM     20          1       Message id
PV1IN02   FORM      2         21       Counter
.
PV100301  DIM      20                  Point of care
PV100302  DIM       3                  Ward
PV100303  DIM       3                  Bed
.
PV100601  DIM       6                  Point of care
PV100602  DIM       6                  Ward
PV100603  DIM       6                  Bed
.
PV100701  DIM       6                  Attending doctor code
PV100702  DIM      20                  Attending doctor surname
PV100703  DIM      25                  Attending doctor given name
PV100704  DIM       1                  Attending doctor initial
PV100705  DIM       1                  Attending doctor suffix
PV100706  DIM       7                  Attending doctor prefix
.
PV100801  DIM       6                  Referring doctor code
PV100802  DIM      20                  Referring doctor surname
PV100803  DIM      25                  Referring doctor given name
PV100804  DIM       1                  Referring doctor initial
PV100805  DIM       1                  Referring doctor suffix
PV100806  DIM       7                  Referring doctor prefix
.
PV100901  DIM       6                  Consulting doctor code
PV100902  DIM      20                  Consulting doctor surname
PV100903  DIM      25                  Consulting doctor given name
PV100904  DIM       1                  Consulting doctor initial
PV100905  DIM       1                  Consulting doctor suffix
PV100906  DIM       7                  Consulting doctor prefix
