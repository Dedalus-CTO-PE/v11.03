.******************************************************************************
.* System         : Referral Management/Allied Health Letters                 *
.*                                                                            *
.* Include Name   : ALLLETDF.INC                                              *
.*                                                                            *
.* Function       : Common code Definitions for printing letters.             *
.*                                                                            *
.* Modifications  :                                                           *
.*                                                                            *
.*----------------------------------------------------------------------------*
.* V11.02.03 14/04/2022  Thanh T           TSK 0903453                        *
.*           Added LXPXUCC4, LXUCC4LD, LXPXATF1, LXPXUCC5, LXUCC5LD and       *
.*           LXPXATF2 fields                                                  *
.* V11.02.02 08/04/2022  Jacob Jackson     TSK 0864505                        *
.*           Added LCPRSUNM, LCPRGINM, LCPROVSU, LCPROVGI, LCPROVSL           *
.* V11.02.01 23/03/2022  Sunny             TSK 0914741                        *
.*           Added LXRFFHOS, LXRFTHOS and LXALHCPC                            *
.* V11.01.01 28/06/2021  Sunny             TSK 0893817                        *
.*           Added LCSYSTYP - PAS Server Environment                          *
.*           Added LCDWLDYS - Calculated Max Dept on Wait List Time in Days   *
.*           Added LCDWLYRS - Calculated Max Dept on Wait List Time in Years  *
.*           Added LCDWLMTH - Calculated Max Dept on Wait List Time in Months *
.* V11.00.02 17/11/2020  Thanh T           TSK 0878747                        *
.*           Added LCMBIROR - multiple birth order details                    *
.* V11.00.01 08/04/2020  Thanh T           TSK 0879163                        * 
.*           Added LCPMPORD, LCSEXLDS and LCSEXAS1                            * 
.*----------------------------------------------------------------------------*
.*        V10.08.02 01/07/2016  Peter Vela       TSK 0821692                  *
.*                  Added First Given Name, Second Given Name                 *
.*        V10.08.01 31/05/2016  Nicole Torrisi   TSK 0816184                  *
.*                  Added Alerts LCAL* and LXAL* and ALR data type            *
.*        V10.06.01 18/03/2015  Ebon Clements    CAR 303890                   *
.*                  Renamed LCREHCPC - Referring HCP State                    *
.*                  Renamed LCREHCPS - Referring HCP Post Code                *
.*        V10.05.01 10/10/2014  Ania P           CAR 306908                   *
.*                  Added %redepd                                             *
.*        V10.04.01 18/02/2014  Don Nguyen       CAR 291879                   *
.*                  Added LCIHINUM & LXIHINUM                                 *
.*        V10.03.06 27/11/2013  Don Nguyen       CAR 293872                   *
.*                  Added LXNHIE1D, LXNHIE2D, LXNHIE3D, LXNXKINR, LXEMRCON,   *
.*                  LXNHIRES                                                  *
.*        V10.03.05 11/10/2013  Steve Armstrong  CAR 289244                   *
.*                  Added LXREPRO1, LXREPRO2, LXREPRO3, LXREDIA1, LXREDIA2,   *
.*                  LXREDIA3.                                                 *
.*                  Also added LCPTYPE, LCHFNAME, LCHFNUMB, LCFRMADD,         *
.*                  LCREPRD1, LCREPRD2, LCREPRD3, LCREDID1, LCREDID2,         *
.*                  LCREDID3, LCRECONC, LCRECOND.                             *
.*        V10.03.04 10/07/2013  Don Nguyen    CAR 288152                      *
.*                  Added LXRERHCP for referring HCP name                     *
.*        V10.03.03 22/05/2013  Davin         CAR 284814                      *
.*                  Added PMI GP/Practice fields 391-413 (LCPMTITL - LCPGPFAX)*
.*        V10.03.02 19/12/2012  Don Nguyen    CAR 278200                      *
.*                  Added LCREPURC - Expected Purchaser                       *
.*        V10.03.01 15/08/2012 Ebon Clements  CAR 261277                      *
.*                  Assigned new cat code to ALREUC32                         *
.*        V10.02.02 09/09/2011  Saroeun Soeur CAR 245585                      *
.*        V10.02.01 15/07/2011  Saroeun Soeur CAR 245585                      *
.*                  fixed varible ordering to resolve %rercan issue           *
.*        V10.00.01 25/10/2010  Peter Vela    CAR 230909                      *
.*                  Added Responsible HCP ALREHCP Given Name and Surname      *
.*                  to Allied Health Letters                                  *
.*        V9.12.01  15/10/2009  WeeLee Koo    CAR 206462                      *
.*                  Added ACC No (LCHACCNO and LXHACCNO)                      *
.*        V9.11.01  24/04/2009  Saroeun Soeur CAR 191508                      *
.*                  Added local GP variables                                  *
.*        V9.09.01  05/03/2008  Ebon Clements CAR 163260                      *
.*                  Added referring HCP practice                              *
.*        V9.08.01  23/01/2007  Ebon Clements CAR 127364                      *
.*                  Added hcp preferred communication                         *
.*        V9.08.00  22/01/2007  Janet George  CAR 127364                      *
.*                  Included vars for Clinic Id desc,Clinic Type desc,        *
.*                  HCP address details                                       *
.*        V9.05.B01 19/01/2005  Mike Laming   CAR 76341                       *
.*                  Mods for Templated forms                                  *
.*        V9.05.B00 16/01/2005  Mike Laming   CAR 76341                       *
.*                  Cloned from WATLETDF                                      *
.*                                                                            *
.******************************************************************************
SPECCHAR  INIT      "%"
LCPAGE    INIT      "%page"          *  1 Page Break                      *1
LCCURDAT  INIT      "%currdate"      * Current Date
LCFNAME   INIT      "%fname"         * Patient Full Name
LCTITL    INIT      "%titl"          * PATIENT TITLE
LCSNAME   INIT      "%sname"         * PATIENT SURNAME
LCGNAME   INIT      "%gname"         * PATIENTS GIVEN NAMES
LCBDEBT   INIT      "%bdebt"         * BAD DEBTOR INDICATOR 0-NO 1-YES
LCPSNAME  INIT      "%psname"        * PATIENTS PREVIOUS SURNAME
LCADD1    INIT      "%add1"          * PATIENT ADDRESS LINE 1
LCADD2    INIT      "%add2"          * PATIENT ADDRESS LINE 2             *10
LCSUBRB   INIT      "%subrb"         * PATIENT ADDRESS LINE 3
LCADD4    INIT      "%add4"          * PATIENT ADDRESS LINE 4
LCPOST    INIT      "%post"          * PATIENT POSTCODE
LCTELEP   INIT      "%telep"         * TELEPHONE PRIVATE
LCTELEB   INIT      "%teleb"         * TELEPHONE BUSINESS
LCSEX     INIT      "%sex"           * PATIENTS SEX
LCMSTAT   INIT      "%mstat"         * PATIENTS MARTIAL STATUS (Cat M)
LCBDATE   INIT      "%bdate"         * date of Birth         (ccyymmdd)
LCSAGE    INIT      "%sage"          * PATIENTS AGE
LCCONT    INIT      "%cont"          * COUNTRY OF BIRTH (Cat C)           *20
LCREG     INIT      "%reg"           * PATIENTS RELIGION (Cat R)
LCTYPE    INIT      "%type"          * PATIENTS TYPE (Cat T)
LCOCCUP   INIT      "%occup"         * PATIENTS OCCUPATION
LCMEDI    INIT      "%medi"          * MEDICARE NUMBER
LCMXMCCD  INIT      "%mxmccd"        * Medicare Code
LCPENNO   INIT      "%penno"         * PENSION NUMBER
LCPNDTE   INIT      "%pndte"         * pension no expiry date  (ccyymm)
LCREPAT   INIT      "%repat"         * REPATRIATION NUMBER
LCSMOK    INIT      "%smok"          * PATIENT SMOKER
LCMICRO   INIT      "%micro"         * MICROFILM ADDRESS                  *30
LCCEASE   INIT      "%cease"         * DESEASED INDICATOR
LCAUTOPY  INIT      "%autopy"        * AUTOPSY INDICATOR
LCHIGH1   INIT      "%high1"         * HIGHLIGHT CODE 1 (Cat H1)
LCHIGH2   INIT      "%high2"         * HIGHLIGHT CODE 2 (Cat H2)
LCHIGH3   INIT      "%high3"         * HIGHLIGHT CODE 3 (Cat H3)
LCLOCDOC  INIT      "%locdoc"        * LOCAL DOCTOR
LCFUNDH   INIT      "%fundh"         * HEALTH FUND
LCFNDTB   INIT      "%fndtb"         * HEALTH FUND TABLE
LCFNDMM   INIT      "%fndmm"         * FUND MEMBERSHIP NUMBER
LCUSR1    INIT      "%usr1"          * USER DEFINED FIELD 1 (Cat P1)      *40
LCUSR2    INIT      "%usr2"          * USER DEFINED FIELD 2 (Cat P2)
LCUSR3    INIT      "%usr3"          * USER DEFINED FIELD 3 (Cat P3)
LCUSR4    INIT      "%usr4"          * USER DEFINED FIELD 4 (Cat P4)
LCUSR5    INIT      "%usr5"          * USER DEFINED FIELD 5 (Cat P5)
LCUSR6    INIT      "%usr6"          * USER DEFINED FIELD 6 (Cat P6)
LCUYN1    INIT      "%uyn1"          * USER DEFINED Y/N FIELD 1
LCUYN2    INIT      "%uyn2"          * USER DEFINED Y/N FIELD 2
LCUYN3    INIT      "%uyn3"          * USER DEFINED Y/N FIELD 3
LCYRRES   INIT      "%yrres"         * NUMBER OF YEARS RESIDENT
LCNKNAME  INIT      "%nkname"        * NEXT OF KIN 1 NAME                 *50
LCNKADD1  INIT      "%nkadd1"        * N.O.K 1 ADDRESS LINE 1
LCNKADD2  INIT      "%nkadd2"        * N.O.K 1 ADDRESS LINE 2
LCNKSUBR  INIT      "%nksubr"        * N.O.K 1 ADDRESS LINE 3
LCNKADD4  INIT      "%nkadd4"        * N.O.K 1 ADDRESS LINE 4
LCNKPOST  INIT      "%nkpost"        * N.O.K 1 POSTCODE
LCNKTELP  INIT      "%nktelp"        * N.O.K 1 PRIVATE TELEPHONE
LCNKTELB  INIT      "%nktelb"        * N.O.K 1 BUSINESS TELEPHONE
LCNKRELP  INIT      "%nkrelp"        * N.O.K 1 RELATIONSHIP
LCFNDYY   INIT      "%fndyy"         * "YRS OF FUND MEMBERSHIP (JR,DE)"
LCFNDCG   INIT      "%fndcg"         * fund cover change       (ccyymm)  *60
LCDECDTE  INIT      "%decdte"        * date of death         (ccyymmdd)
LCDIET    INIT      "%diet"          * DEFAULT DIET CODE (Cat DC)
LCMAEMPC  INIT      "%maempc"        * PATIENT EMPLOYER CODE
LCMANOKO  INIT      "%manoko"        * NEXT OF KIN OCCUPATION
LCMANOKE  INIT      "%manoke"        * NEXT OF KIN EMPLOYER CODE
LCMADCNO  INIT      "%madcno"        * DEATH CERTIFICATE NUMBER
LCMAUKDB  INIT      "%maukdb"        * Unknown Date of Birth (Y/N)
LCMAUKDD  INIT      "%maukdd"        * Unknown Date of Death (Y/N)
LCMXRDAT  INIT      "%mxrdat"        * Registration Date
LCMXLGA   INIT      "%mxlga"         * LGA Code                          *70
LCMXLS    INIT      "%mxls"          * Current Legal status (Cat LS)
LCMXLSDT  INIT      "%mxlsdt"        * Date of legal status (ccyymmdd)
LCMXFHMD  INIT      "%mxfhmd"        * Familial history of mental disorder ?
LCMXMHU1  INIT      "%mxmhu1"        * M.H. User defined field 1 (Cat V6)
LCMXMHU2  INIT      "%mxmhu2"        * M.H. User defined field 2 (Cat V7)
LCMXMHU3  INIT      "%mxmhu3"        * M.H. User defined field 3 (Cat V8)
LCMXECNM  INIT      "%mxecnm"        * Emergency contact name
LCMXECA1  INIT      "%mxeca1"        * Emergency contact address line 1
LCMXECA2  INIT      "%mxeca2"        * Emergency contact address line 2
LCMXECA3  INIT      "%mxeca3"        * Emergency contact address line 3  *80
LCMXECA4  INIT      "%mxeca4"        * Emergency contact address line 4
LCMXECPC  INIT      "%mxecpc"        * Emergency contact postcode
LCMXECPP  INIT      "%mxecpp"        * Emergency contact private phone
LCMXECBP  INIT      "%mxecbp"        * Emergency contact Business phone
LCMXECRE  INIT      "%mxecre"        * Emergency contact relationship
LCMXNRNM  INIT      "%mxnrnm"        * Nearest relative name
LCMXNRA1  INIT      "%mxnra1"        * Nearest relative address line 1
LCMXNRA2  INIT      "%mxnra2"        * Nearest relative address line 2
LCMXNRA3  INIT      "%mxnra3"        * Nearest relative address line 3
LCMXNRA4  INIT      "%mxnra4"        * Nearest relative address line 4   *90
LCMXNRPC  INIT      "%mxnrpc"        * Nearest relative postcode
LCMXNRPP  INIT      "%mxnrpp"        * Nearest relative private phone
LCMXNRBP  INIT      "%mxnrbp"        * Nearest relative Business phone
LCMXNRRE  INIT      "%mxnrre"        * Nearest relative relationship
LCMXREGP  INIT      "%mxregp"        * Registered GP
LCMXGPPC  INIT      "%mxgppc"        * GP Practice Code
LCMXGPPT  INIT      "%mxgppt"        * GP Practice count
LCMXOSDT  INIT      "%mxosdt"        * Date Arrived from Overseas (CCYYMMDD)
LCMXUKDO  INIT      "%mxukdo"        * Unknown Date Arrived from O/S (Y/N)
LCMXCELL  INIT      "%mxcell"        * Cellular Phone NumBer             *100
LCMXADD1  INIT      "%mxadd1"        * Postal Address Line 1
LCMXADD2  INIT      "%mxadd2"        * Postal Address Line 2
LCMXADD3  INIT      "%mxadd3"        * Postal Address Line 3
LCMXADD4  INIT      "%mxadd4"        * Postal Address Line 4
LCMXPOST  INIT      "%mxpost"        * Postal Address Post Code
LCMXSIN1  INIT      "%mxsin1"        * Status Ind 1 - Alerts present(1=yes)
LCMXSIN2  INIT      "%mxsin2"        * Status Ind 2 - Results present(1=yes)
LCMXSIN3  INIT      "%mxsin3"        * Status Ind 3 - Clinical notes present
LCMXSIN4  INIT      "%mxsin4"        * Status Ind 4 - Clinical Documentation
LCMXSIN5  INIT      "%mxsin5"        * Status Ind 5 - Legacy Visits (1=yes) *110
LCMXSLAC  INIT      "%mxslac"        * SLA Code
LCPXRHC1  INIT      "%pxrhc1"        * Registered HCP 1 (pmshcpaf)
LCPXRH1G  INIT      "%pxrh1g"        * Registered HCP 1 Group (pmshcgaf)
LCPXR1GC  INIT      "%pxr1gc"        * Reg. HCP 1 Group Count (pmshclaf)
LCPXINTR  INIT      "%pxintr"        * "Interpreter Required? (0=NO,1=YES)"
LCPXLNG1  INIT      "%pxlng1"        * Preferred Language 1 (Cat LA)
LCPXLNG2  INIT      "%pxlng2"        * Preferred Language 2 (Cat LA)
LCPXLNG3  INIT      "%pxlng3"        * Preferred Language 3 (Cat LA)
LCPXPEML  INIT      "%pxpeml"        * Patient's Email Address
LCPXEDOB  INIT      "%pxedob"        * "Date of Birth Estimated? 0=NO,1=YES"*120
LCPXCMOB  INIT      "%pxcmob"        * Emergency Contact MoBile NumBer
LCPXCEML  INIT      "%pxceml"        * Emergency Contact Email Address
LCPXCCRP  INIT      "%pxccrp"        * "Emer. Contact Corres. (0=NO,1=YES)"
LCPXKMOB  INIT      "%pxkmob"        * NOK MoBile NumBer
LCPXKEML  INIT      "%pxkeml"        * NOK Email Address
LCPXKCRP  INIT      "%pxkcrp"        * "NOK Correspondence (0=NO,1=YES)"
LCPXRMOB  INIT      "%pxrmob"        * Nearest Relative MoBile NumBer
LCPXREML  INIT      "%pxreml"        * Nearest Relative Email Address
LCPXRCRP  INIT      "%pxrcrp"        * "Nearest Relative Corres. 0=NO,1=YES"
LCPXMEDC  INIT      "%pxmedc"        * Medicare Card Valid to (CCYYMMDD) *130
LCPXDETY  INIT      "%pxdety"        * Death Type (Cat DY)
LCPXPRIS  INIT      "%pxpris"        * PRISM NumBer
LCPXCSER  INIT      "%pxcser"        * Correctional Services NumBer
LCPXMSNA  INIT      "%pxmsna"        * Contact 1 Surname
LCPXMGNA  INIT      "%pxmgna"        * Contact 1 Given Name
LCPXMTLE  INIT      "%pxmtle"        * Contact 1 Title
LCPXMAD1  INIT      "%pxmad1"        * Contact 1 Address Line 1
LCPXMAD2  INIT      "%pxmad2"        * Contact 1 Address Line 2
LCPXMAD3  INIT      "%pxmad3"        * Contact 1 Address Line 3
LCPXMAD4  INIT      "%pxmad4"        * Contact 1 Address Line 4          *140
LCPXMPOS  INIT      "%pxmpos"        * Contact 1 Address Post Code
LCPXMPNO  INIT      "%pxmpno"        * Contact 1 Private NumBer
LCPXMBNO  INIT      "%pxmbno"        * Contact 1 Business NumBer
LCPXMMNO  INIT      "%pxmmno"        * Contact 1 MoBile NumBer
LCPXMEML  INIT      "%pxmeml"        * Contact 1 Email Address
LCPXMCNT  INIT      "%pxmcnt"        * Contact 1 Country of Birth (Cat C)
LCPXMCRP  INIT      "%pxmcrp"        * "Contact 1 Correspondence  0=NO,1=YES"
LCPXMLAB  INIT      "%pxmlab"        * "Contact 1 Name on LaBels  0=NO,1=YES"
LCPXMREL  INIT      "%pxmrel"        * Relationship to Patient
LCPXFSNA  INIT      "%pxfsna"        * Contact 2 Surname                 *150
LCPXFGNA  INIT      "%pxfgna"        * Contact 2 Given Name
LCPXFTLE  INIT      "%pxftle"        * Contact 2 Title
LCPXFAD1  INIT      "%pxfad1"        * Contact 2 Address Line 1
LCPXFAD2  INIT      "%pxfad2"        * Contact 2 Address Line 2
LCPXFAD3  INIT      "%pxfad3"        * Contact 2 Address Line 3
LCPXFAD4  INIT      "%pxfad4"        * Contact 2 Address Line 4
LCPXFPOS  INIT      "%pxfpos"        * Contact 2 Address Post Code
LCPXFPNO  INIT      "%pxfpno"        * Contact 2 Private NumBer
LCPXFBNO  INIT      "%pxfbno"        * Contact 2 Business NumBer
LCPXFMNO  INIT      "%pxfmno"        * Contact 2 MoBile NumBer           *160
LCPXFEML  INIT      "%pxfeml"        * Contact 2 Email Address
LCPXFCNT  INIT      "%pxfcnt"        * Contact 2 Country of Birth (Cat C)
LCPXFCRP  INIT      "%pxfcrp"        * "Contact 2 Correspondence 0=NO,1=YES"
LCPXFLAB  INIT      "%pxflab"        * "Contact 2 Name on LaBels 0=NO,1=YES"
LCPXFREL  INIT      "%pxfrel"        * Relationship to Patient
LCPXDVAC  INIT      "%pxdvac"        * DVA Card Colour (Cat DX)
LCPXPNSD  INIT      "%pxpnsd"        * Pension Start Date (CCYYMMDD)
LCPXUYN4  INIT      "%pxuyn4"        * "User Defined Y/N field 4 0=NO,1=YES"
LCPXUYN5  INIT      "%pxuyn5"        * "User Defined Y/N field 5 0=NO,1=YES"
LCPXUYN6  INIT      "%pxuyn6"        * "Not for Resusitation Y/N 0=NO,1=YES"*170
LCPXUDC1  INIT      "%pxudc1"        * User Defined Comments 1
LCPXUDC2  INIT      "%pxudc2"        * User Defined Comments 2
LCPXUDC3  INIT      "%pxudc3"        * User Defined Comments 3
LCPXUSR7  INIT      "%pxusr7"        * User Defined 7 (Category P7)
LCPXUSR8  INIT      "%pxusr8"        * User Defined 8 (Category P8)
LCPXUSR9  INIT      "%pxusr9"        * User Defined 9 (Category P9)
LCPXMSNO  INIT      "%pxmsno"        * Medicare Safety Net NumBer
LCPXCONP  INIT      "%pxconp"        * Which contact for PRA
LCPXFLDR  INIT      "%pxfldr"        * Folder Selection (Category FS)
LCREVISN  INIT      "%revisn"        * Referral/Visit NumBer             *180
LCREURNO  INIT      "%reurno"        * U/R NumBer
LCRESTAT  INIT      "%restat"        * Status
LCREDACT  INIT      "%redact"        * Date Active (CCYYMMDD)
LCRELINK  INIT      "%relink"        * Linked Visit NumBer
LCREDINA  INIT      "%redina"        * Date Inactive (CCYYMMDD)
LCRERCLO  INIT      "%rerclo"        * Reason for Closure (Category LL)
LCREDCLO  INIT      "%redclo"        * Date Closed (CCYYMMDD)
LCRETCLO  INIT      "%retclo"        * Time Closed (HH:MM:SS)
LCREUCLO  INIT      "%reuclo"        * WEB User ID Closed (weBsecaf)
LCRERCAN  INIT      "%rercan"        * Reason Cancelled (Category LN)    *190
LCREDCAN  INIT      "%redcan"        * Date Cancelled (CCYYMMDD)
LCRETCAN  INIT      "%retcan"        * Time Cancelled (HH:MM:SS)
LCREUCAN  INIT      "%reucan"        * WEB User ID Cancelled (weBsecaf)
LCRERINA  INIT      "%rerina"        * Reason Inactive (Category LI)
LCRETINA  INIT      "%retina"        * Time Inactive (HH:MM:SS)
LCREDINU  INIT      "%redinu"        * Date Inactive Until (CCYYMMDD)
LCREUINA  INIT      "%reuina"        * WEB User ID Inactive (weBsecaf)
LCRERDAT  INIT      "%rerdat"        * Date of Referral (CCYYMMDD)
LCRERDEP  INIT      "%rerdep"        * Referred to Department (alldepaf)
LCRERHCP  INIT      "%rerhcp"        * Referring HCP (pmshcpaf)          *200
LCRERHCR  INIT      "%rerhcr"        * Referring Practice (pmshclaf)
LCRERHCT  INIT      "%rerhct"        * Referring Group Count (pmshcgaf)
LCREDEPT  INIT      "%redept"        * Department Code (alldepaf)
LCREUNIT  INIT      "%reunit"        * Unit/Specialty (Category AC)
LCREPRTY  INIT      "%reprty"        * Priority (Category PR)
LCREPRO1  INIT      "%repro1"        * ProBlem Code 1 (allprraf)
LCREPRO2  INIT      "%repro2"        * ProBlem Code 2 (allprraf)
LCREPRO3  INIT      "%repro3"        * ProBlem Code 3 (allprraf)
LCREDIA1  INIT      "%redia1"        * Diagnosis Code 1 (alldiaaf)
LCREDIA2  INIT      "%redia2"        * Diagnosis Code 2 (alldiaaf)       *210
LCREDIA3  INIT      "%redia3"        * Diagnosis Code 3 (alldiaaf)
LCRESRCE  INIT      "%resrce"        * Source of Referral(ostcatg.outsitaf
LCRECOMP  INIT      "%recomp"        * Compensation Code (Category CL)
LCREBULK  INIT      "%rebulk"        * "Bulk Bill (0=No,1=Yes)"
LCREDREV  INIT      "%redrev"        * Date of Next Review (CCYYMMDD)
LCREHCP   INIT      "%rehcp"         * ResponsiBle HCP (pmshcpaf)
LCREDREC  INIT      "%redrec"        * Date Referral Received (CCYYMMDD)
LCREUC01  INIT      "%reuc01"        * User Defined Code 1 (Category la)
LCREUC02  INIT      "%reuc02"        * User Defined Code 2 (Category lB)
LCREUC03  INIT      "%reuc03"        * User Defined Code 3 (Category lc) *220
LCREUC04  INIT      "%reuc04"        * User Defined Code 4 (Category ld)
LCREUC05  INIT      "%reuc05"        * User Defined Code 5 (Category le)
LCREUC06  INIT      "%reuc06"        * User Defined Code 6 (Category lf)
LCREUC07  INIT      "%reuc07"        * User Defined Code 7 (Category lg)
LCREUC08  INIT      "%reuc08"        * User Defined Code 8 (Category lh)
LCREUC09  INIT      "%reuc09"        * User Defined Code 9 (Category li)
LCREUC10  INIT      "%reuc10"        * User Defined Code 10 (Category lj)
LCREUC11  INIT      "%reuc11"        * User Defined Code 11 (Category lk)
LCREUC12  INIT      "%reuc12"        * User Defined Code 12 (Category ll)
LCREUC13  INIT      "%reuc13"        * User Defined Code 13 (Category lm)  *230
LCREUC14  INIT      "%reuc14"        * User Defined Code 14 (Category ln)
LCREUC15  INIT      "%reuc15"        * User Defined Code 15 (Category lo)
LCREUC16  INIT      "%reuc16"        * User Defined Code 16 (Category lp)
LCREUC17  INIT      "%reuc17"        * User Defined Code 17 (Category lq)
LCREUC18  INIT      "%reuc18"        * User Defined Code 18 (Category lr)
LCREUC19  INIT      "%reuc19"        * User Defined Code 19 (Category ls)
LCREUC20  INIT      "%reuc20"        * User Defined Code 20 (Category lt)
LCREUC21  INIT      "%reuc21"        * User Defined Code 21 (Category lu)
LCREUC22  INIT      "%reuc22"        * User Defined Code 22 (Category lv)
LCREUC23  INIT      "%reuc23"        * User Defined Code 23 (Category lw)  *240
LCREUC24  INIT      "%reuc24"        * User Defined Code 24 (Category lx)
LCREUC25  INIT      "%reuc25"        * User Defined Code 25 (Category ly)
LCREUC26  INIT      "%reuc26"        * User Defined Code 26 (Category lz)
LCREUC27  INIT      "%reuc27"        * User Defined Code 27 (Category lA)
LCREUC28  INIT      "%reuc28"        * User Defined Code 28 (Category lB)
LCREUC29  INIT      "%reuc29"        * User Defined Code 29 (Category lC)
LCREUC30  INIT      "%reuc30"        * User Defined Code 30 (Category lD)
LCREUC31  INIT      "%reuc31"        * User Defined Code 31 (Category lE)
LCREUC32  INIT      "%reuc32"        * User Defined Code 32 (Category lO)
LCREUC33  INIT      "%reuc33"        * User Defined Code 33 (Category lG)  *250
LCREUC34  INIT      "%reuc34"        * User Defined Code 34 (Category lH)
LCREUC35  INIT      "%reuc35"        * User Defined Code 35 (Category lI)
LCREUC36  INIT      "%reuc36"        * User Defined Code 36 (Category lJ)
LCREUC37  INIT      "%reuc37"        * User Defined Code 37 (Category lK)
LCREUC38  INIT      "%reuc38"        * User Defined Code 38 (Category lL)
LCREUC39  INIT      "%reuc39"        * User Defined Code 39 (Category lM)
LCREUC40  INIT      "%reuc40"        * User Defined Code 40 (Category lN)
LCREUYN1  INIT      "%reuyn1"        * "User Defined Y/N 1 (0=No,1=Yes)"
LCREUYN2  INIT      "%reuyn2"        * "User Defined Y/N 2 (0=No,1=Yes)"
LCREUYN3  INIT      "%reuyn3"        * "User Defined Y/N 3 (0=No,1=Yes)" *260
LCREUYN4  INIT      "%reuyn4"        * "User Defined Y/N 4 (0=No,1=Yes)"
LCREUHC1  INIT      "%reuhc1"        * User Defined HCP 1 (pmshcpaf)
LCREUHC2  INIT      "%reuhc2"        * User Defined HCP 2 (pmshcpaf)
LCREUHC3  INIT      "%reuhc3"        * User Defined HCP 3 (pmshcpaf)
LCREUHC4  INIT      "%reuhc4"        * HCP Case Team Code (allcasaf)
LCREUFR1  INIT      "%reufr1"        * User Defined Free Format 1
LCREUFR2  INIT      "%reufr2"        * User Defined Free Format 2
LCREUDT1  INIT      "%reudt1"        * User Defined Date 1 (CCYYMMDD)
LCREUTM1  INIT      "%reutm1"        * User Defined Time 1 (HH:MM:SS)
LCREUDT2  INIT      "%reudt2"        * User Defined Date 2 (CCYYMMDD)    *270
LCREUTM2  INIT      "%reutm2"        * User Defined Time 2 (HH:MM:SS)
LCREUDT3  INIT      "%reudt3"        * User Defined Date 3 (CCYYMMDD)
LCREUTM3  INIT      "%reutm3"        * User Defined Time 3 (HH:MM:SS)
LCREUDT4  INIT      "%reudt4"        * User Defined Date 4 (CCYYMMDD)
LCREUTM4  INIT      "%reutm4"        * User Defined Time 4 (HH:MM:SS)
LCREUNO1  INIT      "%reuno1"        * User Defined Numeric 1
LCREUNO2  INIT      "%reuno2"        * JoB NumBer (Orthotics)
LCRECDAT  INIT      "%recdat"        * Date Record Created (CCYYMMDD)
LCRECTIM  INIT      "%rectim"        * Time Record Created (HH:MM:SS)
LCRECUID  INIT      "%recuid"        * WEB User ID Created (weBsecaf)    *280
LCREUDAT  INIT      "%reudat"        * Update Date (CCYYMMDD)
LCREUTIM  INIT      "%reutim"        * Update Time (HH:MM:SS)
LCREUUID  INIT      "%reuuid"        * WEB User ID Updated (weBsecaf)
LCRECTYP  INIT      "%rectyp"        * Clinic Type
LCREHOSN  INIT      "%rehosn"        * Hospital/Unit NumBer
LCREFHCP  INIT      "%refhcp"        * Referring HCP (Free Format)
LCREHCP1  INIT      "%rehcp1"        * Referring HCP Addr 1 (Free Format)
LCREHCP2  INIT      "%rehcp2"        * Referring HCP Addr 2 (Free Format)
LCREHCP3  INIT      "%rehcp3"        * Referring HCP Addr 3 (Free Format)
LCREHCPC  INIT      "%rehcpc"        * Referring HCP State (Free Formatm)  *290
LCREHCPS  INIT      "%rehcps"        * Referring HCP Post Code (Free Frm)
LCREHCPB  INIT      "%rehcpb"        * Referring HCP Bus. Phone (Free Frm)
LCREHCPF  INIT      "%rehcpf"        * Referring HCP Bus. Fax (Free Frm)
LCREHCPP  INIT      "%rehcpp"        * Referring HCP Prov.NumB. (Free Frm)
LCRESTYP  INIT      "%restyp"        * Slot Type (Category CV)
LCREPRCM  INIT      "%reprcm"        * Presenting Complaint (Free Format)
LCREPSIT  INIT      "%repsit"        * Preferred Site
LCRECLID  INIT      "%reclid"        * Clinic ID
LCRECSTA  INIT      "%recsta"        * Claim Status (Category sc)
LCRERREJ  INIT      "%rerrej"        * HIC Reason for Rejection (Cat hr) *300
LCRECCOM  INIT      "%reccom"        * Claim Comments (Free Format)
LCRERTYP  INIT      "%rertyp"        * Type of Referral (Category RI)
LCREREXP  INIT      "%rerexp"        * Referral Expiry Date (ccyymmdd)
LCREMDAT  INIT      "%remdat"        * Must Be Seen By Date (ccyymmdd)
LCREPRDT  INIT      "%reprdt"        * Priority Date (CCYYMMDD)
LCBASITE  INIT      "%basite"        * SITE ID
LCBACLIN  INIT      "%baclin"        * CLINIC ID
LCBADATE  INIT      "%badate"        * DATE (CCYYMMDD)
LCBASTRT  INIT      "%bastrt"        * START TIME (HH:MM)
LCBASLOT  INIT      "%baslot"        * SLOT NUMBER                       *310
LCBATIME  INIT      "%batime"        * SLOT TIME  (HH:MM)
LCBACTYP  INIT      "%bactyp"        * CLINIC TYPE
LCBAURNO  INIT      "%baurno"        * U/R NUMBER
LCBAVIST  INIT      "%bavisit"       * "VISIT TYPE (N,R,S)(CV)"
LCBAOUTN  INIT      "%baoutn"        * OUTPATIENT NUMBER
LCBADAY   INIT      "%baday"         * DAY INDICATOR
LCBASEST  INIT      "%basesst"       * SESSION STATUS CODE (CS)
LCBADISC  INIT      "%badisch"       * DISCHARGE STATUS (Cat DO)
LCBASRCR  INIT      "%basrcr"        * Source of Referral (S)
LCBACOMP  INIT      "%bacomp"        * Compensation EligiBility (CL)     *320
LCBACLAS  INIT      "%baclass"       * Patient Classification (A )
LCBAINS   INIT      "%bains"         * Insurance Status (U1)
LCBAATTN  INIT      "%baattn"        * Attendance Code (CA)
LCBADOCT  INIT      "%badoct"        * Doctor's Code
LCBACOMM  INIT      "%bacomm"        * Comments
LCBBFUND  INIT      "%bbfund"        * Health fund code
LCBBTBLE  INIT      "%bbtble"        * Health fund taBle
LCBACAT   INIT      "%bacat"         * Patient Category (P )
LCBAPRTY  INIT      "%baprty"        * Priority Code (PR)
LCBARSCH  INIT      "%barschd"       * Reason for Reschedule (RR)        *330
LCBBUSR1  INIT      "%bbusr1"        * User Defined Field 1 (O1)
LCBBUSR2  INIT      "%bbusr2"        * User Defined Field 2 (O2)
LCBBUSR3  INIT      "%bbusr3"        * User Defined Field 3 (O3)
LCBBUSR4  INIT      "%bbusr4"        * User Defined Field 4 (O4)
LCBBDEPT  INIT      "%bbdept"        * Department code (Cat AC)
LCBBTRAN  INIT      "%bbtran"        * Transport Allocation (Cat OB)
LCBBLNGI  INIT      "%bblngi"        * Language of Interpreter (Cat OL)
LCBBTMFS  INIT      "%bbtmfs"        * Time First Seen
LCBBTMBO  INIT      "%bbtmbo"        * Time Booked Out
LCBBGPFA  INIT      "%bbgpfa"        * GPFH Approval NumBer              *340
LCBBECRA  INIT      "%bbecra"        * ECR Approval NumBer
LCBBRFGP  INIT      "%bbrfgp"        * Referring GP
LCBBGPPC  INIT      "%bbgppc"        * GP Practice Code
LCBBADCS  INIT      "%bbadcs"        * Actual Doctor Seen
LCBBCITM  INIT      "%bbcitm"        * Check In Time
LCBBASTM  INIT      "%bbastm"        * Time Actually Seen
LCBBDPTM  INIT      "%bbdptm"        * Time of Departure
LCBBOUTC  INIT      "%bboutc"        * Outcome    (CAT OZ)
LCBBDOFR  INIT      "%bbdofr"        * District of Residence (Cat DA)
LCBBUSR5  INIT      "%bbusr5"        * User Defined Field 5 (O5)         *350
LCBBUSR6  INIT      "%bbusr6"        * User Defined Field 6 (O6)
LCBBUSR7  INIT      "%bbusr7"        * User Defined Field 7 (O7)
LCBBUSR8  INIT      "%bbusr8"        * User Defined Field 8 (O8)
LCBBRANK  INIT      "%bbrank"        * Patient Rank
LCBBSPCA  INIT      "%bbspca"        * Special Arrangements
LCBBCIND  INIT      "%bbcind"        * Clinic Indicator (CI) M=MEDICAL
LCBBFLUP  INIT      "%bbflup"        * Follow Up App. Made Flag 1=Yes
LCRCTDES  INIT      "%rectds"        * Referring Clinic Type Description  
LCRCIDES  INIT      "%recids"        * Referring Clinic Id Description  
LCBCTDES  INIT      "%bactds"        * Outpatient Clinic Type Description  *360
LCBCIDES  INIT      "%bacids"        * Outpatient Clinic Id Description  
LCHCPAD1  INIT      "%hcpad1"        * HCP Address Line 1
LCHCPAD2  INIT      "%hcpad2"        * HCP Address Line 2
LCHCPAD3  INIT      "%hcpad3"        * HCP Address Line 3
LCHCPAD4  INIT      "%hcpad4"        * HCP Address Line 4
LCHCPAD5  INIT      "%hcpad5"        * HCP Address Line 5
LCHCPAD6  INIT      "%hcpad6"        * HCP Address Line 6
LCHCPPOC  INIT      "%hcppoc"        * HCP Post Code
LCHCPSTA  INIT      "%hcpsta"        * HCP State    
LCHCPEMA  INIT      "%hcpema"        * HCP Email Address                 *370
LCHCPTEL  INIT      "%hcptel"        * HCP Telephone Number
LCHCPFAX  INIT      "%hcpfax"        * HCP Fax Number
LCHCPRFC  INIT      "%hcprfc"        * HCP Preferred communication
LCHCTITL  INIT      "%hctitl"        * HCP doctor title
LCHCGNAM  INIT      "%hcgnam"        * HCP doctor firstname
LCHCSNAM  INIT      "%hcsnam"        * HCP doctor surname
LCHCFNAM  INIT      "%hcfull"        * HCP doctor formated name (title,given,surname)
LCHACCNO  INIT      "%accnum"        * ACC No
LCALREHG  INIT      "%rehcpgn"       * Responsible HCP Given Names
LCALREHS  INIT      "%rehcpsn"       * Responsible HCP Surname           *380
LCLNPNAM  INIT      "%lnprnam"       * HCP linked practice name
LCLNPAD1  INIT      "%lnprad1"       * HCP linked practice address line 1
LCLNPAD2  INIT      "%lnprad2"       * HCP linked practice address line 2
LCLNPAD3  INIT      "%lnprad3"       * HCP linked practice address line 3
LCLNPAD4  INIT      "%lnprad4"       * HCP linked practice address line 4
LCLNPPOS  INIT      "%lnprpos"       * HCP linked practice post code
LCLNPPHN  INIT      "%lnprphn"       * HCP linked practice phone number
LCLNPFAX  INIT      "%lnprfax"       * HCP linked practice fax
LCLREREJ  INIT      "%reject"        * Reason for rejection (Cat rr)      
LCREPURC  INIT      "%repurc"        * Expected Purchaser (Category HP)  *390
LCPMTITL  INIT      "%pmhtitl"       * PMI GP Title
LCPMGNAM  INIT      "%pmhgnam"       * PMI GP Given Name
LCPMSNAM  INIT      "%pmhsnam"       * PMI GP Surname
LCPMFNAM  INIT      "%pmhfnam"       * PMI GP Full Name (Title Given Surname)
LCPMADR1  INIT      "%pmhadr1"       * PMI GP Address Line 1
LCPMADR2  INIT      "%pmhadr2"       * PMI GP Address Line 2
LCPMADR3  INIT      "%pmhadr3"       * PMI GP Address Line 3
LCPMADR4  INIT      "%pmhadr4"       * PMI GP Address Line 4
LCPMPOST  INIT      "%pmhpost"       * PMI GP Post Code
LCPMSEML  INIT      "%pmhseml"       * PMI GP Email                      *400
LCPMSTEL  INIT      "%pmhstel"       * PMI GP Telephone Number
LCPMFAXN  INIT      "%pmhfaxn"       * PMI GP Fax Number
LCPGPNAM  INIT      "%pmgpnam"       * PMI GP Practice Name
LCPGADD1  INIT      "%pmgadd1"       * PMI GP Practice Address Line 1
LCPGADD2  INIT      "%pmgadd2"       * PMI GP Practice Address Line 2
LCPGADD3  INIT      "%pmgadd3"       * PMI GP Practice Address Line 3
LCPGADD4  INIT      "%pmgadd4"       * PMI GP Practice Address Line 4
LCPGADD5  INIT      "%pmgadd5"       * PMI GP Practice Address Line 5
LCPGADD6  INIT      "%pmgadd6"       * PMI GP Practice Address Line 6
LCPGPOST  INIT      "%pmgpost"       * PMI GP Practice Post Code         *410
LCPGPEML  INIT      "%pmgpeml"       * PMI GP Practice Email
LCPGPTEL  INIT      "%pmgptel"       * PMI GP Practice Telephone Number
LCPGPFAX  INIT      "%pmgpfax"       * PMI GP Practice Fax Number
LCPTYPE   INIT      "%ptype"         * Patient Type Code (Cat T)
LCHFNAME  INIT      "%hfname "       * Health Fund Name
LCHFNUMB  INIT      "%hfnumb "       * Health Fund Number
LCFRMADD  INIT      "%frmtadd"       * Formatted PMI Address
LCREPRD1  INIT      "%reprob1"       * Problem Description 1
LCREPRD2  INIT      "%reprob2"       * Problem Description 2
LCREPRD3  INIT      "%reprob3"       * Problem Description 3             *420
LCREDID1  INIT      "%rediag1"       * Diagnosis Description 1
LCREDID2  INIT      "%rediag2"       * Diagnosis Description 2
LCREDID3  INIT      "%rediag3"       * Diagnosis Description 3
LCRECONC  INIT      "%recontc"       * Contract Code (Cat gb)
LCRECOND  INIT      "%recontd"       * Contract Description (Cat gb)
LCNHIE1C  INIT      "%nhiet1c"       * NHI Ethnicity 1 Code
LCNHIE1D  INIT      "%nhiet1d"       * NHI Ethnicity 1 Description
LCNHIE2C  INIT      "%nhiet2c"       * NHI Ethnicity 2 Code
LCNHIE2D  INIT      "%nhiet2d"       * NHI Ethnicity 2 Description
LCNHIE3C  INIT      "%nhiet3c"       * NHI Ethnicity 3 Code              *430
LCNHIE3D  INIT      "%nhiet3d"       * NHI Ethnicity 3 Description
LCIW1COD  INIT      "%iwi1cod"       * Iwi 1 Code
LCIW1DES  INIT      "%iwi1des"       * Iwi 1 Description
LCIW2COD  INIT      "%iwi2cod"       * Iwi 2 Code
LCIW2DES  INIT      "%iwi2des"       * Iwi 2 Description
LCIW3COD  INIT      "%iwi3cod"       * Iwi 3 Code
LCIW3DES  INIT      "%iwi3des"       * Iwi 3 Description
LCNXTKIN  INIT      "%nxtkinr"       * Next of Kin Relationship Description
LCEMRCON  INIT      "%emrcont"       * Emergency Contact Description
LCNHIRES  INIT      "%nhiresd"       * NHI Resident Status ('Yes' or 'No') *440
LCIHINUM  INIT      "%pihino"        * IHI Number
LCREDEPD  INIT      "%redepd"        * Department Code Description (alldepaf)
LCAL1COD  INIT      "%al1cod"        * Alert 1 Code
LCAL1DES  INIT      "%al1des"        * Alert 1 Description
LCAL1HDP  INIT      "%al1hdp"        * Alert 1 HDP
LCAL2COD  INIT      "%al2cod"        * Alert 2 Code
LCAL2DES  INIT      "%al2des"        * Alert 2 Description
LCAL2HDP  INIT      "%al2hdp"        * Alert 2 HDP
LCAL3COD  INIT      "%al3cod"        * Alert 3 Code
LCAL3DES  INIT      "%al3des"        * Alert 3 Description                 *450
LCAL3HDP  INIT      "%al3hdp"        * Alert 3 HDP
LCAL4COD  INIT      "%al4cod"        * Alert 4 Code
LCAL4DES  INIT      "%al4des"        * Alert 4 Description
LCAL4HDP  INIT      "%al4hdp"        * Alert 4 HDP
LCAL5COD  INIT      "%al5cod"        * Alert 5 Code
LCAL5DES  INIT      "%al5des"        * Alert 5 Description
LCAL5HDP  INIT      "%al5hdp"        * Alert 5 HDP
LCAL6COD  INIT      "%al6cod"        * Alert 6 Code
LCAL6DES  INIT      "%al6des"        * Alert 6 Description
LCAL6HDP  INIT      "%al6hdp"        * Alert 6 HDP                         *460
LCAL7COD  INIT      "%al7cod"        * Alert 7 Code
LCAL7DES  INIT      "%al7des"        * Alert 7 Description
LCAL7HDP  INIT      "%al7hdp"        * Alert 7 HDP
LCAL8COD  INIT      "%al8cod"        * Alert 8 Code
LCAL8DES  INIT      "%al8des"        * Alert 8 Description
LCAL8HDP  INIT      "%al8hdp"        * Alert 8 HDP
LCAL9COD  INIT      "%al9cod"        * Alert 9 Code
LCAL9DES  INIT      "%al9des"        * Alert 9 Description
LCAL9HDP  INIT      "%al9hdp"        * Alert 9 HDP
LCAL10CO  INIT      "%al10cod"       * Alert 10 Code                       *470
LCAL10DE  INIT      "%al10des"       * Alert 10 Description
LCAL10HD  INIT      "%al10hdp"       * Alert 10 HDP
LCALFGNM  INIT      "%pg1name"       * Patient First Given Name
LCALSGNM  INIT      "%pg2name"       * Patient Second Given Name
LCPMPORD  INIT      "%pmpord"        * ACC Purchase Order Number
LCSEXLDS  INIT      "%sexldes"       * Sex Long Description
LCSEXAS1  INIT      "%sexasc1"       * Sex Associate field 1
LCMBIROR  INIT      "%mbiror"        * Multiple Birth Order Details
LCSYSTYP  INIT      "%systype"       * PAS Server Environment
LCDWLDYS  INIT      "%dwldays"       * Max Dept on Wait List Time in Days  *480
LCDWLYRS  INIT      "%dwlyears"      * Max Dept on Wait List Time in Years
LCDWLMTH  INIT      "%dwlmnths"      * Max Dept on Wait List Time in Months
LCPRSUNM  INIT      "%prsuname"      * Preferred Surname
LCPRGINM  INIT      "%prginame"      * Preferred Given Name
LCPROVSU  INIT      "%provsunm"      * Preferred Surname > Actual Surname
LCPROVGI  INIT      "%provginm"      * Preferred  > Actual Given Name
LCPROVSL  INIT      "%provlosn"      * Preferred > Long Actual Surname
LCALHCPC  INIT      "%refhcpc"       * Referring HCP code (pmshcpaf) 
LCRFFHOS  INIT      "%reffmhos"      * Referred From Hospital  
LCRFTHOS  INIT      "%reftohos"      * Referred To Hospital                *490
LCPXUCC4  INIT      "%idengend"      * Identifying Gender Code
LCUCC4LD  INIT      "%idgendsc"      * Identifying Gender Long Description
LCPXATF1  INIT      "%idgentxt"      * Identifying Gender Free Text
LCPXUCC5  INIT      "%pronoun"       * Identifying Pronoun Code
LCUCC5LD  INIT      "%prondesc"      * Identifying Pronoun Long Description
LCPXATF2  INIT      "%prontext"      * Identifying Pronoun Free Text
.
LCNOVARS  INIT      "496"            ********* Number of Variables *********
.------------------------------------------------------------------
.
.
.
XXX       INIT      "$0"             * Special routines
DAT       INIT      "$1"             * Date - format to "dd mmm ccyy"
NOY       INIT      "$2"             * Yes or No
TXT       INIT      "$3"             * Text data (Upper & lower case)
DOC       INIT      "$4"             * Translate Doctor codes
ALR       INIT      "$5"             * Alerts
.
LXRCTDES  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                     
LXRCIDES  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                  
LXBCTDES  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                      
LXBCIDES  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                   
LXHCPAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPAD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPAD5  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPAD6  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPPOC  INIT      "XXXXXXXX"
LXHCPSTA  INIT      "XXXXXXXX"                  
LXHCPEMA  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"                   
LXHCPFAX  INIT      "XXXXXXXXXXXXXXXXXXXX"                   
LXHCPRAC  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPFNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPSNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHCPTTL  INIT      "XXXXXXXXXX"
LXHCPFFL  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXHACCNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXALREHG  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXALREHS  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLNPNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLNPAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLNPAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLNPAD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLNPAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLNPPOS  INIT      "XXXXXXXX"
LXLNPPHN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLNPFAX  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLREREJ  INIT      "XXXXXXXXXXXXXXXXXXXX"      
LXPMTITL  INIT      "XXXXXXXXXX"
LXPMGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMSNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMFNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMADR1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMADR2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMADR3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMADR4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMPOST  INIT      "XXXXXXXX"
LXPMSEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPMSTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPMFAXN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPGPNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGADD5  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGADD6  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGPOST  INIT      "XXXXXXXX"
LXPGPEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPGPTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPGPFAX  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXRERHCP  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXREPRO1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXREPRO2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXREPRO3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXREDIA1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXREDIA2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXREDIA3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNHIE1D  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXNHIE2D  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXNHIE3D  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXNXKINR  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXEMRCON  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNHIRES  INIT      "XXX"
LXIHINUM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXREDEPD  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL1COD  INIT      "XXX"
LXAL1DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL1HDP  INIT      "XXXX"
LXAL2COD  INIT      "XXX"
LXAL2DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL2HDP  INIT      "XXXX"
LXAL3COD  INIT      "XXX"
LXAL3DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL3HDP  INIT      "XXXX"
LXAL4COD  INIT      "XXX"
LXAL4DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL4HDP  INIT      "XXXX"
LXAL5COD  INIT      "XXX"
LXAL5DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL5HDP  INIT      "XXXX"
LXAL6COD  INIT      "XXX"
LXAL6DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL6HDP  INIT      "XXXX"
LXAL7COD  INIT      "XXX"
LXAL7DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL7HDP  INIT      "XXXX"
LXAL8COD  INIT      "XXX"
LXAL8DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL8HDP  INIT      "XXXX"
LXAL9COD  INIT      "XXX"
LXAL9DES  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL9HDP  INIT      "XXXX"
LXAL10CO  INIT      "XXX"
LXAL10DE  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXAL10HD  INIT      "XXXX"
LXALFGNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXALSGNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSYSTYP  INIT      "X"
LXDWLDYS  INIT      "XXXX"
LXDWLYRS  INIT      "XXXX"
LXDWLMTH  INIT      "XXXX"
LXALHCPC  INIT      "XXXXXXXXXX"  
LXRFFHOS  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" 
LXRFTHOS  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"     
LXUCC4LD  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXUCC5LD  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
