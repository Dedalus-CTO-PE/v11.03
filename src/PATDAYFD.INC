.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATDAYFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Daily Patient List                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patdayaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12,                                         *
.  *                                                                    *
.  *                                                                    *
.  **********************************************************************
.
PATDAYA1  IFILE     SQL, FIXED=13, KEY="U1-4,5-12"      * both are the same file
PATDBYB1  IFILE     SQL, FIXED=13, KEY="U1-4,5-12"      
FILDAYA1  INIT      "patd"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DECRIPTION
. ----    ----   ------  --------  ------    ----------
PTDYDATE  DIM         4         4       1    Date (MMDD)
DPTDYADM  DIM         8         8       5    Admission Number
.
.End of Record                         13
.
. redefine form fields from key
. -----------------------------
. NAME    TYPE   LENGTH  START     DECRIPTION
. ----    ----   ------  ------    ----------
PTDYADMN  FORM        8       5    Admission Number
