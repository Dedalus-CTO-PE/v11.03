. *****************************************************************************
. *                                                                           *
. *       Include Name : PAT16DFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      ICD10 Edition 6 Disease                              *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : pat10d6f.dat                                         *
. *                                                                           *
. *       Keys         : KEY9  KEY79                                          *
. *                                                                           *
. *       Modifications:                                                      *
. *       V9.11.01  16/04/2009  Mike Laming      CAR 194286                   *
. *                 Correct comments only - PT0DACRQ values of 5 & 7          *
. *       V9.10.01  06/06/2008  Mike Laming      CAR 166095                   *
. *                 Add PT0DDESC for NZ - change record to 300 (was 150)      *
. *       V9.09.00  18/03/2008  Mike Laming      CAR 163918                   *
. *                 Created ICD10 Ed.6 FD. (defines DPT0DV6C & PT0DV6CD)      *
. *                                                                           *
. *****************************************************************************
.
PATI16D1  IFILE     SQL, FIXED=300, KEY="U1-9"
PATI16D2  IFILE     SQL, FIXED=300, KEY="U10-79,1-9"
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
.DLOW     FORM      2        2         82      Age low limit
.DHIGH    FORM      2        2         84      Age high limit
.PT0D2AGP DIM       1        1         86      2nd age group edit
.                                                 - No restraint
.                                               1 - Reject if within month range
.                                               2 - Warn if within month range
.                                               3 - Reject if within year range
.                                               4 - Warn if within year range
.                                               5 - Reject if outside year range
.                                               6 - Warn if outside year range
.                                               7 - Reject if outside month rang
.                                               8 - Warn if outside month range
.PT0D2ALL FORM      2        2         87      2nd age low limit
.PT0D2AHL FORM      2        2         89      2nd age high limit
.DSEX     DIM       1        1         91      Sex edit
.                                                 - No restraint
.                                               1 - Reject if male
.                                               2 - Warn if male
.                                               3 - Reject if female
.                                               4 - Warn if female
.                                               5 - Reject if female /
.                                                   No Explanation Code
.                                               6 - Reject if male/No Expl Code
.PT0DADTP DIM       1        1         92      Asterisk/dagger type
.                                                 - Not an asterisk/dagger code
.                                               A - Asterisk code
.                                               D - Dagger code
.PT0DPRFX DIM       2        2         93      Diagnosis Code Prefix
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
.PT0DSAC2 DIM       7        7         95      Suggested asterisk code
.DDAGGER  DIM       1        1        102      Dagger & asterisk edit
.                                                 - No restraint
.                                               1 - Reject if no following
.                                                   asterisk code
.                                               2 - Warn if no following
.                                                   asterisk code
.                                               3 - Reject if no preceding 
.                                                   dagger code
.DAREA    DIM       1        1        103      Area edit
.                                                 - No restraint
.                                               1 - Reject if code found
.                                               2 - Warn if code found
.                                               3 - Notify Infectious Disease
.                                               4 - Notify Rare Infectious
.                                                   Disease
.PT0DCPRA DIM       1        1        104      Code practices edit
.                                                 - No restraint
.                                               1 - Reject unacceptable 1st code
.                                               2 - Warn questionable principal
.                                                   diagnosis (V3.1)
.                                               3 - Warn questionable principal
.                                                   diagnosis/procedure (V3.1)
.                                               4 - Warn dont code CMV for <
.                                                   24 hours
.PT0DACRQ DIM       1        1        105      Additional code requirements edit
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
.PT0DMI9C DIM       9        9        106      Mapped ICD9 disease code
.DPT0DCMF DIM       2        2        115      Complex mappings format
.                                               0 - No complex mappings
.                                               1 - Obstetrics (ICD)
.                                               2 - Head injuries (ICD)
.                                               3 - Tendon injuries (ICD)
.                                               4 - Pacemakers (ICO)
.                                               5 - Social induction (ICD & ICO)
.                                               6 - Medical augment (ICO & ICD)
.                                               7 - 2-3 Maps (ICO)
.                                               8 - 2-3 Maps (ICD)
.DPT0DV1C DIM       1        1        117      Valid ICD10 version 1 code
.                                               0 - No, 1 - Yes
.DPT0DV2C DIM       1        1        118      Valid ICD10 version 2 code
.                                               0 - No, 1 - Yes
.PT0DV1MP DIM       9        9        119      ICD10 version 1 map code (only
.                                              if a valid ICD10 version 2 code)
.DPT0DV3C DIM       1        1        128      Valid ICD10 version 3 code
.                                               0 - No, 1 - Yes
.PT0DV2MP DIM       9        9        129      ICD10 version 2 map code (only
.                                              if a valid ICD10 version 3 code)
.DPT0DV4C DIM       1        1        138      Valid ICD10 version 4 code
.                                               0 - No, 1 - Yes
.DPT0DV5C DIM       1        1        139      Valid ICD10 version 5 code
.                                               0 - No, 1 - Yes
DPT0DV6C  DIM       1        1        140      Valid ICD10 version 6 code
.                                               0 - No, 1 - Yes
PT0DDESC  DIM       100      100      141      100 char Description (nz)
PT0DSPR4  DIM       59       59       241      Spare variable
.
.End of Record                        300
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
PT0DV6CD  FORM      1         140      Valid ICD10 Edition 6 code
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

