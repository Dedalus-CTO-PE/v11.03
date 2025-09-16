. *****************************************************************************
. *                                                                           *
. *       Include Name : PAT1XOFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      ICD10 Edition 10 Operation                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : pat10oxf.dat                                         *
. *                                                                           *
. *       Keys         : KEY9  KEY79  KEY13                                   *
. *                                                                           *
. *       Modifications:                                                      *
. *      V10.10.00  06/03/2017  Davin            TSK 0833093                  *
. *                 Created ICD10 Ed.10 Operat. FD(defines DPT0OVXC, PT0OVXCD)*
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATI1XO1  IFILE     SQL, FIXED=400, KEY="U1-9"
PATI1XO2  IFILE     SQL, FIXED=400, KEY="U10-79,1-9"
PATI1XO3  IFILE     SQL, FIXED=400, KEY="U81-84,1-9"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
.OPCODE   DIM       9        9          1      ICD10 operation code
.ODESC    DIM      70       70         10      ICD10 operation description
.OFLAG    DIM       1        1         80      Validity of code
.                                               P - Valid/posting record
.                                               H - Not valid/header record
.PT0OBLKN DIM       4        4         81      Block number
.OAGEGP   DIM       1        1         85      Age group edit
.                                                 - No restraint
.                                               1 - Reject if within month range
.                                               2 - Warn if within month range
.                                               3 - Reject if within year range
.                                               4 - Warn if within year range
.                                               5 - Reject if outside year range
.                                               6 - Warn if outside year range
.                                               7 - Reject if outside month rang
.                                               8 - Warn if outside month range
.                                               9 - Reject if within day range
.                                               A - Warn if within day range
.                                               B - Reject if outside day range
.                                               C - Warn if outside day range
PTXOALL1  FORM      3        3         86      1st Age low limit
PTXOAHL1  FORM      3        3         89      1st Age high limit
.PT0O2AGP DIM       1        1         92      2nd age group edit
.                                                 - No restraint
.                                               1 - Reject if within month range
.                                               2 - Warn if within month range
.                                               3 - Reject if within year range
.                                               4 - Warn if within year range
.                                               5 - Reject if outside year range
.                                               6 - Warn if outside year range
.                                               7 - Reject if outside month rang
.                                               8 - Warn if outside month range
.                                               9 - Reject if within day range
.                                               A - Warn if within day range
.                                               B - Reject if outside day range
.                                               C - Warn if outside day range
PTXOALL2  FORM      3        3         93      2nd age low limit
PTXOAHL2  FORM      3        3         96      2nd age high limit
.OSEX     DIM       1        1         99      Sex edit
.                                                 - No restraint
.                                               1 - Reject if male
.                                               2 - Warn if male
.                                               3 - Reject if female
.                                               4 - Warn if female
.                                               5 - Reject if female / 
.                                                   No Explanation Code
.                                               6 - Reject if male/No Expl Code
.PT0OADTP DIM       1        1        100      Asterisk/dagger type
.                                                 - Not an asterisk/dagger code
.                                               A - Asterisk code
.                                               D - Dagger code
.PT0OSACD DIM       9        9        101      Suggested asterisk code
.ODAGGER  DIM       1        1        110      Dagger & asterisk edit
.                                                 - No restraint
.                                               1 - Reject if no following
.                                                   asterisk code
.                                               2 - Warn if no following
.                                                   asterisk code
.                                               3 - Reject if no preceding
.                                                   dagger code
.OAREA    DIM       1        1        111      Area edit
.                                                 - No restraint
.                                               1 - Reject if code found
.                                               2 - Warn if code found
.                                               3 - Reject if Care Type not 10 
.                                                 (Posthumous Organ Procurement)
.PT0OMI9C DIM       9        9        112      Mapped ICD9 operation code
.DPT0OCMF DIM       2        2        121      Complex mappings format
.                                               0 - No complex mappings
.                                               1 - Obstetrics (ICD)
.                                               2 - Head injuries (ICD)
.                                               3 - Tendon injuries (ICD)
.                                               4 - Pacemakers (ICO)
.                                               5 - Social induction (ICD & ICO)
.                                               6 - Medical augment (ICO & ICD)
.                                               7 - 2-3 Maps (ICO)
.                                               8 - 2-3 Maps (ICD)
.DPT0OV1C DIM       1        1        123      Valid ICD10 version 1 code
.                                               0 - No, 1 - Yes
.DPT0OV2C DIM       1        1        124      Valid ICD10 version 2 code
.                                               0 - No, 1 - Yes
.PT0OV1MP DIM       9        9        125      ICD10 version 1 map code (only
.                                              if a valid ICD10 version 2 code)
.DPT0OV3C DIM       1        1        134      Valid ICD10 version 3 code
.                                               0 - No, 1 - Yes
.PT0OV2MP DIM       9        9        135      ICD10 version 2 map code (only
.                                              if a valid ICD10 version 3 code)
.PT0OSLVL DIM       1        1        144      Significance level
.DPT0OV4C DIM       1        1        145      Valid ICD10 version 4 code
.                                               0 - No, 1 - Yes
.DPT0OV5C DIM       1        1        146      Valid ICD10 version 5 code
.                                               0 - No, 1 - Yes
.PT0ODTMN DIM       1        1        147      Date/Time of Proc Non-Mandatory
.                                               0 - No, 1 - Yes
.DPT0OV6C DIM       1        1        148      Valid ICD10 version 6 code
.                                               0 - No, 1 - Yes
.PT0ODSC2 DIM       200      200      149      200 char Description
.DPT0OV7C DIM       1        1        349      Valid ICD10 version 7 code
.                                               0 - No, 1 - Yes
.DPT0OV8C DIM       1        1        350      Valid ICD10 version 8 code
.                                               0 - No, 1 - Yes
.DPT0OV9C DIM       1        1        351      Valid ICD10 version 9 code
.                                               0 - No, 1 - Yes
DPT0OVXC  DIM       1        1        352      Valid ICD10 version 10 code
.                                               0 - No, 1 - Yes
PT0OSPR8  DIM       47       47       353      Spare variable
.
.End of Record                        400
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
.PT0OCMFT  FORM      2         117      Complex mappings format
.PT0OV1CD  FORM      1         119      Valid ICD10 version 1 code
.PT0OV2CD  FORM      1         120      Valid ICD10 version 2 code
.PT0OV3CD  FORM      1         130      Valid ICD10 version 3 code
.PT0OV4CD  FORM      1         141      Valid ICD10 version 4 code
.PT0OV5CD  FORM      1         142      Valid ICD10 version 5 code
.PT0OV6CD  FORM      1         144      Valid ICD10 Edition 6 code
.PT0OV7CD  FORM      1         345      Valid ICD10 Edition 7 code
.PT0OV8CD  FORM      1         346      Valid ICD10 Edition 8 code
.PT0OV9CD  FORM      1         347      Valid ICD10 Edition 9 code
PT0OVXCD   FORM      1         352      Valid ICD10 Edition 10 code
.
.Save Variables
.--------------
.SPT0O2AG  DIM       1                  * 2nd age group edit
.SPT0O2AL  FORM      2                  * 2nd age low limit
.SPT0O2AH  FORM      2                  * 2nd age high limit
.SPT0OMI9  DIM       9                  * Mapped ICD9 code
.SPT0OBLK  DIM       4                  * Block number
.SPT0OCMF  FORM      2                  * Complex mappings format
.
.Xtra Variables
.--------------
.OPICDDTE  DIM       8
+
.

