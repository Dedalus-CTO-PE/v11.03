. *****************************************************************************
. *                                                                           *
. *       Include Name : PAT1XDFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      ICD10 Edition 10 Disease                             *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : pat10dxf.dat                                         *
. *                                                                           *
. *       Keys         : KEY9  KEY79                                          *
. *                                                                           *
. *       Modifications:                                                      *
. *      V10.14.00  13/02/2019  Ebon Clements    TSK 0862664                  *
. *                 Added PTODMETH (defines PTODMETH)                         *
. *      V10.10.00  06/03/2017  Davin            TSK 0833093                  *
. *                 Created ICD10 Ed.10 Disease FD(defines DPT0DVXC, PT0DVXCD)*
. *                                                                           *
. *****************************************************************************
.
PATI1XD1  IFILE     SQL, FIXED=400, KEY="U1-9"
PATI1XD2  IFILE     SQL, FIXED=400, KEY="U10-79,1-9"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
.DPCODE   DIM       9        9          1      ICD10 disease code
.DDESC    DIM      70       70         10      ICD10 disease description
.DFLAG    DIM       1        1         80      Validity of code
.                                               P - Valid/posting record
.                                               H - Not valid/header record
.DAGEGP   DIM       1        1         81      Age group edit
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
PTXDALL1  FORM      3        3         82      1st Age low limit
PTXDAHL1  FORM      3        3         85      1st Age high limit
.PT0D2AGP DIM       1        1         88      2nd age group edit
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
PTXDALL2  FORM      3        3         89      2nd age low limit
PTXDAHL2  FORM      3        3         92      2nd age high limit
.DSEX     DIM       1        1         95      Sex edit
.                                                 - No restraint
.                                               1 - Reject if male
.                                               2 - Warn if male
.                                               3 - Reject if female
.                                               4 - Warn if female
.                                               5 - Reject if female /
.                                                   No Explanation Code
.                                               6 - Reject if male/No Expl Code
.PT0DADTP DIM       1        1         96      Asterisk/dagger type
.                                                 - Not an asterisk/dagger code
.                                               A - Asterisk code
.                                               D - Dagger code
.PT0DPRFX DIM       2        2         97      Diagnosis Code Prefix
.                                                 - No restraint
.                                               1 - Notify if A
.                                               2 - Notify if C
.                                               3 - Notify if P
.                                               4 - Notify if A or C
.                                               5 - Notify if P or C
.                                               6 - Warn if A
.                                               7 - Warn if C
.                                               8 - Warn if P
.                                               9 - Warn if A or C
.                                               10- Warn if P or C
.                                               11- Notify if C, Warn if P
.                                               12- Warn if A,Notify if C
.                                               13- Notify if A, Warn if C
.PT0DSAC2 DIM       7        7         99      Suggested asterisk code
.DDAGGER  DIM       1        1        106      Dagger & asterisk edit
.                                                 - No restraint
.                                               1 - Reject if no following
.                                                   asterisk code
.                                               2 - Warn if no following
.                                                   asterisk code
.                                               3 - Reject if no preceding 
.                                                   dagger code
.DAREA    DIM       1        1        107      Area edit
.                                                 - No restraint
.                                               1 - Reject if code found
.                                               2 - Warn if code found
.                                               3 - Notify Infectious Disease
.                                               4 - Notify Rare Infectious
.                                                   Disease
.PT0DCPRA DIM       1        1        108      Code practices edit
.                                                 - No restraint
.                                               1 - Reject unacceptable 1st code
.                                               2 - Warn questionable principal
.                                                   diagnosis (V3.1)
.                                               3 - Warn questionable principal
.                                                   diagnosis/procedure (V3.1)
.                                               4 - Warn dont code CMV for <
.                                                   24 hours
.PT0DACRQ DIM       1        1        109      Additional code requirements edit
.                                                 - No restraint
.                                               1 - Reject this code requires an
.                                                   external code
.                                               2 - External cause code
.                                               3 - Warn cancer code requires a
.                                                   morphology code to follow
.                                               4 - Morphology code
.                                               5 - Code may be followed by a
.                                                   morphology code
.                                               6 - Reject external cause code,
.                                                   needs a place code
.                                               7 - [not in use]
.                                               8 - Reject external cause code,
.                                                   needs activity & place codes
.                                               P - Place code
.                                               A - Activity code
.                                               W - Warning, this code requires
.                                                   an external cause code
.PT0DMI9C DIM       9        9        110      Mapped ICD9 disease code
.DPT0DCMF DIM       2        2        119      Complex mappings format
.                                               0 - No complex mappings
.                                               1 - Obstetrics (ICD)
.                                               2 - Head injuries (ICD)
.                                               3 - Tendon injuries (ICD)
.                                               4 - Pacemakers (ICO)
.                                               5 - Social induction (ICD & ICO)
.                                               6 - Medical augment (ICO & ICD)
.                                               7 - 2-3 Maps (ICO)
.                                               8 - 2-3 Maps (ICD)
.DPT0DV1C DIM       1        1        121      Valid ICD10 version 1 code
.                                               0 - No, 1 - Yes
.DPT0DV2C DIM       1        1        122      Valid ICD10 version 2 code
.                                               0 - No, 1 - Yes
.PT0DV1MP DIM       9        9        123      ICD10 version 1 map code (only
.                                              if a valid ICD10 version 2 code)
.DPT0DV3C DIM       1        1        132      Valid ICD10 version 3 code
.                                               0 - No, 1 - Yes
.PT0DV2MP DIM       9        9        133      ICD10 version 2 map code (only
.                                              if a valid ICD10 version 3 code)
.DPT0DV4C DIM       1        1        142      Valid ICD10 version 4 code
.                                               0 - No, 1 - Yes
.DPT0DV5C DIM       1        1        143      Valid ICD10 version 5 code
.                                               0 - No, 1 - Yes
.DPT0DV6C DIM       1        1        144      Valid ICD10 version 6 code
.                                               0 - No, 1 - Yes
.PT0DDSC2 DIM       200      200      145      200 char Description
.DPT0DV7C DIM       1        1        345      Valid ICD10 version 7 code
.                                               0 - No, 1 - Yes
.DPT0DV8C DIM       1        1        346      Valid ICD10 version 8 code
.                                               0 - No, 1 - Yes
.DPT0DV9C DIM       1        1        347      Valid ICD10 version 9 code
.                                               0 - No, 1 - Yes
DPT0DVXC  DIM       1        1        348      Valid ICD10 version 10 code
.                                               0 - No, 1 - Yes
PTODMETH  DIM       1        1        349      Methamphetamine Related
.                                              blank or 0 - No, 1 - Yes
PT0DSPR8  DIM       50       50       350      Spare variable
.
.End of Record                        400
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
.PT0DCMFT FORM      2         115      Complex mappings format
.PT0DV1CD FORM      1         117      Valid ICD10 version 1 code
.PT0DV2CD FORM      1         118      Valid ICD10 version 2 code
.PT0DV3CD FORM      1         128      Valid ICD10 version 3 code
.PT0DV4CD FORM      1         138      Valid ICD10 version 4 code
.PT0DV5CD FORM      1         139      Valid ICD10 version 5 code
.PT0DV6CD FORM      1         140      Valid ICD10 Edition 6 code
.PT0DV7CD FORM      1         341      Valid ICD10 Edition 7 code
.PT0DV8CD FORM      1         342      Valid ICD10 Edition 8 code
.PT0DV9CD FORM      1         343      Valid ICD10 Edition 9 code
PT0DVXCD  FORM      1         348      Valid ICD10 Edition 10 code
.
.Save Variables
.--------------
.SPT0D2AG DIM       1                  * 2nd age group edit
.SPT0D2AL FORM      2                  * 2nd age low limit
.SPT0D2AH FORM      2                  * 2nd age high limit
.SPT0DCPR DIM       1                  * Code practices edit
.SPT0DACR DIM       1                  * Additional code requirements edit
.SPT0DMI9 DIM       9                  * Mapped ICD9 code
.SPT0DCMF FORM      2                  * Complex mappings format
.
.Xtra Variables
.--------------
.DSICDDTE DIM       8
+
.
