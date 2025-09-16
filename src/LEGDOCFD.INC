.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGDOCFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Legacy              *
.  *                    LEGACY DOCTOR TABLE                             *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legdoctf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 26, KEY 6, KEY29                            *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *       V9.03.00  03/05/2004  Davin         CAR 49209                *
.  *                 Created FD from 6.11 PATDOCFD                      *
.  *                                                                    *
.  **********************************************************************
.
LEGDOCT1   IFILE SQL, FIXED=1133, KEY="U1-6"
LEGDOCT2   IFILE SQL, FIXED=1133, KEY="U41-60,1-6"
LEGDOCT3   IFILE SQL, FIXED=1133, KEY="U806-808,41-60,1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
LDCODE     DIM       6           6         1      DOCTOR CODE
LDTITL     DIM       9           9         7      DOCTOR TITLE
LDGNAME    DIM      25          25        16      DOCTOR GIVEN NAMES
LDSNAME    DIM      20          20        41      DOCTOR SURNAME NAME
LDRTYPE    DIM       3           3        61      DOCTOR TYPE
LDRNAME    DIM      25          25        64      DOCTORS RECEPTIONIST NAME
LDSADD1    DIM      35          35        89      DOCTOR SURGERY ADDRESS LINE 1
LDSADD2    DIM      35          35       124      DOCTOR SURGERY ADDRESS LINE 2
LDSADD3    DIM      35          35       159      DOCTOR SURGERY ADDRESS LINE 3
LDSADD4    DIM      35          35       194      DOCTOR SURGERY ADDRESS LINE 4
LDSPOST    DIM       8           8       229      DOCTOR SURGERY POSTCODE
LPDOSEML   DIM      80          80       237      DOCTOR SURGERY EMAIL
LDTELES    DIM      20          20       317      TELEPHONE - SURGERY
LDTELEP    DIM      20          20       337      TELEPHONE - PAGER
LDPAGER    DIM      20          20       357      PAGER NUMBER
LDASSOC1   DIM      25          25       377      ASSOCIATED DOCTOR 1
LDASSOC2   DIM      25          25       402      ASSOCIATED DOCTOR 2
LDASSOC3   DIM      25          25       427      ASSOCIATED DOCTOR 3
LDASSOC4   DIM      25          25       452      ASSOCIATED DOCTOR 4
LDASSOC5   DIM      25          25       477      ASSOCIATED DOCTOR 5
LDPROV     DIM      10          10       502      PROVIDER NUMBER
LDTELEH    DIM      20          20       512      DOCTOR HOME TELEPHONE
LDHADD1    DIM      35          35       532      DOCTOR HOME ADDRESS LINE 1
LDHADD2    DIM      35          35       567      DOCTOR HOME ADDRESS LINE 2
LDHADD3    DIM      35          35       602      DOCTOR HOME ADDRESS LINE 3
LDHADD4    DIM      35          35       637      DOCTOR HOME ADDRESS LINE 4
LDHPOST    DIM       8           8       672      DOCTOR HOME POSTCODE
LPDOHEML   DIM      80          80       680      DOCTOR HOME EMAIL ADDRESS
.
.      DOCTORS  ACRREDIATION DATA
.
LDAFIRST   DIM       8           8       760      DATE OF FIRST ACCRED CCYYMMDD
LDALAST    DIM       8           8       768      DATE OF LAST ACCRED CCYYMMDD
LDAYEARS   FORM      2           2       776      YEARS OF ACCREDIATION
LDACCRED   DIM       3           3       778      ACCRED TYPE :CODES FILE (AT)
LDRTYPE2   DIM       3           3       781      DOCTOR TYPE 2
LDRTYPE3   DIM       3           3       784      DOCTOR TYPE 3
LDRTYPE4   DIM       3           3       787      DOCTOR TYPE 4
LDRTYPE5   DIM       3           3       790      DOCTOR TYPE 5
LDFSPARE   DIM       2           2       793      SPARE VARIABLE
LDBIRTH    DIM       8           8       795      DATE OF BIRTH OF DOCTOR
LDHCSCOD   FORM      3           3       803      H.C.S. DOCTOR CODE
LDALEVEL   DIM       3           3       806      OPERAT SUPERVISION LEVEL "DL"
.                                                 A    - ASSISTANT
.                                                 C    - CONSULTANT
.                                                 SR   - SENIOR REGISTRAR
.                                                 JR   - JUNIOUR REGISTRAR
LDRSTAT    FORM      1           2       809      DOCTOR STATUS
.                                                 0  - ACTIVE IN HOSPITAL
.                                                 1  - NOT ACTIVE
.                                                 2  - ACTIVE OUTSIDE
LPDOFAXN   DIM      12          12       811      DOCTORS FAX NUMBER
LPDOHFAX   DIM      12          12       823      DOCTOR HOME FAX NUMBER
LPDOMOBL   DIM      12          12       835      DOCTORS MOBILE NUMBER
LPDOGLCC   DIM       5           5       847      General ledger creditor code
LPDOWHDP   DIM       6           6       852      WA HDP Doctor code
LPDOMREG   DIM      10          10       858      Medical Registration Board no.
LPDONHSN   DIM      10          10       868      N.H.S PROSCRIBER NUMBER
.
.
LLUPDDTE   DIM       8           8       878      Last Update Date (ccyymmdd)
LLUPDTME   DIM       8           8       886      Last Update Time (hh:mm:ss)
LPDOUDF1   DIM       3           3       894      User defined Field 1 (Cat R5)
LPDOUDF2   DIM       3           3       897      User defined Field 2 (Cat R6)
LPDOUDF3   DIM       3           3       900      User defined Field 3 (Cat R7)
LPDOUDF4   DIM       3           3       903      User defined Field 4 (Cat R8)
LPDOUDF5   DIM       3           3       906      User defined Field 5 (Cat R9)
LPDOINSC   DIM       6           6       909      Insurance Code (from patinsrf)
LPDOINSN   DIM      20          20       915      Insurance Policy number
LPDOINSF   DIM       8           8       935      Insurance Date from CCYYMMDD
LPDOINST   DIM       8           8       943      Insurance Date from CCYYMMDD
LPDOREGN   DIM      20          20       951      MPG Certificate Number
LPDOREGF   DIM       8           8       971      Reg. Date from CCYYMMDD
LPDOREGT   DIM       8           8       979      Reg. Date from CCYYMMDD
LPDOVISA   DIM       8           8       987      Visa Date CCYYMMDD
LPDOCOMT   DIM       3           3       995      Doctors Preferred
.                                                 Communication (Cat. CZ)
LPDOPREF   DIM      30          30       998      Preffered Name
LPDOABNN   DIM      11          11      1028      ABN Number
LPDODINA   DIM       8           8      1039      Date made inactive
LPDODACT   DIM       8           8      1047      Date made active
LPDODACO   DIM       8           8      1055      Date made active outside
LPDOPRO2   DIM      10          10      1063      Provider Number 2
LPDOPRO3   DIM      10          10      1073      Provider Number 3
LPDOPRO4   DIM      10          10      1083      Provider Number 4
LPDOPRO5   DIM      10          10      1093      Provider Number 5
.
LDASPARE   DIM      30          30      1103      SPARE DOCTORS AREA
.
.End of Record                          1133
.
LXDSNAME   DIM          6            41      DOCTOR SURNAME NAME
LSDSNAME   DIM         20            41      DOCTOR SURNAME NAME
LDSNAMXX   DIM         20            41      DOCTOR SURNAME NAME
