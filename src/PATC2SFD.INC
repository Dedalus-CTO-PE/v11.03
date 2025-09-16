.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATC2SFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Clinical Statistics 2                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patc2saf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 15,                                         *
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
PATC2SA1  IFILE     SQL, FIXED=75, KEY="U1-6,7-9,10-15"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DECRIPTION
. ----    ----   ------  --------  ------    ----------
PTC2DATE  DIM         6         6       1    Period Date (CCYYMM)
PTC2CLSS  DIM         3         3       7    Ward Classification
PTC2DOCT  DIM         6         6      10    Doctor Code
PTC2EMRG  FORM        5         4      16    Emergency Admissions
PTC2ELCT  FORM        5         4      20    Elective Admissions
PTC2DSCH  FORM        5         4      24    Discharged Patients
PTC2DEAD  FORM        5         4      28    Deceased Patients
PTC2STDP  FORM        5         4      32    Public Bed Days in Period
PTC2PRVP  FORM        5         4      36    Private Bed Days in Period
PTC2STDB  FORM        5         4      40    Public Bed Days
PTC2PRVB  FORM        5         4      44    Private Bed Days
PTC2RNG1  FORM        5         4      48    Long stay range 1 (30-60 days)
PTC2RNG2  FORM        5         4      52    Long stay range 2 (61-120 days)
PTC2RNG3  FORM        5         4      56    Long stay range 3 (121-180 days)
PTC2RNG4  FORM        5         4      60    Long stay range 4 (181+ days)
PTC2SPAR  DIM        11        11      64    Spare Variable
.
.End of Record                         75
.
.
.
.
