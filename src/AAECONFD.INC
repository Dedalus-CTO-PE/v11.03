.******************************************************************************
.*                                                                            *
.*     Include Name : AAECONFD.INC                                            *
.*                                                                            *
.*     Function     : File Definition include for A&E Control File            *
.*                                                                            *
.*     File Type    : ASCII                                                   *
.*                                                                            *
.*     Secotrs      : 30 and 78                                               *
.*                                                                            *
.*     File Name    : controlf.txt                                            *
.*                                                                            *
.*     Modifications:                                                         *
.*       V11.01.01  30/08/2021  J.Tan  TSK 0905305                            *
.*                  Added AECNAECC - Start date for AECC Class ABF calculation*
.*       V10.04.01  28/07/2014  Steve Armstrong  CAR 294204                   *
.*                  Added AECNLABL to replace HETYPLAB and added label type   *
.*                  10 (SJOG Geelong)                                         *
.******************************************************************************
.*        V9.12.01  09/07/2009  J.Tan          CAR 199760                     *
.*                  Added AECNAERH, AECNAERT - receipt header & tail template *
.******************************************************************************
.*        V9.09.01  25/10/2007  J.Tan          CAR 151803                     *
.*                  Changed definition of HESYST - Type of Fee                *
.******************************************************************************
.*        V9.04.01  12/04/2005  Ebon Clements  CAR 58443                      *
.*                  Changed HETYPLAB = 4 to be Ballarat not Hong Kong         *
.******************************************************************************
.*        V9.02.01  10/08/2001  Tonii                                         *
.*                  Mods for St Vincent Labels                                *
.******************************************************************************
.*        V5.08.01  16/04/2000  Davin                                         *
.*                  Added AECNAEIH & AECNAEIT for user defined invoice        *
.*                  headers/tails                                             *
.******************************************************************************
.*        V5.07.01  28/10/1999  Jill Habasque                                 *
.*                  Added AECNECSR - Which field for Source of Ref in EOC01 & *
.*                  Added AECNRQDF - Default code for cat RQ in EOC01         *
.******************************************************************************
.*        V5.04.04  19/05/1997  Steve Armstrong   WHL                         *
.*                  Added AECNAELT                                            *
.*        V5.04.03  24/10/1996  Howellsy       srf 642182                     *
.*                  Added AECNPTRI                                            *
.*        V5.04.02  16/07/1996  WHirlpool      srf 641713                     *
.*                  Added AECNDPVI                                            *
.******************************************************************************
.*                    V5.00 22.03.89 J.Clark     (IBA)                        *
.*                          Change includes heading                           *
.*                    V5.01 04.04.89 J.Tan       (IBA)                        *
.*                          Add using User defined field Code U1              *
.*                    V5.02 05.04.89 J.Tan       (IBA)                        *
.*                          Add type of label used in hospital                *
.*                    V5.03 17.04.89 J.Tan       SRF 100014                   *
.*                          Add Using theatre file for MBS Item code          *
.*                    V5.04 18.04.89 K.Peak      SRF (RENO)                   *
.*                          Added HSTANDM using Modbury or Standard           *
.*                    V5.05 20.04.89 K.Peak      SRF 100081                   *
.*                          Added HINVDES description on inv. for Epw         *
.*                    V5.06 24.04.89 K.Peak      (IBA)                        *
.*                          Added New Z'lnd to HSTANDM & added HNONRES        *
.*                    V5.07 03.05.89 K.Peak      (IBA)                        *
.*                          Added HNUMDES                                     *
.*                                                                            *
.*        V5.01.01  20/07/89 K.Peak      (IBA)                                *
.*                  Changed HESYST                                            *
.*                  08/08/89 K.Peak      (IBA)                                *
.*                  Added HPRINV print invoice at discharge                   *
.*        V5.01.02  10/01/90 K.Peak      SRF 103240                           *
.*                  Added the choice to print additional blank labels         *
.*        V5.01.03  10/01/90 J.Tan       (IBA)                                *
.*                  Add Continous log for AAE. SRF 103241                     *
.*        V5.01.04  12/02/90 DIG                                              *
.*                  Added HEMR5L, HEMR5COD                                    *
.*        V5.01.05  02/05/90 Graeme Williams   SRF 104820                     *
.*                  Added AECNCASE (Set case notes Y/N)                       *
.*        V5.01.06  09/05/90  E.Phan                                          *
.*                  Activated Audit for miscellaneous charges.                *
.*        V5.01.07  06/06/90  D.Di.Paola       SRF 103773                     *
.*                  Added HSITN for Situation code in discharges              *
.*                  program (Y/N).                                            *
.*        V5.01.08  26/06/90  J.Tan                                           *
.*                  Added HINPCLM - input Claim details                       *
.*        V5.01.09  15/05/1991    Justin Coates   Quote 6943 SRF 108605       *
.*                  Added AECNCHRS                                            *
.*        V5.01.10  21/10/91  J.Tan                                           *
.*                  Added AEALERT - Input alert in Input AAE detail           *
.*        V5.01.11  27/12/91 Graeme Williams                                  *
.*                  Added parameters for N.Z. billing system                  *
.*                  AECNUPVS, AECNUBRD, AECNIDSC, AECNFTYP                    *
.*        V5.01.12  23/03/92     ROD                                          *
.*                  Added AECNSITM                                            *
.*                  04/06/92     ROD                                          *
.*                  Added AECNSQA3                                            *
.*        V5.01.13  05/08/92     ROD                                          *
.*                  Added AECNDDCQ, AECNDFDC                                  *
.*        V5.01.14  05/11/1992    Justin Coates  (HONG KONG changes)          *
.*                  Added label type 4                                        *
.*        V5.01.15  15/10/1993    Gabrielle      (Hawkes Bay changes)         *
.*                  Added label type 5                                        *
.*        V5.01.16  14/09/1993    LOFTY          (DUDLEY    changes)          *
.*                  added AECNUVPT to AECNUNNA                                *
.*        V5.01.17  19/10/1993    ROD            (DUDLEY    changes)          *
.*                  added AECNWIDS                                            *
.*        V5.02.01  11/12/1994  Graeme Williams                               *
.*                  Added option for fifth priority code                      *
.*        V5.02.02  29/12/1994  Graeme Williams                               *
.*                  Added AECNPDSC - Priority / Triage description            *
.*        V5.02.03  11/05/1995   Justin Coates                                *
.*                  Added AECNHOSP - Hospital where A&E is                    *
.*        V5.03.01  27/07/1995  Greg Horvat                                   *
.*                  Added HETYPLAB 8 - Mersey labels                          *
.*        V5.04.01  11/06/1996  Steve Armstrong    SRF 641618                 *
.*                  Added AECNPLOC                                            *
.*                                                                            *
.******************************************************************************
.*        AAECONFD.PBL : Sector 30                                            *
.******************************************************************************
.
.NAME     TYPE    LENGTH    START     DESCRIPTION
.----     ----    ------    -----     -----------
.....HEENUAAE  DIM       8        1        A&E Main Menu Name
.....HSECUAAE  DIM       6        9        Company Security Code
.....HDATAAAE  DIM       20       15       Data Directory
.....HSECRAAE  DIM       8        35       Password for Parameter Maintenance
.
.         Audits (0=Active  1=Not Active)
.
HEAUDA    FORM      1        51       A&E Input Details A
HEAUDB    FORM      1        52       A&E Audit B
HEAUDC    FORM      1        53       A&E Charge Maintenance
HEAUDD    FORM      1        54       A&E Audit D
HEAUDE    FORM      1        55       A&E Audit E
HEAUDF    FORM      1        56       A&E Audit F
HEAUDG    FORM      1        57       A&E Audit G
HEAUDH    FORM      1        58       A&E Audit H
HEAUDI    FORM      1        59       A&E Audit I
HEAUDJ    FORM      1        60       A&E Audit J
HEAUDK    FORM      1        61       A&E Audit K
HEAUDL    FORM      1        62       A&E Audit L
HEAUDM    FORM      1        63       A&E Miscellaneous Charges
HEAUDN    FORM      1        64       A&E Audit N
HEAUDO    FORM      1        65       A&E Audit O
HEAUDP    FORM      1        66       A&E Audit P
HEAUDQ    FORM      1        67       A&E Audit Q
HEAUDR    FORM      1        68       A&E Audit R
HEAUDS    FORM      1        69       A&E Audit S
HEAUDT    FORM      1        70       A&E Audit T
HEAUDU    FORM      1        71       A&E Audit U
HEAUDV    FORM      1        72       A&E Audit V
HEAUDW    FORM      1        73       A&E Waiting Time
HEAUDX    FORM      1        74       A&E Audit X
HEAUDY    FORM      1        75       A&E Audit Y
HEAUDZ    FORM      1        76       A&E Audit Z
.
HECWC     DIM       3        77       Workcare Code
HECMAB    DIM       3        80       Motor Accident Board Code
HECVA     DIM       3        83       Dept.of Veteran Affairs Code
HECDCS    DIM       3        86       Dept.of Corrective Services Code
.
.         Labels
.
HELPAGE   FORM      1        89       No of Labels across page
HELPRNT   FORM      3        90       "  "    "    to print
HELSIZE   FORM      1        93       Label Size used in Hospital
.                                     1 = Small (37 char separation)
.                                     2 = Wide  (42 char separation)
.         MR5 Forms
.
HEPMR5    FORM      1        94       Using MR5 Forms ?
.                                     1 = Yes,  0,2 = No
.
HESYST    FORM      1        95       Type of Fee
.                                     0 = No Facility Fee
.                                     1 = Facility Fee
.                                     2 = NZ Facility Fee
.                                     3 = Triage Fee
.
.         Discharge User Defined Fields - Usage Flags (1=Yes 2=No)
.
HEUSR1    FORM      1        100      User Field 1  (Category A1)
HEUSR2    FORM      1        101      User Field 2  (Category A2)
HEUSR3    FORM      1        102      User Field 3  (Category A3)
HEUSR4    FORM      1        103      User Field 4  (Category A4)
HEUSR5    FORM      1        104      User Field 5  (Category A5)
.
.         Discharge User Defined Fields - Mandatory Flags (1=Yes 2=No)
.
HEMAND1   FORM      1        105      Mandatory Field 1
HEMAND2   FORM      1        106      Mandatory Field 2
HEMAND3   FORM      1        107      Mandatory Field 3
HEMAND4   FORM      1        108      Mandatory Field 4
HEMAND5   FORM      1        109      Mandatory Field 5
.
HEAUSR1   FORM      1        110      Using User Defined Code Category U1
.                                     0 = No,  1 = Yes
HEAUSRD1  DIM       18       111      User Defined code U1 description
HEAUSRM1  FORM      1        129      Mandatory Field Category U1
.                                     0 = No,  1 = Yes
.
HETYPLAB  FORM      1        130      No Longer in use
HEMBSTHE  FORM      1        131      Using Theatre file for MBS Item code
HSTANDM   FORM      1        132      Which A&E being used
.                                     0 = Standard
.                                     1 = Modbury
.                                     2 = New Zealand
HINVDES   DIM       30       133      Description on top of inv. Epw only
HCOMDIG   FORM      1        164      Using Completion or Diagnosis Code
.                                     0 = Completion
.                                     1 = Diagnosis
.                                     2 = Neither
HNONRES   FORM      3        165      No. Years for non charging
HNUMDES   DIM       9        168      Description for system number
HPRINV    FORM      1        177      Print an Invoice at time of Disc.
.                                     1 = Yes
.                                     2 = No
HADDLAB   FORM      2        178      No. of Additional Blank labels to print
HCNTLOG   FORM      1        180      Continous log of A+E patients
.                                     1 = Yes
.                                     2 = No
HPRNLOG   DIM       3        181      Printer for the Continous log
HLNOLOG   FORM      2        184      Current Line no. for Continous log
HEMR5L    FORM      1        186      Layout for MR5
.                                     0 = Modbury
.                                     1 = User Defined
HEMR5COD  DIM       6        187      Code for User Defined Stationery
AECNCASE  FORM      1        193      Setting case notes (HSTANDM=1 or 2)
.                                     0 = Set case notes indicator
.                                     1 = Don't set case notes indicator
HSITN     FORM      1        194      Using Situation for Discharges (Y/N)
.                                     0 = No, 1 = Yes
HINPCLM   FORM      1        195      Input Claim details in IBAAAE01
.                                     1 = Yes   2 = No
AECNCHRS  FORM      1        196      Charging by discharge status ?
.                                       0 = No, 1 = Yes   
AEALERT   FORM      1        197      Input alert in IBAAAE01
.                                     1 = Yes   2 = No
AECNUPVS  FORM      1        198      Using previous number of visits ?
.                                        0 = No, 1 = Yes
AECNUBRD  FORM      1        199      Using board (health fund) ?
.                                        0 = No, 1 = Yes
AECNFTYP  FORM      1        200      Type of A & E charging
.                                        0 = PATNIPA1/EMRTRFA1
.                                        1 = AAEBCHA1
AECNSITM  FORM      1        201      Situation code Mandatory ?
.                                        0 = No, 1 = Yes
AECNSQA3  FORM      1        202      Supress "?" on User Defined field "A3"?
.                                        0 = No, 1 = Yes
AECNDDCQ  FORM      1        203      Using defaults for A&E Department codes?
.                                        0 = No, 1 = Yes
AECNDFDC  DIM       3        204      Default for A&E Department code
.
.
AECNUVPT  FORM      1        207      Number of priority codes to use
.                                        0 = 3, 1 = 4, 2 = 5
AECNDXPA  DIM       10       208      Priority One description
AECNDXPB  DIM       10       218      Priority Two description
AECNDXPC  DIM       10       228      Priority Three description
AECNDXPD  DIM       10       238      Priority Four description
AECNDCUR  FORM      1        248      Entry by U/R in discharges ??
.                                        0 = No, 1 = Yes
AECNNCDG  FORM      1        249      New coding option ??
.                                        0 = No, 1 = Yes
. End of Record              250
.
.******************************************************************************
.*        AAECONFD.PBL : Sector 78                                            *
.******************************************************************************
AECNDFCL  DIM       3          1      Default Admin Cat. Cat CL
AECNUNNA  FORM      1          4      Using number of new attendances (episode)
.                                        0 = No, 1 = Yes
AECNWIDS  FORM      1          5      Give Warning if haven't printed ID sheet?
.                                        0 = No, 1 = Yes
AECNDXPE  DIM       10         6      Priority Five description
AECNPDSC  DIM       10        16      Priority/Triage description
AECNHOSP  DIM       3         26      The hospital code where A&E is (pathspaf)
AECNPLOC  DIM       2         29      Category used for Pat. Location
AECNDPVI  DIM       3         31      Default Previous Visit Code (Cat EP)
AECNPTRI  FORM      1         34      Print Triage instead of Completion Code
.                                     in Continuous Log (1=Yes, 0=No)
AECNAELT  FORM      1         35      Using Eltron printer for A&E labels
.                                         0 = No
.                                         1 = Yes
AECNRQDF  DIM       3         36      Default code for cat RQ in EOC01
.
AECNECSR  FORM      1         39      Which field for Source of Ref in EOC01
.                                     1=ADAUSR1,2=ADAUSR2,3=ADAUSR3,4=ADAUSR4
.                                     5=ADAUSR5,6=ADASRC
AECNAEIH  DIM       6         40      AAE Invoice Header Code (templated)
AECNAEIT  DIM       6         46      AAE Invoice Tail Code (templated)
AECNAERH  DIM       6         52      AAE Receipt Header Code (templated)
AECNAERT  DIM       6         58      AAE Receipt Tail Code (templated)
AECNLABL  FORM      2         64      Type of Label Used in Hospital
.                                      0 = Private Hosp
.                                      1 = Modbury
.                                      2 = Wellington
.                                      3 = New Zealand
.                                      4 = Ballarat
.                                      5 = Hawkes Bay
.                                      6 = Taranaki
.                                      5 = Hawkes Bay
.                                      7 = Port Macquaire
.                                      8 = Mersey
.                                      9 = St Vincent's Hosp
.                                     10 = SJOG Geelong
AECNAECC  DIM       8         66      Start date for AECC Class/ABF Calculation
.
.End of record               250
