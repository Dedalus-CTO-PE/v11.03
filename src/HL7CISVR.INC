.*****************************************************************************
.*                      HL7CISVR.INC                                         *
.*    HL7 Variables for HL7CISIN & HL7CISRC                                  *
.*                                                                           *
.*    Mods:                                                                  *
.*        23/10/2023  Davin            TSK 0938787                           *
.*                    Increased ZBR010 to 80 chars                           *
.*        19/09/2023  Davin            TSK 0896442                           *
.*                    Added value 50 to MESSNUMB definition                  *
.*        19/12/2022  Davin            TSK 0927978                           *
.*                    Changed STF005 to 2 chars to allow for ""              *
.*        14/11/2022  Davin            TSK 0923862                           *
.*                    Added ZXV106                                           *
.*        26/07/2022  Davin            TSK 0918020                           *
.*                    Added ZXV103,ZXV104,ZXV105                             *
.*        26/04/2022  Davin            TSK 0903453                           *
.*                    Added ZXP070 and ZXP071                                *
.*        07/03/2022  Davin            TSK 0908733                           *
.*                    Increased DG1004 size to 500                           *
.*        02/02/2022  Davin            TSK 0907877                           *
.*                    Added ZXP069 and MULTBTYP                              *
.*        19/04/2021  Davin            TSK 0900672                           *
.*                    Added ZXV.101 and ZXV.102                              *
.*        12/04/2021  Davin            TSK 0901390                           *
.*                    Added ZXP064 to ZXP.68                                 *
.*        29/09/2020  Tracey Nguyen    TSK 0888703                           *
.*                    Added ZXV100 - Usual accommodation (Cat KP/PMVXUSAC)   *
.*        30/04/2020  Davin            TSK 0888624                           *
.*                    Added ZXV098 and ZXV099 (placeholders for VINAH)       *
.*        22/04/2020  Davin            TSK 0881876                           *
.*                    Added ZXP063                                           *
.*        16/04/2020  Davin            TSK 0887136                           *
.*                    Added ZXP061 and ZXP062                                *
.*        12/11/2019  Davin            TSK 0861253                           *
.*                    Added ZXV090 to ZXV097, OUTTHIFD and CATOM             *
.*        18/10/2019  Thanh T          TSK 0856646                           *
.*                    Added ZBR016 to ZBR029                                 *
.*        07/10/2019  Ken Bell         TSK 0875392                           *
.*                    Added PMSWX1FD for Cancelled WC Detail Status          *
.*        02/08/2019  Davin            TSK 0878929                           *
.*                    Increased ZAL014 from 250 to 500 chars                 *
.*        15/05/2019  Steve Armstrong  TSK 0865461                           *
.*                    Added PMSDTCFD.                                        *
.*        02/05/2019  Steve Armstrong  TSK 0833548                           *
.*                    Increased ZNT004 to 4090                               *
.*        26/03/2019  Davin            TSK 0833548                           *
.*                    Added ZNT segment variables                            *
.*        25/02/2019  Davin            TSK 0866465                           *
.*                    Added MEHDIAFD                                         *
.*        15/11/2018  Steve Armstrong  TSK 0861628                           *
.*                    Added field ZXP060.                                    *
.*        23/10/2018  Steve Armstrong  TSK 0863512                           *
.*                    Added field ZXV088 & ZXV089                            *
.*        16/08/2018  Steve Armstrong  TSK 0861701                           *
.*                    Added field HEXDASH                                    *
.*        20/07/2018  Steve Armstrong  TSK 0860696                           *
.*                    Added fields ZSD004 - ZSD009.                          *
.*        27/06/2018  Steve Armstrong  TSK 0851661                           *
.*                    Extended AIP003 from 80 to 130.                        *
.*        19/06/2018  Steve Armstrong  TSK 0854259                           *
.*                    Added ZBR segment variables, PMSBRQFD & CATLWCZ.       *
.*        05/06/2018  Davin            TSK 0851377                           *
.*                    Added variables ZXV059 to ZXV087                       *
.*        07/05/2018  Steve Armstrong  TSK 0837181                           *
.*                    Extended EVN.4 from DIM 3 to DIM 60                    *
.*        02/03/2018  Steve Armstrong  TSK 0850854                           *
.*                    Added ZXV058 variable                                  *
.*        18/04/2018  Davin            TSK 0844685                           *
.*                    Added PID031,PID032,PID033                             *
.*        12/04/2018  Davin            TSK 0844685                           *
.*                    Added ZXP059                                           *
.*        24/01/2018  Davin            TSK 0837357                           *
.*                    Added ZEC segment variables and PMSEXTFD,PATEORFD      *
.*        18/09/2017  Davin            TSK 0840094                           *
.*                    Added PATDGWFD,PMSEDGFD,DDRGCODE,DMDCCODE,DRGVER       *
.*                    Increased DRG001 size to 70                            *
.***************************************************************************** 
.*        V10.11.01   15/09/2017  Thanh T.       TSK 0821710                 *
.*                    Audit Amission/outpatient visit comments               *
.***************************************************************************** 
.*        23/08/2017  Davin            TSK 0837617                           *
.*                    Added values 47,48,49 to MESSNUMB definition           *
.*        21/07/2017  Davin            TSK 0838315                           *
.*                    Added ZLS segment variables, MEHDLSFD, MEHHLSFD, CATxy *
.*        02/06/2017  Davin            TSK 0819675                           *
.*                    Added LINBREAK,ZXV057,CATsd,PATCMNFD                   *
.*        31/05/2017  Davin            TSK 0835082                           *
.*                    Increased PV1010 size to 66                            *
.*        18/04/2017  Steve Armstrong  TSK 0833052                           *
.*                    Added ZXV.52 through ZXV.56.                           *
.*                    Added CATTS.                                           *
.*        27/03/2017  Steve Armstrong  TSK 0833314 & 0830704                 *
.*                    Added ZXV.51                                           *
.*        19/01/2016  Davin            CAR 0310749                           *
.*                    Increased ZXV031 length to 4000                        *
.*        07/01/2016  Davin            CAR 0310749                           *
.*                    Increased ZXV031 length to 1000                        *
.*        16/12/2015  Steve Armstrong  CAR 0310749                           *
.*                    Added MEALNUMB, DIM25, DIM80, CATDC, CATMJ and CATCOMFD*
.*        16/10/2015  Steve Armstrong  CAR 322306                            *
.*                    Added CARETCNT, DIM35A, DIM35B, DIM35C, DIM35D         *
.*        28/07/2015  Davin            CAR 314914                            *
.*                    Added ZXP058                                           *
.*        12/03/2015  Steve Armstrong  CAR 314108                            *
.*                    Removed reference to PATCGPFD (No Longer in use)       *
.*        05/11/2014  Steve Armstrong  CAR 306617                            *
.*                    Extended PR1.3 from 80 to 220 bytes.                   *
.*                    Extended DG1.3 from 88 to 220 bytes.                   *
.*                    Extended DG1.4 from 101 to 200 bytes.                  *
.*        02/09/2014  Steve Armstrong  CAR 303880                            *
.*                    Added ZXP057.                                          *
.*        21/07/2014  Davin            CAR 251384                            *
.*                    Added ZXV050                                           *
.*        30/05/2014  Steve Armstrong  CAR 270711                            *
.*                    Added INTERNET, PRNSTRNG, WPNSTRNG, NETSTRNG,          *
.*                          PHSTRING & CPSTRING for XTN (Telecommunication)  *
.*                          fields.                                          *
.*                    Increased length of NK1031 to 200                      *
.*        23/05/2014  Steve Armstrong  CAR 301458                            *
.*                    Added IBAPOSFD                                         *
.*        28/04/2014  Steve Armstrong  CAR 261630                            *
.*                    Removed TEMPFNAM and added WEBERRFD as part of the     *
.*                    mods for non-port based tempfile use.                  *
.*        04/04/2014  Davin            CAR 292935                            *
.*                    Added ZXP024 to ZXP056                                 *
.*        20/03/2014  Davin            CAR 298443                            *
.*                    Increased length of PID003 to 500                      *
.*                    Added concession card hdp default (cardhdpd)           *
.*        12/03/2014  Davin            CAR 297562                            *
.*                    Added ZXV049                                           *
.*        04/10/2013  Davin            CAR 286923                            *
.*                    Added ZXV044 to ZXV048                                 *
.*        16/08/2013  Davin            CAR 279179                            *
.*                    Added ZXV042 & ZXV043                                  *
.*        30/07/2013  Steve Armstrong  CAR 286689                            *
.*                    Added TABSEQN                                          *
.*        30/06/2013  Davin            CAR 283202                            *
.*                    Added ZXP022 & ZXP023                                  *
.*        30/06/2013  Davin            CAR 279183                            *
.*                    Added ZXV034 to ZXV041                                 *
.*        16/04/2013  Davin            CAR 280425                            *
.*                    Added PMSEHBFD,EPISFLAG,SEGSTRN2,SEDIFILE              *
.*        09/05/2013  Steve Armstrong  CAR 285194                            *
.*                    Added PMSHCGFD, PMSDIVFD, PATONLFD, MEHDS1FD, MRTMASFD *
.*                    PATDADFD, PATVADFD, CATdv, PMSNUTFD, ALLLNKFD          *
.*                    ALLPRRFD, VISCMTFD & PMSTEMFD                          *
.*        26/03/2013  Davin            CAR 270648                            *
.*                    Added ZSD001,ZSD002,ZSD003                             *
.*        22/03/2013  Steve Armstrong  CAR 281132                            *
.*                    Extended PR1.4 from DIM 40 to DIM 80.                  *
.*        13/03/2013  Davin            CAR 270806                            *
.*                    Changed ZCM007 & ZXV033 to dim6                        *
.*        04/03/2013  Steve Armstrong  CAR 282040                            *
.*                    Extended GT1 fields 9, 22, 25 & 39 from DIM 1 to DIM 2 *
.*                    to cater for double quotes (BLANKSTR).                 *
.*        25/02/2013  Davin            CAR 270806                            *
.*                    Added ZCM007 & ZXV033                                  *
.*        04/02/2013  Steve Armstrong  CAR 258177                            *
.*                    Extended SEGSTRNG from 2000 to 4090 bytes.             *
.*                    Removed SENTMESS (no longer required).                 *
.*        31/01/2013  Steve Armstrong  CAR 262292                            *
.*                    Added ZXV032                                           *
.*        17/12/2012  Steve Armstrong  CAR 267173                            *
.*                    Added values 44 & 45 to MESSNUMB definition            *
.*        03/10/2012  Davin            CAR 265550                            *
.*                    Added ZXV031                                           *
.*        23/04/2012  Steve Armstrong  CAR 263812                            *
.*                    Added ZXP016 through ZXP021                            *
.*        05/04/2012  Steve Armstrong  CAR 263261                            *
.*                    Added ZAL015                                           *
.*        07/03/2012  Davin            CAR 260330                            *
.*                    Added ZXV028,ZXV029,ZXV030                             *
.*        21/02/2012  Steve Armstrong  CAR 259400                            *
.*                    Added common FD's to include.                          *
.*                    Also added alias temp file definitions.                *
.*                    Steve Armstrong  CAR 260482                            *
.*                    Increased length of NK1030 (contact name) from 48 to   *
.*                    130 characters to prevent truncation of name.          *
.*        15/02/2012  Davin            CAR 256006                            *
.*                    Added ZXV026, ZXV027                                   *
.*        15/02/2012  Steve Armstrong  CAR 259720                            *
.*                    Added DIM70                                            *
.*        14/02/2012  Davin            CAR 256006                            *
.*                    Changed pv2010 to 5 chars                              *
.*        17/01/2012  Davin            CAR 252936                            *
.*                    Added ZCM & ZCT segment variables                      *
.*        24/11/2011  Davin            CAR 244602                            *
.*                    Added ZLH & ZLU segment variables                      *
.*        21/11/2011  Davin            CAR 255129                            *
.*                    Added ZXV023, ZXV024 & ZXV025.                         *
.*        18/11/2011  Steve Armstrong  CAR 255522                            *
.*                    Extended NK1032 from 117 to 162.                       *
.*        28/10/2011  Steve Armstrong  CAR 249257                            *
.*                    Added GT1 segment variables                            *
.*        27/10/2011  Steve Armstrong  CAR 251323                            *
.*                    Added PV150CNT and extended PV1050 from 20 to 200.     *
.*        24/10/2011  Steve Armstrong  CAR 251665                            *
.*                    Extended DG1015 to DIM 3 and added DG1COUNT.           *
.*        11/10/2011  Steve Armstrong  CAR 251644                            *
.*                    Added ZXV020, ZXV021 & ZXV022.                         *
.*        11/10/2011  Steve Armstrong  CAR 248650                            *
.*                    Extended WRDSTRNG & BEDSTRNG from 3 to 10 characters   *
.*        04/10/2011  Steve Armstrong  CAR 246036                            *
.*                    Added messages 38, 39 and 40 to MESSNUMB.              *
.*        30/09/2011  Steve Armstrong  CAR 251642                            *
.*                    Added ZXV019, ZXP007 through ZXP015.                   *
.*        29/09/2011  Steve Armstrong  CAR 246137                            *
.*                    Added ZXV017 and ZXV018.                               *
.*        28/09/2011  Steve Armstrong  CAR 251662 & 251648                   *
.*                    Added ZXV015, ZXP016 and CATEM.                        *
.*        27/09/2011  Steve Armstrong  CAR 251649                            *
.*                    Added ZXV012 to ZXV014.                                *
.*        23/09/2011  Steve Armstrong  CAR 249584                            *
.*                    Removed ZXP007 to ZXP011.                              *
.*                    Added ICDVERSN.                                        *
.*        21/08/2011  Steve Armstrong  CAR 246137                            *
.*                    Added ZXV010 and ZXV011 and extended ZXV003 to 100.    *
.*        13/08/2011  Steve Armstrong                                        *
.*                    Added Safety Net to CARDTYPE.   CAR 246137             *
.*                    Extended length of PID.5 from 70 to 140  CAR 249048    *
.*        10/08/2011  Steve Armstrong  CAR 248240                            *
.*                    Extended PID009 from 48 to 3000 characters in length.  *
.*        03/08/2011  Steve Armstrong  CAR 246137                            *
.*                    Extended ZXP001 from 6 to 8 characters in length.      *
.*                    Added ZXP004 to ZXP011 variables.                      *
.*                    Added ZXV variables.                                   *
.*                    Added CATCW and DIM100                                 *
.*        01/08/2011  Steve Armstrong  CAR 246029                            *
.*                    Added ZXP004 variable                                  *
.*        30/07/2011  Steve Armstrong  CAR 246029                            *
.*                    Added ZXP variables                                    *
.*        27/07/2011  Steve Armstrong  CAR 246136                            *
.*                    Added variable CODINGDT                                *
.*                    Increased SENTMESS to 4000 bytes.                      *
.*        17/07/2011  Steve Armstrong  CAR 246138                            *
.*                    Added ZAL variables, CATWN & RECCOUNT                  *
.*                    Extended PID.11 to 500 characters to cater for a       *
.*                    repeat (mailing) address                               *
.*        06/06/2011  Steve Armstrong  CAR 240107                            *
.*                    Increased COUNTER from FORM2 to FORM3 to cater for     *
.*                    999 diagnoses.                                         *
.*        16/12/2010  Steve Armstrong  CAR 235334                            *
.*                    Increased PID.22 from 80 to 120 characters             *
.*        29/04/2010  Steve Armstrong   CAR 220812                           *
.*                    Added TEXTFILE                                         *
.*        06/04/2010  Steve Armstrong   CAR 200967                           *
.*                    Extended length of PV1052 from 60 to 750.              *
.*        26/03/2010  Steve Armstrong   CAR 135505                           *
.*                    Added PRD & PR1 variables                              *
.*                    Also added CMDLINE, SAVEDATE & UCTOFSET                *
.*        08/01/2010  Steve Armstrong   CAR 212224                           *
.*                    Added lots of variables from HL7CISIN so that they are *
.*                    available for both HL7CISIN & HL7RECVR                 *
.*        23/12/2009  Steve Armstrong   CAR 135505                           *
.*                    Added RF1 variables                                    *
.*        21/05/2009  Steve Armstrong   CAR 197257                           *
.*                    Increased length of PID003 from 106 to 116             *
.*        19/03/2009  Steve Armstrong   CAR 192701                           *
.*                    Increased length of PID003 from 86 to 106              *
.*        26/08/2008  Steve Armstrong   CAR 147323                           *
.*                    Added SCH, OBX, RGS, AIS, AIL & AIP variables          *
.*        12/09/2007  Steve Armstrong   CAR 148394                           *
.*                    Added ATTDOCTR                                         *
.*        10/05/2007  Steve Armstrong   CAR 138469/135721                    *
.*                    Extended the length of STF-10, STF-11, PRA-02, PID-13  *
.*                    & PV1-10.                                              *
.*        10/11/2006  Steve Armstrong   CAR 124393                           *
.*                    Added ERR001                                           *
.*****************************************************************************
.
.         FD Includes
.         -----------
.
          INC       ALLCONFD/INC
          INC       ALLENCFD/INC
          INC       ALLLNKFD/INC
          INC       ALLPRRFD/INC
          INC       ALLREFFD/INC
          INC       CATCOMFD/INC
          INC       EMRCLIFD/INC
          INC       EMRCONFD/INC
          INC       EMRHISFD/INC
          INC       EMRICDFD/INC
          INC       EMRVCDFD/INC
          INC       EMRVISFD/INC
          INC       HL7CISFD/INC
          INC       IBAALVFD/INC
          INC       IBAPOSFD/INC
          INC       MEHDIAFD/INC
          INC       MEHDLSFD/INC
          INC       MEHDS1FD/INC
          INC       MEHHLSFD/INC
          INC       MEHVI1FD/INC
          INC       MRTMASFD/INC
          INC       MRTLOCFD/INC
          INC       NHIETHFD/INC
          INC       NHIMASFD/INC
          INC       OPRCONFD/INC
          INC       OPRDEAFD/INC
          INC       OPROPRFD/INC
          INC       OUTBOAFD/INC
          INC       OUTBB1FD/INC
          INC       OUTCLIFD/INC
          INC       OUTCONFD/INC
          INC       OUTSITFD/INC
          INC       OUTTHIFD/INC
          INC       PATALRFD/INC
          INC       VISMDTFD/INC
          INC       VISMTXFD/INC
          INC       PATMISTD/INC
          INC       PATCODFD/INC
          INC       PATCONFD/INC
          INC       PATDADFD/INC
          INC       PATDGWFD/INC
          INC       PATDO1FD/INC
          INC       PATDSCFD/INC
          INC       PATECDFD/INC
          INC       PATECOFD/INC
          INC       PATEORFD/INC
          INC       PATFN1FD/INC
          INC       PATGSRFD/INC
          INC       PATHSPFD/INC
          INC       PATICDFD/INC
          INC       PATICOFD/INC
          INC       PATIN1FD/INC
          INC       PATINVFD/INC
          INC       PATLINFD/INC
          INC       PATMA1FD/INC
          INC       PATMI1FD/INC
          INC       PATNIDFD/INC
          INC       PATONLFD/INC
          INC       PATPGRFD/INC
          INC       PATRE1FD/INC
          INC       PATTRNFD/INC
          INC       PATVADFD/INC
          INC       PATVISFD/INC
          INC       PATWC1FD/INC
          INC       PATWMAFD/INC
          INC       PATWR1FD/INC
          INC       PATWVEFD/INC
          INC       PMSAIDFD/INC
          INC       PMSALNFD/INC
          INC       PMSBRQFD/INC
          INC       PMSCCDFD/INC
          INC       PMSCEXFD/INC
          INC       PMSDIVFD/INC
          INC       PMSDTCFD/INC
          INC       PMSEDGFD/INC
          INC       PMSEHBFD/INC
          INC       PMSEXTFD/INC
          INC       PMSHCGFD/INC
          INC       PMSHCLFD/INC
          INC       PMSHCPFD/INC
          INC       PMSNUTFD/INC
          INC       PMSPX2FD/INC
          INC       PMSQPTFD/INC
          INC       PMSRELFD/INC
          INC       PMSTEMFD/INC
          INC       PMSVX1FD/INC
          INC       PMSWX1FD/INC
          INC       VISCMTFD/INC
          INC       WATOPAFD/INC
          INC       WATOPSFD/INC
          INC       WATTR1FD/INC
          INC       WATTX1FD/INC
          INC       WEBERRFD/INC
          INC       WEBSECFD/INC
.
.         Aliases Temporary File Definition
.         ---------------------------------
.
.         Filename : hl7cisxx.dat          (xx = port id)
.
ALIASTMP  IFILE SQL, FIXED=91, KEY="U1-30,31-60,61-90"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
TEMPSNAM  DIM     30         30           1         Surname
TEMPFGIV  DIM     30         30           31        First Given Name
TEMPSGIV  DIM     30         30           61        Second Given Name
.
.End of Record                            91
.
.
A08XFLAG  FORM      1             * A08X flag
.                                   0 = Normal A08 message
.                                   1 = A31 converted message
AIL001    DIM       4
AIL002    DIM       3
AIL003    DIM       80
AIL004    DIM       200
AIL005    DIM       200
AIL006    DIM       26
AIL007    DIM       20
AIL008    DIM       200
AIL009    DIM       20
AIL010    DIM       200
AIL011    DIM       10
AIL012    DIM       200
.
AIP001    DIM       4
AIP002    DIM       3
AIP003    DIM       130
AIP004    DIM       200
AIP005    DIM       200
AIP006    DIM       26
AIP007    DIM       20
AIP008    DIM       200
AIP009    DIM       20
AIP010    DIM       200
AIP011    DIM       10
AIP012    DIM       200
.
AIS001    DIM       4
AIS002    DIM       3
AIS003    DIM       200
AIS004    DIM       26
AIS005    DIM       20
AIS006    DIM       200
AIS007    DIM       20
AIS008    DIM       200
AIS009    DIM       10
AIS010    DIM       200
.
AL1001    DIM       4
AL1002    DIM       2
AL1003    DIM       60
AL1004    DIM       2
AL1005    DIM       15
AL1006    DIM       8
AMPRSAND  INIT      "&"
AMPRSEQN  INIT      "\T\"
.
BEDSTRNG  DIM       10
BLANKSTR  INIT      "#"#""
BSLASEQN  INIT      "\E\"
.
CARDHDPD  DIM       4             * concession card hdp default
CARDTYPE  FORM      1             * concession card type
.                                    2 = Safety Net
.                                    3 = DVA
.                                    4 = Pension
CARE01P0  INIT      "10"
CARE02P0  INIT      "20"
CARE02P1  INIT      "21"
CARE02P2  INIT      "22"
CARE02P3  INIT      "23"
CARE03P0  INIT      "30"
CARE03P1  INIT      "31"
CARE03P2  INIT      "32"
CARE03P3  INIT      "33"
CARE04P0  INIT      "40"
CARE05P0  INIT      "50"
CARE06P0  INIT      "60"
CARE07P0  INIT      "70"
CARE08P0  INIT      "80"
CARE09P0  INIT      "90"
CARE10P0  INIT      "100"
CARETCNT  FORM      1
CARTSEQN  INIT      "\S\"
CATdv     INIT      "dv"
CATC      INIT      "C "
CATCL     INIT      "CL"
CATCT     INIT      "ct"
CATCW     INIT      "cw"
CATLWCZ   INIT      "cz"
CATDC     INIT      "DC"
CATEM     INIT      "em"
CATMJ     INIT      "MJ"
CATOM     INIT      "OM"
CATPn     INIT      "Pn"
CATPr     INIT      "Pr"
CATRA     INIT      "RA"
CATsd     INIT      "sd"
CATTS     INIT      "ts"
CATVe     INIT      "Ve"
CATVf     INIT      "Vf"
CATVg     INIT      "Vg"
CATvt     INIT      "vt"
CATWN     INIT      "wn"
CATxy     INIT      "xy"
CHKDIGIT  DIM       1             * medicare number check digit
CHRMFLAG  FORM      1             * CHARM Interface flag
.                                     0 = Not compensable claim from HL7QUERY
.                                     1 = WC Compensable claim for HL7QUERY
.                                     2 = TAC Compensable claim for HL7QUERY
.                                     3 = VA Compensable claim for HL7QUERY
CMDLINE   DIM       300
CODINGDT  DIM       8
COMSOCKT  SOCKET    ASCII,FIXED=1      * Socket on which to communicate
COUNTER   FORM      3
CPSTRING  INIT      "CP"
.
DATECALC  DATE      8
.
CFPAYCOD  DIM       3
DDRGCODE  DIM       4
DMDCCODE  DIM       4
DRGVER    DIM       3
.
DG1001    DIM       4
DG1002    DIM       2
DG1003    DIM       220
DG1004    DIM       500
DG1005    DIM       26
DG1006    DIM       2
DG1007    DIM       60
DG1008    DIM       60
DG1009    DIM       2
DG1010    DIM       2
DG1011    DIM       60            
DG1012    DIM       3
DG1013    DIM       12            
DG1014    DIM       4                
DG1015    DIM       3                
DG1016    DIM       60
DG1017    DIM       3
DG1018    DIM       2
DG1019    DIM       26
DG1COUNT  FORM      3
DIM3      DIM       3
DIM6      DIM       6
DIM10     DIM       10
DIM20     DIM       20
DIM25     DIM       25
DIM35A    DIM       35
DIM35B    DIM       35
DIM35C    DIM       35
DIM35D    DIM       35
DIM70     DIM       70
DIM80     DIM       80
DIM100    DIM       100
.
DOCFNAME  DIM       60
DOCTORID  DIM       10
DRG001    DIM       70
DRG002    DIM       26
DRG003    DIM       1
DRG004    DIM       2
DRG005    DIM       60
DRG006    DIM       3
DRG007    DIM       12
DRG008    DIM       1
DRG009    DIM       9
DRG010    DIM       1
.
EPISFLAG  FORM      "1"           * write to EDI file for episoft (1=no/0=yes)
ERASE     INIT      "iserase "
ERR001    DIM       80
.
EVN001    DIM       3
EVN002    DIM       26
EVN003    DIM       26
EVN004    DIM       60
EVN005    DIM       60            
EVN006    DIM       26                
.
FIELDSTR  DIM       200           * string buffer
.
GT1001    DIM       4
GT1002    DIM       59
GT1003    DIM       48
GT1004    DIM       48
GT1005    DIM       152
GT1006    DIM       59
GT1007    DIM       40
GT1008    DIM       26
GT1009    DIM       2
GT1010    DIM       2
GT1011    DIM       80
GT1012    DIM       11
GT1013    DIM       8
GT1014    DIM       8
GT1015    DIM       2
GT1016    DIM       130
GT1017    DIM       106
GT1018    DIM       40
GT1019    DIM       20
GT1020    DIM       2
GT1021    DIM       130
GT1022    DIM       2
GT1023    DIM       80
GT1024    DIM       26
GT1025    DIM       2
GT1026    DIM       80
GT1027    DIM       10
GT1028    DIM       3
GT1029    DIM       20
GT1030    DIM       80
GT1031    DIM       8
GT1032    DIM       8
GT1033    DIM       2
GT1034    DIM       2
GT1035    DIM       80
GT1036    DIM       60
GT1037    DIM       2
GT1038    DIM       80
GT1039    DIM       2
GT1040    DIM       2
GT1041    DIM       80
GT1042    DIM       48
GT1043    DIM       80
GT1044    DIM       80
GT1045    DIM       48
GT1046    DIM       40
GT1047    DIM       80
GT1048    DIM       2
GT1049    DIM       20
GT1050    DIM       20
GT1051    DIM       130
GT1052    DIM       2
GT1053    DIM       2
GT1054    DIM       50
GT1055    DIM       80
.
HEXDASH   INIT      0X96
.
ICDVERSN  DIM       8
IN1001    DIM       4
IN1002    DIM       60
IN1003    DIM       59
IN1004    DIM       127
IN1005    DIM       106
IN1006    DIM       48
IN1007    DIM       40
IN1008    DIM       12
IN1009    DIM       127
IN1010    DIM       12
IN1011    DIM       127
IN1012    DIM       8
IN1013    DIM       8
IN1014    DIM       55
IN1015    DIM       3
IN1016    DIM       48
IN1017    DIM       80
IN1018    DIM       26
IN1019    DIM       106
IN1020    DIM       2
IN1021    DIM       2
IN1022    DIM       2
IN1023    DIM       1
IN1024    DIM       8
IN1025    DIM       1
IN1026    DIM       8
IN1027    DIM       2
IN1028    DIM       15
IN1029    DIM       26
IN1030    DIM       60
IN1031    DIM       2
IN1032    DIM       2
IN1033    DIM       4
IN1034    DIM       4
IN1035    DIM       8
IN1036    DIM       15
IN1037    DIM       12
IN1038    DIM       12
IN1039    DIM       4
IN1040    DIM       12
IN1041    DIM       12
IN1042    DIM       60
IN1043    DIM       1
IN1044    DIM       106
IN1045    DIM       2
IN1046    DIM       8
IN1047    DIM       3
IN1048    DIM       2
IN1049    DIM       27
INDDESC0  INIT      "Not stated/inadequately described"
INTERNET  INIT      "INTERNET"
ISBUILD   INIT      "isbuild "
.
LINBREAK  INIT      "\.br\"
.
MEALNUMB  FORM      1
MESSNUMB  FORM      2             * message type for HL7CISIN
.                                           1 = A01 - ADT Admission
.                                           2 = A02 - ADT Transfer
.                                           3 = A03 - ADT Discharge
.                                           4 = A03 - Emergency Discharge
.                                           5 = A04 - O/P Attendance
.                                           6 = A04 - Emergency Attendance
.                                           7 = A05 - O/P Booking
.                                           8 = A08 - ADT Visit Update
.                                           9 = A08 - O/P Visit Update
.                                          10 = A08 - Emergency Visit Update
.                                          11 = A11 - ADT Cancel Admission
.                                          12 = A11 - O/P Unattend
.                                          13 = A11 - Emergency Cancel Visit
.                                          14 = A12 - ADT Cancel Transfer
.                                          15 = A13 - ADT Cancel Discharge
.                                          16 = A13 - Emergency Cancel Discharge
.                                          17 = A14 - ADT Pre-admit
.                                          18 = A21 - ADT On-Leave
.                                          19 = A22 - ADT Return from Leave
.                                          20 = A27 - ADT Cancel Pre-admit
.                                          21 = A28 - PMI Patient Registration
.                                          22 = A31 - PMI Update
.                                          23 = A34 - PMI Merge
.                                          24 = A38 - O/P Cancel Booking
.                                          25 = A44 - ADT Move Visit
.                                          26 = A44 - O/P Move Visit
.                                          27 = A44 - Emergency Move Visit
.                                          28 = M02 - HCP Master File
.                                          29 = S12 - Notify New Booking
.                                          30 = S14 - Notify Change Booking
.                                          31 = S15 - Notify Cancel Booking
.                                          32 = I12 - Add A/H Referral
.                                          33 = I13 - Change A/H Referral
.                                          34 = I14 - Delete A/H Referral
.                                          35 = A03 - Add A/H Encounter
.                                          36 = A08 - Modify A/H Encounter
.                                          37 = A13 - Cancel A/H Encounter
.                                          38 = A05 - W/L Booking
.                                          39 = A08 - W/L Booking Update
.                                          40 = A38 - W/L Booking Delete
.                                          41 = M01 - O/P Clinic Master/Type
.                                          42 = A44 - W/L Change UR
.                                          43 = A02 - W/L transfer
.                                          44 = A03 - O/P discharge
.                                          45 = A13 - cancel O/P discharge
.                                          46 = A44 - A/H Change UR
.                                          47 = I12 - Add W/L entry
.                                          48 = I13 - Update W/L entry
.                                          49 = I14 - Remove W/L entry
.                                          50 = A37 - PMI UnMerge
.
MFE001    DIM       3  
MFE002    DIM       20 
MFE003    DIM       26 
MFE004    DIM       200
MFE005    DIM       3
.
MFI001    DIM       60
MFI002    DIM       180
MFI003    DIM       3
MFI004    DIM       26
MFI005    DIM       26
MFI006    DIM       2
MLOGFLAG  FORM      1             * message log flag
.                                    0 = logging sent message
.                                    1 = logging received acknowledgement header
.                                    2 = logging received acknowledgement errors
.                                    3 = logging received acknowledgement messg.
.                                    4 = connection to socket
.
MULTBTYP  DIM       3             * multiple birth type used for ZXP069
.
MRG001    DIM       25
MRG002    DIM       20
MRG003    DIM       20
MRG004    DIM       20
MRG005    DIM       20
MRG006    DIM       20
MRG007    DIM       48
.
MSA001    DIM       2
MSA002    DIM       20
MSA003    DIM       80
MSA004    DIM       15
MSA005    DIM       1
MSA006    DIM       100
.
MSH001    DIM       1
MSH002    DIM       4
MSH003    DIM       127
MSH004    DIM       127
MSH005    DIM       127
MSH006    DIM       127
MSH007    DIM       26
MSH008    DIM       40
MSH009    DIM       15
MSH010    DIM       20
MSH011    DIM       3
MSH012    DIM       60
MSH013    DIM       15
MSH014    DIM       127
MSH015    DIM       2
MSH016    DIM       2
MSH017    DIM       3
MSH018    DIM       16
MSH019    DIM       60
MSH020    DIM       20
.
NETSTRNG  INIT      "NET"
NK1001    DIM       4  
NK1002    DIM       48
NK1003    DIM       60
NK1004    DIM       106
NK1005    DIM       40
NK1006    DIM       40
NK1007    DIM       60
NK1008    DIM       8
NK1009    DIM       8
NK1010    DIM       60
NK1011    DIM       20
NK1012    DIM       20
NK1013    DIM       90
NK1014    DIM       80
NK1015    DIM       2
NK1016    DIM       26
NK1017    DIM       2
NK1018    DIM       2
NK1019    DIM       80
NK1020    DIM       60
NK1021    DIM       2
NK1022    DIM       80
NK1023    DIM       2
NK1024    DIM       2
NK1025    DIM       80
NK1026    DIM       48
NK1027    DIM       80
NK1028    DIM       80
NK1029    DIM       80
NK1030    DIM       130
NK1031    DIM       200
NK1032    DIM       162
NK1033    DIM       32
NK1034    DIM       2
NK1035    DIM       80
NK1036    DIM       2
NK1037    DIM       16
.
OBX001    DIM       4
OBX002    DIM       3
OBX003    DIM       80
OBX004    DIM       20
OBX005    DIM       80
OBX006    DIM       60
OBX007    DIM       60
OBX008    DIM       5
OBX009    DIM       5
OBX010    DIM       2
OBX011    DIM       1
OBX012    DIM       26
OBX013    DIM       20
OBX014    DIM       26
OBX015    DIM       60
OBX016    DIM       80
OBX017    DIM       60
.
PHSTRING  INIT      "PH"
PID001    DIM       4  
PID002    DIM       20
PID003    DIM       500
PID004    DIM       20
PID005    DIM       140
PID006    DIM       48
PID007    DIM       26
PID008    DIM       1
PID009    DIM       3000
PID010    DIM       80
PID011    DIM       500
PID012    DIM       4
PID013    DIM       140
PID014    DIM       40
PID015    DIM       60
PID016    DIM       80
PID017    DIM       80
PID018    DIM       20
PID019    DIM       16
PID020    DIM       25
PID021    DIM       20
PID022    DIM       120
PID023    DIM       60
PID024    DIM       1
PID025    DIM       2
PID026    DIM       80
PID027    DIM       60
PID028    DIM       80
PID029    DIM       26
PID030    DIM       1
PID031    DIM       1
PID032    DIM       1
PID033    DIM       26
.
PIPESEQN  INIT      "\F\"
.
PRA001    DIM       60
PRA002    DIM       1000
PRA003    DIM       3
PRA004    DIM       1
PRA005    DIM       160
PRA006    DIM       100
PRA007    DIM       200
PRA008    DIM       8
PRD001    DIM       200
PRD002    DIM       106
PRD003    DIM       60
PRD004    DIM       60
PRD005    DIM       100
PRD006    DIM       200
PRD007    DIM       100
PRD008    DIM       26
PRD009    DIM       26
PRESCRIB  INIT      "Prescriber"
PRNSTRNG  INIT      "PRN"
PROVIDER  INIT      "Provider  "
PR1001    DIM       4
PR1002    DIM       2
PR1003    DIM       220
PR1004    DIM       80
PR1005    DIM       26
PR1006    DIM       2
PR1007    DIM       5
PR1008    DIM       120
PR1009    DIM       2
PR1010    DIM       4
PR1011    DIM       120
PR1012    DIM       230
PR1013    DIM       60
PR1014    DIM       6
PR1015    DIM       80
PR1016    DIM       80
PV1CLCOD  DIM       3             * PV1-20 Claim Code for ZEC Segment Output
.
PV1001    DIM       4  
PV1002    DIM       1
PV1003    DIM       80
PV1004    DIM       24
PV1005    DIM       20
PV1006    DIM       80
PV1007    DIM       750
PV1008    DIM       750
PV1009    DIM       750
ATTDOCTR  DIM       750           * used as a temp variable for PV1-07/09
PV1010    DIM       66
PV1011    DIM       80
PV1012    DIM       2
PV1013    DIM       2
PV1014    DIM       3
PV1015    DIM       2
PV1016    DIM       2
PV1017    DIM       750
PV1018    DIM       8
PV1019    DIM       20
PV1020    DIM       67
PV1021    DIM       2
PV1022    DIM       2
PV1023    DIM       2
PV1024    DIM       2
PV1025    DIM       8
PV1026    DIM       12
PV1027    DIM       3
PV1028    DIM       2
PV1029    DIM       1
PV1030    DIM       8
PV1031    DIM       10
PV1032    DIM       12
PV1033    DIM       12
PV1034    DIM       1
PV1035    DIM       8
PV1036    DIM       24
PV1037    DIM       25
PV1038    DIM       80
PV1039    DIM       24
PV1040    DIM       1
PV1041    DIM       2
PV1042    DIM       80
PV1043    DIM       80
PV1044    DIM       26
PV1045    DIM       26
PV1046    DIM       12
PV1047    DIM       12
PV1048    DIM       12
PV1049    DIM       12
PV1050    DIM       200
PV1051    DIM       1
PV1052    DIM       750
PV150CNT  FORM      1
.
PV2001    DIM       80
PV2002    DIM       60
PV2003    DIM       102
PV2004    DIM       60
PV2005    DIM       25
PV2006    DIM       25
PV2007    DIM       2
PV2008    DIM       26
PV2009    DIM       26
PV2010    DIM       5
PV2011    DIM       3
PV2012    DIM       50
PV2013    DIM       90
PV2014    DIM       8
PV2015    DIM       1
PV2016    DIM       1
PV2017    DIM       8
PV2018    DIM       2
PV2019    DIM       1
PV2020    DIM       1
PV2021    DIM       1
PV2022    DIM       1
PV2023    DIM       90
PV2024    DIM       2
PV2025    DIM       1
PV2026    DIM       8
PV2027    DIM       2
PV2028    DIM       8
PV2029    DIM       8
PV2030    DIM       80
PV2031    DIM       2
PV2032    DIM       1
PV2033    DIM       26
PV2034    DIM       1
PV2035    DIM       1
PV2036    DIM       1
PV2037    DIM       1
.
RECCOUNT  FORM      3
REFLFLAG  FORM      1             * referral message flag
.                                     0 = O/P Referral message
.                                     1 = non O/P Referral message
RF1001    DIM       200
RF1002    DIM       200
RF1003    DIM       200
RF1004    DIM       200
RF1005    DIM       200
RF1006    DIM       30
RF1007    DIM       26
RF1008    DIM       26
RF1009    DIM       26
RF1010    DIM       200
RF1011    DIM       30
.
RGS001    DIM       4
RGS002    DIM       3
RGS003    DIM       200
.
RPLYTIME  FORM      5
.
SAVKEY30  DIM       30
SCH001    DIM       75 
SCH002    DIM       75 
SCH003    DIM       5 
SCH004    DIM       22 
SCH005    DIM       200
SCH006    DIM       200
SCH007    DIM       200
SCH008    DIM       200
SCH009    DIM       20 
SCH010    DIM       200
SCH011    DIM       200
SCH012    DIM       48 
SCH013    DIM       40 
SCH014    DIM       106
SCH015    DIM       80 
SCH016    DIM       38 
SCH017    DIM       40 
SCH018    DIM       106
SCH019    DIM       80 
SCH020    DIM       48 
SCH021    DIM       40 
SCH022    DIM       80 
SCH023    DIM       75 
SCH024    DIM       75 
SCH025    DIM       200
.
SEGSTRNG  DIM       4090          * segment string
SEGSTRN2  DIM       4090          * segment string 2
SP50      INIT      "                                                  "
SP60      INIT      "                                                  ":
                    "          "
SP80      INIT      "                                                  ":
                    "                              "
.
STF001    DIM       60 
STF002    DIM       60 
STF003    DIM       48 
STF004    DIM       2
STF005    DIM       2
STF006    DIM       26 
STF007    DIM       1  
STF008    DIM       200
STF009    DIM       200
STF010    DIM       1000
STF011    DIM       1000
STF012    DIM       26
STF013    DIM       26
STF014    DIM       60 
STF015    DIM       40
STF016    DIM       200
STF017    DIM       80
STF018    DIM       20
STF019    DIM       20
STF020    DIM       2
STF021    DIM       1
STF022    DIM       25
STF023    DIM       1
STF024    DIM       8
STF025    DIM       8
STF026    DIM       8
STRBUFFR  DIM       200           * temporary buffer used for converting
.                                          HL7 special characters
.
.
TABSEQN   INIT      "\X09\"
TEMPFILE  DIM       8
TEXTFILE  FILE      ASCII, FIXED=2000   * log file
SEDIFILE  FILE      ASCII, FIXED=2000   * edi file
TILDA     INIT      "~"
TILDA40   INIT      "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
TILDSEQN  INIT      "\R\"
TXA001    DIM       4
TXA002    DIM       30
TXA003    DIM       2
TXA004    DIM       26
TXA005    DIM       60
TXA006    DIM       26
TXA007    DIM       26
TXA008    DIM       26
TXA009    DIM       60
TXA010    DIM       60
TXA011    DIM       48
TXA012    DIM       30
TXA013    DIM       30
TXA014    DIM       22
TXA015    DIM       22
TXA016    DIM       30
TXA017    DIM       2
TXA018    DIM       2
TXA019    DIM       2
TXA020    DIM       2
TXA021    DIM       30
TXA022    DIM       60
TXA023    DIM       60
.
UCTOFSET  DIM       5
UKEY      INIT      " 91 U1-30,31-60,61-90"
.
WARNSYS1  INIT      "ICD-9    "
WARNSYS2  INIT      "ICD-9-CM "
WARNSYS3  INIT      "RCC5     "
WARNSYS4  INIT      "ICPC     "
WARNSYS5  INIT      "PAXUS AMR"
WPNSTRNG  INIT      "WPN"
WRDSTRNG  DIM       10
.
ZAL001    DIM       100
ZAL002    DIM       100
ZAL003    DIM       100
ZAL004    DIM       100
ZAL005    DIM       100
ZAL006    DIM       100
ZAL007    DIM       100
ZAL008    DIM       100
ZAL009    DIM       100
ZAL010    DIM       100
ZAL011    DIM       100
ZAL012    DIM       100
ZAL013    DIM       100
ZAL014    DIM       500
ZAL015    DIM       100
.
ZBR001    DIM       26
ZBR002    DIM       61
ZBR003    DIM       8
ZBR004    DIM       103
ZBR005    DIM       61
ZBR006    DIM       61
ZBR007    DIM       90
ZBR008    DIM       100
ZBR009    DIM       1000
ZBR010    DIM       80
ZBR011    DIM       26
ZBR012    DIM       1
ZBR013    DIM       26
ZBR014    DIM       61
ZBR015    DIM       26
ZBR016    DIM       80
ZBR017    DIM       1
ZBR018    DIM       1
ZBR019    DIM       1
ZBR020    DIM       1
ZBR021    DIM       1
ZBR022    DIM       1
ZBR023    DIM       1
ZBR024    DIM       1
ZBR025    DIM       1
ZBR026    DIM       1
ZBR027    DIM       61
ZBR028    DIM       1
ZBR029    DIM       1
.
ZLH001    DIM       100
ZLH002    DIM       100
ZLH003    DIM       8
ZLH004    DIM       8
.
ZLU001    DIM       100
ZLU002    DIM       10
.
ZNT001    DIM       3
ZNT002    DIM       3
ZNT003    DIM       6
ZNT004    DIM       4090
ZNT005    DIM       6
.
ZXP001    DIM       8
ZXP002    DIM       6
ZXP003    DIM       100
ZXP004    DIM       100
ZXP005    DIM       8
ZXP006    DIM       8
ZXP007    DIM       103
ZXP008    DIM       252
ZXP009    DIM       10
ZXP010    DIM       80
ZXP011    DIM       20
ZXP012    DIM       20
ZXP013    DIM       20
ZXP014    DIM       20
ZXP015    DIM       20
ZXP016    DIM       100
ZXP017    DIM       2
ZXP018    DIM       252
ZXP019    DIM       20
ZXP020    DIM       20
ZXP021    DIM       80
ZXP022    DIM       100
ZXP023    DIM       100
ZXP024    DIM       1
ZXP025    DIM       103
ZXP026    DIM       252
ZXP027    DIM       10
ZXP028    DIM       80
ZXP029    DIM       20
ZXP030    DIM       20
ZXP031    DIM       20
ZXP032    DIM       20
ZXP033    DIM       20
ZXP034    DIM       100
ZXP035    DIM       2
ZXP036    DIM       252
ZXP037    DIM       20
ZXP038    DIM       20
ZXP039    DIM       80
ZXP040    DIM       1
ZXP041    DIM       103
ZXP042    DIM       252
ZXP043    DIM       10
ZXP044    DIM       80
ZXP045    DIM       20
ZXP046    DIM       20
ZXP047    DIM       20
ZXP048    DIM       20
ZXP049    DIM       20
ZXP050    DIM       100
ZXP051    DIM       2
ZXP052    DIM       252
ZXP053    DIM       20
ZXP054    DIM       20
ZXP055    DIM       80
ZXP056    DIM       1
ZXP057    DIM       8
ZXP058    DIM       1
ZXP059    DIM       1
ZXP060    DIM       8
ZXP061    DIM       100
ZXP062    DIM       1
ZXP063    DIM       1
ZXP064    DIM       100
ZXP065    DIM       100
ZXP066    DIM       100
ZXP067    DIM       100
ZXP068    DIM       100
ZXP069    DIM       100
ZXP070    DIM       100
ZXP071    DIM       100
.
ZXV001    DIM       1
ZXV002    DIM       100
ZXV003    DIM       100
ZXV004    DIM       100
ZXV005    DIM       100
ZXV006    DIM       100
ZXV007    DIM       100
ZXV008    DIM       100
ZXV009    DIM       100
ZXV010    DIM       100
ZXV011    DIM       100
ZXV012    DIM       100
ZXV013    DIM       1000
ZXV014    DIM       100
ZXV015    DIM       100
ZXV016    DIM       100
ZXV017    DIM       8
ZXV018    DIM       100
ZXV019    DIM       1
ZXV020    DIM       100
ZXV021    DIM       14
ZXV022    DIM       14
ZXV023    DIM       100
ZXV024    DIM       100
ZXV025    DIM       100
ZXV026    DIM       100
ZXV027    DIM       100
ZXV028    DIM       100
ZXV029    DIM       100
ZXV030    DIM       14
ZXV031    DIM       4000
ZXV032    DIM       1
ZXV033    DIM       6
ZXV034    DIM       100
ZXV035    DIM       100
ZXV036    DIM       8
ZXV037    DIM       100
ZXV038    DIM       100
ZXV039    DIM       1000
ZXV040    DIM       100
ZXV041    DIM       14
ZXV042    DIM       100
ZXV043    DIM       100
ZXV044    DIM       100
ZXV045    DIM       50
ZXV046    DIM       100
ZXV047    DIM       100
ZXV048    DIM       1000
ZXV049    DIM       100
ZXV050    DIM       100
ZXV051    DIM       100
ZXV052    DIM       100
ZXV053    DIM       100
ZXV054    DIM       100
ZXV055    DIM       100
ZXV056    DIM       100
ZXV057    DIM       100
ZXV058    DIM       100
ZXV059    DIM       100
ZXV060    DIM       100
ZXV061    DIM       100
ZXV062    DIM       100
ZXV063    DIM       100
ZXV064    DIM       100
ZXV065    DIM       100
ZXV066    DIM       100
ZXV067    DIM       100
ZXV068    DIM       100
ZXV069    DIM       100
ZXV070    DIM       100
ZXV071    DIM       100
ZXV072    DIM       100
ZXV073    DIM       100
ZXV074    DIM       100
ZXV075    DIM       100
ZXV076    DIM       100
ZXV077    DIM       100
ZXV078    DIM       100
ZXV079    DIM       100
ZXV080    DIM       100
ZXV081    DIM       100
ZXV082    DIM       100
ZXV083    DIM       100
ZXV084    DIM       100
ZXV085    DIM       100
ZXV086    DIM       100
ZXV087    DIM       100
ZXV088    DIM       100
ZXV089    DIM       2
ZXV090    DIM       61
ZXV091    DIM       255
ZXV092    DIM       10
ZXV093    DIM       512
ZXV094    DIM       255
ZXV095    DIM       20
ZXV096    DIM       1024
ZXV097    DIM       1
ZXV098    DIM       100
ZXV099    DIM       100
ZXV100    DIM       100
ZXV101    DIM       100
ZXV102    DIM       100
ZXV103    DIM       8
ZXV104    DIM       1
ZXV105    DIM       20
ZXV106    DIM       20
.
ZCM001    DIM       1
ZCM002    DIM       8
ZCM003    DIM       100
ZCM004    DIM       100
ZCM005    DIM       10
ZCM006    DIM       100
ZCM007    DIM       6
.
ZCT001    DIM       1
.
ZSD001    DIM       100
ZSD002    DIM       100
ZSD003    DIM       1000
ZSD004    DIM       1000
ZSD005    DIM       1000
ZSD006    DIM       1000
ZSD007    DIM       1000
ZSD008    DIM       1000
ZSD009    DIM       1000
.
ZLS001    DIM       100
ZLS002    DIM       100
ZLS003    DIM       100
ZLS004    DIM       100
ZLS005    DIM       100
ZLS006    DIM       100
ZLS007    DIM       100
ZLS008    DIM       100
ZLS009    DIM       100
ZLS010    DIM       210
ZLS011    DIM       100
ZLS012    DIM       100
ZLS013    DIM       100
ZLS014    DIM       100
ZLS015    DIM       100
ZLS016    DIM       100
ZLS017    DIM       100
ZLS018    DIM       100
ZLS019    DIM       100
ZLS020    DIM       100
ZLS021    DIM       100
.
ZEC001    DIM       100
ZEC002    DIM       200
ZEC003    DIM       100
ZEC004    DIM       100
ZEC005    DIM       200
ZEC006    DIM       100
ZEC007    DIM       100
ZEC008    DIM       100
ZEC009    DIM       100
ZEC010    DIM       100
ZEC011    DIM       100
ZEC012    DIM       100
ZEC013    DIM       100
ZEC014    DIM       100
ZEC015    DIM       100
ZEC016    DIM       100
ZEC017    DIM       100
ZEC018    DIM       100
ZEC019    DIM       100
ZEC020    DIM       100
ZEC021    DIM       100
ZEC022    DIM       100
ZEC023    DIM       100
ZEC024    DIM       100
ZEC025    DIM       100
ZEC026    DIM       100
ZEC027    DIM       200
ZEC028    DIM       100
ZEC029    DIM       200
ZEC030    DIM       100
ZEC031    DIM       100
ZEC032    DIM       100
ZEC033    DIM       100
ZEC034    DIM       100
ZEC035    DIM       100
ZEC036    DIM       100
ZEC037    DIM       100
ZEC038    DIM       200
ZEC039    DIM       100
ZEC040    DIM       100
ZEC041    DIM       100
ZEC042    DIM       100
ZEC043    DIM       100
ZEC044    DIM       100
ZEC045    DIM       100
ZEC046    DIM       100
ZEC047    DIM       100
ZEC048    DIM       100
ZEC049    DIM       100
ZEC050    DIM       200
ZEC051    DIM       100
ZEC052    DIM       100
ZEC053    DIM       100
ZEC054    DIM       200
ZEC055    DIM       100
.
