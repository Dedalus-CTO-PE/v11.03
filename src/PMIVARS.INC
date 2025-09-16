.******************************************************************************
.* System         : Patient                                                   *
.*                                                                            *
.* Include Name   : PMIVARS.INC                                               *
.*                                                                            *
.* Function       : Most of the variables required for                        *
.*                  KEYINPMI.PBL and DXPATMAS.PBL and KYPMIDET.PBL            *
.* Modifications  :                                                           *
.* V5.01.01  28/09/1993  RKS  Added variables from old PATRGDAT include into  *
.*                            bottom of this include - and removed PATRGDAT   *
.*                            from use.                                       *
.* V5.01.02  25/11/1993  Matt Added variables for calculating Singapore       *
.*                            I/C number                                      *
.* V5.02.00  22/12/1994  Whirlpool                                            *
.*                       Added PRINTVAR for DISPITEM                          *
.* V5.07.01  20/10/1999  J.Tan                                                *
.*                       Remove SP70 as it defines in COMMON                  *
.* V5.08.01  31/03/2000  Steve Downing                                        *
.*                       Added NOK/PRA variables for PRA default values       *
.******************************************************************************
.
ACNAMEB   FORM      1
ACSKIPKN  FORM      1         * allow keyin of P.R.A.
BLTDESC   DIM       35
BLTOZERO  INIT      " 0"      * convert blanks to zeros
CHGADD    FORM      1         * 1= patient address field changed
CHGCGP    FORM      1         * 1= Registered GP/Practice field changed
CALCKDIG  DIM       1
DIM80     DIM       80
ECNAMEB   FORM      1
ECSKIPKN  FORM      1         * allow keyin of Emerg. Contc
FIELDNO   FORM      5
FORM5     FORM      5
HKIDNUMB  DIM       6
IBANHI01  INIT      "IBANHI01"
KEYFIELD  DIM       127
KYNNMP    DIM       20        * NMPI number to keyin
KYNTITL   FORM      1         * 1 = entering title
.MAP       INIT      "2765432" * Map to calc I/C check digit
MAS1STSL  FORM      1         * 1st PMI selection flag
NMPNUMB   DIM       20        * actual number keyed in
NUMPMISC  FORM      1         * the number of PMI screens
NRNAMEB   FORM      1
NRSKIPKN  FORM      1         * allow keyin of Near. Relatv
PCDEFLT   FORM      1         * allow keyin of Next of Kin 
PCNAMEB   FORM      1
PCSKIPKN  FORM      1         * allow keyin of Next of Kin 
PRADD1    DIM     35          * PRA/NOK  address line 1
PRADD2    DIM     35          * PRA/NOK  address line 2
PRSUBR    DIM     35          * PRA/NOK  address line 3
PRADD4    DIM     35          * PRA/NOK  address line 4
PRPOST    DIM      8          * PRA/NOK  postcode
PRTELEP   DIM     20          * PRA/NOK  private telephone
PRTELEB   DIM     21          * PRA/NOK  business telephone
PRRELP    DIM     10          * PRA/NOK  relationship to patient
PMIEXIST  FORM      1         * 1 = PMI details exist
SP12      INIT      "            "
YESDFLTS  FORM      1
.
.ICARAY    DIM       1[7]
.MAPARY    DIM       1[7]
.
CODEC     INIT      "C "
CODEDA    INIT      "DA"
CODEDC    INIT      "DC"
CODEH1    INIT      "H1"
CODEH2    INIT      "H2"
CODEH3    INIT      "H3"
CODEM     INIT      "M "
CODEP1    INIT      "P1"
CODEP2    INIT      "P2"
CODEP3    INIT      "P3"
CODEP4    INIT      "P4"
CODEP5    INIT      "P5"
CODEP6    INIT      "P6"
CODER     INIT      "R "
CODET     INIT      "T "
CODEV6    INIT      "V6"
CODEV7    INIT      "V7"
CODEV8    INIT      "V8"
TEMPHIDN  DIM        9
.
. for DISPITEM.PBL
.
ATT       DIM       80        * attribute string
AFTDECP   FORM      2  * After Decimal Place
AFTDECPF  FORM      2  * After Decimal Place Format String
BEFDECP   FORM      2  * Before Decimal Place
BEFDECPF  FORM      2  * Before Decimal Place Format String
DECIMALP  INIT      "."
FORM21    FORM      21
FORMAT21  FORM      21
PRINTVAR  DIM       80
LEFTBRAK  INIT      "("
LLCNT     FORM      5
SCRID     DIM       2         * screen id
VAR       DIM       80
PATRG36   FORM      "36"
PATRG63   FORM      "63"
PATRGAGF  FORM      1                    * display age flag
PATRGC    INIT      "C "
PATRGMAS  FORM      1    
PATRGCAN  FORM      1
PATRGCNT  FORM      2                    * field number required
PATRGD06  DIM       6
PATRGD12  DIM       12
PATRGDOB  DIM       10                   * date of birth for display
PATRGDRS  DIM       3                    * default resident status
PATRGEXD  DIM       7                    * expiry date for display
PATRGFIV  FORM      1                    * on/off flag for user f'ld 5
PATRGFLD  FORM      2                    * field number
PATRGFOR  FORM      1                    * on/off flag for user f'ld 4
.
PATRGJBD  DIM       8                    * birth date
PATRGJRD  DIM       8                    * registration date
.
PATRGLIN  FORM      2                    * line number
.
PATRGM    INIT      "M "
PATRGMAX  FORM      "37"                 * maximum number of fields
.
PATRGOFF  FORM      1
PATRGONE  FORM      1                    * on/off flag for user f'ld 1
PATRGOUT  FORM      1
PATRGP1   INIT      "P1"
PATRGP2   INIT      "P2"
PATRGP3   INIT      "P3"
PATRGP4   INIT      "P4"
PATRGP5   INIT      "P5"
PATRGP6   INIT      "P6"
PATRGPAD  FORM      1                    * update previous address flag
PATRGPMI  FORM      1                    * update PMI flag
PATRGPOS  FORM      2                    * position of the last char
PATRGQPR  DIM       12                   * stores prompt for user
.                                          defined field ? options
PATRGR    INIT      "R "
PATRGRDT  DIM       10                   * registration date for display
PATRGRES  DIM       20                   * residential status descrip'n
PATRGRIN  DIM       1                    * resident indicator
PATRGROW  FORM      2                    * row     
PATRGSFL  FORM      1                    * flag- updating or adding
PATRGSIX  FORM      1                    * on/off flag for user f'ld 6
PATRGSUR  DIM       20                   * temp for patient surname
PATRGT    INIT      "T "
PATRGTDD  DIM       8                    * current date
PATRGTHR  FORM      1                    * on/off flag for user f/ld 3
PATRGTWO  FORM      1                    * on/off flag for user f/ld 2
..............................................................................
