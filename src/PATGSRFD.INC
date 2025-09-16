.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATGSRFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    Given name/Surname Index File                   *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patgsrnf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY115, KEY98, KEY34, KEY100, KEY108            *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *  **** Programmer Note **************                               *
.  *       Any changes to this FD may effect the TBL Eclipse Interface. *
.  *       Please notify the Eclipse Team of any changes.               *
.  *                                                                    *
.  *     V10.02.01      Steve Armstrong  CAR 240722                     *
.  *                    Added PTGSGNM2 and extended GSRSNAM & GSRGNAM   *
.  *                    to 40 characters and changed KEYS               *
.  *     V9.04.01       Steve Armstrong  CAR 52359                      *
.  *                    Added SCANTZ                                    *
.  *     V9.03.01       J.Habasque  CAR 48414                           *
.  *                    Added index 8                                   *
.  *     V9.02.01       J.Habasque                                      *
.  *                    Added index 7 & changed index 6 to use gsrgname *
.  *     V9.02.00       B.G.Ackland                                     *
.  *                    Added Date of birth into indexes 1 through 4    *
.  *                    Added Sex into index 1.                         *
.  *     V5.09.01       J Tan                                           *
.  *                    Added Date of birth, Sex and a new index on DOB *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PATGSRN1   IFILE SQL, FIXED=194, KEY="U1-8,9-16,17-46,47-76,114-143,105-112,113-113"
PATGSRN2   IFILE SQL, FIXED=194, KEY="D17-46,47-76,114-143,105-112"
PATGSRN3   IFILE SQL, FIXED=194, KEY="D77-86,87-94,95-102,105-112"
PATGSRN4   IFILE SQL, FIXED=194, KEY="D77-86,95-102,87-94,105-112"
PATGSRN5   IFILE SQL, FIXED=194, KEY="D77-86,17-46,47-76,114-143"
PATGSRN6   IFILE SQL, FIXED=194, KEY="D105-112,17-46,47-76,114-143"
PATGSRN7   IFILE SQL, FIXED=194, KEY="D105-112,77-86,17-46,47-76,114-143"
PATGSRN8   IFILE SQL, FIXED=194, KEY="D77-86,47-76,114-143,105-112,17-46"
.
. NAME     TYPE   LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----   ------   --------   ----------   -----------
GSRURNO    DIM       8           8         1       U/R NUMBER
DGSRBILL   DIM       8           8         9       BILLING NUMBER (IF NO U/R)
GSRSNAM    DIM      30          30        17       SURNAME
GSRGNAM    DIM      30          30        47       FIRST GIVEN NAME
GSRSKEY    DIM      10          10        77       SOUND-EX KEY
GSRGKEY1   DIM       8           8        87       SOUND-EX KEY for 1st giv. nam
GSRGKEY2   DIM       8           8        95       SOUND-EX KEY for 2nd giv. nam
GSRSYS     FORM      1           2       103       SYSTEM (IF NO U/R)
GSRDOB     DIM       8           8       105       Date of Birth
GSRSEX     DIM       1           1       113       Sex
PTGSGNM2   DIM      30          30       114       SECOND GIVEN NAME
GSRSPARE   DIM      50          50       144       spare
.
.End of Record                           194
.
..............
.
.          Spare variables - used in I/O include to handle key changes
.
SSDXKEY     DIM         10            1       SOUND-EX KEY
SSDXSNAM    DIM         30           11       SURNAME
SSDXURNO    DIM          8           56       U/R NUMBER
SSDXBILL    FORM         8           64       BILLING NUMBER
.
.          The following variables are for use in the PATSNDX/SNX2 includes
.
SAVEGSR   DIM       10          
SAVEGNAM  DIM       30          
GNREP     INIT      "AECSYEJGKC"
KEYSTR30  DIM       30
SRCHGSX1  DIM       8
SRCHGSX2  DIM       8
SRCHMACH  DIM       1
SRCHSECD  FORM      1
.
AREP     INIT      "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"
.
C1       DIM       1
C2       DIM       1
.
KEYSTR   DIM       20
.
SCANCK   INIT      "CK"
SCANGH   INIT      "GH"
SCANLM   INIT      "LM"
SCANMN   INIT      "MN"
SCANMP   INIT      "MP"
SCANS    INIT      "S "
SCANSC   INIT      "SC"
SCANST   INIT      "ST"
SCANTZ   INIT      "TZ"
SPAIR    DIM       2
.
SREP     INIT      "A0E0H0I0O0U0W0Y0":
                   "B1F1P1V1":
                   "C2G2J2K2Q2S2X2Z2":
                   "D3T3":
                   "L4":
                   "M5N5":
                   "R6"
.
.        The following variables are used in the search include PATSRCH.PBL
.
DIM8ARRY  DIM     8[17]             * selection array
.
SRCHFLAG FORM      1                * Returns 0 = Continue search, 1 = Exit
SRCHOPT  FORM      1                * Selects the display type
SRCHSYS  FORM      1                * Determines system for 0 U/R displays
SRCHSN   DIM       18               * Truncated Surname for display
SRCHGN   DIM       20               * Truncated Given names for display
SRCHVAR  DIM       15               * Last column of display
SRCHSCOL FORM      2                * Saved column position
SRCHSVRT FORM      2                * Saved line position
.
SRCHSUR  DIM       30               * Surname being searched for
SRCHGIV  DIM       30               * Given name being searched for
SRCHSEX  DIM       1                * Sex being searched for
SRCHDOB  DIM       8                * Date of birth requested.
SRCHSNDX DIM       10               * Surname being searched for (soundex key)
SRCHHREC FORM      1                * Flag to say if record has been read
SRCHSCRN FORM      2                * flag if next screen or only 1 screen
SRCHCLR  FORM      1                * clear search parameters flag
.                                     0=clear search parameters
.                                     1=don't clear search parameters
.
CLINES   FORM      2
CMFIRST  DIM       98           * key for first soundex rec
CMSXFLAG FORM      1            * Initial CMSX search or not
CMSXBILL FORM      8
CMSXURNO DIM       8
CPAGETMP FORM      3            * temp page # used for Soundex
CURRSCRN FORM      1            
OPTCOUNT FORM      2            * No. of Chars needed to display options
OPTLINE  FORM      2            * Line No. to display options on
TMPKEY34 DIM       34           * temp key used for Prev. Screen 
TMPKEY98 DIM       98           * temp key used for Prev. Screen 
TMPURNO  DIM       8            * temp var used for Prev. Screen
TMPBILL  FORM      8            * temp var used for Prev. Screen
TMPDOB   DIM       8            * temp var used for Prev. Screen
TWOLINES FORM      1            * Flag to say if two option lines are req'd
.                               * 0 = One Line is Required (Default)
.                               * 1 = Two Lines Are Required 
PGNARRAY FORM      2[75]    * no. of records displayed on each page [cpageno]
.
.        These variables are used for displays in PATSRCH, SRCHOPT=3
.
SRCHDIAG DIM       40               * Truncated diagnosis display
SRCHWBED DIM        7               * Ward / Bed 
.
.        These variables are used to implement the ranges of dates when
.        testing for date of birth.
.
SRCHDRNG FORM       2               * Day range of D.O.B.
SRCHYRNG FORM       2               * Year range of D.O.B.
SRCHFDAT DIM        4               * From date for D.O.B. (MMDD)
SRCHTDAT DIM        4               * To date for D.O.B. (MMDD)
SRCHFSYR DIM        4               * From starting year (CCYY)
SRCHTSYR DIM        4               * To starting year (CCYY)
SRCHFEYR DIM        4               * From ending year (CCYY)
SRCHTEYR DIM        4               * To ending year (CCYY)
SRCHWORK DIM        4               * Working variable for date tests
SRCHYEAR FORM       4               * Working year as a form field (CCYY)
SRCHAGE  DIM        3               * Age looking for
SRCHRAN  FORM       2               * Age range looking for NZHIS
SRCHBDAY  DIM       4               * Birth Day
SRCHBRTH  FORM      4               * Birth year
.
SRCHRSGS  FORM      1               * Revesre Surname/Given Name Search
.                                     Equates to PTCNRSGS in PATCONFD
SRCHPCKL  FORM      1               * New Picking List
.                                     Equates to PTCNPCKL in PATCONFD
SRCHDOBS  FORM      1               * Date of Birth Search
.                                     Equates to PTCNDOBS in PATCONFD
SRCHDADD  DIM       54              * Address Display
.
SRCHCMSX  FORM      1               * Exact match on sound-ex
.                                     equates to PTCNCMSX in PATCONFD
SRCHWKDT DIM        8               * Working variable for date tests
.
.        Variables for DOB search
.
SRCHFWCY  FORM      4               * From date work variable (CCYY)
SRCHFWMD  FORM      4               * From date work vaiable (MMDD)
SRCHTWCY  FORM      4               * To date work variable (CCYY)
SRCHTWMD  FORM      4               * To date work variable (MMDD)
SRCHTDTE  DIM       8               * To date for DOB search (CCYYMMDD)
.
.        SRCHREP is used to get the next character in the ascii table
.
SRCHREP1 INIT      " !!#"#"####$$%%&&''(())**++,,--..//00112233445566778899:":
                   ":;;<<==>>??@@AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUV"
SRCHREP2 INIT      "VWWXXYYZZ[[\\]]^^__``aabbccddeeffgghhiijjkkllmmnnooppqqr":
                   "rssttuuvvwwxxyyzz{{||}}~"
.
.  redefine form fields for key
.  ----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
GSRBILL    FORM         8           64       BILLING NUMBER (IF NO U/R)
