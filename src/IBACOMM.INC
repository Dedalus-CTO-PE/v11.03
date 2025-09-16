. *****************************************************************************
. *                P R O G R A M  S U M M A R Y                               *
. *                - - - - - - -  - - - - - - -                               *
. *                                                                           *
. *     PROGRAM NAME:          IBACOMM                                        *
. *                                                                           *
. *     FUNCTION:              I.B.A VARIABLES COMMMON TO                     *
. *                            MOST PROGRAMS                                  *
. *                                                                           *
. *     AUTHOR:                M.HAYSE (I.B.A)                                *
. *                                                                           *
. *     WRITTEN:               02/07/87                                       *
. *                                                                           *
. *     MODIFICATIONS:                                                        *
. *                                                                           *
. *---------------------------------------------------------------------------*
. *       V11.02.02 10/02/2022  Jacob Jackson   TSK 0864505                   *
. *                 Rename 'PRNAME' to 'PRFRNAME' due to conflict             *
. *       V11.02.01 20/01/2022  Jacob Jackson   TSK 0864505                   *
. *                 Added PRNAME, PRNAMES, PREGNAME, PRESNAME, PRENAOPT       *
. *       V11.01.01 20/04/2021  Jill Parkinson  TSK 0892649                   *
. *                 Changed DSEXDESC to DIM 20 from DIM 16                    *
. *       V11.00.03 14/12/2020  Sunny           TSK 0892649                   *
. *                 Changed DSEXDESC to DIM 16 from DIM 13                    *
. *       V11.00.02 09/04/2020  J.Tan           TSK 0868813                   * 
. *                 Added PACSNAMX,PACFNAMX                                   *
. *       V11.00.01 03/04/2020  Thanh T         TSK 0879163                   * 
. *                 Added DSEXLDES, DSEXSDES, DSEXIND1 and DSEXASC1           *
. *---------------------------------------------------------------------------*
. *       V10.10.02 07/04/2017  Peter Vela      TSK 0833050                   *
. *                 Added Other to Patient Sex                                *
. *       V10.10.01 08/03/2017  Davin           TSK 0833093                   *
. *                 Increased ICDRDVER and ICDPRVED to FORM 2                 *
. *       V10.07.01 26/10/2015  Peter McMullen  CAR 323085                    *
. *                 Added LOWUPP declaration                                  *
. *       V10.03.02 08/10/2013  Don Nguyen      CAR 286923                    *
. *                 Added literals over "HUND20"                              *
. *                    "HUND21" to "HUND30"                                   *
. *       V10.03.01 22/02/2013 Peter McMullen   CAR 271555                    *
. *                 Added variables BSLASH and SP256                          *
. *       V10.02.01 18/04/2011 Steve Armstrong  CAR 240692                    *
. *                 Added variables HL7RCTAG & HL7SFTAG                       *
. *       V10.00.01 18/03/2010 Steve Armstrong  CAR 135505                    *
. *                 Added variables HL7TRGID & HL7INCLD                       *
. *****************************************************************************
. *       V9.10.01  10/07/2008  Mike Laming   CAR 173199                      *
. *                 Added variable  ICDPRVED                                  *
. *       V9.06.01  08/06/2006  Ramaprasad    CAR 107723                      *
. *                 Variables CPHDROP1 and CPHDROP2 added                     *
. *       V9.04.01  22/12/2004  Lina Vo       CAR 55990                       *
. *                 Added F6P2                                                *
. *       V9.03.04  15/07/2004  Ebon Clements CAR 51768                       *
. *                 Added NHOSDAYC - Daycase patient                          *
. *                 LOS = one day. 1 = Yes 0 = No                             *
. *       V9.03.03  01/07/2004  Peter Vela    CAR 51164                       *
. *                 Extended DINDETER to full word                            *
. *                 Added DSEXDE13 - full sex desc return                     *
. *                 value from SEXDSC00 - IBACOMN                             *
. *       V9.03.02  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2      *
. *                 - Add Sex Description routine SEXDSC00 with Code "R" -    *
. *                 "Intersex" added                                          *
. *       V9.03.01  28/11/2003  Sylvek Litewka  CAR 20222                     *
. *                 Added variables ICDRDDTE and ICDRDVER.                    *
. *       C2.09.01  21/02/2001  Sandra Barcham                                *
. *                 Added brackets                                            *
. *       C2.00.05  25/09/2000  Dean Cramer                                   *
. *                 Added literals over "HUNDRED"                             *
. *                    "HUND01" to "HUND20".                                  *
. *       C2.00.04  20/10/1999  Greg Horvat                                   *
. *                 Added F1 - F4                                             *
. *       C2.00.03  20/10/1999  Jeni Tan                                      *
. *                 Added SP70                                                *
. *       C2.00.02  17/06/1999  Greg Horvat                                   *
. *                 Added CKYINACT - Check if variable is                     *
. *                 inactive                                                  *
. *       C2.00.01  10/09/1998  Glenn Berry      507 Changes                  *
. *                 Changes XDATE, XCDATE to DIM 8                            *
. *****************************************************************************
. *     02/10/97 C1.00.03 Steve Armstrong                                     *
. *              Added PACADDRS                                               *
. *     13/06/96 C1.00.02 Steve Armstrong                                     *
. *              Added FPTRPOSN                                               *
. *     24/10/95 C1.00.01 Justin Coates                                       *
. *              Added CUNKDAY, MVISxxxx, GBxxxx                              *
. *     10.10.94 C1.00.00 B.G.Ackland                                         *
. *              Created New Common Release of Include                        *
. *                                                                           *
. *                 * A T T E N T I O N *                                     *
. *                 - - - - - - - - - - -                                     *
. *  THIS PROGRAM IS THE PROPERTY OF IBA HEALTHCARE LIMITED                   *
. *    AND MUST NOT BE UTILISED MODIFIED OR COPIED IN ANY                     *
. *      MANNER WHATSOEVER WITHOUT THE EXPRESS WRITTEN                        *
. *        PERMISSION OF IBA HEALTHCARE LIMITED.                              *
. *                                                                           *
. *****************************************************************************
ANS       DIM     1
ANSA      INIT    "A"
ANSB      INIT    "B"
ANSC      INIT    "C"
ANSD      INIT    "D"
ANSE      INIT    "E"
ANSF      INIT    "F"
ANSG      INIT    "G"
ANSH      INIT    "H"
ANSI      INIT    "I"
ANSJ      INIT    "J"
ANSK      INIT    "K"
ANSL      INIT    "L"
ANSM      INIT    "M"
ANSN      INIT    "N"
ANSO      INIT    "O"
ANSP      INIT    "P"
ANSQ      INIT    "Q"
ANSR      INIT    "R"
ANSS      INIT    "S"
ANST      INIT    "T"
ANSU      INIT    "U"
ANSV      INIT    "V"
ANSW      INIT    "W"
ANSX      INIT    "X"
ANSY      INIT    "Y"
ANSZ      INIT    "Z"
.
.      MISCELANEOUS CHARACTERS COMMONLY USED
.
ASK       INIT    "*"
DOT       INIT    "."
COLON     INIT    ":"
COMMA     INIT    ","
QUEST     INIT    "?"
LBRACK    INIT    "("
RBRACK    INIT    ")"
SLASH     INIT    "/"
LFTSQBRK  INIT    "["
RGTSQBRK  INIT    "]"
BSLASH    INIT     0134
CR        INIT     019
LF        INIT     012
TRUE      FORM    "1"
FALSE     FORM    "0"
.
COMMFLAG  FORM      1
.
.
OVRCD     FORM    1
OPTION    FORM    2
DISPOPT   DIM     6
EXIT      FORM    1
MOPTION   FORM    1
ADDOPT    INIT    "Insert"
CHGOPT    INIT    "Change"
DELOPT    INIT    "Delete"
.
CEXIT     FORM    1
CFNAME    DIM     8
COPTION   FORM    2
CPORT     DIM     2
CTIMEIS   DIM     8
ICDRDDTE  DIM     8          * Date for accessing ICD files (e.g Discharge Date)
ICDRDVER  FORM    2          * Indicator for version of ICD file read
.                              1 = ICD9, 2 = ICD10 V2, 3 = ICD10 V3
ICDPRVED  FORM    2          * Previous Edition used (calculated in VALDIOPS)
.
.       THESE ARE USED IN KEYING g DISPLAY DATES
.
CDAY      DIM     2
CMON      DIM     2
CYEAR     DIM     2
CCENT     DIM     2      *** CENTURY
CLYEAR    FORM    2      *** LEAP YEAR VARIABLE
.
C4YEAR    DIM     4      *** Year as CCYY
CCANLDTE  FORM    1      *** Can cancel a default date if set to "1"
CDEFDTE   FORM    1
CUNKDAY   FORM    1      *** 1 = can enter 99 for day
CDCHG     FORM    1
CQUEST    FORM    1      *** DATE QUESTION MARK INDICATOR
.
CPDATE    DIM     8      *** PRINT DATE WITHOUT CENTURY
CPCDATE   DIM     10     *** PRINT DATE WITH CENTURY
.
CMIN      DIM     2
CHOUR     DIM     2
.
CCENTRY   FORM    1      0 = NO CENTURY          IE   81
.                        1 = WE HAVE CENTURIES   IE 1981
.
CHIGHLT   FORM    1      0 = HIGHLIGHT ON
.                        1 = HIGHLIGHT OFF
.
CNEWDS    FORM    1      0 = Using old standard for "?" option displays
.                        1 = Using new standard for "?" option displays
.
CCOL      FORM    3
CSRHNO    FORM    2
CVERT     FORM    2
.
CCOL1     FORM    2   ***** POSITION 1
CCOL2     FORM    2   ***** POSITION 2
CCOL3     FORM    2   ***** POSITION 3
CCOL4     FORM    2   ***** POSITION 4
ECOL      FORM    2   ***** DISPLAY ERROR 
EVERT     FORM    2   ***** DISPLAY ERROR 
.
CLNO      FORM    3
CPAGENO   FORM    3
CCITEM    FORM    3
CCITEMD   DIM     3
CNOUNDLN  FORM    1           * 0=Print underlines, 1=Don't print underlines
CPHDROPT  DIM     20
CPHDROP1  DIM     75
CPHDROP2  DIM     75
.
D1        DIM     1
D2        DIM     2
D3        DIM     3
D4        DIM     4
D5        DIM     5
D6        DIM     6
D7        DIM     7
D8        DIM     8
D9        DIM     9
D10       DIM     10
.
DDISPMSG  DIM     55
DLINE24A  DIM     80
DATTR24A  DIM     80
.
DIM1      DIM     1
DIM2      DIM     2
DIM19     DIM     19
.
HL7INCLD  DIM     8
HL7RCTAG  DIM     20
HL7SFTAG  DIM     3
HL7TRGID  FORM    4
.
IDAY      FORM    2
IMON      FORM    2
IYEAR     FORM    2
ICENT     FORM    2
.
IMIN      FORM    2
IHOUR     FORM    2
.
PACADDRS  DIM     60
PACFNAME  DIM     60
PACFNAMX  DIM     80
PACFRMT   FORM    1
PACGNAME  DIM     25
PACSNAME  DIM     20
PACSNAMX  DIM     80
PACTITLE  DIM     9
.
PRFRNAME  DIM     20
PRNAMES   DIM     18
PREGNAME  DIM     25
PRESNAME  DIM     20
PRENAOPT  FORM    1
.
SEQ       FORM    "-1"
.
TASKID    DIM     8
SYSCMDLN  DIM     1024 
.
XDAY      DIM     2
XMON      DIM     2
XYEAR     DIM     2
XCENT     DIM     2
XDATE     DIM     8
XCDATE    DIM     8
.
XMIN      DIM     2
XHOUR     DIM     2
.
F1        FORM      1
F2        FORM      2
F3        FORM      3
F4        FORM      4
F5        FORM      5
F6        FORM      6
F6P2      FORM    6.2
F7        FORM      7
F8        FORM      8
F9        FORM      9
F10       FORM      10
.
FIRSTSCR  FORM    1
FORM1     FORM    1
FORM2     FORM    2
FORM4     FORM    4
FORM4A    FORM    4
.
.    SPARE FORMS AND DIM VARIABLES
.                  SPACES g NUMBERS
.
SP1       INIT    " "
SP2       INIT    "  "
SP3       INIT    "   "
SP4       INIT    "    "
SP5       INIT    "     "
SP6       INIT    "      "
SP7       INIT    "       "
SP8       INIT    "        "
SP9       INIT    "         "
SP10      INIT    "          "
SP15      INIT    "               "
SP20      INIT    "                    "
SP25      INIT    "                         "
SP30      INIT    "                              "
SP35      INIT    "                                   "
SP70      INIT      "                                   ":
                    "                                   "
SP256     DIM     256
.
UNDLN1    INIT    "_"
UNDLN2    INIT    "__"
UNDLN3    INIT    "___"
UNDLN4    INIT    "____"
UNDLN5    INIT    "_____"
UNDLN6    INIT    "______"
UNDLN7    INIT    "_______"
UNDLN8    INIT    "________"
UNDLN9    INIT    "_________"
UNDLN10   INIT    "__________"
UNDLN11   INIT    "___________"
UNDLN12   INIT    "____________"
UNDLN13   INIT    "_____________"
UNDLN14   INIT    "______________"
UNDLN15   INIT    "_______________"
UNDLN20   INIT    "____________________"
UNDLN30   INIT    "______________________________"
UNDLN     INIT    "___________________________________"
.
UPPLOW    INIT      "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"
LOWUPP    INIT      "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"
.
ZERO      FORM    "0"
ONE       FORM    "1"
TWO       FORM    "2"
THREE     FORM    "3"
FOUR      FORM    "4"
FIVE      FORM    "5"
SIX       FORM    "6"
SEVEN     FORM    "7"
EIGHT     FORM    "8"
NINE      FORM    "9"
TEN       FORM    "10"
TEN1      FORM    "11"
TEN2      FORM    "12"
TEN3      FORM    "13"
TEN4      FORM    "14"
TEN5      FORM    "15"
TEN6      FORM    "16"
TEN7      FORM    "17"
TEN8      FORM    "18"
TEN9      FORM    "19"
TWENTY    FORM    "20"
TWENTY1   FORM    "21"
TWENTY2   FORM    "22"
TWENTY3   FORM    "23"
TWENTY4   FORM    "24"
TWENTY5   FORM    "25"
TWENTY6   FORM    "26"
TWENTY7   FORM    "27"
TWENTY8   FORM    "28"
TWENTY9   FORM    "29"
THIRTY    FORM    "30"
THIRTY1   FORM    "31"
THIRTY2   FORM    "32"
THIRTY3   FORM    "33"
THIRTY4   FORM    "34"
THIRTY5   FORM    "35"
THIRTY6   FORM    "36"
THIRTY7   FORM    "37"
THIRTY8   FORM    "38"
THIRTY9   FORM    "39"
FORTY     FORM    "40"
FORTY1    FORM    "41"
FORTY2    FORM    "42"
FORTY3    FORM    "43"
FORTY4    FORM    "44"
FORTY5    FORM    "45"
FORTY6    FORM    "46"
FORTY7    FORM    "47"
FORTY8    FORM    "48"
FORTY9    FORM    "49"
FIFTY     FORM    "50"
FIFTY1    FORM    "51"
FIFTY2    FORM    "52"
FIFTY3    FORM    "53"
FIFTY4    FORM    "54"
FIFTY5    FORM    "55"
FIFTY6    FORM    "56"
FIFTY7    FORM    "57"
FIFTY8    FORM    "58"
FIFTY9    FORM    "59"
SIXTY     FORM    "60"
SIXTY1    FORM    "61"
SIXTY2    FORM    "62"
SIXTY3    FORM    "63"
SIXTY4    FORM    "64"
SIXTY5    FORM    "65"
SIXTY6    FORM    "66"
SIXTY7    FORM    "67"
SIXTY8    FORM    "68"
SIXTY9    FORM    "69"
SEVENTY   FORM    "70"
SEVENTY1  FORM    "71"
SEVENTY2  FORM    "72"
SEVENTY3  FORM    "73"
SEVENTY4  FORM    "74"
SEVENTY5  FORM    "75"
SEVENTY6  FORM    "76"
SEVENTY7  FORM    "77"
SEVENTY8  FORM    "78"
SEVENTY9  FORM    "79"
EIGHTY    FORM    "80"
EIGHTY1   FORM    "81"
EIGHTY2   FORM    "82"
EIGHTY3   FORM    "83"
EIGHTY4   FORM    "84"
EIGHTY5   FORM    "85"
EIGHTY6   FORM    "86"
EIGHTY7   FORM    "87"
EIGHTY8   FORM    "88"
EIGHTY9   FORM    "89"
NINTY     FORM    "90"
NINTY1    FORM    "91"
NINTY2    FORM    "92"
NINTY3    FORM    "93"
NINTY4    FORM    "94"
NINTY5    FORM    "95"
NINTY6    FORM    "96"
NINTY7    FORM    "97"
NINTY8    FORM    "98"
NINTY9    FORM    "99"
HUNDRED   FORM    "100"
HUND01    FORM    "101"
HUND02    FORM    "102"
HUND03    FORM    "103"
HUND04    FORM    "104"
HUND05    FORM    "105"
HUND06    FORM    "106"
HUND07    FORM    "107"
HUND08    FORM    "108"
HUND09    FORM    "109"
HUND10    FORM    "110"
HUND11    FORM    "111"
HUND12    FORM    "112"
HUND13    FORM    "113"
HUND14    FORM    "114"
HUND15    FORM    "115"
HUND16    FORM    "116"
HUND17    FORM    "117"
HUND18    FORM    "118"
HUND19    FORM    "119"
HUND20    FORM    "120"
HUND21    FORM    "121"
HUND22    FORM    "122"
HUND23    FORM    "123"
HUND24    FORM    "124"
HUND25    FORM    "125"
HUND26    FORM    "126"
HUND27    FORM    "127"
HUND28    FORM    "128"
HUND29    FORM    "129"
HUND30    FORM    "130"
.
USERFLAG FORM      1      ****** USER SYSTEM TRACKING FLAG
.                         CONTROLF SEC 2 POS 149  0=ON,1=OFF
.
ZEROUR   INIT      "       0"
Z70      INIT      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~":
                   "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
CTIMEOUT FORM      2          * Timeout Length in Minutes
.                                 0 = No Timeout
MENUOPT  DIM       2       Menu Option DIM Filed
CMENUOPT FORM      2       Menu Option FORM Field
CSECCNT  FORM      2       Security Level Access Counter - Return to ANSWER
CIMENAUD FORM      1       Invalid Menu Selection Audit Flag (On/Off)
.
CSSCRNUM  FORM      " 0"  * Save Screen Number
CSCRFREE  FORM      1[25] * Free Screens Flags 0=Free 1=In Use
.
HTOP      FORM      2     * Initial Help Window Position
HBOT      FORM      2
HLEF      FORM      3
HRIG      FORM      3
.
CKYIMAND  FORM      1         * keyin mandatory ? (No = 0; Yes = 1)
CKYIMODE  FORM      1         * input mode for keyin (No = 0; Yes =1)
CKYIDEF1  DIM       1         * default field
CKYIDEF2  DIM       2         * default field
CKYIDEF3  DIM       3         * default field
CKYIDEF4  DIM       4         * default field
CKYIDEF5  DIM       5         * default field
CKYIDEF6  DIM       6         * default field
CKYIDEF7  DIM       7         * default field
CKYIDEF8  DIM       8         * default field
CKYIDEF9  DIM       9         * default field
CKYINACT  FORM      1         * check if variable is active (No = 0; Yes = 1)
.
DYES      INIT      "Yes"
DNO       INIT      "No"
DUNK      INIT      "Unknown"
.
DMON      INIT      "Monday"
DTUE      INIT      "Tuesday"
DWED      INIT      "Wednesday"
DTHU      INIT      "Thursday"
DFRI      INIT      "Friday"
DSAT      INIT      "Saturday"
DSUN      INIT      "Sunday"
.
DMALE     INIT      "Male"
DFEMALE   INIT      "Female"
DINDETER  INIT      "Indeterminate"                                    *C-51164
DOTHERSX  INIT      "Other"
.******************************************** Start of Addition        *I-49016
DINTERSX  INIT      "Intersex"              * "Intersex" - "R"
DUNKNOWN  INIT      "Unknown "              *
DSEXCODE  INIT      "MFIRU"                 * to SCAN for valid sex
DSEXREP   INIT      "M1F2I3R4U9"            *
.
DSEXCHAR  DIM       1                       * Input to SEXDSC00
DSEXNO    FORM      1                       * returned sex number - "12349"
DSEXWK    DIM       1                       * work area
DSEXDESC  DIM       20                      * returned from SEXDSC00
DSEXLDES  DIM       50                      * returned from SEXDSP00
DSEXSDES  DIM       20                      * returned from SEXDSP00
DSEXIND1  DIM       1                       * returned from SEXDSP00
DSEXASC1  DIM       6                       * returned from SEXDSP00
.********************************************   End of Addition        *I-49016
DSEXDE13  DIM       13                      * returend from SEXDSC00   *I-51164
DSXSTATE  FORM      1                       * This is a work variable for
.                                             PTCNHDPS used IBACOMN.PBL SEXDSC00
.
GBADD1    DIM       35            * address 1
GBADD2    DIM       35            * address 2
GBADD3    DIM       35            * address 3
GBADD4    DIM       35            * address 4
GBPOST    DIM       8             * post code
GBDOR     DIM       3             * DOR code
GBDORD    DIM       20            * DOR description
MVISEVNT  FORM    8               * multivisit selected event number
MVISETYP  FORM    2               * multivisit selected event type
MVISDOCT  DIM     6               * multivisit selected event doctor/clinic
MVISSITE  DIM     6               * multivisit selected event site
MVISWLPR  DIM     11              * multivisit selected event w/l procedure
MVISDPTH  DIM     120             * multivisit selected dpath
MVISCNT   FORM    3               * multivisit count of events
.
BARCODE   INIT    15,16           * Barcode replace string.
FPTRPOSN  FORM    2               * form pointer position for soundx2
.
XURG      FORM      2         * These used for PATSRCH
XSTRCTG   FORM      2
XSOUNDG   FORM      2
XURMH     FORM      2
XSTRCTMH  FORM      2
XSOUNDMH  FORM      2
XOPTION   FORM      2
.
POSTFLAG  FORM      1         * Flag for mrt - Record Move posted
CKEYSUSP  FORM      1
CKEYORDR  FORM      1
INACTV    FORM      1
.
ACCESS    FORM      1
.
DEFYESNO  INIT      "_"      * yes/no variable (routine YORN)
FYESNO    FORM      1        * yes/no variable (routine YORN)
NO        INIT      "No "    * yes/no variable (routine YORN)
SECTOR    FORM      5
SAVAUD19  DIM       19
YES       INIT      "Yes"    * yes/no variable (routine YORN)
YESNO     INIT      "   "    * yes/no variable (routine YORN)
.
DISPMSG   DIM       55       * Message display on line 24
LINE24    DIM       80       * Save Display for Line 24
ATTR24    DIM       80       * Save Attributes for Line 24
.
NHOSDAYC  FORM      1        * Sameday patient LOS = 1 day. 0=No, 1=Yes
.
