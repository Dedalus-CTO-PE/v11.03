.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : MAMMASFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    MAMMOGRAPHY PMI EXTENSION                       *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : mammasxf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
MAMMASX1  IFILE     SQL, FIXED=100, KEY="U1-8"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
DMAXNO    DIM      8         8          1      Mammographic ID No (Outpat. no)
MAXHEIGT  FORM     3         3          9      Patient's Height (cm)
MAXWEIGT  FORM     3         3          12     Patient's Weight (kg)
MAXPREV   DIM      1         1          15     Previous Mammogram (Y/N)
MAXDPREV  DIM     10        10          16     Date of above (free format)
MAXHYST   DIM      1         1          26     Prior Hysterectomy (Y/N)
MAXDHYST  DIM     10        10          27     Date of above (free format)
MAXFAMLY  DIM      1         1          37     Family History of Breast Cancer
MAXDFAML  DIM     10        10          38     Details of above (free format)
MAXCANCR  DIM      1         1          48     Previous Breast Cancer (Y/N)
MAXDCANC  DIM     10        10          49     Date of above (free format)
MAXSURG   DIM      1         1          59     Previous Breast Surgery (Y/N)
MAXUSER1  DIM      3         3          60     User Defined 1 (Category E1)
MAXUSER2  DIM      3         3          63     User Defined 2 (Category E2)
MAXUSER3  DIM      3         3          66     User Defined 3 (Category E3)
MAXUSER4  DIM      3         3          69     User Defined 4 (Category E4)
MAXUSER5  DIM      3         3          72     User Defined 5 (Category E5)
MAXUSER6  DIM      3         3          75     User Defined 6 (Category E6)
MAXUSER7  DIM      3         3          78     User Defined 7 (Category E7)
MAXUSER8  DIM      3         3          81     User Defined 8 (Category E8)
MAXRDOCT  DIM      6         6          84     Referring Doctor (PATDOCT)
MAXTESNO  FORM     2         2          90     Number of sets of Test Results
MAXLOCK   DIM      2         2          92     Lock flag for ID No.
MAXFILL   DIM      6         6          94     Filler
.
.End of Record                     100
.
.  redefine form fields from key
.  -----------------------------
.
.NAME     TYPE   LENGTH    START LOC.  DESCRIPTION
.----     ----   ------    ----------  -----------
MAXNO     FORM     8         1         Mammographic ID No
.
