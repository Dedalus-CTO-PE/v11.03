. *****************************************************************************
. *                                                                           *
. *       Include Name : PAT15OFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      ICD10 Edition 5 Operation                            *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : pat10o5f.dat                                         *
. *                                                                           *
. *       Keys         : KEY9  KEY79  KEY13                                   *
. *                                                                           *
. *       Modifications:                                                      *
. *       V9.06.00  08/05/2006  Mike Laming      CAR 105244                   *
. *                 Created FD. (includes PT0OV5CD)                           *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATI15O1  IFILE     SQL, FIXED=150, KEY="U1-9"
PATI15O2  IFILE     SQL, FIXED=150, KEY="U10-79,1-9"
PATI15O3  IFILE     SQL, FIXED=150, KEY="U81-84,1-9"
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
.OLOW     FORM      2        2         86      Age low limit
.OHIGH    FORM      2        2         88      Age high limit
.PT0O2AGP DIM       1        1         90      2nd age group edit
.                                                 - No restraint
.                                               1 - Reject if within month range
.                                               2 - Warn if within month range
.                                               3 - Reject if within year range
.                                               4 - Warn if within year range
.                                               5 - Reject if outside year range
.                                               6 - Warn if outside year range
.                                               7 - Reject if outside month rang
.                                               8 - Warn if outside month range
.PT0O2ALL FORM      2        2         91      2nd age low limit
.PT0O2AHL FORM      2        2         93      2nd age high limit
.OSEX     DIM       1        1         95      Sex edit
.                                                 - No restraint
.                                               1 - Reject if male
.                                               2 - Warn if male
.                                               3 - Reject if female
.                                               4 - Warn if female
.                                               5 - Reject if female / 
.                                                   No Explanation Code
.                                               6 - Reject if male/No Expl Code
.PT0OADTP DIM       1        1         96      Asterisk/dagger type
.                                                 - Not an asterisk/dagger code
.                                               A - Asterisk code
.                                               D - Dagger code
.PT0OSACD DIM       9        9         97      Suggested asterisk code
.ODAGGER  DIM       1        1        106      Dagger & asterisk edit
.                                                 - No restraint
.                                               1 - Reject if no following
.                                                   asterisk code
.                                               2 - Warn if no following
.                                                   asterisk code
.                                               3 - Reject if no preceding
.                                                   dagger code
.OAREA    DIM       1        1        107      Area edit
.                                                 - No restraint
.                                               1 - Reject if code found
.                                               2 - Warn if code found
.PT0OMI9C DIM       9        9        108      Mapped ICD9 operation code
.DPT0OCMF DIM       2        2        117      Complex mappings format
.                                               0 - No complex mappings
.                                               1 - Obstetrics (ICD)
.                                               2 - Head injuries (ICD)
.                                               3 - Tendon injuries (ICD)
.                                               4 - Pacemakers (ICO)
.                                               5 - Social induction (ICD & ICO)
.                                               6 - Medical augment (ICO & ICD)
.                                               7 - 2-3 Maps (ICO)
.                                               8 - 2-3 Maps (ICD)
.DPT0OV1C DIM       1        1        119      Valid ICD10 version 1 code
.                                               0 - No, 1 - Yes
.DPT0OV2C DIM       1        1        120      Valid ICD10 version 2 code
.                                               0 - No, 1 - Yes
.PT0OV1MP DIM       9        9        121      ICD10 version 1 map code (only
.                                              if a valid ICD10 version 2 code)
.DPT0OV3C DIM       1        1        130      Valid ICD10 version 3 code
.                                               0 - No, 1 - Yes
.PT0OV2MP DIM       9        9        131      ICD10 version 2 map code (only
.                                              if a valid ICD10 version 3 code)
.PT0OSLVL DIM       1        1        140      Significance level
.DPT0OV4C DIM       1        1        141      Valid ICD10 version 4 code
.                                               0 - No, 1 - Yes
DPT0OV5C  DIM       1        1        142      Valid ICD10 version 5 code
.                                               0 - No, 1 - Yes
PT0ODTMN  DIM       1        1        143      Date/Time of Proc Non-Mandatory
.                                               0 - No, 1 - Yes
PT0OSPR3  DIM       6        6        144      Spare variable
.
.End of Record                        150
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
PT0OV5CD   FORM      1         142      Valid ICD10 version 5 code
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

