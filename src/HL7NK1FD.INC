. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7NK1FD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Next of Kin Segment                                  *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7nk1af.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7NK101  IFILE     SQL, FIXED=1242, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DNK1IN01  DIM     20         20           1       Message id
DNK1IN02  DIM      2          2          21       Counter
NK1001    DIM      4          4          23       Set id
NK1002    DIM     48         48          27       Name
NK1003    DIM     60         60          75       Relationship
NK1004    DIM    106        106         135       Address
NK1005    DIM     40         40         241       Phone no - home
NK1006    DIM     40         40         281       Phone no - business
NK1007    DIM     60         60         321       Contact role
NK1008    DIM     26         26         381       Start date
NK1009    DIM      8          8         407       End date
NK1010    DIM     60         60         415       Next of kin title
NK1011    DIM     20         20         475       Next of kin class
NK1012    DIM     20         20         495       Next of kin emp no
NK1013    DIM     60         60         515       Organisation name
NK1014    DIM      2          2         575       Marital status
NK1015    DIM      2          2         577       Sex
NK1016    DIM     26         26         579       Date/time of birth
NK1017    DIM      2          2         605       Living dependency
NK1018    DIM      2          2         607       Ambulatory status
NK1019    DIM      4          4         609       Citizenship
NK1020    DIM     60         60         613       Primary language
NK1021    DIM      2          2         673       Living arrangement
NK1022    DIM      2          2         675       Publicity indicator
NK1023    DIM      2          2         677       Protection indicator
NK1024    DIM      2          2         679       Student indicator
NK1025    DIM      3          3         681       Religion
NK1026    DIM     48         48         684       Mothers maiden name
NK1027    DIM     80         80         732       Nationality
NK1028    DIM      3          3         812       Ethnic group
NK1029    DIM     80         80         815       Contact reason
NK1030    DIM     48         48         895       Contact persons name
NK1031    DIM     40         40         943       Contact per tele no
NK1032    DIM    106        106         983       Contact person add
NK1033    DIM     32         32        1089       Next of kin identifiers
NK1034    DIM      2          2        1121       Job status
NK1035    DIM      1          1        1123       Race
NK1036    DIM      2          2        1124       Handicap
NK1037    DIM     16         16        1126       Con per social sec no
NK1038    DIM     100        100       1142       Spare
.
.End of Record                         1242
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
NK1IN01   FORM     20          1       Message id
NK1IN02   FORM      2         21       Counter
.
NK100201  DIM      30                  Surname
NK100202  DIM      30                  Given name
NK100203  DIM      30                  Middle name
NK100204  DIM       8                  Suffix
NK100205  DIM       8                  Prefix
NK100206  DIM       8                  Degree
NK100207  DIM       1                  Name type code
NK100208  DIM      26                  Date/time last updated
.
NK100401  DIM      30                  Address line 1
NK100402  DIM      30                  Address line 2
NK100403  DIM      30                  Address line 3
NK100404  DIM      25                  City
NK100405  DIM       8                  State
NK100406  DIM       6                  Postcode
NK100407  DIM       8                  Country
NK100408  DIM       1                  Address type
NK100409  DIM      26                  Date/time last updated
+
.


