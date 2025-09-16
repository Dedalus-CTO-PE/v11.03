.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCSSFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Clinical Statistics Summary                     *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patcssad.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8,                                          *
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
PATCSSA1  IFILE     SQL, FIXED=85, KEY="U1-6,7-7,8-8"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DECRIPTION
. ----    ----   ------  --------  ------    ----------
PTCSDATE  DIM         6         6       1    Period Date (CCYYMM)
PTCSTYPC  DIM         1         1       7    Type of clinical unit ("M" or "S")
PTCSTYPP  DIM         1         1       8    Type of patient
.                                            1=Public, 2=Private, 3=Compensable
PTCSSTRT  FORM        8         5       9    Patients at start of period
PTCSADMT  FORM        8         5      14    Patients admitted during period
PTCSDSCH  FORM        8         5      19    Patients discharged during period
PTCSDIED  FORM        8         5      24    Patients died during period
PTCSEND   FORM        8         5      29    Patients at end of period
PTCSBDAY  FORM        8         5      34    Bed Days (excluding day cases)
PTCSDYCS  FORM        8         5      39    Number of day cases in period
PTCSDBDY  FORM        8         5      44    Discharged patient bed days
PTCSRNG1  FORM        8         5      49    Long stay patients 1 (30-60 days)
PTCSRNG2  FORM        8         5      54    Long stay patients 2 (61-120 days)
PTCSRNG3  FORM        8         5      59    Long stay patients 3 (121-180 days)
PTCSRNG4  FORM        8         5      64    Long stay patients 4 (181+ days)
PTCSWAIT  FORM        8         5      69    Patients admitted from waiting list
PTCSSPAR  DIM        11        11      74    Spare Variable
.
.End of Record                         85
.
.
.
.
