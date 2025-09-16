.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTCSLFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Cancelled Session Log Details                   *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outcslaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 27, KEY 27                                  *
.  *                                                                    *
.  *     Modifications: 28/03/1995  Helen Crick                         *
.  *                                Standardised FD                     *
.  **********************************************************************
.
OUTCSLA1  IFILE     SQL, FIXED=80, KEY="U1-6,7-12,13-20,21-25,26-27"
OUTCSLA2  IFILE     SQL, FIXED=80, KEY="U1-6,13-20,7-12,21-25,26-27"
.
FILCSLA1  INIT      "cslaf"
FILCSLA2  INIT      "cslaf"
.
. NAME    TYPE    LENGTH   PHYSICAL   START       DECRIPTION
. ----    ----    ------   --------   ------      ----------
OTCSSITE  DIM        6         6         1        Site of cancelled session
OTCSCLIN  DIM        6         6         7        Clinic of cancelled session
OTCSDATE  DIM        8         8        13        Date of cancelled session
OTCSSTRT  DIM        5         5        21        Cancelled session start time
DOTCSUNI  DIM        2         2        26        Unique identifier
OTCSCDTE  DIM        8         8        28        Date of cancellation
OTCSCTIM  DIM        8         8        36        Time of cancellation
OTCSCTYP  DIM        6         6        44        Type of cancelled session
OTCSREAS  DIM        3         3        50        Reason for cancellation (CB)
OTCSSPAR  DIM       27        27        53        Spare variable
.
.End of Record                          80
.
. redefine form fields from key
. -----------------------------
. NAME    TYPE     LENGTH  START    DESCRIPTION
. ----    ----     ------  -----    -----------
OTCSUNIQ  FORM        2      26     Unique identifier
.
.
