. *----------------------------------------------------------------------
. * Include Name  :   TMPRESFD.INC
. *
. * Function      :   4 temp files to copy Clinical Results files data into
. *                   during HL7ORUMS & HL7MDORU. The files are -
. *
. *                    Results Header Notes       "tmphebaf.dat"
. *                    Results Details            "tmpdeaaf.dat"
. *                    Results Detail Notes       "tmpdebaf.dat"
. *                    Results Detail Notes (NTE) "tmpdecaf.dat"
. *
. * File Type     :   SQL
. *
. * File Name     :   (see above) 
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPHEBA1   IFILE    SQL, FIXED=158, KEY="U1-8,9-13,14-17,18-20"
.
BLDHEBA1  INIT      " tmphebaf 158 U1-8,9-13,14-17,18-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TPHBRDT   DIM       8      8        1     Result Date
TPHBRTM   DIM       5      5        9     Result Time
TPHBRUN   DIM       4      4        14    Result Unique ID
TPHBLIN   DIM       3      3        18    Line Number
TPHBTXT   DIM       127    127      21    Text
TPHBSPA   DIM       10     10       148   Spare
.
.End of Record                      158
.
.
.
.Data File Definition
.--------------------
TMPDEAA1  IFILE    SQL, FIXED=365, KEY="U1-8,9-13,14-17,18-21"
.
BLDDEAA1  INIT      " tmpdeaaf 365 U1-8,9-13,14-17,18-21"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TPDARDT   DIM       8      8        1     Result Date
TPDARTM   DIM       5      5        9     Result Time
TPDARUN   DIM       4      4        14    Result Unique ID
TPDASID   DIM       4      4        18    Set ID
TPDAPID   DIM       16     16       22    Patient ID
TPDAVTY   DIM       2      2        38    Value Type
TPDAOTY   DIM       12     12       40    Observation Type          OBX-03
TPDAOCS   DIM       12     12       52    Observation Coding Scheme OBX-03
TPDAOSC   DIM       10     10       64    Observation Sub ID Code
TPDAOSD   DIM       20     20       74    Observation Sub Description
TPDAVST   DIM       127    127      94    Value String
TPDAVNM   FORM      10.4   8        221   Value Numeric
TPDAUNI   DIM       20     20       229   Unit
TPDARFR   DIM       20     20       249   Reference Range
TPDAABF   DIM       5      5        269   Abnormal Flag
TPDAPRB   FORM      4.2    4        274   Probability
TPDANAT   DIM       2      2        278   Nature of Abnormal Test
TPDASTA   DIM       1      1        280   Result Status
TPDATFL   DIM       1      1        281   Text Flag 0=No Text 1=Text
TPDAODT   DIM       8      8        282   Date of Observation
TPDAOTM   DIM       5      5        290   Time of Observation
TPDAPER   DIM       25     25       295   Performer ID & Name
TPDAROB   DIM       25     25       320   Responsible Observer
TPDASPA   DIM       20     20       345   Spare
.
.End of Record                      365
.
.
.
.Data File Definition
.--------------------
TMPDEBA1   IFILE    SQL, FIXED=162, KEY="U1-8,9-13,14-17,18-21,22-24"
.
BLDDEBA1  INIT      " tmpdebaf 162 U1-8,9-13,14-17,18-21,22-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TPDBRDT   DIM       8      8        1     Result Date
TPDBRTM   DIM       5      5        9     Result Time
TPDBRUN   DIM       4      4        14    Result Unique ID
TPDBSID   DIM       4      4        18    Set ID
TPDBLNO   DIM       3      3        22    Line Number
TPDBTXT   DIM       127    127      25    Text
TPDBSPA   DIM       10     10       152   Spare
.
.End of Record                      162
.
.
.
.Data File Definition
.--------------------
TMPDECA1   IFILE    SQL, FIXED=162, KEY="U1-8,9-13,14-17,18-21,22-24"
.
BLDDECA1  INIT      " tmpdecaf 162 U1-8,9-13,14-17,18-21,22-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TPDCRDT   DIM       8      8        1     Result Date
TPDCRTM   DIM       5      5        9     Result Time
TPDCRUN   DIM       4      4        14    Result Unique ID
TPDCSID   DIM       4      4        18    Set ID
TPDCLNO   DIM       3      3        22    Line Number
TPDCTXT   DIM       127    127      25    Text
TPDCSPA   DIM       10     10       152   Spare
.
.End of Record                      162
