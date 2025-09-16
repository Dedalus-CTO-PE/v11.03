.******************************************************************************
.* System         : Outpatients                                               *
.*                                                                            *
.* Include Name   : OUTLVLET.INC (for OUTLETFD)                               *
.*                                                                            *
.* Function       : To include the LC and LX variables for Outpatient Letters *
.*                                                                            *
.* Author         : Justin Coates      25/10/1995                             *
.*                                                                            *
.* Note           : When adding variables, add to the LCNOVARS value as this  *
.*                  must equal the total number of variables in the list.     *
.*                                                                            *
.* Modifications  :                                                           *
.*----------------------------------------------------------------------------*
.* V11.02.02 19/04/2022  Thanh T          TSK 0903453                         *
.*           Added LCPXUCC4, LCUCC4LD, LCPXATF1, LCPXUCC5, LCUCC5LD, LCPXATF2 *
.*           LXPXUCC4, LXUCC4LD, LXPXATF1, LXPXUCC5, LXUCC5LD, LXPXATATF2     *
.* V11.02.01 01/04/2022  Sunny            TSK 0899125                         *
.*           Added %dayshort, %mthshort and %attdtesh                         *
.*----------------------------------------------------------------------------*
.* V11.01.02 27/09/2021  Sunny            TSK 0893817                         *
.*           Added %ogpcdes (Letter GP Contact Method Description)            *
.* V11.01.01 13/07/2021  Sunny            TSK 0893817                         *
.*           Added vars 577 - 599                                             *
.*----------------------------------------------------------------------------*
.* V11.00.02 17/12/2020  Ebon Clements    TSK 0900728                         *
.*           Added %reshfday (576) - Rescheduled from appointment day         *
.* V11.00.01 16/07/2020  Tracey Nguyen    TSK 0893621                         *
.*           Added %smsusrnm (LCCSMSUN/LXXSMSUN)                              *
.*----------------------------------------------------------------------------*
.*        V10.15.02 05/12/2019  Thanh T           TSK 0885188                 *
.*                  Initialise LXNRNAM to 60 X's                              *
.*        V10.15.01 11/10/2019  Richa Phogat  TSK 0861253                     *
.*                  Added %thstcode, %thstdesc, %thresite, %threcode,         *
.*                  %threaddr, %thwrmurl, %threcphn, %thallnts                *
.*----------------------------------------------------------------------------*
.*        V10.14.01 04/06/2019  Nicole Torrisi    TSK 0870873                 *
.*                  Added Reason for Reschedule %oprschrsn                    *
.*        V10.12.01 12/07/2018  Ania P        TSK 0842942                     *
.*                  Added %drseenby/%drdfault                                 *
.*        V10.11.02 27/12/2017  Thanh T.      TSK 0849654                     *
.*                  Added %reshfrtm (563)                                     *
.*        V10.11.01 17/07/2017  Ebon Clements TSK 0817112                     *
.*                  Added %lnkrgrtle (554) to %lnkrprcpc (562)                *
.*        V10.10.01 25/05/2017  Richa Phogat  TSK 0830804                     *
.*                  Added %srvdcode, %srvddesc                                *
.*        V10.07.01 09/03/2016  Ebon Clements TSK 0294154                     *
.*                  Added %smsid, %smscode, %smskey, %smsurno, %smsuser,      *
.*                  %smsphone                                                 *
.*        V10.05.01 13/10/2014  Ania P        CAR 303879                      *
.*                  Added HP code output                                      *
.*        V10.04.01 18/03/2014  Don Nguyen    CAR 291879                      *
.*                  Added LCIHINUM & LXIHINUM - IHI Number                    *
.*        V10.03.05 12/11/2013 Davin          CAR 292499                      *
.*                  Added fields 533 - 542 (series booking day of week)       *
.*        V10.03.04 19/03/2013 Ania P         CAR 281663                      *
.*                  Added fields %ltypcode & %ltypldes                        *
.*        V10.03.03 03/12/2012 Peter Vela     CAR 262297                      *
.*                  Added four lines of Patient Instructions (viscmtaf) 013   *
.*        V10.03.02 25/05/2012 Ebon Clements  CAR 236299                      *
.*                  Added clinic indicator variable                           *
.*        V10.03.01 30/01/2012 Davin          CAR 257512                      *
.*                  Added field 525 - patient long surname                    *
.*        V10.02.03 20/09/2011 Davin          CAR 248749                      *
.*                  Added tags 440-524                                        *
.*        V10.02.02 10/09/2011 Peter McMullen CAR 248749                      *
.*                  Added tags 437-439                                        *
.*        V10.02.01 01/07/2011 Ebon Clements  CAR 242246                      *
.*                  Added clinic phone number                                 *
.*        V10.01.01 08/02/2011 Ebon Clements  CAR 233251                      *
.*                  Added % bold and underline variables                      *
.*        V9.11.01  31/10/2008 Sandra Barcham CAR 178932                      *
.*                  Extend LXPCNAME to be 60 characters not 20                *
.*        V9.09.04  12/12/2007 Ebon Clements  CAR 157081                      *
.*                  Add new var 430 for the patient e-mail address            *
.*        V9.09.03  04/12/2007 Peter McMullen CAR 137137                      *
.*                  Add new var 429 for raw cliic description                 *
.*        V9.09.02  13/11/2007 Mike Laming   CAR 131844                       *
.*                  Change all internal vars for Address fields to DIM 60     *
.*        V9.09.01  19/10/2007  Mike Laming        CAR 131844                 *
.*                  Added vars Ref.GP Practice Fax                            *
.*                  - general clean up of vars & descriptions                 *
.*        V9.08.01  16/05/2007  Ebon Clements      CAR 131843                 *
.*                  Added referring GP(OTRLRFGP), title, telephone, fax,      *
.*                  email and preferred method of contact                     *
.*        V9.07.04  18/09/2006  Ebon Clements      CAR 893657                 *
.*                  Added rescheduled from clinic description                 *
.*        V9.07.03  01/09/2006  Peter Vela         CAR 114297                 *
.*                  Added DVA card Number                                     *
.*                  Added Pension Number                                      *
.*                  Added Patient mobile Number                               *
.*                  Added Patient Preferred Language                          *
.*        V9.07.02  25/07/2006  Ebon Clements      CAR 99899                  *
.*                  Added extra screen cat codes OTXSCO01 to OTXSCO20         *
.*        V9.07.01  20/06/2006  Peter Vela         CAR 108110                 *
.*                  Added Preferred Method of Contact for: PMPXRHC1           *
.*                  Added Preferred Method of Contact and Email Address for:  *
.*                  OBADOCT, OTBBRFGP, OTRLRFGP, OTRLRDOC, OTRLCONS, OTRLRHCP *
.*        V9.06.03  31/05/2006  Peter Vela         CAR 106057                 *
.*                  Added LXPNKRLD - Next of Kin Relationship Description     *
.*        V9.06.02  30/05/2006  Peter Vela         CAR 104807                 *
.*                  Added LXCLNTPC - Clinic Type Code                         *
.*                  Added LXCNVTPC - Cancelled Visit Type Code                *
.*                  Added LXOTVTYP - Visit Type Description                   *
.*                  Added LXOTVTPC - Visit Type Code                          *
.*        V9.06.01  28/04/2006  Peter Vela         CAR 102166                 *
.*                  Changed LXTITLE to a DIM9                                 *
.*        V9.05.02  29/03/2006  Peter Vela         CAR 85995                  *
.*                  Changed LXSBTM01-10 to INIT length of 8                   *
.*        V9.05.01  24/03/2006  Ebon Clements      CAR 79277                  *
.*                  Added carer contact details letter variables              *
.*        V9.04.12  03/11/2005  Peter Vela         CAR 79842                  *
.*                  Added Emergency Contact Mobile number                     *
.*                  Added Emergency Contact Email Address                     *
.*                  Added Nearest Relative Mobile Number                      *
.*                  Added Nearest Relative Email Address                      *
.*        V9.04.11  19/10/2005  Peter Vela    CAR 80192                       *
.*                  Added Next of Kin emergency contact variables             *
.*        V9.04.10  30/08/2005  Peter Vela    CAR 62749                       *
.*                  Added variables from OUTCANFD - Outpatient Booking        *
.*                  Cancellation                                              *
.*        V9.04.09  24/08/2005  Jill Habasque CAR 51002                       *
.*                  Add all "%respxxxx" fields                                *
.*        V9.04.08  09/08/2005  Peter Vela   CAR 67204                        *
.*                  Add variable "%otgpprcd" Local GP Practice Code           *
.*                  Add variable "%rfprca5" Ref. GP Address Line 5            *
.*                  Add variable "%rfprca6" Ref. GP Address Line 6            *
.*                  Add variable "%rfgptel" Ref. GP Telephone Number          *
.*                  Add variable "%rfgpmob" Ref. GP Mobile Number             *
.*                  Add variable "%rfgppag" Ref. GP Pager Telephone Number    *
.*                  Add variable "%rfgppgn" Ref. GP Pager Number              *
.*                  Add variable "%rfgpprv" Ref. GP Provider Number           *
.*        V9.04.07  20/07/2005  Peter Vela   CAR 63023                        *
.*                  Add variable "pxfaxn" Local GP Practice Fax Number        *
.*                  Add variable "pxseml" Local GP Practice Email Address     *
.*        V9.04.06  14/06/2005  Peter Vela   CAR 58732                        *
.*                  Add variable "otpudf1" Presenting Complaint               *
.*                  Add variable "otdiacd1" Diagnosis Code 1                  *
.*                  Add variable "otdiads1" Diagnosis Desc 1                  *
.*                  Add variable "otdiacd2" Diagnosis Code 2                  *
.*                  Add variable "otdiads2" Diagnosis Desc 2                  *
.*                  Add variable "otdiacd3" Diagnosis Code 3                  *
.*                  Add variable "otdiads3" Diagnosis Desc 3                  *
.*                  Add variable "otdiacd4" Diagnosis Code 4                  *
.*                  Add variable "otdiads4" Diagnosis Desc 4                  *
.*                  09/06/2005  Peter Vela   CAR 62622                        *
.*                  Add variable "rflpdsc" Referral Lett Priority Code Desc   *
.*        V9.04.05  24/03/2005  Peter Vela   CAR 59546                        *
.*                  Add variable "ottacclm" Outpatient TAC Claim Number       *
.*                  Add variable "ottacdat" Outpatient TAC Date of Accident   *
.*                  Add variable "otwrkdat" Outpatient Work Cover Date of Acc *
.*                  Add variable "otcntyp1,2,3,4,5" Outpatient ConCard Type   *
.*                  Add variable "otcntyd1,2,3,4,5" Outpatient Type Desc      *
.*                  Add variable "otcnnum1,2,3,4,5" Outpatient Con Card Num   *
.*                  Add variable "otcndat1,2,3,4,5" Outpatient Con Card Exp   *
.*        V9.04.04  18/03/2005  Peter Vela   CAR 59618                        *
.*                  Add variable "%rfhpra2" Referral Letter HCP Practice      *
.*                  Address Line 2                                            *
.*                  Add variable "%rfhpra3" Referral Letter HCP Practice      *
.*                  Address Line 3                                            *
.*                  Add variable "%rfhpra4" Referral Letter HCP Practice      *
.*                  Address Line 4                                            *
.*                  Add variable "%rfhpra5" Referral Letter HCP Practice      *
.*                  Address Line 5                                            *
.*                  Add variable "%rfhpra6" Referral Letter HCP Practice      *
.*                  Address Line 6                                            *
.*                  Add variable "%rfhprpc" Referral Letter HCP Practice      *
.*                  Post Code                                                 *
.*                  09/03/2005  Peter Vela   CAR 57244                        *
.*                  Add variable "%otclmcd" Outpatient Claim Code             *
.*                  Add variable "%otclcdd" Outpatient Claim Code             *
.*        V9.04.03  13/01/2005  Peter Vela   CAR 55313                        *
.*                  Add variable "%rfhprnm" HCP Practice Name Referral Letter *
.*                  Add variable "%rfhprph" HCP Practice Phone No Ref Letter  *
.*                  Add variable "%rfhprfx" HCP Practice Fax Number Ref Lett  *
.*        V9.04.02  23/09/2004  Peter Vela   CAR 53708                        *
.*                  Add variable "%otgpfax" GP Fax Number Outpatient          *
.*        V9.04.01  31/08/2004  Guomin Fu    CAR 40390                        *
.*                  Add variable "%attoutc" Attendance Outcome  and           *
.*                  Add variable "%dschsts" Discharge Status                  *
.*        V9.03.04  30/06/2004  Mike Laming  CAR 40390                        *
.*                  Add variable "%trnsprt" Transport Description    and      *
.*                  Add variable "%dnareas" Reason for non-attendance         *
.*        V9.03.03  11/12/2003  CAR 45549 Ebon Clements                       *
.*                  Mods for OUTRF1FD - change from doctors file to hcp file  *
.*        V9.03.02  25/09/2003  CAR 41801 Ebon Clements                       *
.*                  Added new variables 113 to 163 for series bookings        *
.*        V9.03.01  26/06/2003  CAR 39819  Mike Laming                        *
.*                  Added new variable "%rflcldes" Referral Clinic Descrip'n  *
.*                  and code to read Clinic Type Table - for Referral Letters *
.*                  V9.02.04 21/03/2002 Ebon Clements                         *
.*                  Added new variable Usual GP format name to letters        *
.*                  V9.02.03 15/02/2002 Bronko sosic                          *
.*                  Added new variables from OUTMA1FD - OMACOM1 and OMACOM2   *
.*                  V9.02.03 15/02/2002 Bronko sosic                          *
.*                  Added new variables from OUTMA1FD - OMACOM1 and OMACOM2   *
.*                  V9.02.02 11/01/2002 Ebon Clements                         *
.*                  Added new variables from OUTMA1FD - OMACOM1 and OMACOM2   *
.*                  V9.02.01 06/09/2001 Ebon Clements                         *
.*                  Added new variables from patient master file              *
.*                  07/12/99 J.Tan    (Changes for rel 5.08)                  *
.*                  Added 37 new variables (from 121 to 158)                  *
.******************************************************************************
.
LCPAGE    INIT      "%page"       *  1 Page Break
LCADDA    INIT      "%adda"       *  2 Patient Address 1   
LCADDB    INIT      "%addb"       *  3 Patient Address 2
LCADDC    INIT      "%addc"       *  4 Patient Address 3 
LCADDD    INIT      "%addd"       *  5 Patient Address 4 
LCAGE     INIT      "%age"        *  6 Patient Age
LCATTCDE  INIT      "%attcode"    *  7 O/P Attendance Code
LCATDTE   INIT      "%attdate"    *  8 O/P Attendance Date   ***
LCATTIM   INIT      "%atttime"    *  9 O/P Attendance Time   ***
LCBDATE   INIT      "%bdate"      * 10 Patient's Birth Date
LCBOKDTE  INIT      "%bokdate"    * 11 O/P Booking Date
LCDOKTIM  INIT      "%boktime"    * 12 O/P Booking Time
LCBRTCNT  INIT      "%brthcnt"    * 13 Patient Country of Birth
LCWTELE   INIT      "%btele"      * 14 Patient Business Phone No.
LCCLNDSC  INIT      "%clndesc"    * 15 O/P Clinic Description
LCCLNID   INIT      "%clinid"     * 16 O/P Clinic Id        
LCCLNTYP  INIT      "%clintyp"    * 17 O/P Clinic Type
LCCMPELG  INIT      "%cmpeleg"    * 18 O/P Compensation Eligibility
LCDATE    INIT      "%date"       * 19 Today's Date
LCDGNAM   INIT      "%dgname"     * 20 O/P Doctor Given Name
LCDSNAM   INIT      "%dsname"     * 21 O/P Doctor Surname  
LCDOCTOR  INIT      "%doctor"     * 22 O/P Doctor's Code
LCDTITL   INIT      "%dtitl"      * 23 O/P Doctor Title   
LCFNAME   INIT      "%fname"      * 24 Patient Full Name
LCGNAME   INIT      "%gname"      * 25 Patient Given Name
LCINSTAT  INIT      "%insstat"    * 26 Booking Insurance Status
LCISUM    INIT      "%isum"       * 27 Invoice Summary
LCLOCDOC  INIT      "%locdoct"    * 28 Local Doc./Reg.HCP
LCMEDNO   INIT      "%mednum"     * 29 Patient Medicare No.
LCOUTNUM  INIT      "%outno"      * 30 Outpatient Number
LCPATCAT  INIT      "%patcat"     * 31 Patient Catagory
LCPATCLS  INIT      "%patclas"    * 32 Patient Classification
LCHTELE   INIT      "%ptele"      * 33 Private Phone No.
LCPRTY    INIT      "%prty"       * 34 O/P Priority
LCPCODE   INIT      "%pcode"      * 35 Patient Post Code
LCSEX     INIT      "%sex"        * 36 Patient Sex
LCSITE    INIT      "%site"       * 37 O/P Site
LCSLOT    INIT      "%slot"       * 38 Booking Slot number   
LCSNAME   INIT      "%sname"      * 39 Patient Surname
LCSRCREF  INIT      "%srcref"     * 40 Source of Referral
LCSTIME   INIT      "%sltime"     * 41 Booking Slot time    
LCTITLE   INIT      "%title"      * 42 Patient Title
LCURNO    INIT      "%urno"       * 43 Patient U/R No.
LCNKNAME  INIT      "%mailnme"    * 44 Patient Full Name
LCNKADD1  INIT      "%mailad1"    * 45 Patient Postal Addr 1
LCNKADD2  INIT      "%mailad2"    * 46 Patient Postal Addr 2
LCNKADD3  INIT      "%mailad3"    * 47 Patient Postal Addr 3
LCNKADD4  INIT      "%mailad4"    * 48 Patient Postal Addr 4
LCNKPOST  INIT      "%mailpc"     * 49 Patient Postal Post Code
LCRGGPSN  INIT      "%rggpsnm"    * 50 Reg. GP Surname
LCRGGPGN  INIT      "%rggpgnm"    * 51 Reg. GP Given Name
LCRGGPA1  INIT      "%rggpad1"    * 52 Reg. GP Address 1
LCRGGPA2  INIT      "%rggpad2"    * 53 Reg. GP Address 3
LCRGGPA3  INIT      "%rggpad3"    * 54 Reg. GP Address 3
LCRGGPA4  INIT      "%rggpad4"    * 55 Reg. GP Address 4
LCRGGPPC  INIT      "%rggppc"     * 56 Reg. GP Post Code
LCRFGPSN  INIT      "%rfgrsnm"    * 57 Refer. GP Surname
LCRFGPGN  INIT      "%rfgrgnm"    * 58 Refer. GP Given name
LCRFGPA1  INIT      "%rfgrad1"    * 59 Refer. GP Address 1
LCRFGPA2  INIT      "%rfgrad2"    * 60 Refer. GP Address 2
LCRFGPA3  INIT      "%rfgrad3"    * 61 Refer. GP Address 3
LCRFGPA4  INIT      "%rfgrad4"    * 62 Refer. GP Address 4
LCRFGPPC  INIT      "%rfgrpc"     * 63 Refer. GP Post Code 
LCHSPNAM  INIT      "%hspname"    * 64 Hospital name (multi hospitals)
LCHSPAD1  INIT      "%hspadda"    * 65 Hospital Address 1
LCHSPAD2  INIT      "%hspaddb"    * 66 Hospital Address 2
LCHSPAD3  INIT      "%hspaddc"    * 67 Hospital Address 3
LCHSPAD4  INIT      "%hspaddd"    * 68 Hospital Address 4
LCHSPOST  INIT      "%hsppost"    * 69 Hospital Post Code
LCHSPHON  INIT      "%hspphon"    * 70 Hospital Phone No.
LCRESFRM  INIT      "%reshfrom"   * 71 O/P Rescheduled From
LCRESTO   INIT      "%reshto"     * 72 O/P Rescheduled to   
LCCNLDTE  INIT      "%candate"    * 73 O/P Cancelled date   
LCRSHTIM  INIT      "%reshtime"   * 74 O/P Rescheduled Time
LCRGPRNM  INIT      "%rgprcnm"    * 75 Reg. GP Practice Name
LCRGPRA1  INIT      "%rgprca1"    * 76 Reg. GP Practice Address 1
LCRGPRA2  INIT      "%rgprca2"    * 77 Reg. GP Practice Address 2
LCRGPRA3  INIT      "%rgprca3"    * 78 Reg. GP Practice Address 3
LCRGPRA4  INIT      "%rgprca4"    * 79 Reg. GP Practice Address 4
LCRGPRPC  INIT      "%rgprcpc"    * 80 Reg. GP Practice Post Code 
LCRGPRPH  INIT      "%rgprcph"    * 81 Reg. GP Practice Phone No.
LCRFPRNM  INIT      "%rfprcnm"    * 82 Refer. GP Practice Name    
LCRFPRA1  INIT      "%rfprca1"    * 83 Refer. GP Practice Address 1
LCRFPRA2  INIT      "%rfprca2"    * 84 Refer. GP Practice Address 2
LCRFPRA3  INIT      "%rfprca3"    * 85 Refer. GP Practice Address 3
LCRFPRA4  INIT      "%rfprca4"    * 86 Refer. GP Practice Address 4
LCRFPRPC  INIT      "%rfprcpc"    * 87 Refer. GP Practice Post Code
LCRFPRPH  INIT      "%rfprcph"    * 88 Refer. GP Practice Phone No.
LCDAY     INIT      "%day"        * 89 O/P Clinic Day (Monday, Tuesday ...)
LCCLDATE  INIT      "%cldate"     * 90 O/P Clinic Date (1st, 2nd ...)
LCMONTH   INIT      "%month"      * 91 O/P Clinic Month (January, ...)
LCYEAR    INIT      "%year"       * 92 O/P Clinic Year (ccyy format)
LCCLLTYP  INIT      "%loctype"    * 93 O/P Clinic Location Type
LCCLCLOC  INIT      "%locn"       * 94 O/P Clinic Location
LCECNAM   INIT      "%ecname"     * 95 Patient Emerg. Contact Name
LCECADA   INIT      "%ecadda"     * 96 Patient Emerg. Contact Address 1
LCECADB   INIT      "%ecaddb"     * 97 Patient Emerg. Contact Address 2
LCECADC   INIT      "%ecaddc"     * 98 Patient Emerg. Contact Address 3
LCECADD   INIT      "%ecaddd"     * 99 Patient Emerg. Contact Address 4
LCECPCD   INIT      "%ecpost"     *100 Patient Emerg. Contact Post Code
LCNRNAM   INIT      "%nrname"     *101 Patient Nearest Rel. Name
LCNRADA   INIT      "%nradda"     *102 Patient Nearest Rel. Address 1
LCNRADB   INIT      "%nraddb"     *103 Patient Nearest Rel. Address 2
LCNRADC   INIT      "%nraddc"     *104 Patient Nearest Rel. Address 3
LCNRADD   INIT      "%nraddd"     *105 Patient Nearest Rel. Address 4
LCNRPCD   INIT      "%nrpost"     *106 Patient Nearest Rel. Post Code
LCNATID   INIT      "%natid"      *107 Patient National ID    
LCCTELE   INIT      "%ctele"      *108 Patient Mobile Phone No.
LCPADDA   INIT      "%padda"      *109 Patient Postal Address line 1
LCPADDB   INIT      "%paddb"      *110 Patient Postal Address line 2
LCPADDC   INIT      "%paddc"      *111 Patient Postal Address line 3
LCPADDD   INIT      "%paddd"      *112 Patient Postal Address line 4
LCPPOST   INIT      "%ppost"      *113 Patient Postal Post Code       
LCXSDCCD  INIT      "%xscdccd"    *114 Xtra screen doctor 1 code
LCXSDCPN  INIT      "%xscdcpn"    *115 Xtra screen doctor 1 provider no
LCXSRFDT  INIT      "%xscrfdt"    *116 Xtra screen referral date 1
LCUDEF5   INIT      "%udef5"      *117 Booking User Defined Field 5   
LCUDEF6   INIT      "%udef6"      *118 Booking User Defined Field 6   
LCUDEF7   INIT      "%udef7"      *119 Booking User Defined Field 7   
LCUDEF8   INIT      "%udef8"      *120 Booking User Defined Field 8   
LCPRANK   INIT      "%prank"      *121 Booking Patient Rank 
LCLDTLET  INIT      "%rfldtlet"   *122 Refer. letter date
LCLRFDRC  INIT      "%rflrfdrc"   *123 Refer. letter Refer.HCP Code
LCLRFDRT  INIT      "%rflrfdrt"   *124 Refer. letter Refer.HCP Title
LCLRFDRS  INIT      "%rflrfdrs"   *125 Refer. letter Refer.HCP Surname
LCLRFDRG  INIT      "%rflrfdrg"   *126 Refer. letter Refer.HCP Given Name
LCLCONSC  INIT      "%rflconsc"   *127 Refer. letter Consultant Code
LCLCONST  INIT      "%rflconst"   *128 Refer. letter Consultant Title
LCLCONSS  INIT      "%rflconss"   *129 Refer. letter Consultant Surname
LCLCONSG  INIT      "%rflconsg"   *130 Refer. letter Consultant Given Name
LCLDEPT   INIT      "%rfldept"    *131 Refer. letter Department (Cat A)
LCLPRTY   INIT      "%rflprty"    *132 Refer. letter Priority Code (Cat PR)
LCLDIAG1  INIT      "%rfldiag1"   *133 Refer. letter Diagnosis
LCLUDF1   INIT      "%rfludf1"    *134 Refer. letter User defined field 1
LCLUDF2   INIT      "%rfludf2"    *135 Refer. letter User defined field 2
LCLUDF3   INIT      "%rfludf3"    *136 Refer. letter User defined field 3
LCLUDF4   INIT      "%rfludf4"    *137 Refer. letter User defined field 4
LCLREQNO  INIT      "%rflreqno"   *138 Refer. letter Request No.   
LCLRACDT  INIT      "%rflracdt"   *139 Refer. letter Req.for Appt.Canc.Date
LCLREQRE  INIT      "%rflreqre"   *140 Refer. letter Reason for Request
LCLSPFCD  INIT      "%rflspfcd"   *141 Refer. letter Specialty Funct Code
LCLCADD1  INIT      "%rflcadd1"   *142 Refer. letter Correspond. Address 1
LCLCADD2  INIT      "%rflcadd2"   *143 Refer. letter Correspond. Address 2
LCLCADD3  INIT      "%rflcadd3"   *144 Refer. letter Correspond. Address 3
LCLCADD4  INIT      "%rflcadd4"   *145 Refer. letter Correspond. Address 4
LCLCADPC  INIT      "%rflcadpc"   *146 Refer. letter Correspond. Post Code
LCLECRNO  INIT      "%rflecrno"   *147 Refer. letter ECR Approval No.   
LCLGPFHN  INIT      "%rflgpfhn"   *148 Refer. letter GPFH Approval No.    
LCLCLTYP  INIT      "%rflcltyp"   *149 Refer. letter Clinic Type
LCLCLDES  INIT      "%rflcldes"   *150 Refer. letter Clinic Desc.
LCLRFSRC  INIT      "%rflrfsrc"   *151 Refer. letter Source of Referral
LCLRHCPC  INIT      "%rflrhcpc"   *152 Refer. letter Respons. HCP Code
LCLRHCPT  INIT      "%rflrhcpt"   *153 Refer. letter Respons. HCP Title
LCLRHCPS  INIT      "%rflrhcps"   *154 Refer. letter Respons. HCP surname
LCLRHCPG  INIT      "%rflrhcpg"   *155 Refer. letter Respons. HCP Given Name
LCLDTREC  INIT      "%rfldtrec"   *156 Refer. letter Date Referral Received
LCLDTPTY  INIT      "%rfldtpty"   *157 Refer. letter Date of Priority
LCLEXPUR  INIT      "%rflexpur"   *158 Refer. letter Expected Purchaser
LCLRANK   INIT      "%rflrank"    *159 Refer. letter Patient Rank
LCPXMSNA  INIT      "%pxmsna"     *160 Mother's Surname
LCPXMGNA  INIT      "%pxmgna"     *161 Mother's Given Name
LCPXMTLE  INIT      "%pxmtle"     *162 Mother's Title
LCPXMAD1  INIT      "%pxmad1"     *163 Mother's Address Line 1
LCPXMAD2  INIT      "%pxmad2"     *164 Mother's Address Line 2
LCPXMAD3  INIT      "%pxmad3"     *165 Mother's Address Line 3
LCPXMAD4  INIT      "%pxmad4"     *166 Mother's Address Line 4
LCPXMPOS  INIT      "%pxmpos "    *167 Mother's Address Post Code
LCPXMPNO  INIT      "%pxmpno"     *168 Mother's Private Phone No.
LCPXMBNO  INIT      "%pxmbno"     *169 Mother's Business Phone No.
LCPXMMNO  INIT      "%pxmmno"     *170 Mother's Mobile Phone No.
LCPXMEML  INIT      "%pxmeml"     *171 Mother's Email Address
LCPXMCNT  INIT      "%pxmcnt"     *172 Mother's Country of Birth (Cat C)
LCPXMCRP  INIT      "%pxmcrp"     *173 Mother's Correspondence  0=NO,1=YES
LCPXMLAB  INIT      "%pxmlab"     *174 Mother's Name on Labels  0=NO,1=YES
LCPXMREL  INIT      "%pxmrel"     *175 Relationship to Patient
LCPXFSNA  INIT      "%pxfsna"     *176 Father's Surname
LCPXFGNA  INIT      "%pxfgna"     *177 Father's Given Name
LCPXFTLE  INIT      "%pxftle"     *178 Father's Title
LCPXFAD1  INIT      "%pxfad1"     *179 Father's Address Line 1
LCPXFAD2  INIT      "%pxfad2"     *180 Father's Address Line 2
LCPXFAD3  INIT      "%pxfad3"     *181 Father's Address Line 3
LCPXFAD4  INIT      "%pxfad4"     *182 Father's Address Line 4
LCPXFPOS  INIT      "%pxfpos"     *183 Father's Address Post Code
LCPXFPNO  INIT      "%pxfpno"     *184 Father's Private Phone No.
LCPXFBNO  INIT      "%pxfbno"     *185 Father's Business Phone No.
LCPXFMNO  INIT      "%pxfmno"     *186 Father's Mobile Phone No.
LCPXFEML  INIT      "%pxfeml"     *187 Father's Email Address
LCPXFCNT  INIT      "%pxfcnt"     *188 Father's Country of Birth (Cat C)
LCPXFCRP  INIT      "%pxfcrp"     *189 Father's Correspondence 0=NO,1=YES
LCPXFLAB  INIT      "%pxflab"     *190 Father's Name on Labels 0=NO,1=YES
LCPXFREL  INIT      "%pxfrel"     *191 Relationship to Patient
LCPXDVAC  INIT      "%pxdvac"     *192 Patient DVA Card Colour (Cat DX)
LCPXABRG  INIT      "%pxabrg"     *193 Patient Aboriginality (Cat VA)
LCPXPRVI  INIT      "%pxprvi "    *194 Patient Privacy Indicator (Cat PV)
LCVXABRG  INIT      "%vxabrg"     *195 Patient Aboriginality (PRS/2) (Cat VA)
LCVXCADM  INIT      "%vxcadm"     *196 Patient Admission Critern (PRS/2)(Cat VB
LCVXIRAD  INIT      "%vxirad"     *197 Patient Intent to Readmit (PRS/2)(Cat VR)
LCVXIDUS  INIT      "%vxidus"     *198 Intend Stay Duration (PRS/2) Cat VI
LCVXCRAV  INIT      "%vxcrav "    *199 Carer Availability (PRS/2) (Cat VK)
LCVXRCCT  INIT      "%vxrcct"     *200 Crit. Care Xfer Reason (PRS/2) (VJ)
LCVXAPWD  INIT      "%vxapwd"     *201 Patient Admitting Point Ward (patwr1af)
LCVXAPBD  INIT      "%vxapbd"     *202 Patient Admitting Point Bed (patwr1af)
LCMAINS1  INIT      "%mains1"     *203 Clinic Instruction 1
LCMAINS2  INIT      "%mains2"     *204 Clinic Instruction 2
LCMAINS3  INIT      "%mains3"     *205 Clinic Instruction 3
LCBOUSR1  INIT      "%bousr1"     *206 Booking User Defined Field 1 (O1)
LCBBSPCA  INIT      "%bbspca"     *207 Booking Special Arrangements
LCMACOM1  INIT      "%macom1"     *208 Clinic Comments Line 1
LCMACOM2  INIT      "%macom2"     *209 Clinic Comments Line 2
LCOTDES1  INIT      "%otdes1"     *210 O/P Comments Line 1
LCOTDES2  INIT      "%otdes2"     *211 O/P Comments Line 2
LCOTDES3  INIT      "%otdes3"     *212 O/P Comments Line 3
LCRGGFNM  INIT      "%rggpfnm"    *213 Reg. GP Formated name
LCSCLN01  INIT      "%scln01"     *214 Series booking 1 clinic id
LCSCLN02  INIT      "%scln02"     *215 Series booking 2 clinic id
LCSCLN03  INIT      "%scln03"     *216 Series booking 3 clinic id
LCSCLN04  INIT      "%scln04"     *217 Series booking 4 clinic id
LCSCLN05  INIT      "%scln05"     *218 Series booking 5 clinic id
LCSCLN06  INIT      "%scln06"     *219 Series booking 6 clinic id
LCSCLN07  INIT      "%scln07"     *220 Series booking 7 clinic id
LCSCLN08  INIT      "%scln08"     *221 Series booking 8 clinic id
LCSCLN09  INIT      "%scln09"     *222 Series booking 9 clinic id
LCSCLN10  INIT      "%scln10"     *223 Series booking 10 clinic id
LCSCDS01  INIT      "%scds01"     *224 Series booking 1 clinic desc
LCSCDS02  INIT      "%scds02"     *225 Series booking 2 clinic desc
LCSCDS03  INIT      "%scds03"     *226 Series booking 3 clinic desc
LCSCDS04  INIT      "%scds04"     *227 Series booking 4 clinic desc
LCSCDS05  INIT      "%scds05"     *228 Series booking 5 clinic desc
LCSCDS06  INIT      "%scds06"     *229 Series booking 6 clinic desc
LCSCDS07  INIT      "%scds07"     *230 Series booking 7 clinic desc
LCSCDS08  INIT      "%scds08"     *231 Series booking 8 clinic desc
LCSCDS09  INIT      "%scds09"     *232 Series booking 9 clinic desc
LCSCDS10  INIT      "%scds10"     *233 Series booking 10 clinic desc
LCSBDT01  INIT      "%sbdt01"     *234 Series booking 1 booking date
LCSBDT02  INIT      "%sbdt02"     *235 Series booking 2 booking date
LCSBDT03  INIT      "%sbdt03"     *236 Series booking 3 booking date
LCSBDT04  INIT      "%sbdt04"     *237 Series booking 4 booking date
LCSBDT05  INIT      "%sbdt05"     *238 Series booking 5 booking date
LCSBDT06  INIT      "%sbdt06"     *239 Series booking 6 booking date
LCSBDT07  INIT      "%sbdt07"     *240 Series booking 7 booking date
LCSBDT08  INIT      "%sbdt08"     *241 Series booking 8 booking date
LCSBDT09  INIT      "%sbdt09"     *242 Series booking 9 booking date
LCSBDT10  INIT      "%sbdt10"     *243 Series booking 10 booking date
LCSBTM01  INIT      "%sbtm01"     *244 Series booking 1 booking time
LCSBTM02  INIT      "%sbtm02"     *245 Series booking 2 booking time
LCSBTM03  INIT      "%sbtm03"     *246 Series booking 3 booking time
LCSBTM04  INIT      "%sbtm04"     *247 Series booking 4 booking time
LCSBTM05  INIT      "%sbtm05"     *248 Series booking 5 booking time
LCSBTM06  INIT      "%sbtm06"     *249 Series booking 6 booking time
LCSBTM07  INIT      "%sbtm07"     *250 Series booking 7 booking time
LCSBTM08  INIT      "%sbtm08"     *251 Series booking 8 booking time
LCSBTM09  INIT      "%sbtm09"     *252 Series booking 9 booking time
LCSBTM10  INIT      "%sbtm10"     *253 Series booking 10 booking time
LCSBLN01  INIT      "%sbln01"     *254 Series booking 1 Location
LCSBLN02  INIT      "%sbln02"     *255 Series booking 2 Location
LCSBLN03  INIT      "%sbln03"     *256 Series booking 3 Location
LCSBLN04  INIT      "%sbln04"     *257 Series booking 4 Location
LCSBLN05  INIT      "%sbln05"     *258 Series booking 5 Location
LCSBLN06  INIT      "%sbln06"     *259 Series booking 6 Location
LCSBLN07  INIT      "%sbln07"     *260 Series booking 7 Location
LCSBLN08  INIT      "%sbln08"     *261 Series booking 8 Location
LCSBLN09  INIT      "%sbln09"     *262 Series booking 9 Location
LCSBLN10  INIT      "%sbln10"     *263 Series booking 10 Location
LCBBTRAN  INIT      "%trnsprt"    *264 Booking Transport description     
LCBBDNAR  INIT      "%dnareas"    *265 O/P Non-Attendance reason     
LCOZATTO  INIT      "%attoutc"    *266 Booking Attendance Outcome        
LCDODSCH  INIT      "%dschsts"    *267 O/P Discharge Status          
LCRFGPFX  INIT      "%otgpfax"    *268 Refer. GP Fax No.
LCRFHPNM  INIT      "%rfhprnm"    *269 Refer. Letter refer. HCP Surgery (Addr 1)
LCRFHPPH  INIT      "%rfhprph"    *270 Refer. Letter refer. HCP RPhone No.
LCRFHPFX  INIT      "%rfhprfx"    *271 Refer. Letter refer. HCP Fax No. 
LCOTCLCD  INIT      "%otclmcd"    *272 Outpatient Claim Code     
LCOTCCDD  INIT      "%otclcdd"    *273 Outpatient Claim Code Desc
LCRFHPA2  INIT      "%rfhpra2"    *274 Refer. Letter refer. HCP Address 2
LCRFHPA3  INIT      "%rfhpra3"    *275 Refer. Letter refer. HCP Address 3
LCRFHPA4  INIT      "%rfhpra4"    *276 Refer. Letter refer. HCP Address 4
LCRFHPA5  INIT      "%rfhpra5"    *277 Refer. Letter refer. HCP Address 5
LCRFHPA6  INIT      "%rfhpra6"    *278 Refer. Letter refer. HCP Address 6
LCRFHPPC  INIT      "%rfhprpc"    *279 Refer. Letter refer. HCP Post Code
LCOTTCCL  INIT      "%ottacclm"   *280 Outpat. TAC Claim No.      
LCOTTCDT  INIT      "%ottacdat"   *281 Outpat. TAC Date of Accident
LCOTWKDT  INIT      "%otwrkdat"   *282 Outpat. WorkCover Date of Accident
LCOCNTP1  INIT      "%otcntyp1"   *283 Outpat. Con Card Type    1 
LCOCNTD1  INIT      "%otcntyd1"   *284 Outpat. Con Card Type Des1 
LCOCNNM1  INIT      "%otcnnum1"   *285 Outpat. Con Card Number  1 
LCOCNDT1  INIT      "%otcndat1"   *286 Outpat. Con Card Expiry  1 
LCOCNTP2  INIT      "%otcntyp2"   *287 Outpat. Con Card Type    2 
LCOCNTD2  INIT      "%otcntyd2"   *288 Outpat. Con Card Type Des2 
LCOCNNM2  INIT      "%otcnnum2"   *289 Outpat. Con Card Number  2 
LCOCNDT2  INIT      "%otcndat2"   *290 Outpat. Con Card Expiry  2 
LCOCNTP3  INIT      "%otcntyp3"   *291 Outpat. Con Card Type    3 
LCOCNTD3  INIT      "%otcntyd3"   *292 Outpat. Con Card Type Des3 
LCOCNNM3  INIT      "%otcnnum3"   *293 Outpat. Con Card Number  3 
LCOCNDT3  INIT      "%otcndat3"   *294 Outpat. Con Card Expiry  3 
LCOCNTP4  INIT      "%otcntyp4"   *295 Outpat. Con Card Type    4 
LCOCNTD4  INIT      "%otcntyd4"   *296 Outpat. Con Card Type Des4 
LCOCNNM4  INIT      "%otcnnum4"   *297 Outpat. Con Card Number  4 
LCOCNDT4  INIT      "%otcndat4"   *298 Outpat. Con Card Expiry  4 
LCOCNTP5  INIT      "%otcntyp5"   *299 Outpat. Con Card Type    5 
LCOCNTD5  INIT      "%otcntyd5"   *300 Outpat. Con Card Type Des5 
LCOCNNM5  INIT      "%otcnnum5"   *301 Outpat. Con Card Number  5 
LCOCNDT5  INIT      "%otcndat5"   *302 Outpat. Con Card Expiry  5 
LCRFPDSC  INIT      "%rflpdesc"   *303 Refer. Letter Priority Desc.    
LCOTUDF1  INIT      "%otpudf1"    *304 Patient Presenting Complaint      
LCOTDIC1  INIT      "%otdiacd1"   *305 O/P Diagnosis Code 1          
LCOTDID1  INIT      "%otdiads1"   *306 O/P Diagnosis Desc 1          
LCOTDIC2  INIT      "%otdiacd2"   *307 O/P Diagnosis Code 2          
LCOTDID2  INIT      "%otdiads2"   *308 O/P Diagnosis Desc 2          
LCOTDIC3  INIT      "%otdiacd3"   *309 O/P Diagnosis Code 3          
LCOTDID3  INIT      "%otdiads3"   *310 O/P Diagnosis Desc 3          
LCOTDIC4  INIT      "%otdiacd4"   *311 O/P Diagnosis Code 4          
LCOTDID4  INIT      "%otdiads4"   *312 O/P Diagnosis Desc 4          
LCPXFAXN  INIT      "%pxfaxn"     *313 Reg. GP Practice Fax No.
LCPXSEML  INIT      "%pxseml"     *314 Reg. GP Email Address
LCGPPRCD  INIT      "%otgpprcd"   *315 Reg. GP Practice Code
LCRFPRA5  INIT      "%rfprca5"    *316 Ref. GP Address 5
LCRFPRA6  INIT      "%rfprca6"    *317 Ref. GP Address 6
LCRFGPTL  INIT      "%rfgptel"    *318 Ref. GP Phone No.
LCRFGPMB  INIT      "%rfgpmob"    *319 Ref. GP Mobile Phone No.
LCRFGPPG  INIT      "%rfgppag"    *320 Ref. GP Pager Phone No.
LCRFGPPN  INIT      "%rfgppgn"    *321 Ref. GP Pager No.
LCRFGPPV  INIT      "%rfgpprv"    *322 Ref. GP Provider No. 1
LCRHFDRT  INIT      "%rspfdrt"    *323 Respons. HCP Title
LCRHFDRS  INIT      "%rspfdrs"    *324 Respons. HCP Surname
LCRHFDRG  INIT      "%rspfdrg"    *325 Respons. HCP Given name
LCRHHPNM  INIT      "%rsphpnm"    *326 Respons. HCP Practice Address 1
LCRHHPA2  INIT      "%rsphpa2"    *327 Respons. HCP Practice Address 2
LCRHHPA3  INIT      "%rsphpa3"    *328 Respons. HCP Practice Address 3
LCRHHPA4  INIT      "%rsphpa4"    *329 Respons. HCP Practice Address 4
LCRHHPA5  INIT      "%rsphpa5"    *330 Respons. HCP Practice Address 5
LCRHHPA6  INIT      "%rsphpa6"    *331 Respons. HCP Practice Address 6
LCRHHPPC  INIT      "%rsphppc"    *332 Respons. HCP Post Code
LCRHHPPH  INIT      "%rsphpph"    *333 Respons. HCP Phone No.
LCRHHPFX  INIT      "%rsphpfx"    *334 Respons. HCP Fax No.
LCCNSITE  INIT      "%otcansit"   *335 Book.Cancel Site
LCCNCLIN  INIT      "%otcancln"   *336 Book.Cancel Clinic
LCCNDATE  INIT      "%otcandat"   *337 Book.Cancel Date
LCCNSTRT  INIT      "%otcanstt"   *338 Book.Cancel Session Start Time
LCCNSLOT  INIT      "%otcanslt"   *339 Book.Cancel Session Slot No.
LCCNTIME  INIT      "%otcantim"   *340 Book.Cancel Session Slot Time
LCCNNOUT  INIT      "%otcanout"   *341 Book.Cancel Outpatient No.
LCCNURNO  INIT      "%otcanurn"   *342 Book.Cancel U/R No.
LCCNREAS  INIT      "%otcanres"   *343 Book.Cancel Reason for Cancel (CB)
LCCNRTIM  INIT      "%otcanrtm"   *344 Book.Cancel Time of Cancellation
LCCNSRCR  INIT      "%otcansrr"   *345 Book.Cancel Source of Referal (S)
LCCNCOMP  INIT      "%otcancmp"   *346 Book.Cancel Comp Code (CL)
LCCNCLAS  INIT      "%otcancls"   *347 Book.Cancel Patient Class.
LCCNINSU  INIT      "%otcanins"   *348 Book.Cancel Ins. status (U1)
LCCNCATE  INIT      "%otcancat"   *349 Book.Cancel Patient Cat. (P )
LCCNPRTY  INIT      "%otcanpry"   *350 Book.Cancel Priority Code (PR)
LCCNOPER  INIT      "%otcanope"   *351 Book.Cancel Operator Id.
LCCNTRAN  INIT      "%otcantrn"   *352 Book.Cancel Transport Allocation 
LCCNVTYP  INIT      "%otcanvtp"   *353 Book.Cancel Visit Type of Booking (CV)
LCCNRLRR  INIT      "%otcanref"   *354 Book.Cancel Refer.Letter Refer Reason
LCPNKNME  INIT      "%ptnkname"   *355 Patient Next-of-Kin Name
LCPNKAD1  INIT      "%ptnkadd1"   *356 Patient N-O-K Address 1
LCPNKAD2  INIT      "%ptnkadd2"   *357 Patient N-O-K Address 2
LCPNKSUB  INIT      "%ptnksubr"   *358 Patient N-O-K Suburb (Address 3)
LCPNKAD4  INIT      "%ptnkadd4"   *359 Patient N-O-K Address 4
LCPNKPST  INIT      "%ptnkpost"   *360 Patient N-O-K Postcode
LCPNKRLP  INIT      "%ptnkrelp"   *361 Patient N-O-K Relationship
LCPNKTLP  INIT      "%ptnktelp"   *362 Patient N-O-K Private Phone No.
LCPNKTLB  INIT      "%ptnktelb"   *363 Patient N-O-K Business Phone No.
LCPXKMOB  INIT      "%pxnkmob"    *364 Patient N-O-K Mobile Phone No.
LCPXKEML  INIT      "%pxnkeml"    *365 Patient N-O-K Email Address
LCPXCMOB  INIT      "%pxncmob"    *366 Patient Emerg.Contact Mobile Phone No.
LCPXCEML  INIT      "%pxnceml"    *367 Patient Emerg.Contact Email Address
LCPXRMOB  INIT      "%pxnrmob"    *368 Nearest Relative Mobile Phone No.
LCPXREML  INIT      "%pxnreml"    *369 Nearest Relative Email Address
LCPCNAME  INIT      "%pmcename"   *370 Carer Name
LCPCADD1  INIT      "%pmceadd1"   *371 Carer Address Line 1
LCPCADD2  INIT      "%pmceadd2"   *372 Carer Address Line 2
LCPCADD3  INIT      "%pmceadd3"   *373 Carer Address Line 3
LCPCADD4  INIT      "%pmceadd4"   *374 Carer Address Line 4
LCPCPOST  INIT      "%pmcepost"   *375 Carer Post Code
LCPCTELP  INIT      "%pmcetelp"   *376 Carer Telephone Private Phome No.
LCPCTELB  INIT      "%pmcetelb"   *377 Carer Telephone Business Phome No.
LCPCTELM  INIT      "%pmcetelm"   *378 Carer Telephone Mobile Phome No.
LCPCRELP  INIT      "%pmcerelp"   *379 Carer Relationship
LCPCEMAI  INIT      "%pmceemai"   *380 Carer Email
LCCLNTPC  INIT      "%clintpc"    *381 O/P Clinic Type Code
LCCNVTPC  INIT      "%otcanvtc"   *382 Book.Cancel Visit Type Code
LCOTVTPC  INIT      "%otvstypc"   *383 O/P Visit Type Code
LCOTVTYP  INIT      "%otvistyp"   *384 O/P Visit Type Description
LCPNKRLD  INIT      "%ptnkreld"   *385 Patient N-O-K Relationship Desc
LCDEMAD   INIT      "%demail"     *386 O/P Doctor Email Address
LCDPRMC   INIT      "%dprmec"     *387 O/P Doctor Preferred Method of Contact
LCRGPRMC  INIT      "%rggpprmc"   *388 Reg. GP Pref Method of Contact
LCRFSEML  INIT      "%rfgrseml"   *389 Refer. GP Email Address
LCRFPRMC  INIT      "%rfgrprmc"   *390 Refer. GP Pref Meth of Contact
LCLRSEML  INIT      "%rflrseml"   *391 Refer.Letter Refer HCP Email Address
LCLRPRMC  INIT      "%rflrprmc"   *392 Refer.Letter Refer HCP Pref Method Contac
LCLCSEML  INIT      "%rflseml"    *393 Refer.Letter Consult. Email Add
LCLCPRMC  INIT      "%rflprmc"    *394 Refer.Letter Consult. Pref Method Contact
LCRHSEML  INIT      "%rsphseml"   *395 Responsr. HCP Email Address
LCRHPRMC  INIT      "%rsphprmc"   *396 Responsi. HCP Pref Method of Contact
LCXCOD01  INIT      "%xsccod01"   *397 Extra Screen Code 1     
LCXCOD02  INIT      "%xsccod02"   *398 Extra Screen Code 2      
LCXCOD03  INIT      "%xsccod03"   *399 Extra Screen Code 3    
LCXCOD04  INIT      "%xsccod04"   *400 Extra Screen Code 4
LCXCOD05  INIT      "%xsccod05"   *401 Extra Screen Code 5
LCXCOD06  INIT      "%xsccod06"   *402 Extra Screen Code 6
LCXCOD07  INIT      "%xsccod07"   *403 Extra Screen Code 7
LCXCOD08  INIT      "%xsccod08"   *404 Extra Screen Code 8
LCXCOD09  INIT      "%xsccod09"   *405 Extra Screen Code 9
LCXCOD10  INIT      "%xsccod10"   *406 Extra Screen Code 10
LCXCOD11  INIT      "%xsccod11"   *407 Extra Screen Code 11
LCXCOD12  INIT      "%xsccod12"   *408 Extra Screen Code 12
LCXCOD13  INIT      "%xsccod13"   *409 Extra Screen Code 13
LCXCOD14  INIT      "%xsccod14"   *410 Extra Screen Code 14
LCXCOD15  INIT      "%xsccod15"   *411 Extra Screen Code 15
LCXCOD16  INIT      "%xsccod16"   *412 Extra Screen Code 16
LCXCOD17  INIT      "%xsccod17"   *413 Extra Screen Code 17
LCXCOD18  INIT      "%xsccod18"   *414 Extra Screen Code 18
LCXCOD19  INIT      "%xsccod19"   *415 Extra Screen Code 19
LCXCOD20  INIT      "%xsccod20"   *416 Extra Screen Code 20
LCPXDVAN  INIT      "%pxdvanum"   *417 Patient DVA Card No.
LCPAPENN  INIT      "%papennum"   *418 Patient Pension No. 
LCPXPMBN  INIT      "%pxpamobn"   *419 Patient Mobile Phone No.    
LCPXPLC1  INIT      "%pxplanc1"   *420 Patient Preferred Language 1 Code
LCPXPLD1  INIT      "%pxpland1"   *421 Patient Preferred Language 1 Desc
LCRESCLN  INIT      "%reshclin"   *422 O/P 'Rescheduled From' Clinic Desc
LCRFGTLE  INIT      "%rfgrtle"    *423 Refer. GP Title
LCRFGTEL  INIT      "%rfgrtel"    *424 Refer. GP Phone No.
LCRFGFAX  INIT      "%rfgrfax"    *425 Refer. GP FaxNo.
LCRFGEML  INIT      "%rfgreml"    *426 Refer. GP Email Address
LCRFGPMC  INIT      "%rfgrpmc"    *427 Refer. GP Pref method of contact
LCRFPFXN  INIT      "%rfprcfx"    *428 Refer. GP Practice Fax No.
LCCLNDSR  INIT      "%clndescr"   *429 O/P Clinic Description (raw)
LCPXPEML  INIT      "%pxpateml"   *430 Patient E-mail Address
LCBOLDON  INIT      "%boldon"     *431 Bold print on
LCBOLDOF  INIT      "%boldoff"    *432 Bold print off
LCUNDLON  INIT      "%ulineon"    *433 Underline print on
LCUNDLOF  INIT      "%ulineoff"   *434 Underline print off
LCHECTEL  INIT      "%othectel"   *435 Clinic phone number
LCMAROOM  INIT      "%otmaroom"   *436 Clinic room number
LCOTDES4  INIT      "%otdes4"     *437 O/P Comments Line 4
LCPG1NAM  INIT      "%pg1name"    *438 Patient 1st Given Name 
LCPG2NAM  INIT      "%pg2name"    *439 Patient 2nd Given Name
LCPLTITL  INIT      "%ovlctitl"   *440 OV Local Title
LCPLSNAM  INIT      "%ovlcsnam"   *441 OV Local Surname
LCPLGNAM  INIT      "%ovlcgnam"   *442 OV Local Given Name 1
LCPLGNM2  INIT      "%ovlcgnm2"   *443 OV Local Given Name 2
LCPLNAME  INIT      "%ovlcname"   *444 OV Local Formatted Name
LCPLADD1  INIT      "%ovlcadd1"   *445 OV Local Address Line 1
LCPLADD2  INIT      "%ovlcadd2"   *446 OV Local Address Line 2
LCPLADD3  INIT      "%ovlcadd3"   *447 OV Local Address Line 3
LCPLADD4  INIT      "%ovlcadd4"   *448 OV Local Address Line 4
LCPLPOST  INIT      "%ovlcpost"   *449 OV Local Post Code
LCPLTELP  INIT      "%ovlctelp"   *450 OV Local Telephone Private Phone No.
LCPLTELB  INIT      "%ovlctelb"   *451 OV Local Telephone Business Phone No.
LCPLTELM  INIT      "%ovlctelm"   *452 OV Local Telephone Mobile Phone No.
LCPLRELP  INIT      "%ovlcrelp"   *453 OV Local Relationship
LCPLEMAI  INIT      "%ovlcemai"   *454 OV Local Email
LCPLSLET  INIT      "%ovlcslet"   *455 OV Local Send Letter (0=No,1=Yes)
LCPOTITL  INIT      "%othctitl"   *456 OTH Contact Title
LCPOSNAM  INIT      "%othcsnam"   *457 OTH Contact Surname
LCPOGNAM  INIT      "%othcgnam"   *458 OTH Contact Given Name 1
LCPOGNM2  INIT      "%othcgnm2"   *459 OTH Contact Given Name 2
LCPONAME  INIT      "%othcname"   *460 OTH Contact Formatted Name
LCPOADD1  INIT      "%othcadd1"   *461 OTH Contact Address Line 1
LCPOADD2  INIT      "%othcadd2"   *462 OTH Contact Address Line 2
LCPOADD3  INIT      "%othcadd3"   *463 OTH Contact Address Line 3
LCPOADD4  INIT      "%othcadd4"   *464 OTH Contact Address Line 4
LCPOPOST  INIT      "%othcpost"   *465 OTH Contact Post Code
LCPOTELP  INIT      "%othctelp"   *466 OTH Contact Telephone Private Phone
LCPOTELB  INIT      "%othctelb"   *467 OTH Contact Telephone Business Phone
LCPOTELM  INIT      "%othctelm"   *468 OTH Contact Telephone Mobile Phone
LCPORELP  INIT      "%othcrelp"   *469 OTH Contact Relationship
LCPOEMAI  INIT      "%othcemai"   *470 OTH Contact Email
LCPOSLET  INIT      "%othcslet"   *471 OTH Contact Send Letter (0=No,1=Yes)
LCP2TITL  INIT      "%nok2titl"   *472 NOK2 Contact Title
LCP2SNAM  INIT      "%nok2snam"   *473 NOK2 Contact Surname
LCP2GNAM  INIT      "%nok2gnam"   *474 NOK2 Contact Given Name 1
LCP2GNM2  INIT      "%nok2gnm2"   *475 NOK2 Contact Given Name 2
LCP2NAME  INIT      "%nok2name"   *476 NOK2 Contact Formatted Name
LCP2ADD1  INIT      "%nok2add1"   *477 NOK2 Contact Address Line 1
LCP2ADD2  INIT      "%nok2add2"   *478 NOK2 Contact Address Line 2
LCP2ADD3  INIT      "%nok2add3"   *479 NOK2 Contact Address Line 3
LCP2ADD4  INIT      "%nok2add4"   *480 NOK2 Contact Address Line 4
LCP2POST  INIT      "%nok2post"   *481 NOK2 Contact Post Code
LCP2TELP  INIT      "%nok2telp"   *482 NOK2 Contact Telephone Private Phone
LCP2TELB  INIT      "%nok2telb"   *483 NOK2 Contact Telephone Business Phone
LCP2TELM  INIT      "%nok2telm"   *484 NOK2 Contact Telephone Mobile Phone
LCP2RELP  INIT      "%nok2relp"   *485 NOK2 Contact Relationship
LCP2EMAI  INIT      "%nok2emai"   *486 NOK2 Contact Email
LCP2SLET  INIT      "%nok2slet"   *487 NOK2 Contact Send Letter (0=No,1=Yes)
LCPCTITL  INIT      "%pmcetitl"   *488 Carer Title
LCPCSNAM  INIT      "%pmcesnam"   *489 Carer Surname
LCPCGNAM  INIT      "%pmcegnam"   *490 Carer Given Name 1
LCPCGNM2  INIT      "%pmcegnm2"   *491 Carer Given Name 2
LCPCSLET  INIT      "%pmceslet"   *492 Carer Send Letter (0=No,1=Yes)
LCP1TITL  INIT      "%nok1titl"   *493 NOK1 Contact Title
LCP1SNAM  INIT      "%nok1snam"   *494 NOK1 Contact Surname
LCP1GNAM  INIT      "%nok1gnam"   *495 NOK1 Contact Given Name 1
LCP1GNM2  INIT      "%nok1gnm2"   *496 NOK1 Contact Given Name 2
LCP1SLET  INIT      "%nok1slet"   *497 NOK1 Contact Send Letter (0=No,1=Yes)
LCPSTITL  INIT      "%posttitl"   *498 Postal Address Title
LCPSSNAM  INIT      "%postsnam"   *499 Postal Address Surname
LCPSGNAM  INIT      "%postgnam"   *500 Postal Address Given Name 1
LCPSGNM2  INIT      "%postgnm2"   *501 Postal Address Given Name 2
LCPSNAME  INIT      "%postname"   *502 Postal Address Formatted Name
LCPSTELP  INIT      "%posttelp"   *503 Postal Address Telephone Private
LCPSTELB  INIT      "%posttelb"   *504 Postal Address Telephone Business
LCPSTELM  INIT      "%posttelm"   *505 Postal Address Telephone Mobile
LCPSRELP  INIT      "%postrelp"   *506 Postal Address Relationship
LCPSEMAI  INIT      "%postemai"   *507 Postal Address Email
LCPSSLET  INIT      "%postslet"   *508 Postal Address Send Letter (0=No,1=Yes)
LCPETITL  INIT      "%emcetitl"   *509 EMR Contact Title
LCPESNAM  INIT      "%emcesnam"   *510 EMR Contact Surname
LCPEGNAM  INIT      "%emcegnam"   *511 EMR Contact Given Name 1
LCPEGNM2  INIT      "%emcegnm2"   *512 EMR Contact Given Name 2
LCPETELP  INIT      "%emcetelp"   *513 EMR Contact Telephone Private Phone
LCPETELB  INIT      "%emcetelb"   *514 EMR Contact Telephone Business Phone
LCPERELP  INIT      "%emcerelp"   *515 EMR Contact Relationship
LCPESLET  INIT      "%emceslet"   *516 EMR Contact Send Letter (0=No,1=Yes)
LCPRTITL  INIT      "%prectitl"   *517 Preferred Contact Title
LCPRSNAM  INIT      "%precsnam"   *518 Preferred Contact Surname
LCPRGNAM  INIT      "%precgnam"   *519 Preferred Contact Given Name 1
LCPRGNM2  INIT      "%precgnm2"   *520 Preferred Contact Given Name 2
LCPRTELP  INIT      "%prectelp"   *521 Preferred Contact Telephone Private
LCPRTELB  INIT      "%prectelb"   *522 Preferred Contact Telephone Business
LCPRRELP  INIT      "%precrelp"   *523 Preferred Contact Relationship
LCPRSLET  INIT      "%precslet"   *524 Preferred Cont Send Letter (0=No,1=Yes)
LCPTLSNM  INIT      "%ptlsname"   *525 Patient Long Surname
LCCLNIND  INIT      "%clinind"    *526 Clinic Indicator
LCPATIN1  INIT      "%ptinstr1"   *527 Patient Instructions Line 1
LCPATIN2  INIT      "%ptinstr2"   *528 Patient Instructions Line 2
LCPATIN3  INIT      "%ptinstr3"   *529 Patient Instructions Line 3
LCPATIN4  INIT      "%ptinstr4"   *530 Patient Instructions Line 4
LCLTYPCD  INIT      "%ltypcode"   *531 O/P Clinic Location Code
LCLTYPLD  INIT      "%ltypldes"   *532 O/P Clinic Location Long Description
LCSBDY01  INIT      "%sbdy01"     *533 Series booking 1 booking day
LCSBDY02  INIT      "%sbdy02"     *534 Series booking 2 booking day
LCSBDY03  INIT      "%sbdy03"     *535 Series booking 3 booking day
LCSBDY04  INIT      "%sbdy04"     *536 Series booking 4 booking day
LCSBDY05  INIT      "%sbdy05"     *537 Series booking 5 booking day
LCSBDY06  INIT      "%sbdy06"     *538 Series booking 6 booking day
LCSBDY07  INIT      "%sbdy07"     *539 Series booking 7 booking day
LCSBDY08  INIT      "%sbdy08"     *540 Series booking 8 booking day
LCSBDY09  INIT      "%sbdy09"     *541 Series booking 9 booking day
LCSBDY10  INIT      "%sbdy10"     *542 Series booking 10 booking day
LCIHINUM  INIT      "%pihino"     *543 Patient IHI Number
LCHPCODE  INIT      "%hpcode"     *544 HP Code from OTBBPURC (Cat HP)
LCHPDESC  INIT      "%hpdesc"     *545 HP Description from OTBBPURC/TDESC
LCCSMSID  INIT      "%smsid"      *546 SMS Message ID
LCCSMSKY  INIT      "%smskey"     *547 SMS visit key
LCSMSCOD  INIT      "%smscode"    *548 SMS Code
LCCSMSPH  INIT      "%smsphone"   *549 SMS Phone Number
LCCSMSUR  INIT      "%smsurno"    *550 SMS U/R Number
LCCSMSUS  INIT      "%smsuser"    *551 SMS User Id
LCSRVDCD  INIT      "%srvdcode"   *552 Service Delivery Mode code
LCSRVDDC  INIT      "%srvddesc"   *553 Service Delivery Moce description
LCRGPGTL  INIT      "%lnkrgrtle"  *554 Linked Referral Ref. GP Title 
LCRGPGNM  INIT      "%lnkrgrgnm"  *555 Linked Referral Ref. GP Given Name
LCRGPSNM  INIT      "%lnkrgrsnm"  *556 Linked Referral Ref. GP Surname
LCRGPPNM  INIT      "%lnkrprcnm"  *557 Linked Referral Ref. GP Practice Name
LCRGPPA1  INIT      "%lnkrprca1"  *558 Linked Referral Ref. GP Practice Add 1
LCRGPPA2  INIT      "%lnkrprca2"  *559 Linked Referral Ref. GP Practice Add 2
LCRGPPA3  INIT      "%lnkrprca3"  *560 Linked Referral Ref. GP Practice Add 3
LCRGPPA4  INIT      "%lnkrprca4"  *561 Linked Referral Ref. GP Practice Add 4
LCRGPPPC  INIT      "%lnkrprcpc"  *562 Linked Referral Ref. GP Practice P/Code
LCRESFTM  INIT      "%reshfrtm"   *563 O/P Rescheduled From Time 
LCDRSEEN  INIT      "%drseenby"   *564 Seen By Doctor
LCDRDFLT  INIT      "%drdfault"   *565 Default Doctor
LCOPRSCH  INIT      "%oprschrsn"  *566 Reason for Reschedule
LCSTCODE  INIT      "%thstcode"   *567 Telehealth Status Code (Cat OM)
LCSTDESC  INIT      "%thstdesc"   *568 Telehealth Status Description
LCRESITE  INIT      "%thresite"   *569 Telehealth Receiving Site Name
LCRECODE  INIT      "%threcode"   *570 Telehealth Receiving Code
LCREADDR  INIT      "%threaddr"   *571 Telehealth Receiving Address
LCWRMURL  INIT      "%thwrmurl"   *572 Telehealth Waiting Room URL
LCRECPHN  INIT      "%threcphn"   *573 Telehealth Receiving E164
LCALLNTS  INIT      "%thallnts"   *574 Telehealth Notes
LCCSMSUN  INIT      "%smsusrnm"   *575 SMS User Name (WBSENAM)
LCRESFRD  INIT      "%reshfday"   *576 O/P Rescheduled From Day
LCSYSTYP  INIT      "%systype"    *577 PAS Server Environment
LCOGCODE  INIT      "%ogpcode"    *578 Letter GP Code 
LCOGTITL  INIT      "%ogptitle"   *579 Letter GP Title
LCOGGVNM  INIT      "%ogpgiven"   *580 Letter GP Given Name 
LCOGSUNM  INIT      "%ogpsname"   *581 Letter GP Surname 
LCOGEMAL  INIT      "%ogpemail"   *582 Letter GP Email
LCOGCONT  INIT      "%ogpcont"    *583 Letter GP Contact Method Code
LCOGACTV  INIT      "%ogpactv"    *584 Letter GP Active Status
LCOGPCDE  INIT      "%ogppcode"   *585 Letter Practice Code    
LCOGPNME  INIT      "%ogppname"   *586 Letter Practice Name   
LCOGPAL1  INIT      "%ogppadd1"   *587 Letter Practice Address Line 1  
LCOGPAL2  INIT      "%ogppadd2"   *588 Letter Practice Address Line 2  
LCOGPAL3  INIT      "%ogppadd3"   *589 Letter Practice Address Line 3  
LCOGPAL4  INIT      "%ogppadd4"   *590 Letter Practice Address Line 4  
LCOGPPST  INIT      "%ogpppcod"   *591 Letter Practice Postcode   
LCOGPEML  INIT      "%ogppeml"    *592 Letter Practice Email    
LCOGPTEL  INIT      "%ogpptele"   *593 Letter Practice Telephone   
LCOGPFAX  INIT      "%ogppfax"    *594 Letter Practice Fax  
LCOGPATV  INIT      "%ogppactv"   *595 Letter Practice Active Status
LCBCRDAT  INIT      "%refdate"    *596 Referral Date
LCVTYPI1  INIT      "%otvstyp1"   *597 Visit Type Indicator 1
LCOLPUID  INIT      "%userid"     *598 PAS logged-in user id printing letter
LCOLPLGN  INIT      "%username"   *599 PAS logged-in user name printing letter
LCOGCOTD  INIT      "%ogpcdes"    *600 Letter GP Contact Method Description 
LCDAYSRT  INIT      "%dayshort"   *601 O/P Clinic Day Short (Mon, Tue ...) 
LCMTHSRT  INIT      "%mthshort"   *602 O/P Clinic Month Short (Jan, Feb ...)
LCATDTES  INIT      "%attdtesh"   *603 Attendance Date Short format          
LCPXUCC4  INIT      "%idengend"   *604 Identifying Gender Code
LCUCC4LD  INIT      "%idgendsc"   *605 Identifying Gender Long Description
LCPXATF1  INIT      "%idgentxt"   *606 Identifying Gender Free Text
LCPXUCC5  INIT      "%pronoun"    *607 Identifying Pronoun Code
LCUCC5LD  INIT      "%prondesc"   *608 Identifying Pronoun Long Description
LCPXATF2  INIT      "%prontext"   *609 Identifying Pronoun Free Text
.
LCNOVARS  FORM      "609"
.
. ----- Description Fields Variables Above -----
.
LHPAGE    INIT      "Page Break"
LHADDA    INIT      "Address Line 1"
LHADDB    INIT      "Address Line 2"
LHADDC    INIT      "Address Line 3"
LHADDD    INIT      "Address Line 3"
LHAGE     INIT      "Patient's Age"
LHATTCDE  INIT      "Attendance Code"
LHATDTE   INIT      "Attendance Date"
LHATTIM   INIT      "Attendance Time"
LHBDATE   INIT      "Patient's Birth Date"
LHBOKDTE  INIT      "Booking Date"
LHDOKTIM  INIT      "Booking Time"
LHBRTCNT  INIT      "Country of Birth"
LHWTELE   INIT      "Business Telephone Number"
LHCLNDSC  INIT      "Clinic Description"
LHCLNID   INIT      "Clinic Id"
LHCLNTYP  INIT      "Clinic Type"
LHCMPELG  INIT      "Compensation Eligibility"
LHDATE    INIT      "Today's Date"
LHDGNAM   INIT      "Doctor Given Name"
LHDSNAM   INIT      "Doctor Surname"
LHDOCTOR  INIT      "Doctor's Code"
LHDTITL   INIT      "Doctor Title"
LHFNAME   INIT      "Patient Full Name"
LHGNAME   INIT      "Patient Given Name"
LHINSTAT  INIT      "Insurance Status"
LHISUM    INIT      "Invoice Summary"
LHLOCDOC  INIT      "Local Doctor"
LHMEDNO   INIT      "Medicare Number"
LHOUTNUM  INIT      "Outpatient Number"
LHPATCAT  INIT      "Patient's Catagory"
LHPATCLS  INIT      "Patient Classification"
LHHTELE   INIT      "Private Telephone Number"
LHPRTY    INIT      "Priority"
LHPCODE   INIT      "Patient Post Code"
LHSEX     INIT      "Patient's Sex"
LHSITE    INIT      "Site"
LHSLOT    INIT      "Slot number"
LHSNAME   INIT      "Patient Surname"
LHSRCREF  INIT      "Source of Referral"
LHSTIME   INIT      "Slot time"
LHTITLE   INIT      "Patient Title"
LHURNO    INIT      "U/R Number"
LHNKNAME  INIT      "%mailnme"
LHNKADD1  INIT      "address of the letter"
LHNKADD2  INIT      "%mailad2"
LHNKADD3  INIT      "%mailad3"
LHNKADD4  INIT      "%mailad4"
LHNKPOST  INIT      "mail post code"
LHRGGPSN  INIT      "registered gp surname"
LHRGGPGN  INIT      "registered gp given name"
LHRGGPA1  INIT      "registered gp address 1"
LHRGGPA2  INIT      "registered gp address 2"
LHRGGPA3  INIT      "registered gp address 3"
LHRGGPA4  INIT      "registered gp address 4"
LHRGGPPC  INIT      "registered gp postcode"
LHRFGPSN  INIT      "referring gp surname"
LHRFGPGN  INIT      "referring gp given name"
LHRFGPA1  INIT      "referring gp address 1"
LHRFGPA2  INIT      "referring gp address 2"
LHRFGPA3  INIT      "referring gp address 3"
LHRFGPA4  INIT      "referring gp address 4"
LHRFGPPC  INIT      "referring gp postcode"
LHHSPNAM  INIT      "Hospital name (multi hospitals)"
LHHSPAD1  INIT      "Hospital address 1"
LHHSPAD2  INIT      "Hospital address 2"
LHHSPAD3  INIT      "Hospital address 3"
LHHSPAD4  INIT      "Hospital address 4"
LHHSPOST  INIT      "Hospital post Code"
LHHSPHON  INIT      "Hospital Phone number"
LHRESFRM  INIT      "rescheduled from"
LHRESTO   INIT      "rescheduled to"
LHCNLDTE  INIT      "cancelled date"
LHRSHTIM  INIT      "time rescheduled to"
LHRGPRNM  INIT      "regstrd gp's practice name"
LHRGPRA1  INIT      "regstrd gp's practice address 1"
LHRGPRA2  INIT      "regstrd gp's practice address 2"
LHRGPRA3  INIT      "regstrd gp's practice address 3"
LHRGPRA4  INIT      "regstrd gp's practice address 4"
LHRGPRPC  INIT      "regstrd gp's practice post code"
LHRGPRPH  INIT      "regstrd gp's practice Phone No."
LHRFPRNM  INIT      "refered gp's practice name"
LHRFPRA1  INIT      "refered gp's practice address 1"
LHRFPRA2  INIT      "refered gp's practice address 2"
LHRFPRA3  INIT      "refered gp's practice address 3"
LHRFPRA4  INIT      "refered gp's practice address 4"
LHRFPRPC  INIT      "refered gp's practice post code"
LHRFPRPH  INIT      "refered gp's practice Phone No."
LHDAY     INIT      "Clinic Day (Monday, Tuesday ...)"
LHCLDATE  INIT      "Clinic Date (1st, 2nd ...)"
LHMONTH   INIT      "Clinic Month (January, ...)"
LHYEAR    INIT      "Clinic Year (ccyy format)"
LHCLLTYP  INIT      "Clinic Location Type"
LHCLCLOC  INIT      "Clinic Location"
LHECNAM   INIT      "Emerg. Contact Name"
LHECADA   INIT      "Emerg. Contact Address 1"
LHECADB   INIT      "Emerg. Contact Address 2"
LHECADC   INIT      "Emerg. Contact Address 3"
LHECADD   INIT      "Emerg. Contact Address 4"
LHECPCD   INIT      "Emerg. Contact Post Code"
LHNRNAM   INIT      "Nearest Relative Name"
LHNRADA   INIT      "Nearest Relative Address 1"
LHNRADB   INIT      "Nearest Relative Address 2"
LHNRADC   INIT      "Nearest Relative Address 3"
LHNRADD   INIT      "Nearest Relative Address 4"
LHNRPCD   INIT      "Nearest Relative Post Code"
LHNATID   INIT      "National ID"
LHCELL    INIT      "Cellular Phone No.  "
LHPADDA   INIT      "Postal Address Line 1              "
LHPADDB   INIT      "Postal Address Line 2              "
LHPADDC   INIT      "Postal Address Line 3              "
LHPADDD   INIT      "Postal Address Line 4              "
LHPPOST   INIT      "Postcode"
LHXSDCCD  INIT      "Extra screen 1st doctor code"
LHXSDCPN  INIT      "Extra screen 1st doctor provider no"
LHXSRFDT  INIT      "Extra screen 1st referral date"
LHUDEF5   INIT      "User Defined Field 5"
LHUDEF6   INIT      "User Defined Field 6"
LHUDEF7   INIT      "User Defined Field 7"  
LHUDEF8   INIT      "User Defined Field 8"  
LHPRANK   INIT      "Patient Rank"
LHLDTLET  INIT      "Refer. letter date"
LHLRFDRC  INIT      "Refer. letter refer.doctor code"
LHLRFDRT  INIT      "Refer. letter refer.doctor title"
LHLRFDRS  INIT      "Refer. letter refer.doctor surname"
LHLRFDRG  INIT      "Refer. letter refer.doc.given name"
LHLHONSC  INIT      "Refer. letter consultant code"
LHLCONST  INIT      "Refer. letter Consultant Title"
LHLCONSS  INIT      "Refer. letter consultant surname"
LHLCONSG  INIT      "Refer. letter consultant given name"
LHLDEPT   INIT      "Refer. letter department (Cat A)"
LHLPRTY   INIT      "Refer. letter priority code (Cat PR)"
LHLDIAG1  INIT      "Refer. letter diagnosis"
LHLUDF1   INIT      "Refer. letter user defined field 1"
LHLUDF2   INIT      "Refer. letter user defined field 2"
LHLUDF3   INIT      "Refer. letter user defined field 3"
LHLUDF4   INIT      "Refer. letter user defined field 4"
LHLREQNO  INIT      "Refer. letter request number"
LHLRACDT  INIT      "Refer. letter req.for Appt.Canc date"
LHLREQRE  INIT      "Refer. letter reason for request"
LHLSPFCD  INIT      "Refer. letter specialty function code"
LHLCADD1  INIT      "Refer. letter correspondence address 1"
LHLCADD2  INIT      "Refer. letter correspondence address 2"
LHLCADD3  INIT      "Refer. letter correspondence address 3"
LHLCADD4  INIT      "Refer. letter correspondence address 4"
LHLCADPC  INIT      "Refer. letter corresp.address postcode"
LHLECRNO  INIT      "Refer. letter ECR Approval number"
LHLGPFHN  INIT      "Refer. letter GPFH Approval number"
LHLCLTYP  INIT      "Refer. letter Clinic type"
LHLCLDES  INIT      "Refer. letter Clinic description"
LHLRFSRC  INIT      "Refer. letter source of referral"
LHLRHCPC  INIT      "Refer. letter Responsible HCP Code"
LHLRHCPT  INIT      "Refer. letter Responsible HCP title"
LHLRHCPS  INIT      "Refer. letter Responsible HCP surname"
LHLRHCPG  INIT      "Refer. letter Resp. HCP Given name"
LHLDTREC  INIT      "Refer. letter date referral received"
LHLDTPTY  INIT      "Refer. letter date of priority"
LHLEXPUR  INIT      "Refer. letter expected purchaser"
LHLRANK   INIT      "Refer. letter patient rank"
LHPXMSNA  INIT      "Mother's Surname"
LHPXMGNA  INIT      "Mother's Given Name"
LHPXMTLE  INIT      "Mother's Title"
LHPXMAD1  INIT      "Mother's Address Line 1"
LHPXMAD2  INIT      "Mother's Address Line 2"
LHPXMAD3  INIT      "Mother's Address Line 3"
LHPXMAD4  INIT      "Mother's Address Line 4"
LHPXMPOS  INIT      "Mother's Address Post Code"
LHPXMPNO  INIT      "Mother's Private Number"
LHPXMBNO  INIT      "Mother's Business Number"
LHPXMMNO  INIT      "Mother's Mobile Number"
LHPXMEML  INIT      "Mother's Email Address"
LHPXMCNT  INIT      "Mother's Country of Birth"
LHPXMCRP  INIT      "Mother's Correspondence"
LHPXMLAB  INIT      "Mother's Name on Labels"
LHPXMREL  INIT      "Relationship to Patient"
LHPXFSNA  INIT      "Father's Surname"
LHPXFGNA  INIT      "Father's Given Name"
LHPXFTLE  INIT      "Father's Title"
LHPXFAD1  INIT      "Father's Address Line 1"
LHPXFAD2  INIT      "Father's Address Line 2"
LHPXFAD3  INIT      "Father's Address Line 3"
LHPXFAD4  INIT      "Father's Address Line 4"
LHPXFPOS  INIT      "Father's Address Post Code"
LHPXFPNO  INIT      "Father's Private Number"
LHPXFBNO  INIT      "Father's Business Number"
LHPXFMNO  INIT      "Father's Mobile Number"
LHPXFEML  INIT      "Father's Email Address"
LHPXFCNT  INIT      "Father's Country of Birth"
LHPXFCRP  INIT      "Father's Correspondence"
LHPXFLAB  INIT      "Father's Name on Labels"
LHPXFREL  INIT      "Relationship to Patient"
LHPXDVAC  INIT      "DVA Card Colour"
LHPXABRG  INIT      "Aboriginality"
LHPXPRVI  INIT      "Privacy Indicator"
LHVXABRG  INIT      "Aboriginality"
LHVXCADM  INIT      "Admission Criterion"
LHVXIRAD  INIT      "Intent to Readmit"
LHVXIDUS  INIT      "Intend Stay Duration"
LHVXCRAV  INIT      "Carer Availability"
LHVXRCCT  INIT      "Crit. Care Xfer Reason"
LHVXAPWD  INIT      "Admitting Point Ward"
LHVXAPBD  INIT      "Admitting Point Bed"
LHMAINS1  INIT      "Instruction 1"
LHMAINS2  INIT      "Instruction 2"
LHMAINS3  INIT      "Instruction 3"
LHBOUSR1  INIT      "User Defined Field 1"
LHBBSPCA  INIT      "Special Arrangements"
LHMACOM1  INIT      "Comments Line 1"
LHMACOM2  INIT      "Comments Line 2"
LHOTDES1  INIT      "Comments Line 1"
LHOTDES2  INIT      "Comments Line 2"
LHOTDES3  INIT      "Comments Line 3"
LHRGGFNM  INIT      "Registered gp formated name"
LHSCLN01  INIT      "Series Clinic id 1"
LHSCLN02  INIT      "Series Clinic id 2"
LHSCLN03  INIT      "Series Clinic id 3"
LHSCLN04  INIT      "Series Clinic id 4"
LHSCLN05  INIT      "Series Clinic id 5"
LHSCLN06  INIT      "Series Clinic id 6"
LHSCLN07  INIT      "Series Clinic id 7"
LHSCLN08  INIT      "Series Clinic id 8"
LHSCLN09  INIT      "Series Clinic id 9"
LHSCLN10  INIT      "Series Clinic id 10"
LHSCDS01  INIT      "Seried Clinic Desc 1"
LHSCDS02  INIT      "Seried Clinic Desc 2"
LHSCDS03  INIT      "Seried Clinic Desc 3"
LHSCDS04  INIT      "Seried Clinic Desc 4"
LHSCDS05  INIT      "Seried Clinic Desc 5"
LHSCDS06  INIT      "Seried Clinic Desc 6"
LHSCDS07  INIT      "Seried Clinic Desc 7"
LHSCDS08  INIT      "Seried Clinic Desc 8"
LHSCDS09  INIT      "Seried Clinic Desc 9"
LHSCDS10  INIT      "Seried Clinic Desc 10"
LHSBDT01  INIT      "Series Booking 1 Date"
LHSBDT02  INIT      "Series Booking 2 Date"
LHSBDT03  INIT      "Series Booking 3 Date"
LHSBDT04  INIT      "Series Booking 4 Date"
LHSBDT05  INIT      "Series Booking 5 Date"
LHSBDT06  INIT      "Series Booking 6 Date"
LHSBDT07  INIT      "Series Booking 7 Date"
LHSBDT08  INIT      "Series Booking 8 Date"
LHSBDT09  INIT      "Series Booking 9 Date"
LHSBDT10  INIT      "Series Booking 10 Date"
LHSBTM01  INIT      "Series Booking 1 Time"
LHSBTM02  INIT      "Series Booking 2 Time"
LHSBTM03  INIT      "Series Booking 3 Time"
LHSBTM04  INIT      "Series Booking 4 Time"
LHSBTM05  INIT      "Series Booking 5 Time"
LHSBTM06  INIT      "Series Booking 6 Time"
LHSBTM07  INIT      "Series Booking 7 Time"
LHSBTM08  INIT      "Series Booking 8 Time"
LHSBTM09  INIT      "Series Booking 9 Time"
LHSBTM10  INIT      "Series Booking 10 Time"
LHSBLN01  INIT      "Series Booking 1 Location"
LHSBLN02  INIT      "Series Booking 2 Location"
LHSBLN03  INIT      "Series Booking 3 Location"
LHSBLN04  INIT      "Series Booking 4 Location"
LHSBLN05  INIT      "Series Booking 5 Location"
LHSBLN06  INIT      "Series Booking 6 Location"
LHSBLN07  INIT      "Series Booking 7 Location"
LHSBLN08  INIT      "Series Booking 8 Location"
LHSBLN09  INIT      "Series Booking 9 Location"
LHSBLN10  INIT      "Series Booking 10 Location"
LHBBTRAN  INIT      "Transport"
LHBBDNAR  INIT      "Reason for non-attendance"
LHOZATTO  INIT      "Attendance Outcome"
LHDODSCH  INIT      "Discharge Status"
LHRFGPFX  INIT      "GP Fax Number Outpatient"
LHRFHPNM  INIT      "Referral Letter HCP Practice Name/Addr Line 1"
LHRFHPPH  INIT      "Referral Letter HCP Practice Phone No."
LHRFHPFX  INIT      "Referral Letter HCP Practice Fax No."
LHOTCLCD  INIT      "Outpatient Claim Code"
LHOTCCDD  INIT      "Outpatient Claim Code Description"
LHRFHPA2  INIT      "Referral Letter HCP Practice Address Line 2"
LHRFHPA3  INIT      "Referral Letter HCP Practice Address Line 3"
LHRFHPA4  INIT      "Referral Letter HCP Practice Address Line 4"
LHRFHPA5  INIT      "Referral Letter HCP Practice Address Line 5"
LHRFHPA6  INIT      "Referral Letter HCP Practice Address Line 6"
LHRFHPPC  INIT      "Referral Letter HCP Practice Post Code"
LHOTTCCL  INIT      "Outpatient TAC Claim Number"
LHOTTCDT  INIT      "Outpatient TAC Date of Accdent"
LHOTWKDT  INIT      "Outpatient Work Cover Date of Accident"
LHOCNTP1  INIT      "Outpatient Concession Card Type 1"
LHOCNTD1  INIT      "Outpatient Concession Card Type Description 1"
LHOCNNM1  INIT      "Outpatient Concession Card Number 1"
LHOCNDT1  INIT      "Outpatient Concession Card Expiry 1"
LHOCNTP2  INIT      "Outpatient Concession Card Type 2"
LHOCNTD2  INIT      "Outpatient Concession Card Type Description 2"
LHOCNNM2  INIT      "Outpatient Concession Card Number 2"
LHOCNDT2  INIT      "Outpatient Concession Card Expiry 2"
LHOCNTP3  INIT      "Outpatient Concession Card Type 3"
LHOCNTD3  INIT      "Outpatient Concession Card Type Description 3"
LHOCNNM3  INIT      "Outpatient Concession Card Number 3"
LHOCNDT3  INIT      "Outpatient Concession Card Expiry 3"
LHOCNTP4  INIT      "Outpatient Concession Card Type 4"
LHOCNTD4  INIT      "Outpatient Concession Card Type Description 4"
LHOCNNM4  INIT      "Outpatient Concession Card Number 4"
LHOCNDT4  INIT      "Outpatient Concession Card Expiry 4"
LHOCNTP5  INIT      "Outpatient Concession Card Type 5"
LHOCNTD5  INIT      "Outpatient Concession Card Type Description 5"
LHOCNNM5  INIT      "Outpatient Concession Card Number 5"
LHOCNDT5  INIT      "Outpatient Concession Card Expiry 5"
LHRFPDSC  INIT      "Referral Letter Priority Code Description"
LHOTUDF1  INIT      "Presenting Complaint"
LHOTDIC1  INIT      "Diagnosis Code 1"
LHOTDID1  INIT      "Diagnosis Desc 1"
LHOTDIC2  INIT      "Diagnosis Code 2"
LHOTDID2  INIT      "Diagnosis Desc 2"
LHOTDIC3  INIT      "Diagnosis Code 3"
LHOTDID3  INIT      "Diagnosis Desc 3"
LHOTDIC4  INIT      "Diagnosis Code 4"
LHOTDID4  INIT      "Diagnosis Desc 4"
LHPXFAXN  INIT      "Local GP Practice Fax Number" 
LHPXSEML  INIT      "Local GP Practice Email Address"
LHGPPRCD  INIT      "Local GP Practice Code"
LHRFPRA5  INIT      "Ref. GP Address 5"
LHRFPRA6  INIT      "Ref. GP Address 6"
LHRFGPTL  INIT      "Ref. GP Telephone Number"
LHRFGPMB  INIT      "Ref. GP Mobile Number"
LHRFGPPG  INIT      "Ref. GP Pager Telephone Number"
LHRFGPPN  INIT      "Ref. GP Pager Number"
LHRFGPPV  INIT      "Ref. GP Preovider Number 1"
LHCNSITE  INIT      "Site of cancelled booking"
LHCNCLIN  INIT      "Clinic of cancelled booking"
LHCNDATE  INIT      "Date of cancelled booking"
LHCNSTRT  INIT      "Cancelled session start time"
LHCNSLOT  INIT      "Cancelled session slot number"
LHCNTIME  INIT      "Cancelled session slot time"
LHCNNOUT  INIT      "Outpatient number cancelled"
LHCNURNO  INIT      "U/R number cancelled"
LHCNREAS  INIT      "Reason for cancellation"
LHCNRTIM  INIT      "Time of cancellation"
LHCNSRCR  INIT      "Cancelled srce of referal"
LHCNCOMP  INIT      "Cancelled Comp Code"
LHCNCLAS  INIT      "Cancelled Patient Class"
LHCNINSU  INIT      "Cancelled Ins. status"
LHCNCATE  INIT      "Cancelled Patient Cat"
LHCNPRTY  INIT      "Cancelled Priority Code"
LHCNOPER  INIT      "Operator Id."
LHCNTRAN  INIT      "Cancelled Transport Allocation"
LHCNVTYP  INIT      "Visit Type of Booking"
LHCNRLRR  INIT      "Referral Letter - Referral reason"
LHPNKNME  INIT      "Next of Kin Name"
LHPNKAD1  INIT      "Next of Kin Address Line 1"
LHPNKAD2  INIT      "Next of Kin Address Line 2"
LHPNKSUB  INIT      "Next of Kin Suburb"
LHPNKAD4  INIT      "Next of Kin Address Line 4/State"
LHPNKPST  INIT      "Next of Kin Postcode"
LHPNKRLP  INIT      "Next of Kin Relationship"
LHPNKTLP  INIT      "Next of Kin Private Phone Number"
LHPNKTLB  INIT      "Next of Kin Work Phone Number"
LHPXKMOB  INIT      "Next of Kin Mobile Phone Number"
LHPXKEML  INIT      "Next of Kin Email Address"
LHPXCMOB  INIT      "Emergency Con Mobile Phone Number"
LHPXCEML  INIT      "Emergency Con Email Address"
LHPXRMOB  INIT      "Nearest Rel Mobile Phone Number"
LHPXREML  INIT      "Nearest Rel Email Address"
LHPCNAME  INIT      "Carer Name"
LHPCADD1  INIT      "Carer Address Line 1"
LHPCADD2  INIT      "Carer Address Line 2"
LHPCADD3  INIT      "Carer Address Line 3"
LHPCADD4  INIT      "Carer Address Line 4"
LHPCPOST  INIT      "Carer Post Code"
LHPCTELP  INIT      "Carer Telephone Private"
LHPCTELB  INIT      "Carer Telephone Business"
LHPCTELM  INIT      "Carer Telephone Mobile"
LHPCRELP  INIT      "Carer Relationship"
LHPCEMAI  INIT      "Carer Email"
LHCLNTPC  INIT      "Clinic Type Code"
LHCNVTPC  INIT      "Appointment Slot Type Code"
LHOTVTPC  INIT      "Visit Type Code"
LHOTVTYP  INIT      "Visit Type Description"
LHPNKRLD  INIT      "Next of Kin Relationship Description"
LHDEMAD   INIT      "Doctor's Email Address"
LHDPRMC   INIT      "Doctor's Preferred Method of Con"
LHRGPRMC  INIT      "Registered GP's Pref Meth of Con"
LHRFSEML  INIT      "Referred GP's Email Address"
LHRFPRMC  INIT      "Referred GP's Pref Meth of Contact"
LHLRSEML  INIT      "Refer Letter Ref Doct Email Add"
LHLRPRMC  INIT      "Refer Letter Ref Doct Pref Meth Cn"
LHLCSEML  INIT      "Refer Letter Cons Email Add"
LHLCPRMC  INIT      "Refer Letter Cons Pref Meth of Con"
LHRHSEML  INIT      "Responsible HCP Email Address"
LHRHPRMC  INIT      "Responsible HCP Pref Meth of Con"
LHXCOD01  INIT      "Extra Screen Code 1"
LHXCOD02  INIT      "Extra Screen Code 2"
LHXCOD03  INIT      "Extra Screen Code 3"
LHXCOD04  INIT      "Extra Screen Code 4"
LHXCOD05  INIT      "Extra Screen Code 5"
LHXCOD06  INIT      "Extra Screen Code 6"
LHXCOD07  INIT      "Extra Screen Code 7"
LHXCOD08  INIT      "Extra Screen Code 8"
LHXCOD09  INIT      "Extra Screen Code 9"
LHXCOD10  INIT      "Extra Screen Code 10"
LHXCOD11  INIT      "Extra Screen Code 11"
LHXCOD12  INIT      "Extra Screen Code 12"
LHXCOD13  INIT      "Extra Screen Code 13"
LHXCOD14  INIT      "Extra Screen Code 14"
LHXCOD15  INIT      "Extra Screen Code 15"
LHXCOD16  INIT      "Extra Screen Code 16" 
LHXCOD17  INIT      "Extra Screen Code 17" 
LHXCOD18  INIT      "Extra Screen Code 18"
LHXCOD19  INIT      "Extra Screen Code 19"
LHXCOD20  INIT      "Extra Screen Code 20" 
LHPXDVAN  INIT      "DVA Card Number"
LHPAPENN  INIT      "Pension Number"
LHPXPMBN  INIT      "Patient Mobile Number"
LHPXPLC1  INIT      "Patient Preferred Language 1 Code"
LHPXPLD1  INIT      "Patient Preferred Language 1 Desc"
LHPXPEML  INIT      "Patient E-mail Address"
LHRESFRD  INIT      "Rescheduled From Day"
.
LHRFGTLE  INIT      "referring gp title"
LHRFGTEL  INIT      "referring gp telephone"
LHRFGFAX  INIT      "referring gp fax" 
LHRFGEML  INIT      "referring gp email"
LHRFGPMC  INIT      "referring gp preferred method of contact"
LHBOLDON  INIT      "Bold On"
LHBOLDOF  INIT      "Bold Off"
LHUNDLON  INIT      "Underline On"
LHUNDLOF  INIT      "Underline Off"
LHHECTEL  INIT      "Clinic Phone Number"
LHMAROOM  INIT      "Clinic Room"
LHOTDES4  INIT      "Comments Line 3"
LHPLTITL  INIT      "Overseas Local Title"
LHPLSNAM  INIT      "Overseas Local Surname"
LHPLGNAM  INIT      "Overseas Local Given Name 1"
LHPLGNM2  INIT      "Overseas Local Given Name 2"
LHPLNAME  INIT      "Overseas Local Formatted Name"
LHPLADD1  INIT      "Overseas Local Address Line 1"
LHPLADD2  INIT      "Overseas Local Address Line 2"
LHPLADD3  INIT      "Overseas Local Address Line 3"
LHPLADD4  INIT      "Overseas Local Address Line 4"
LHPLPOST  INIT      "Overseas Local Post Code"
LHPLTELP  INIT      "Overseas Local Telephone Private"
LHPLTELB  INIT      "Overseas Local Telephone Business"
LHPLTELM  INIT      "Overseas Local Telephone Mobile"
LHPLRELP  INIT      "Overseas Local Relationship"
LHPLEMAI  INIT      "Overseas Local Email"
LHPLSLET  INIT      "Overseas Local Send Letter Flag"
LHPOTITL  INIT      "Other Contact Title"
LHPOSNAM  INIT      "Other Contact Surname"
LHPOGNAM  INIT      "Other Contact Given Name 1"
LHPOGNM2  INIT      "Other Contact Given Name 2"
LHPONAME  INIT      "Other Contact Formatted Name"
LHPOADD1  INIT      "Other Contact Address Line 1"
LHPOADD2  INIT      "Other Contact Address Line 2"
LHPOADD3  INIT      "Other Contact Address Line 3"
LHPOADD4  INIT      "Other Contact Address Line 4"
LHPOPOST  INIT      "Other Contact Post Code"
LHPOTELP  INIT      "Other Contact Telephone Private"
LHPOTELB  INIT      "Other Contact Telephone Business"
LHPOTELM  INIT      "Other Contact Telephone Mobile"
LHPORELP  INIT      "Other Contact Relationship"
LHPOEMAI  INIT      "Other Contact Email"
LHPOSLET  INIT      "Other Contact Send Letter Flag"
LHP2TITL  INIT      "NOK2 Contact Title"
LHP2SNAM  INIT      "NOK2 Contact Surname"
LHP2GNAM  INIT      "NOK2 Contact Given Name 1"
LHP2GNM2  INIT      "NOK2 Contact Given Name 2"
LHP2NAME  INIT      "NOK2 Contact Formatted Name"
LHP2ADD1  INIT      "NOK2 Contact Address Line 1"
LHP2ADD2  INIT      "NOK2 Contact Address Line 2"
LHP2ADD3  INIT      "NOK2 Contact Address Line 3"
LHP2ADD4  INIT      "NOK2 Contact Address Line 4"
LHP2POST  INIT      "NOK2 Contact Post Code"
LHP2TELP  INIT      "NOK2 Contact Telephone Private"
LHP2TELB  INIT      "NOK2 Contact Telephone Business"
LHP2TELM  INIT      "NOK2 Contact Telephone Mobile"
LHP2RELP  INIT      "NOK2 Contact Relationship"
LHP2EMAI  INIT      "NOK2 Contact Email"
LHP2SLET  INIT      "NOK2 Contact Send Letter Flag"
LHPCTITL  INIT      "Carer Title"
LHPCSNAM  INIT      "Carer Surname"
LHPCGNAM  INIT      "Carer Given Name 1"
LHPCGNM2  INIT      "Carer Given Name 2"
LHPCSLET  INIT      "Carer Send Letter Flag"
LHP1TITL  INIT      "NOK1 Contact Title"
LHP1SNAM  INIT      "NOK1 Contact Surname"
LHP1GNAM  INIT      "NOK1 Contact Given Name 1"
LHP1GNM2  INIT      "NOK1 Contact Given Name 2"
LHP1SLET  INIT      "NOK1 Contact Send Letter Flag"
LHPSTITL  INIT      "Postal Address Title"
LHPSSNAM  INIT      "Postal Address Surname"
LHPSGNAM  INIT      "Postal Address Given Name 1"
LHPSGNM2  INIT      "Postal Address Given Name 2"
LHPSNAME  INIT      "Postal Address Formatted Name"
LHPSTELP  INIT      "Postal Address Telephone Private"
LHPSTELB  INIT      "Postal Address Telephone Business"
LHPSTELM  INIT      "Postal Address Telephone Mobile"
LHPSRELP  INIT      "Postal Address Relationship"
LHPSEMAI  INIT      "Postal Address Email"
LHPSSLET  INIT      "Postal Address Send Letter Flag"
LHPETITL  INIT      "EMR Contact Title"
LHPESNAM  INIT      "EMR Contact Surname"
LHPEGNAM  INIT      "EMR Contact Given Name 1"
LHPEGNM2  INIT      "EMR Contact Given Name 2"
LHPETELP  INIT      "EMR Contact Telephone Private Phone"
LHPETELB  INIT      "EMR Contact Telephone Business Phone"
LHPERELP  INIT      "EMR Contact Relationship"
LHPESLET  INIT      "EMR Contact Send Letter Flag"
LHPRTITL  INIT      "Preferred Contact Title"
LHPRSNAM  INIT      "Preferred Contact Surname"
LHPRGNAM  INIT      "Preferred Contact Given Name 1"
LHPRGNM2  INIT      "Preferred Contact Given Name 2"
LHPRTELP  INIT      "Preferred Contact Telephone Private"
LHPRTELB  INIT      "Preferred Contact Telephone Business"
LHPRRELP  INIT      "Preferred Contact Relationship"
LHPRSLET  INIT      "Preferred Cont Send Letter Flag"
LHPTLSNM  INIT      "Patient Long Surname"
LHCLNIND  INIT      "Clinic Indicator"
LHPATIN1  INIT      "Patient Instructions Line 1"
LHPATIN2  INIT      "Patient Instructions Line 2"
LHPATIN3  INIT      "Patient Instructions Line 3"
LHPATIN4  INIT      "Patient Instructions Line 4"
LHLTYPCD  INIT      "Clinic Location Code"
LHLTYPLD  INIT      "Clinic Location Long Description"
LHSBDY01  INIT      "Series Booking 1 Day"
LHSBDY02  INIT      "Series Booking 2 Day"
LHSBDY03  INIT      "Series Booking 3 Day"
LHSBDY04  INIT      "Series Booking 4 Day"
LHSBDY05  INIT      "Series Booking 5 Day"
LHSBDY06  INIT      "Series Booking 6 Day"
LHSBDY07  INIT      "Series Booking 7 Day"
LHSBDY08  INIT      "Series Booking 8 Day"
LHSBDY09  INIT      "Series Booking 9 Day"
LHSBDY10  INIT      "Series Booking 10 Day"
LHSRVDCD  INIT      "Service Delivery Mode code"
LHSRVDDC  INIT      "Service Delivery Moce description"
LHRGPGTL  INIT      "Referral Ref. GP Title"
LHRGPGNM  INIT      "Referral Ref. GP Given Name"
LHRGPSNM  INIT      "Referral Ref. GP Surname"
LHRGPPNM  INIT      "Referral Ref. GP Practice Name"
LHRGPPA1  INIT      "Referral Ref. GP Practice Add 1"
LHRGPPA2  INIT      "Referral Ref. GP Practice Add 2"
LHRGPPA3  INIT      "Referral Ref. GP Practice Add 3"
LHRGPPA4  INIT      "Referral Ref. GP Practice Add 4"
LHRGPPPC  INIT      "Referral Ref. GP Practice P/Code"
LHRESFTM  INIT      "Rescheduled From Time"
LHDRSEEN  INIT      "Seen By Doctor"
LHDRDFLT  INIT      "Default Doctor"
LHOPRSCH  INIT      "Reason for Reschedule"
LHSTCODE  INIT      "Telehealth Status Code"
LHSTDESC  INIT      "Telehealth Status Description"
LHRESITE  INIT      "Telehealth Receiving Site Name"
LHRECODE  INIT      "Telehealth Receiving Code"
LHREADDR  INIT      "Telehealth Receiving Address"
LHWRMURL  INIT      "Telehealth Waiting Room URL"
LHRECPHN  INIT      "Telehealth Receiving E164"
LHALLNTS  INIT      "Telehealth Notes"
.
. ----- Maximum Field Lengths for the Variables Above -----
.
LXPAGE    INIT      "  -----     Page Break             -----  "
LXISUM    INIT      "  -----     Invoice Sumary         -----  "
LXADDA    INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXADDB    INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXADDC    INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" 
LXADDD    INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" 
LXAGE     INIT      "999"
LXATTCDE  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXATDTE   INIT      "99th XXXXXXXXX 1999"
LXATTIM   INIT      "99:99 pm"
LXBDATE   INIT      "99th XXXXXXXXX 1999"
LXBOKDTE  INIT      "99th XXXXXXXXX 1999"
LXDOKTIM  INIT      "99:99"
LXBRTCNT  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXWTELE   INIT      "999999999999"
LXCLNDSC  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" 
LXCLNID   INIT      "XXXXXX" 
LXCLNTYP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCMPELG  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXDATE    INIT      "99/99/1999"
LXDGNAM   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXDSNAM   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXDTITL   INIT      "XXXXXXXXX"
LXDOCTOR  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXFNAME   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGNAME   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXINSTAT  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLOCDOC  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXMEDNO   INIT      "999999999999"
LXOUTNUM  INIT      "99999999"
LXPATCAT  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPATCLS  INIT      "XXXXXXXXXXXXXXXXXXXX" 
LXHTELE   INIT      "999999999999999"
LXPRTY    INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPCODE   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSEX     INIT      "XXXXXX"
LXSITE    INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSLOT    INIT      "999"
LXSNAME   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSRCREF  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSTIME   INIT      "99:99"
LXURNO    INIT      "99999999"
LXTITLE   INIT      "XXXXXXXXX"
LXNKNAME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNKADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"       
LXNKADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNKADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNKADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNKPOST  INIT      "XXXXXXXX"     
LXRGGFNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"   
LXRGGPSN  INIT      "XXXXXXXXXXXXXXXXXXXX"   
LXRGGPGN  INIT      "XXXXXXXXXXXXXXXXXXXX"  
LXRGGPA1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"     
LXRGGPA2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"               
LXRGGPA3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"               
LXRGGPA4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"               
LXRGGPPC  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"     
LXRFGPSN  INIT      "XXXXXXXXXXXXXXXXXXXX"   
LXRFGPGN  INIT      "XXXXXXXXXXXXXXXXXXXX"             
LXRFGPA1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"            
LXRFGPA2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"               
LXRFGPA3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"               
LXRFGPA4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"               
LXRFGPPC  INIT      "XXXXXXXX"            
LXHSPNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"     
LXHSPAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"           
LXHSPAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"           
LXHSPAD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"           
LXHSPAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"           
LXHSPOST  INIT      "XXXXXXXX"                        
LXHSPHON  INIT      "XXXXXXXXXXXXXXXXXXXX"           
LXRESFRM  INIT      "99/99/9999"            * rescheduled from
LXRESTO   INIT      "99/99/9999"            * rescheduled to   
LXCNLDTE  INIT      "99/99/9999"            * cancelled date   
LXRSHTIM  INIT      "99:99 pm"              * time rescheduled to
LXRGPRNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPRA1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPRA2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPRA3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPRA4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPRPC  INIT      "XXXXXXXX"
LXRGPRPH  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXRFPRNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXRFPRA1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRFPRA2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRFPRA3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRFPRA4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRFPRPC  INIT      "XXXXXXXX"
LXRFPRPH  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXDAY     INIT      "XXXXXXXXX"
LXCLDATE  INIT      "99th"
LXMONTH   INIT      "XXXXXXXXX"
LXYEAR    INIT      "9999"
LXCLLTYP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCLCLOC  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXECNAM   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXECADA   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"             
LXECADB   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"             
LXECADC   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"             
LXECADD   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"             
LXECPCD   INIT      "XXXXXXXX"                             
LXNRNAM   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNRADA   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNRADB   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNRADC   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNRADD   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXNRPCD   INIT      "XXXXXXXX"
LXNATID   INIT      "XXXXXXXXXXXXXXXXXXXX"                     
LXCELL    INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPADDA   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPADDB   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPADDC   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPADDD   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPPOST   INIT      "XXXXXXXX"
LXXSDCCD  INIT      "XXXXXX"
LXXSDCPN  INIT      "XXXXXXXXXX"
LXXSRFDT  INIT      "99/99/9999"
LXUDEF5   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXUDEF6   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXUDEF7   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXUDEF8   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPRANK   INIT      "XXXXXX"
LXLDTLET  INIT      "XXXXXXXXXX"
LXLRFDRC  INIT      "XXXXXXXXXX"
LXLRFDRT  INIT      "XXXXXXXXX"
LXLRFDRS  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLRFDRG  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXLHONSC  INIT      "XXXXXX"
LXLCONST  INIT      "XXXXXXXXX"
LXLCONSS  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLCONSG  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXLDEPT   INIT      "XXX"
LXLPRTY   INIT      "XXX"
LXLDIAG1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLUDF1   INIT      "XXX"
LXLUDF2   INIT      "XXX"
LXLUDF3   INIT      "XXX"
LXLUDF4   INIT      "XXX"
LXLREQNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLRACDT  INIT      "XXXXXXXXXX"
LXLREQRE  INIT      "XXX"
LXLSPFCD  INIT      "XXX"
LXLCADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLCADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLCADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLCADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLCADPC  INIT      "XXXXXXXX"
LXLECRNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLGPFHN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLCLTYP  INIT      "XXXXXX"
LXLCLDES  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLRFSRC  INIT      "XXX"
LXLRHCPC  INIT      "XXXXXXXXXX"
LXLRHCPT  INIT      "XXXXXXXXX"
LXLRHCPS  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLRHCPG  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXLDTREC  INIT      "XXXXXXXX"
LXLDTPTY  INIT      "XXXXXXXX"
LXLEXPUR  INIT      "XXX"
LXLRANK   INIT      "XXXXXX"
LXPXMSNA  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXMGNA  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXMTLE  INIT      "XXXX"
LXPXMAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXMAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXMAD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXMAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXMPOS  INIT      "XXXXXXXX"
LXPXMPNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXMBNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXMMNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXMEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXMCNT  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXMCRP  INIT      "XXX"
LXPXMLAB  INIT      "XXX"
LXPXMREL  INIT      "XXXXXXXXXX"
LXPXFSNA  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXFGNA  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXFTLE  INIT      "XXXX"
LXPXFAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXFAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXFAD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXFAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXFPOS  INIT      "XXXXXXXX"
LXPXFPNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXFBNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXFMNO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXFEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXFCNT  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXFCRP  INIT      "XXX"
LXPXFLAB  INIT      "XXX"
LXPXFREL  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXDVAC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXABRG  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXPRVI  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXABRG  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXCADM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXIRAD  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXIDUS  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXCRAV  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXRCCT  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXAPWD  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXVXAPBD  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXMAINS1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXMAINS2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXMAINS3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXBOUSR1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXBBSPCA  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXMACOM1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXMACOM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDES1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDES2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDES3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDES4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCLN01  INIT      "XXXXXX"
LXSCLN02  INIT      "XXXXXX"
LXSCLN03  INIT      "XXXXXX"
LXSCLN04  INIT      "XXXXXX"
LXSCLN05  INIT      "XXXXXX"
LXSCLN06  INIT      "XXXXXX"
LXSCLN07  INIT      "XXXXXX"
LXSCLN08  INIT      "XXXXXX"
LXSCLN09  INIT      "XXXXXX"
LXSCLN10  INIT      "XXXXXX"
LXSCDS01  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS02  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS03  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS04  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS05  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS06  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS07  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS08  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS09  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSCDS10  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBDT01  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT02  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT03  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT04  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT05  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT06  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT07  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT08  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT09  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBDT10  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSBTM01  INIT      "99:99 am"
LXSBTM02  INIT      "99:99 am"
LXSBTM03  INIT      "99:99 am"
LXSBTM04  INIT      "99:99 am"
LXSBTM05  INIT      "99:99 am"
LXSBTM06  INIT      "99:99 am"
LXSBTM07  INIT      "99:99 am"
LXSBTM08  INIT      "99:99 am"
LXSBTM09  INIT      "99:99 am"
LXSBTM10  INIT      "99:99 am"
LXSBLN01  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN02  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN03  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN04  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN05  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN06  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN07  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN08  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN09  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBLN10  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXBBTRAN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXBBDNAR  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOZATTO  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXDODSCH  INIT      "XXXXXXXXXXXXXXXXXXXX"
..RFGPFAX0  INIT      "99999999999999999999"
LXRFHPPH  INIT      "999999999999999"
LXRFHPFX  INIT      "99999999999999999999"
LXOTCLCD  INIT      "XXX"
LXOTCCDD  INIT      "XXXXXXXXXXXXXXXXXXXX"
.
LXRFHPNM  DIM       60
LXRFHPA2  DIM       60
LXRFHPA3  DIM       60
LXRFHPA4  DIM       60
LXRFHPA5  DIM       60
LXRFHPA6  DIM       60
.
LXRFHPPC  INIT      "XXXXXXXX"
LXOTTCCL  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOTTCDT  INIT      "99/99/9999"
LXOTWKDT  INIT      "99/99/9999"
LXOCNTP1  INIT      "XXX"
LXOCNTD1  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNNM1  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNDT1  INIT      "99/99/9999"
LXOCNTP2  INIT      "XXX"
LXOCNTD2  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNNM2  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNDT2  INIT      "99/99/9999"
LXOCNTP3  INIT      "XXX"
LXOCNTD3  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNNM3  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNDT3  INIT      "99/99/9999"
LXOCNTP4  INIT      "XXX"
LXOCNTD4  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNNM4  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNDT4  INIT      "99/99/9999"
LXOCNTP5  INIT      "XXX"
LXOCNTD5  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNNM5  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOCNDT5  INIT      "99/99/9999"
LXRFPDSC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXOTUDF1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDIC1  INIT      "XXXXXXXXX"
LXOTDID1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDIC2  INIT      "XXXXXXXXX"
LXOTDID2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDIC3  INIT      "XXXXXXXXX"
LXOTDID3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOTDIC4  INIT      "XXXXXXXXX"
LXOTDID4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
..RESPFDRT  INIT      "XXXXXXXXX"
..RESPFDRS  INIT      "XXXXXXXXXXXXXXXXXXXX"
..RESPFDRG  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX"
..RESPHPPC  INIT      "XXXXXXXX"
..RESPHPPH  INIT      "999999999999999"
..RESPHPFX  INIT      "99999999999999999999"
LXCNSITE  INIT      "XXXXXX"
LXCNCLIN  INIT      "XXXXXX"
LXCNDATE  INIT      "XXXXXXXXXX"
LXCNSTRT  INIT      "99:99"
LXCNSLOT  INIT      "XXX"
LXCNTIME  INIT      "99:99"
LXCNNOUT  INIT      "XXXXXXXX"
LXCNURNO  INIT      "XXXXXXXX"
LXCNREAS  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNRTIM  INIT      "99:99"
LXCNSRCR  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNCOMP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNCLAS  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNINSU  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNCATE  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNPRTY  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNOPER  INIT      "XXXX"
LXCNTRAN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNVTYP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXCNRLRR  INIT      "XXX"
LXPNKNME  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPNKAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPNKAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPNKSUB  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPNKAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPNKPST  INIT      "XXXXXXXX"
LXPNKRLP  INIT      "XXXXXXXXXX"
LXPNKTLP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPNKTLB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXKMOB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXKEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXCMOB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXCEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXRMOB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXREML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCNAME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCPOST  INIT      "XXXXXXXX"
LXPCTELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPCTELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPCTELM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPCRELP  INIT      "XXXXXXXXXX"
LXPCEMAI  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
...LXCLNTPC  INIT      "XXX"
LXCNVTPC  INIT      "XXXXXX"
LXOTVTPC  INIT      "XXX"
LXOTVTYP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPNKRLD  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXDEMAD   INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXDPRMC   INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLRSEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLRPRMC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXLCSEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLCPRMC  INIT      "XXXXXXXXXXXXXXXXXXXX"
..LXRHPRMC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD01  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD02  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD03  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD04  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD05  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD06  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD07  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD08  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD09  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD10  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD11  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD12  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD13  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD14  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD15  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD16  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD17  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD18  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD19  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXCOD20  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXDVAN  INIT      "XXXXXXXXXX"
LXPAPENN  INIT      "XXXXXXXXXX"
LXPXPMBN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXPLC1  INIT      "XXX"
LXPXPLD1  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXRESCLN  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
.
...LXRFGTLE  INIT      "XXXXXXXXXX"
...LXRFGTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"
...LXRFGFAX  INIT      "XXXXXXXXXXXXXXXXXXXX" 
...LXRFGEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
...LXRFGPMC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPXPEMX  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXBOLDON  INIT      033,"G"
LXBOLDOF  INIT      033,"H"
LXUNDLON  INIT      033,"-",001
LXUNDLOF  INIT      033,"-",000
LXHECTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXMAROOM  INIT      "XXX"
LXPLTITL  INIT      "XXXX"
LXPLSNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLGNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLNAME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLPOST  INIT      "XXXXXXXX"
LXPLTELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPLTELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPLTELM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPLRELP  INIT      "XXXXXXXXXX"
LXPLEMAI  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPLSLET  INIT      "XXX"
LXPOTITL  INIT      "XXXX"
LXPOSNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOGNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPONAME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOPOST  INIT      "XXXXXXXX"
LXPOTELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPOTELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPOTELM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPORELP  INIT      "XXXXXXXXXX"
LXPOEMAI  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPOSLET  INIT      "XXX"
LXP2TITL  INIT      "XXXX"
LXP2SNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2GNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2GNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2NAME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2ADD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2ADD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2ADD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2ADD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2POST  INIT      "XXXXXXXX"
LXP2TELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXP2TELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXP2TELM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXP2RELP  INIT      "XXXXXXXXXX"
LXP2EMAI  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP2SLET  INIT      "XXX"
LXPCTITL  INIT      "XXXX"
LXPCSNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCGNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPCSLET  INIT      "XXX"
LXP1TITL  INIT      "XXXX"
LXP1SNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP1GNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP1GNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXP1SLET  INIT      "XXX"
LXPSTITL  INIT      "XXXX"
LXPSSNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPSGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPSGNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPSNAME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPSTELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPSTELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPSTELM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPSRELP  INIT      "XXXXXXXXXX"
LXPSEMAI  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPSSLET  INIT      "XXX"
LXPETITL  INIT      "XXXX"
LXPESNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPEGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPEGNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPETELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPETELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPERELP  INIT      "XXXXXXXXXX"
LXPESLET  INIT      "XXX"
LXPRTITL  INIT      "XXXX"
LXPRSNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPRGNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPRGNM2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPRTELP  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPRTELB  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPRRELP  INIT      "XXXXXXXXXX"
LXPRSLET  INIT      "XXX"
LXPTLSNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXCLNIND  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXPATIN1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPATIN2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPATIN3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPATIN4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXLTYPCD  INIT      "XXX"
LXLTYPLD  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGPPNAM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGPPAD1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGPPAD2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGPPAD3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGPPAD4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXGPPPOS  INIT      "XXXXXXXX"
LXGPPTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXGPPFAX  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXGPPEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSBDY01  INIT      "XXXXXXXXXX"
LXSBDY02  INIT      "XXXXXXXXXX"
LXSBDY03  INIT      "XXXXXXXXXX"
LXSBDY04  INIT      "XXXXXXXXXX"
LXSBDY05  INIT      "XXXXXXXXXX"
LXSBDY06  INIT      "XXXXXXXXXX"
LXSBDY07  INIT      "XXXXXXXXXX"
LXSBDY08  INIT      "XXXXXXXXXX"
LXSBDY09  INIT      "XXXXXXXXXX"
LXSBDY10  INIT      "XXXXXXXXXX"
LXIHINUM  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXHPCODE  INIT      "XXX"
LXHPDESC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXSMSID  INIT      "XXXXXXXXXXXXXXXX"
LXXSMSKY  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXSMSCOD  INIT      "XXX"
LXXSMSPH  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXXSMSUR  INIT      "XXXXXXXX"
LXXSMSUS  INIT      "XXXXXXXXXX"
LXSRVDCD  INIT      "XXX"
LXSRVDDC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXRGPGTL  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPGNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPSNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPPNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPPA1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPPA2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPPA3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPPA4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRGPPPC  INIT      "XXXXXXXX"
LXRESFTM  INIT      "99:99 pm"              * Rescheduled From Time
LXDRSEEN  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXDRDFLT  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOPRSCH  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXSTCODE  INIT      "XXX"
LXSTDESC  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXRESITE  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRECODE  INIT      "XXXXXXXXXX"
LXREADDR  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXWRMURL  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRECPHN  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXALLNTS  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXXSMSUN  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXRESFRD  INIT      "XXXXXXXXX"
LXSYSTYP  INIT      "X"
LXOGCODE  INIT      "XXXXXXXXXX" 
LXOGTITL  INIT      "XXXXXXXXXX"    
LXOGGVNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"    
LXOGSUNM  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"    
LXOGEMAL  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" 
LXOGCONT  INIT      "XXX"     
LXOGACTV  INIT      "X"
.
LXOGPCDE  INIT      "XXXXXXXXXX"       
LXOGPNME  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOGPAL1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"      
LXOGPAL2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"   
LXOGPAL3  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"   
LXOGPAL4  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"    
LXOGPPST  INIT      "XXXXXXXXXX"     
LXOGPEML  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOGPTEL  INIT      "XXXXXXXXXXXXXXXXXXXX"     
LXOGPFAX  INIT      "XXXXXXXXXXXXXXXXXXXX"      
LXOGPATV  INIT      "X"
.
LXBCRDAT  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXX" 
LXVTYPI1  INIT      "X"
LXOLPUID  INIT      "XXXXXXXXXX"
LXOLPLGN  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXOGCNTD  INIT      "XXXXXXXXXXXXXXXXXXXX"
LXDAYSRT  INIT      "XXX"   
LXMTHSRT  INIT      "XXX"
LXATDTES  INIT      "99/99/1999"
LXPXUCC4  INIT      "XXX"
LXUCC4LD  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXATF1  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXUCC5  INIT      "XXX"
LXUCC5LD  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
LXPXATF2  INIT      "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
.
