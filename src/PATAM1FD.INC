. 20/11/1998  Glenn Berry      5.07 changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATAM1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    Patient Master Audit File                       *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : ASCII                                           *
.  *                                                                    *
.  *     File Name    : patam1af.txt                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *     V10.07.01 04/01/2016  Ebon Clements     TSK 0294154            *
.  *               Added SPOSMS - opt out of SMS                        *
.  *     V10.06.01 16/03/2015  J.Tan             CAR 314108             *
.  *               Changed SPREGP & SPGPPC to DIM 10                    *
.  *     V10.02.01 07/07/2011  Steve Armstrong   CAR 240722             *
.  *               Added SPTMASNM, SPMPXFNM & SPMPXSNM                  *
.  *     V5.09.00  08/01/2001  Pat Dirito                               *
.  *               Added SPCELL                                         *
.  *     V5.08.01  16/08/2000  Caleb Sharman                            *
.  *               Changed Health Fund variables to be 8 chars          *
.  *     V5.07.01  20/09/1999 Andrew Peel                               *
.  *               Changed SPPORT from FORM to DIM                      *
.  *     V5.03.01  05/10/1995 MATT                                      *
.  *               Changed PATAM1A1 def to SFILE                        *
.  **********************************************************************
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 04.06.89 K.Peak      (IBA)                *
.  *                          Change U/R & Admission to 8 characters    *
.  *                    V5.02 17.11.92 Whirlpool                        *
.  *                          Dudley changes                            *
.  *                    V5.03 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                    V5.04 11/07/94 ROD                              *
.  *                          added SPDOR                               *  
.  **********************************************************************
.
 IFGE     $$VER,7
PATAM1A1    SFILE    ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATAM1A1    FILE     ASCII, FIXED=256
 XIF
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.SECTOR     FORM         5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME       TYPE    LENGTH         START      DESCRIPTION
.----       ----    ------         -----      -----------
.ADD        DIM          2             1      AUDIT DAY
.AMM        DIM          2             3      AUDIT MONTH
.AYY        DIM          2             5      AUDIT YEAR
.ACC        DIM          2             7      Audit Century
.TIMEIS     DIM          8             9      AUDIT TIME  (HH:MM:SS)
.ACTION     DIM          1            17      ACTION
.                                             A == ADDED
.                                             B == BEFORE CHANGE
.                                             C == CHANGED TO
.OPERCODE   DIM          4            18      OPERATOR CODE
.
SPURNO      DIM          8            22      PATIENT U.R NO.
SPPORT      DIM          2            30      PORT CURRENTLY UPDATING U/R
SPCHGDTE    DIM          8            32      date of last change (ccyymmdd)
SPTITL      DIM          4            40      PATIENT TITLE
SPHOSP      FORM         1            44      HOSPITAL LAST 12 MONTHS 1-YES,2-NO
SPLDAYS     FORM         3            45      NO DAYS LAST IN HOSPITAL
SPBDEBT     FORM         1            48      BAD DEBTOR INDICATOR 0-NO 1-YES
SPSNAME     DIM         20            49      PATIENT SURNAME
SPGNAME     DIM         25            69      PATIENTS GIVEN NAMES
SPPSNAME    DIM         19            94      PATIENTS PREVIOUS SURNAME
SPADD1      DIM         35           113      PATIENT ADDRESS LINE 1
SPADD2      DIM         35           148      PATIENT ADDRESS LINE 2
SPSUBRB     DIM         35           183      PATIENT ADDRESS LINE 1
SPADD4      DIM         35           218      PATIENT ADDRESS LINE 2
SPPOST      DIM          8           253      PATIENT POSTCODE
SPTELEP     DIM         20           261      TELEPHONE PRIVATE
SPTELEB     DIM         20           281      TELEPHONE BUSINESS 
SPSEX       DIM          1           301      PATIENTS SEX
SPMSTAT     DIM          3           302      PATIENTS MARTIAL STATUS
SPBDATE     DIM          8           305      patients birth date (ccyymmdd)
SPSAGE      FORM         3           313      PATIENTS AGE
SPCONT      DIM          3           316      PATIENTS COUNTRY OF BIRTH
SPREG       DIM          3           319      PATIENTS RELIGION
SPTYPE      DIM          3           322      PATIENTS TYPE
SPOCCUP     DIM         14           325      PATIENTS OCCUPATION
SPLDDATE    DIM          8           339      last discharge date (ccyymmdd)
SPMEDI      DIM         10           347      MEDICARE NUMBER
SPPENNO     DIM         11           357      PENSION NUMBER
SPPNDTE     DIM          6           368      pension no expiry date (ccyymm)
SPREPAT     DIM         10           374      REPATRIATION NUMBER
SPSMOK      FORM         1           384      PATIENT SMOKER
.                                            1 = YES
.                                            2 = NO
SPSTAT      FORM         1           385      PATIENT STATUS
.                                            0 - VALID U/R  (IN MASTER FILE)
.                                            1 - CANCELLED U/R
.                                            2 - ASSOCIATED U/R
.                                            NOTE :- ASSOCIATED U/R IS NOW
.                                                    PLACED IN THE PADMNO
.                                            3 - NOT YET ALLOCATED
.                                            ****** (IN PRAM FILE) ********
SPMICRO     DIM         20           386      MICROFILM ADDRESS
.                                             1 -  6  U.R. NO.
.                                             7 - 10  ROLL NO.
.                                            11 - 14  POSITION NO.
.                                            15 - 16  YEAR
SPCEASE     FORM         1           406      DESEASED INDICATOR
.                                            0 = NO
.                                            1 = YES
SPCASE      FORM         1           407      CASE NOTES INDICATOR
SPAUTOPY    FORM         1           408      AUTOPSY INDICATOR
.                                            0 = NO
.                                            1 = YES
.
SPHIGH1     DIM          3           409      HIGHLIGHT CODE 1
SPHIGH2     DIM          3           412      HIGHLIGHT CODE 2
SPHIGH3     DIM          3           415      HIGHLIGHT CODE 3
.
SPLOCDOC    DIM         30           418      LOCAL DOCTOR
.
SPFUNDH     DIM          6           448      HEALTH FUND TABLE
SPFNDTB     DIM          8           454      HEALTH FUND TABLE
SPFNDMM     DIM         10           462      FUND MEMBERSHIP NUMBER
.
SPUSR1      DIM          3           472      USER DEFINED FIELD 1 (CAT P1)
SPUSR2      DIM          3           475      USER DEFINED FIELD 2 (CAT P2)
SPUSR3      DIM          3           478      USER DEFINED FIELD 3 (CAT P3)
SPUSR4      DIM          3           481      USER DEFINED FIELD 4 (CAT P4)
SPUSR5      DIM          3           484      USER DEFINED FIELD 5 (CAT P5)
SPUSR6      DIM          3           487      USER DEFINED FIELD 6 (CAT P6)
SPUYN1      FORM         1           490      USER DEFINED Y/N FIELD 1 (1=Y,0=N)
SPUYN2      FORM         1           491      USER DEFINED Y/N FIELD 2 (1=Y,0=N)
SPUYN3      FORM         1           492      USER DEFINED Y/N FIELD 3 (1=Y,0=N)
SPYRRES     FORM         2           493      NUMBER OF YEARS RESIDENT
.
.              NEXT OF KIN DATA
.
SPNKNAME    DIM         20           495      NEXT OF KIN 1 NAME
SPNKADD1    DIM         35           515      N.O.K 1 ADDRESS LINE 1
SPNKADD2    DIM         35           550      N.O.K 1 ADDRESS LINE 2
SPNKSUBR    DIM         35           585      N.O.K 1 SUBURB
SPNKADD4    DIM         35           620      N.O.K 1 ADDRESS LINE 2
SPNKPOST    DIM          8           655      N.O.K 1 POSTCODE
SPNKTELP    DIM         20           663      N.O.K 1 PRIVATE TELEPHONE 
SPNKTELB    DIM         20           683      N.O.K 1 BUSINESS TELEPHONE 
SPNKRELP    DIM         10           703      N.O.K 1 RELATIONSHIP
.
.
SPLSTINP    FORM     8               713         LAST INPATIENT  VISIT NUMBER
SPLSTOUT    FORM     8               721         LAST OUTPATIENT VISIT NUMBER
SPNXRAY     FORM     3               729         NUMBER OF PREVIOUS X-RAYS
.
.          Additional Health Fund details
.
SPFNDYY     DIM      2               732         YRS OF FUND MEMBERSHIP (JR,DE)
SPFNDCG     DIM      6               734         fund cover change (ccyymm)
.
SPDECDTE    DIM      8               740         DATE OF DEATH (CCYYMMDD)
SPHCNOTE    DIM     20               748         CASE NOTES INDICATORS
SPDIET      DIM      3               768         DEFAULT DIET CODE
SPINITHO    DIM      2               771         HOSPITAL U/R INITIATED FROM
SPDOR       DIM      3               773         District of Residence
SPREGP      DIM     10               776         Registered GP
SPGPPC      DIM     10               786         Registered GP Practice
SPGPPT      DIM      2               796         Registered GP Practice Count
SPCARD      DIM     20               798         Card Number
SPCEXP      DIM      8               818         Card Expiry Date
SPCXMP      DIM      3               826         Card Exemption Type (Cat XM)
SPFMLY      DIM     12               829
SPCELL      DIM     20               841         CELLULAR TELEPHONE NO.
SPOSMS      DIM     1                861         Opt Out of SMS

.                                    862
. Other variable definitions
. --------------------------
SPTMASNM    DIM     40
SPMPXFNM    DIM     40
SPMPXSNM    DIM     40
