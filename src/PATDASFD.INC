.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATDASFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Discharge & Admission Statistics                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patdasaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 11,                                         *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.01  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2*
.  *                - add field PTDAITSX (use PTDASPAR)                 *
.  *                                                                    *
.  **********************************************************************
.
PATDASA1  IFILE     SQL, FIXED=51, KEY="U1-2,3-8,9-11"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DECRIPTION
. ----    ----   ------  --------  ------    ----------
DPTDAREF  DIM         2         2       1    Reference
.                                            " 1" = Patient at start of period
.                                            " 2" = Bed days at start of period
.                                            " 3" = Admissions during period
.                                                      (by Adm Type)
.                                            " 4" = Admissions during period
.                                                      (by Adm Source)
.                                            " 5" = Discharges (by Dsch Stat)
.                                            " 6" = Deceased (by Dsch Stat)
.                                            " 7" = Discharges (by Adm Type)
.                                            " 8" = Deceased (by Adm Type)
.                                            " 9" = Patients in at end of period
.                                            "10" = Bed days at end of period
.                                            "11" = Bed days during period
.                                            "12" = Number of patients (for LOS)
.                                            "13" = Same Day Patients
.                                            "14" = Patient staying 14 days
.                                            "15" = Patient staying 21 days
.                                            "16" = Patient staying 35+ days
.                                            "17" = Number of patients over 65
.                                            "18" = Babies at start of period
.                                            "19" = Maternity admissions
.                                            "20" = Maternity discharges
.                                            "21" = Babies at end of period
.                                            "22" = Discharges (by Dsch Dest)
.                                            "23" = Deceased (by Dsch Dest)
PTDADATE  DIM         6         6       3    Period Date (CCYYMM)
PTDACODE  DIM         3         3       9    Admission Type or Discharge Status
.                                              (Cat A , D or DD)
.                                            For reference "12", a code of 
.                                            blanks gives the real totals. 
.                                            For references "18" to "21", the 
.                                            code will be "M" of "F" for Male 
.                                            or Female respectively.
.                                            For references "22" &  "23" will
.                                            use Discharge Destination.
PTDAADLT  FORM        8         5      12    Number of Adults
PTDACHLD  FORM        8         5      17    Number of Children
PTDAMALE  FORM        8         5      22    Number of Males
PTDAFEML  FORM        8         5      27    Number of Females
PTDAUNKN  FORM        8         5      32    Number of Unknown
PTDAINDT  FORM        8         5      37    Number of Indeterminate
PTDAITSX  FORM        8         5      42    Number of Intersex        *I-49016
PTDASPAR  DIM         4         4      47    Spare Variable            *C-49016
.
.End of Record                         51
.
.
. redefine form fields from key
. -----------------------------
. NAME    TYPE   LENGTH  START     DECRIPTION
. ----    ----   ------  ------    ----------
PTDAREF   FORM        2       1    Reference
.
.
