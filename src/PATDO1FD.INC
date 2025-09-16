. V5.07.001 20/08/1998 Glenn 507 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATDO1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Doctor Details                                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patdo1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 26, KEY 6, KEY29                            *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                    V10.01.01 10/02/2011  Ebon Clements  CAR 234598 *
.  *                          Added PTDOAHC1 to PTDOAHC3                *
.  *                    V9.09.02  11/12/2007  Ebon Clements  CAR 143977 *
.  *                          Added PTDODEAC - Accred. Expiry Date      *
.  *                    V9.09.01  29/08/2007  Peter Vela     CAR 148637 *
.  *                          Added PMHCEXML Exclude from Mailing List  *
.  *                    V9.05.01  15/03/2006  Ebon Clements  CAR 78533  *
.  *                          Added PTDOHOSS                            *
.  *                    V9.03.00  31/03/2004  Ebon Clements  CAR 18703  *
.  *                          Added PTDOSDAT,PTDOEDAT and PTDOAUPD      *
.  *                    V5.09.B02 01/02/2001  Greg Horvat               *
.  *                          Removed the save variables as they werent *
.  *                          used                                      *
.  *                    V5.09.B01 02/01/2001  Caleb Sharman             *
.  *                          New layout changes for version 5.09       *
.  *                    V5.08 17/05/2000  Steve Armstrong               *
.  *                          Added PATDO1A3                            *
.  *                    V5.08 14/10/99 J.Tan                            *
.  *                          Added G/L creditor code                   *
.  *                    V5.07 30.06.1999 Katie Nelson                   *
.  *                          Added DLUPDDTE - Last Update Date         *
.  *                          Added DLUPDTME - Last Update Time         *
.  **********************************************************************
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 17/12/93 Matt Surridge MTA                *
.  *                    Added PTDOPAYN (Payee Name)                     *
.  *                    V5.02 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *
.  **********************************************************************
.
.
PATDO1A1   IFILE SQL, FIXED=1189, KEY="U1-6"
PATDO1A2   IFILE SQL, FIXED=1189, KEY="U41-60,1-6"
PATDO1A3   IFILE SQL, FIXED=1189, KEY="U806-808,41-60,1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DCODE      DIM       6           6         1      DOCTOR CODE
DTITL      DIM       9           9         7      DOCTOR TITLE
DGNAME     DIM      25          25        16      DOCTOR GIVEN NAMES
DSNAME     DIM      20          20        41      DOCTOR SURNAME NAME
DRTYPE     DIM       3           3        61      DOCTOR TYPE (Cat DT)
DRNAME     DIM      25          25        64      DOCTORS RECEPTIONIST NAME
DSADD1     DIM      35          35        89      DOCTOR SURGERY ADDRESS LINE 1
DSADD2     DIM      35          35       124      DOCTOR SURGERY ADDRESS LINE 2
DSADD3     DIM      35          35       159      DOCTOR SURGERY ADDRESS LINE 3
DSADD4     DIM      35          35       194      DOCTOR SURGERY ADDRESS LINE 4
DSPOST     DIM       8           8       229      DOCTOR SURGERY POSTCODE
PTDOSEML   DIM      80          80       237      DOCTOR SURGERY EMAIL
DTELES     DIM      20          20       317      TELEPHONE - SURGERY
DTELEP     DIM      20          20       337      TELEPHONE - PAGER
DPAGER     DIM      20          20       357      PAGER NUMBER
DASSOC1    DIM      25          25       377      ASSOCIATED DOCTOR 1
DASSOC2    DIM      25          25       402      ASSOCIATED DOCTOR 2
DASSOC3    DIM      25          25       427      ASSOCIATED DOCTOR 3
DASSOC4    DIM      25          25       452      ASSOCIATED DOCTOR 4
DASSOC5    DIM      25          25       477      ASSOCIATED DOCTOR 5
DPROV      DIM      10          10       502      PROVIDER NUMBER
DTELEH     DIM      20          20       512      DOCTOR HOME TELEPHONE
DHADD1     DIM      35          35       532      DOCTOR HOME ADDRESS LINE 1
DHADD2     DIM      35          35       567      DOCTOR HOME ADDRESS LINE 2
DHADD3     DIM      35          35       602      DOCTOR HOME ADDRESS LINE 3
DHADD4     DIM      35          35       637      DOCTOR HOME ADDRESS LINE 4
DHPOST     DIM       8           8       672      DOCTOR HOME POSTCODE
PTDOHEML   DIM      80          80       680      DOCTOR HOME EMAIL ADDRESS
.
.      DOCTORS  ACRREDIATION DATA
.
DAFIRST    DIM       8           8       760      DATE OF FIRST ACCRED CCYYMMDD
DALAST     DIM       8           8       768      DATE OF LAST ACCRED CCYYMMDD
DAYEARS    FORM      2           2       776      YEARS OF ACCREDIATION
DACCRED    DIM       3           3       778      ACCRED TYPE :CODES FILE (AT)
DRTYPE2    DIM       3           3       781      DOCTOR TYPE 2
DRTYPE3    DIM       3           3       784      DOCTOR TYPE 3
DRTYPE4    DIM       3           3       787      DOCTOR TYPE 4
DRTYPE5    DIM       3           3       790      DOCTOR TYPE 5
DFSPARE    DIM       2           2       793      SPARE VARIABLE
DBIRTH     DIM       8           8       795      DATE OF BIRTH OF DOCTOR
DHCSCOD    FORM      3           3       803      H.C.S. DOCTOR CODE
DALEVEL    DIM       3           3       806      OPERAT SUPERVISION LEVEL "DL"
.                                                 A    - ASSISTANT
.                                                 C    - CONSULTANT
.                                                 SR   - SENIOR REGISTRAR
.                                                 JR   - JUNIOUR REGISTRAR
DRSTAT     FORM      1           2       809      DOCTOR STATUS
.                                                 0  - ACTIVE IN HOSPITAL
.                                                 1  - NOT ACTIVE
.                                                 2  - ACTIVE OUTSIDE
PTDOFAXN   DIM      12          12       811      DOCTORS FAX NUMBER
PTDOHFAX   DIM      12          12       823      DOCTOR HOME FAX NUMBER
PTDOMOBL   DIM      12          12       835      DOCTORS MOBILE NUMBER
PTDOGLCC   DIM       5           5       847      General ledger creditor code
PTDOWHDP   DIM       6           6       852      WA HDP Doctor code
PTDOMREG   DIM      10          10       858      Medical Registration Board no.
PTDONHSN   DIM      10          10       868      N.H.S PROSCRIBER NUMBER
.
.
DLUPDDTE   DIM       8           8       878      Last Update Date (ccyymmdd)
DLUPDTME   DIM       8           8       886      Last Update Time (hh:mm:ss)
PTDOUDF1   DIM       3           3       894      User defined Field 1 (Cat R5)
PTDOUDF2   DIM       3           3       897      User defined Field 2 (Cat R6)
PTDOUDF3   DIM       3           3       900      User defined Field 3 (Cat R7)
PTDOUDF4   DIM       3           3       903      User defined Field 4 (Cat R8)
PTDOUDF5   DIM       3           3       906      User defined Field 5 (Cat R9)
PTDOINSC   DIM       6           6       909      Insurance Code (from patinsrf)
PTDOINSN   DIM      20          20       915      Insurance Policy number
PTDOINSF   DIM       8           8       935      Insurance Date from CCYYMMDD
PTDOINST   DIM       8           8       943      Insurance Date to CCYYMMDD
PTDOREGN   DIM      20          20       951      MPG Certificate Number
PTDOREGF   DIM       8           8       971      Reg. Date from CCYYMMDD
PTDOREGT   DIM       8           8       979      Reg. Date to CCYYMMDD
PTDOVISA   DIM       8           8       987      Visa Date CCYYMMDD
PTDOCOMT   DIM       3           3       995      Doctors Preferred
.                                                 Communication (Cat. CZ)
PTDOPREF   DIM      30          30       998      Preferred Name
PTDOABNN   DIM      11          11      1028      ABN Number
PTDODINA   DIM       8           8      1039      Date made inactive
PTDODACT   DIM       8           8      1047      Date made active
PTDODACO   DIM       8           8      1055      Date made active outside
PTDOPRO2   DIM      10          10      1063      Provider Number 2
PTDOPRO3   DIM      10          10      1073      Provider Number 3
PTDOPRO4   DIM      10          10      1083      Provider Number 4
PTDOPRO5   DIM      10          10      1093      Provider Number 5
PTDOSDAT   DIM       8           8      1103      Start Date CCYYMMDD
PTDOEDAT   DIM       8           8      1111      End Date CCYYMMDD
PTDOAUPD   DIM       1           1      1119      Auto Update 0=No 1=Yes
PTDOHOSS   DIM       1           1      1120      Hospital Specific Doctor
.                                                 (0=NO 1=YES) mlthcpaf
PTDOEXML   DIM       1           1      1121      Exclude from Mailing List
.                                                 (0=NO 1=YES)
PTDODEAC   DIM       8           8      1122      Accred. Expiry Date (ccyymmdd)
PTDOAHC1   DIM       3           3      1130      AH Pref Cont Method 1(Cat CZ)
PTDOAHC2   DIM       3           3      1133      AH Pref Cont Method 2(Cat CZ)
PTDOAHC3   DIM       3           3      1136      AH Pref Cont Method 3(Cat CZ)
DASPARE    DIM       50          50     1139      SPARE DOCTORS AREA
.
.End of Record                          1189
.
DSNAMXX    DIM         20            41      DOCTOR SURNAME NAME
