. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7PIDFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Patient Identification Segment                       *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7pidaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *       05/07/2011  Steve Armstrong   CAR 240722                            *
. *                   Mods to cater for changes to PATGSRFD:                  *
. *                    - Extended length of PID00501 & PID00502.              *
. *****************************************************************************
.
HL7PID01  IFILE     SQL, FIXED=936, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DPIDIN01  DIM      20         20          1       Message id
DPIDIN02  DIM       2          2         21       Counter
PID001    DIM       4          4         23       Set id
PID002    DIM      20         20         27       Pat id (External id)
PID003    DIM      20         20         47       Pat id (Internal id)
PID004    DIM      20         20         67       Alternate patient id
PID005    DIM      48         48         87       Patient name
PID006    DIM      48         48        135       Mothers maiden name
PID007    DIM      26         26        183       Date/time of birth
PID008    DIM       2          2        209       Sex
PID009    DIM      48         48        211       Patient alias
PID010    DIM       2          2        259       Race
PID011    DIM     106        106        261       Patient address
PID012    DIM       4          4        367       Country code
PID013    DIM      40         40        371       Phone no - home
PID014    DIM      40         40        411       Phone no - business
PID015    DIM      60         60        451       Primary language
PID016    DIM       2          2        511       Marital status
PID017    DIM       3          3        513       Religion
PID018    DIM      20         20        516       Patient account no
PID019    DIM      16         16        536       SSN no - Patient
PID020    DIM      25         25        552       Drivers licence no
PID021    DIM      20         20        577       Mothers identifier
PID022    DIM       3          3        597       Ethnic Group
PID023    DIM      60         60        600       Birth place
PID024    DIM       2          2        660       Multiple birth indic
PID025    DIM       2          2        662       Birth order
PID026    DIM       4          4        664       Citizenship
PID027    DIM      60         60        668       Veteran military stat
PID028    DIM      80         80        728       Nationality
PID029    DIM      26         26        808       Pat death date/time
PID030    DIM       2          2        834       Pat death indicator
PID031    DIM     100        100        836       Spare
.
.End of Record                          936
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
PIDIN01   FORM     20          1       Message id
PIDIN02   FORM      2         21       Counter
.
PID00201  DIM      16                  Patient id (External id)
PID00301  DIM      16                  Patient id (Internal id)
PID00401  DIM      16                  Alternate patient id - PID
.
PID00501  DIM      40                  Family name
PID00502  DIM      40                  Given name
PID00503  DIM       1                  Initial
PID00504  DIM       1                  Suffix
PID00505  DIM       9                  Prefix
.
PID00506  DIM      30                  Surname
PID00507  DIM      30                  Given name
PID00508  DIM      30                  Middle name
PID00509  DIM       8                  Suffix
PID00510  DIM       8                  Prefix
PID00511  DIM       8                  Degree
PID00512  DIM       1                  Name type code
PID00513  DIM      26                  Date/time last updated
.
PID00701  DIM       8                  Date of birth
.
PID00901  DIM      30                  Surname
PID00902  DIM      30                  Given name
PID00903  DIM      30                  Middle name
PID00904  DIM       8                  Suffix
PID00905  DIM       8                  Prefix
PID00906  DIM       8                  Degree
PID00907  DIM       1                  Name type code
PID00908  DIM      26                  Date/time last updated
.
PID01101  DIM      35                  Address line 1
PID01102  DIM      30                  Address line 2
PID01103  DIM      30                  Address line 3
PID01104  DIM       7                  Address line 4
PID01105  DIM       4                  Postcode
.
PID01106  DIM      30                  Address line 1
PID01107  DIM      30                  Address line 2
PID01108  DIM      30                  Address line 3
PID01109  DIM      25                  City
PID01110  DIM       8                  State
PID01111  DIM       6                  Postcode
PID01112  DIM       8                  Country 
PID01113  DIM       1                  Address type
PID01114  DIM      26                  Date/time last updated
+
.

