. **********************************************************************
. *                                                                    *
. *     Include Name : PATAD1FD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for Doctors Audit       *
. *                                                                    *
. *                                                                    *
. *     File Type    : ASCII                                           *
. *                                                                    *
. *     File Name    : patad1af.txt                                    *
. *     Modifications:                                                 *
. *     V5.09.00 01/03/2001    Ebon Clements                           *
. *              Changed to have all of the PATDO1FD variables         *
. *     V5.07.001 27/08/1998 Glenn  507 Changes                        *
. *     V5.03.01 05/10/1995    MATT                                    *
. *              Changed PATAD1A1 def to SFILE                         *
. **********************************************************************
. *                                                                    *
. *                                                                    *
 IFGE     $$VER,7
PATAD1A1    SFILE   ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATAD1A1    FILE    ASCII, FIXED=256
 XIF
.
.NAME     TYPE     LENGTH     START     DESCRIPTION
.----     ----     ------     -----     -----------
.SECTOR   FORM      5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME     TYPE    LENGTH      START      DESCRIPTION
.----     ----    ------      -----      -----------
.CDD      DIM       2         1         AUDIT DAY
.CMM      DIM       2         3         AUDIT MONTH
.CCC      DIM       2         5         audit century        
.CYY      DIM       2         7         AUDIT YEAR
.TIMEIS   DIM       8         9         AUDIT TIME  (HH:MM:SS)
.ACTION   DIM       1         17        ACTION
.                                           A == ADDED
.                                           B == BEFORE CHANGE
.                                           C == CHANGED TO
.PASSCODE DIM       4         18        OPERATOR CODE
.
SDCODE    DIM       6         22        DOCTOR CODE
SDTITL    DIM       9         28        DOCTOR TITLE
SDGNAME   DIM       25        37        DOCTOR GIVEN NAMES
SDSNAME   DIM       20        62        DOCTOR SURNAME NAME
SDRTYPE   DIM       3         82        DOCTOR TYPE
SDRNAME   DIM       25        85        DOCTORS RECEPTIONIST NAME
SDSADD1   DIM       35        110       DOCTOR SURGERY ADDRESS LINE 1
SDSADD2   DIM       35        145       DOCTOR SURGERY ADDRESS LINE 2
SDSADD3   DIM       35        180       DOCTOR SURGERY ADDRESS LINE 3
SDSADD4   DIM       35        215       DOCTOR SURGERY ADDRESS LINE 4
.
.END OF SECTOR                250
.
SDSPOST   DIM       8         1         DOCTOR SURGERY POSTCODE
SDOSEML   DIM       80        9         DOCTOR SURGERY EMAIL
SDTELES   DIM       20        89        TELEPHONE - SURGERY
SDTELEP   DIM       20        109       TELEPHONE - PAGER
SDPAGER   DIM       20        129       PAGER NUMBER
SDASSOC1  DIM       25        149       ASSOCIATED DOCTOR 1
SDASSOC2  DIM       25        174       ASSOCIATED DOCTOR 2
SDASSOC3  DIM       25        199       ASSOCIATED DOCTOR 3
SDASSOC4  DIM       25        224       ASSOCIATED DOCTOR 4
.
.END OF SECTOR                249
.
SDASSOC5  DIM       25        1         ASSOCIATED DOCTOR 5
SDPROV    DIM       10        26        PROVIDER NUMBER
SDTELEH   DIM       20        36        DOCTOR HOME TELEPHONE
SDHADD1   DIM       35        56        DOCTOR HOME ADDRESS LINE 1
SDHADD2   DIM       35        91        DOCTOR HOME ADDRESS LINE 2
SDHADD3   DIM       35        126       DOCTOR HOME ADDRESS LINE 3
SDHADD4   DIM       35        161       DOCTOR HOME ADDRESS LINE 4
SDHPOST   DIM       8         196       DOCTOR HOME POSTCODE
.
.END OF RECORD                204
.
SDOHEML   DIM       80        1         DOCTOR HOME EMAIL ADDRESS
SDAFIRST  DIM       8         81        DATE OF FIRST ACCREDIATION YYMMDD
SDALAST   DIM       8         89        DATE OF LAST ACCREDIATION YYMMDD
SDAYEARS  FORM      2         97        YEARS OF ACCREDIATION
SDACCRED  DIM       3         99        ACCREDIATION TYPE :CODES FILE (AT)
SDRTYPE2  DIM       3         102       DOCTOR TYPE 2
SDRTYPE3  DIM       3         105       DOCTOR TYPE 3
SDRTYPE4  DIM       3         108       DOCTOR TYPE 4
SDRTYPE5  DIM       3         111       DOCTOR TYPE 5
SDBIRTH   DIM       8         114       DATE OF BIRTH OF DOCTOR
SDHCSCOD  FORM      3         122       H.C.S. DOCTOR CODE
SDALEVEL  DIM       3         125       OPERATING SUPERVISION LEVEL "OS"
SDRSTAT   FORM      1         128       DOCTOR STATUS
SDOFAXN   DIM       12        129       DOCTORS FAX NUMBER
SDOHFAX   DIM       12        141       DOCTOR HOME FAX NUMBER
SDOMOBL   DIM       12        153       DOCTORS MOBILE NUMBER
SDOGLCC   DIM       5         165       General ledger creditor code
SDOWHDP   DIM       6         170       WA HDP Doctor code
SDOMREG   DIM       10        176       Medical Registration Board no.
SDONHSN   DIM       10        186       N.H.S PROSCRIBER NUMBER
SUPDDTE   DIM       8         196       Last Update Date (ccyymmdd)
SUPDTME   DIM       8         204       Last Update Time (hh:mm:ss)
SDOUDF1   DIM       3         212       User defined Field 1 (Cat R5)
SDOUDF2   DIM       3         215       User defined Field 2 (Cat R6)
SDOUDF3   DIM       3         218       User defined Field 3 (Cat R7)
SDOUDF4   DIM       3         221       User defined Field 4 (Cat R8)
SDOUDF5   DIM       3         224       User defined Field 5 (Cat R9)
SDOINSC   DIM       6         227       Insurance Code (from patinsrf)
.
.END OF SECTOR                233
.
SDOINSN   DIM       20        1         Insurance Policy number
SDOINSF   DIM       8         21        Insurance Date from CCYYMMDD
SDOINST   DIM       8         29        Insurance Date from CCYYMMDD
SDOREGN   DIM       20        37        MPG Certificate Number
SDOREGF   DIM       8         57        Reg. Date from CCYYMMDD
SDOREGT   DIM       8         65        Reg. Date from CCYYMMDD
SDOVISA   DIM       8         73        Visa Date CCYYMMDD
SDOCOMT   DIM       3         81        Doctors Preferred Communication
SDOPREF   DIM       30        84        Preffered Name
SDOABNN   DIM       11        114       ABN Number
SDODINA   DIM       8         125       Date made inactive
SDODACT   DIM       8         133       Date made active
SDODACO   DIM       8         141       Date made active outside
SDOPRO2   DIM       10        149       Provider Number 2
SDOPRO3   DIM       10        159       Provider Number 3
SDOPRO4   DIM       10        169       Provider Number 4
SDOPRO5   DIM       10        179       Provider Number 5
.
.END OF SECTOR                189
.
