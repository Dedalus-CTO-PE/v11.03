. *****************************************************************************
. *                                                                           *
. *       Include Name : PAT10DFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      ICD10 Disease                                        *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : pati10df.dat                                         *
. *                                                                           *
. *       Keys         : KEY9  KEY79                                          *
. *                                                                           *
. *       Modifications:                                                      *
. *       V10.05.01 11/09/2014  Don Nguyen       CAR 302792                   *
. *                 Added new edit ("W") for PT0DACRQ                         *
. *       V9.03.01  16/07/2002  Davin  ICD10v3                                *
. *                 Added PT0DV2MP - v3 to v2 map code                        *
. *       V9.02.01  05/06/2002  Pat Dirito       SRF 18489                    *
. *                 Added DPT0DV3C                                            *
. *       V5.08.01  27/06/2000  Greg Horvat                                   *
. *                 Added PT0DV1CD PT0DV2CD & PT0DV1MP                        *
. *       V5.07.01  15/10/1999  Greg Horvat                                   *
. *                 Changed PT0DCMFT to be 2 chars                            *
. *       V5.06.01  14/10/1998  Greg Horvat      SRF 628627                   *
. *                 Added PT0DCMFT                                            *
. *                                                                           *
. *****************************************************************************
.
PATI10D1  IFILE     SQL, FIXED=150, KEY="U1-9"
PATI10D2  IFILE     SQL, FIXED=150, KEY="U10-79,1-9"
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
PT0D2AGP  DIM       1        1         86      2nd age group edit
.                                                 - No restraint
.                                               1 - Reject if within month range
.                                               2 - Warn if within month range
.                                               3 - Reject if within year range
.                                               4 - Warn if within year range
.                                               5 - Reject if outside year range
.                                               6 - Warn if outside year range
.                                               7 - Reject if outside month rang
.                                               8 - Warn if outside month range
PT0D2ALL  FORM      2        2         87      2nd age low limit
PT0D2AHL  FORM      2        2         89      2nd age high limit
.DSEX     DIM       1        1         91      Sex edit
.                                                 - No restraint
.                                               1 - Reject if male
.                                               2 - Warn if male
.                                               3 - Reject if female
.                                               4 - Warn if female
PT0DADTP  DIM       1        1         92      Asterisk/dagger type
.                                                 - Not an asterisk/dagger code
.                                               A - Asterisk code
.                                               D - Dagger code
PT0DSACD  DIM       9        9         93      Suggested asterisk code
.DDAGGER  DIM       1        1        102      Dagger & asterisk edit
.                                                 - No restraint
.                                               1 - Reject if no following
.                                                   asterisk code
.                                               2 - Warn if no following
.                                                   asterisk code
.                                               3 - Reject if preceding dagger
.                                                   code
.DAREA    DIM       1        1        103      Area edit
.                                                 - No restraint
.                                               1 - Reject if code found
.                                               2 - Warn if code found
PT0DCPRA  DIM       1        1        104      Code practices edit
.                                                 - No restraint
.                                               1 - Reject unacceptable 1st code
.                                               2 - Warn questionable principal
.                                                   diagnosis (V3.1)
.                                               3 - Warn questionable principal
.                                                   diagnosis/procedure (V3.1)
.                                               4 - Warn dont code CMV for <
.                                                   24 hours
PT0DACRQ  DIM       1        1        105      Additional code requirements edit
.                                                 - No restraint
.                                               1 - Reject this code requires an
.                                                   external code
.                                               2 - External cause code
.                                               3 - Warn cancer code requires a
.                                                   morphology code to follow
.                                               4 - Morphology code
.                                               6 - Reject external cause code,
.                                                   needs a place code
.                                               7 - Reject external cause code,
.                                                   needs an activity code
.                                               8 - Reject external cause code,
.                                                   needs activity & place codes
.                                               P - Place code
.                                               A - Activity code
.                                               W - Warning, this code requires
.                                                   an external cause code
PT0DMI9C  DIM       9        9        106      Mapped ICD9 disease code
DPT0DCMF  DIM       2        2        115      Complex mappings format
.                                               0 - No complex mappings
.                                               1 - Obstetrics (ICD)
.                                               2 - Head injuries (ICD)
.                                               3 - Tendon injuries (ICD)
.                                               4 - Pacemakers (ICO)
.                                               5 - Social induction (ICD & ICO)
.                                               6 - Medical augment (ICO & ICD)
.                                               7 - 2-3 Maps (ICO)
.                                               8 - 2-3 Maps (ICD)
DPT0DV1C  DIM       1        1        117      Valid ICD10 version 1 code
.                                               0 - No, 1 - Yes
DPT0DV2C  DIM       1        1        118      Valid ICD10 version 2 code
.                                               0 - No, 1 - Yes
PT0DV1MP  DIM       9        9        119      ICD10 version 1 map code (only
.                                              if a valid ICD10 version 2 code)
DPT0DV3C  DIM       1        1        128      Valid ICD10 version 3 code
.                                               0 - No, 1 - Yes
PT0DV2MP  DIM       9        9        129      ICD10 version 2 map code (only
.                                              if a valid ICD10 version 3 code)
PT0DSPAR  DIM      12       12        138      Spare variable
.
.End of Record                        150
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
PT0DCMFT  FORM      2         115      Complex mappings format
PT0DV1CD  FORM      1         117      Valid ICD10 version 1 code
PT0DV2CD  FORM      1         118      Valid ICD10 version 2 code
PT0DV3CD  FORM      1         128      Valid ICD10 version 3 code
.
.Save Variables
.--------------
SPT0D2AG  DIM       1                  * 2nd age group edit
SPT0D2AL  FORM      2                  * 2nd age low limit
SPT0D2AH  FORM      2                  * 2nd age high limit
SPT0DCPR  DIM       1                  * Code practices edit
SPT0DACR  DIM       1                  * Additional code requirements edit
SPT0DMI9  DIM       9                  * Mapped ICD9 code
SPT0DCMF  FORM      2                  * Complex mappings format
.
.Xtra Variables
.--------------
DSICDDTE  DIM       8
+
.

