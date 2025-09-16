.******************************************************************************
.*                                                                            *
.* Include Name     : WEBGRPVA.INC (was VAR41GRP.INC)                         *
.*                                                                            *
.* Description      : Common variables for WEBGROUP.PBL (was PAT41GRP)        *
.*                                                                            *
.* Author           : Davin Sloan  13/10/1999                                 *
.*                                                                            *
.* Modifications    :                                                         *
.******************************************************************************
.*        V11.02.02 14/06/2022  Ebon Clements    TSK 0906596                  *
.*                  Added TurboGrouper vars XTRB0120 to XTRB0147              *
.*                  Added XDRGCHSC                                            *
.*        V11.02.01 11/02/2022  Ebon Clements    TSK 0915238                  *
.*                  Activated XTRB104X to export operation end dates and times*
.*        V11.01.08 19/11/2021  Ebon Clements    TSK 0911383                  *
.*                  Added condition onset vars XDRGDC01 to XDRGDC50 for NWAU  *
.*                  unix grouper                                              *
.*        V11.01.07 17/11/2021  Ebon Clements    TSK 0911414                  *
.*                  Changed XTRB0022 - TG post code to a DIM 4                *
.*                  Changed XTRB0034 - TG Psychiatric Care Days to a DIM 5    *
.*                  Changed XTRB0035 - TG Qualified Days for Newborns to a    *
.*                  DIM 5                                                     *
.*        V11.01.06 05/08/2021  Ebon Clements    TSK 0909694                  *
.*                  Added XDRGCCTY - NWAU Care type - Codefinder input        *
.*        V11.01.05 04/08/2021  Ebon Clements    TSK 0909442                  *
.*                  Added XDRGATYP - Admit Type - NZ - Codefinder input       *
.*        V11.01.04 29/06/2021  Ebon Clements    TSK 0902615                  *
.*                  Changed OUTFILE2 length to 327                            *
.*        V11.01.03 22/06/2021  Ebon Clements    TSK 0907810                  *
.*                  Added CONTCARF - Contract care flag to LOADFILE           *
.*        V11.01.02 18/06/2021  Ebon Clements    TSK 0902615                  *
.*                  Added UNIXNWAU - Unix grouper export and import NWAU      *
.*                  fields                                                    *
.*        V11.01.01 05/05/2021  Ebon Clements    TSK 0902615                  *
.*                  Changed sized of TurboGrouper var XTRB0024 and XTRB0090   *
.*        V11.00.04 16/11/2020  Ebon Clements    TSK 0892694                  *
.*                  Added TurboGrouper vars XTRB0115 to XTRB0119              *
.*        V11.00.03 08/07/2020  Ebon Clements    TSK 0894249                  *
.*                  Added TURBODRG                                            *
.*        V11.00.02 15/05/2020  Ebon Clements    TSK 0891590                  *
.*                  Changed TurboGrouper XTRB0053 DRG version to a dim 4 to   *
.*                  load DRG version 6.2 from 6.0x                            *
.*        V11.00.01 31/03/2020  Jill Parkinson Task 0890087                   *
.*                  Increased DATA150B and CODELINE to allow up to 250 chars  *
.*        V10.15.01 09/10/2019  Ebon Clements    TSK 0877429                  *
.*                  Added TURBFTIM - TurboGrouper import/export file time     *
.*        V10.14.09 03/10/2019  Thanh T          TSK 0882260                  *
.*                  Added DOUT110, DRG110FN & DRG110 for DRG Version 11.0     *
.*        V10.14.08 30/09/2019  Ebon Clements    TSK 0877430                  *
.*                  Added TurboGrouper fields XTRB0106 to XTRB114X            *
.*        V10.14.07 30/09/2019  Ebon Clements    TSK 0877428                  *
.*                  Changed TurboGrouper campus code XTRB0007 to a DIM 4      *
.*        V10.14.06 04/06/2019  Ebon Clements    TSK 0875790                  *
.*                  Added TurboGrouper operation prefix - XTRB105X            *
.*        V10.14.05 31/05/2019  Ebon Clements    TSK 0875696                  *
.*                  Added TurboGrouper save of original principal             *
.*                  diagnosis code and coder id - XTRB45SV, XTRB45CI          *
.*        V10.14.04 30/04/2019  Ebon Clements    TSK 0873995                  *
.*                  Added TURBOSAV - Retain previous details                  *
.*        V10.14.03 27/03/2019  Ebon Clements    TSK 0872200                  *
.*                  Changed TurboGrouper XTRB0030 leave days to DIM 4         *
.*        V10.14.02 04/03/2019  Ebon Clements    TSK 0870711                  *
.*                  Added TurboGrouper retain operation time vars             *
.*                  27/02/2019  Richa Phogat     TSK 0870439                  *
.*                  Added DOUT100, DRG100FN & DRG100 for DRG Version 10.0     *
.*        V10.14.01 26/02/2019  Ebon Clements    TSK 0870711                  *
.*                  Changed TurboGrouper to accept 200 diagnosis/procedure    *
.*                  codes                                                     *
.******************************************************************************
.*        V10.12.02 04/05/2018  Ebon Clements    TSK 0845772                  *
.*                  New fields for TurboGrouper                               *
.*        V10.12.01 22/03/2018  Tracey Nguyen    TSK 0852793                  *
.*                  Added DOUT90, DRGO90FN & DRG090 for DRG Version 9.0       *
.*        V10.08.05 21/09/2016  Davin            TSK 0307316                  *
.*                  Added WEBCODER for web Interface to 3M Codefinder         *
.*        V10.08.04 26/08/2016  Don Nguyen       TSK 0312570                  *
.*                  Added CFPAYCOD used by WEBGROUP (GETDRG / GTEDRG00)       *
.*        V10.08.03 18/07/2016  Davin            TSK 0822753                  *
.*                  Changed ADNODAYS and EPSNOLOS to FORM4 (same as NBRDAYS)  *
.*        V10.08.02 27/04/2016  Don Nguyen       TSK 0815007                  *
.*                  Moved XDRGECRW to relevant file positions                 *
.*        V10.08.01 12/04/2016  Don Nguyen       TSK 0815007                  *
.*                  Added XDRGECRW - ECCS Raw Format                          *
.*        V10.06.02 30/07/2015  Don Nguyen       CAR 318792                   *
.*                  Changed ICDCDESC to be 200 chars for (PTEDDESC & PTEODESC)*
.*        V10.06.01 29/05/2015  Ebon Clements    CAR 317094                   *
.*                  Added DOUT80, DRGO80FN & DRG080 for DRG Ver 8.0           *
.*                  Changed OPENFLG from FORM 1 to FORM 2                     *
.*        V10.04.02 03/07/2014  Ebon Clements    CAR 302036                   *
.*                  Added XDRGURGA - DRG Urgency of Admission                 *
.*        V10.04.01 13/03/2014  Don Nguyen       CAR 294888                   *
.*                  Added SYSTGVAL                                            *
.*        V10.03.06 14/10/2013  Don Nguyen       CAR 282453                   *
.*                  Added var DACCDATE                                        *
.*        V10.03.05 26/09/2013  Ania P           CAR 292081                   *
.*                  Added var AUTHFLAG                                        *
.*        V10.03.04 03/05/2013  Davin            CAR 284669 HDP 2013 DRG 7.0  *
.*                  Added DOUT70, DRGO70FN & DRG070 for DRG Ver 7.0           *
.*        V10.03.03 01/10/2012  Mike Laming      CAR 271756                   *
.*                  October Codefinder changes - added Codefinder vars and    *
.*                  NZ Wies Tags USENZWIS NZTOTWIS & FORM84                   *
.*        V10.03.02 26/06/2012  Mike Laming      CAR 267797 HDP 2012 DRG 6.2  *
.*                  Added DOUT62, DRGO62FD & DRG062 for DRG Ver 6.2           *
.*        V10.03.01 05/06/2012  Mike Laming      CAR 266421                   *
.*                  Added GRPSWICH to switch CPDATS00 in SETGRP00, also added *
.*                  SETCLACC, variables for CPDATS00 (now in WEBGROUP)        *
.*        V10.02.04 29/09/2011  Mike Laming      CAR 249011                   *
.*                  Added WAHEALTH to allow bypassing Oper.Date processing    *
.*        V10.02.03 26/09/2011  Mike Laming      CAR 241939                   *
.*                  Added ENCDTYPE (CodeFinder returned Disease Prefix)       *
.*        V10.02.02 07/09/2011  Mike Laming      CAR 241939                   *
.*                  Added ENCSTDAT & ENCENDAT (replaces ADATE & DDATE for     *
.*                  Codefinder upload Tags "ADT:" & "DDT:"                    *
.*        V10.02.01 24/08/2011  Mike Laming      CAR 249284 & 249210          *
.*                  Added DRGIND for "DRG Driver in use" indicator (for ARE:) *
.*                  Added CCCLASS for "CC Class Level" indicator (for ARCL:)  *
.*        V9.12.01  19/06/2009  Mike Laming      CAR 197814 HDP 2009 DRG 6.0  *
.*                  Moved all variables DRGOnnFN & DRG0nn to here             *
.*                  Added DOUT60, DRGO60FD & DRG060 for DRG Ver 6.0           *
.*        V9.11.01  03/03/2009  Mike Laming      CAR 190769 plus              *
.*                  Changes for new Tags in '09 Codefinder  and PAT41GRP mods *
.* ****************************************************************************
.*        V9.08.01  12/04/2007  Mike Laming      CAR 137125 HDP 2007 DRG 5.2  *
.*                  Added DOUT52 for DRG Ver 5.2                              *
.*        V9.04.01  23/05/2005  Mike Laming   CAR 61562                       *
.*                  July 2005 mods for DRG 5.1 - Add DOUT51                   *
.*        V9.03.02  30/07/2004  Henry Son        CAR 51504                    *
.*                  CME changes put in with WIES12.                           *
.*        V9.03.01  27/05/2004  Henry Son        CAR 50344                    *
.*                  Group using 3M CME                                        *
.*                  Change format of UNIX Quickgroup input and output files.  *
.*        V9.02.01  08/11/2001  Davin                                         *
.*                  Added OPENFLG - determine which grouper out file to open  *
.*                  08/11/2001  Pat Dirito                                    *
.*                  Added File Variables for Unix Grouper                     *
.*        V5.08.01  27/06/2000  Greg Horvat                                   *
.*                  Added INPFIL41 - 4.1 grouper input file                   *
.*        V5.07.02  14/01/2000  Greg Horvat                                   *
.*                  Changed the ICD9 input file procedure variables to be 4   *
.*                  characters & added FILRFGRP                               *
.*        V5.07.01  06/12/1999  Greg Horvat                                   *
.*                  Added RUNGRP - Run grouper on this machine flag           *
.*                                                                            *
.******************************************************************************
.
INPFIL41  FILE      ASCII, FIXED=319        * ICD10 grouper file
.
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  --------------------------------------
XDRGADMN  DIM       8       1   Admission number
XDRGADAT  DIM      10       9   Admission date (dd/mm/ccyy)
XDRGATIM  DIM       2      19   Admission time (hh)
XDRGDDAT  DIM      10      21   Discharge date (dd/mm/ccyy)
XDRGDTIM  DIM       2      31   Discharge time (hh)
XDRGBDAT  DIM      10      33   Birth date (dd/mm/ccyy)
XDRGAGEY  DIM       3      43   Age in years (if > 364 days)
XDRGAGED  DIM       3      46   Age in days (if <= 364 days)
XDRGSEX   DIM       1      49   Sex
XDRGSEP   DIM       2      50   Separation mode
XDRGAWHT  DIM       4      52   Admission weight
XDRGILOS  DIM       1      56   Intended los
.                                 0 = not entered
.                                 1 = same day
.                                 2 = overnight
XDRGSDAY  DIM       1      57   Same day (0 = not sameday, 1 = sameday)
XDRGMHLS  DIM       1      58   Mental health legal status
XDRGHMV   DIM       4      59   Hours on mechanical ventiliation
XDRGALOS  DIM       4      63   Acute los
XDRGDS01  DIM       5      67   diagnosis 1
XDRGDS02  DIM       5      72   diagnosis 2
XDRGDS03  DIM       5      77   diagnosis 3
XDRGDS04  DIM       5      82   diagnosis 4
XDRGDS05  DIM       5      87   diagnosis 5
XDRGDS06  DIM       5      92   diagnosis 6
XDRGDS07  DIM       5      97   diagnosis 7
XDRGDS08  DIM       5     102   diagnosis 8
XDRGDS09  DIM       5     107   diagnosis 9
XDRGDS10  DIM       5     112   diagnosis 10
XDRGDS11  DIM       5     117   diagnosis 11
XDRGDS12  DIM       5     122   diagnosis 12
XDRGDS13  DIM       5     127   diagnosis 13
XDRGDS14  DIM       5     132   diagnosis 14
XDRGDS15  DIM       5     137   diagnosis 15
XDRGDS16  DIM       5     142   diagnosis 16
XDRGDS17  DIM       5     147   diagnosis 17
XDRGDS18  DIM       5     152   diagnosis 18
XDRGDS19  DIM       5     157   diagnosis 19
XDRGDS20  DIM       5     162   diagnosis 20
XDRGDS21  DIM       5     167   diagnosis 21
XDRGOP01  DIM       7     172   operation code 1
XDRGOP02  DIM       7     179   operation code 2
XDRGOP03  DIM       7     186   operation code 3
XDRGOP04  DIM       7     193   operation code 4
XDRGOP05  DIM       7     200   operation code 5
XDRGOP06  DIM       7     207   operation code 6
XDRGOP07  DIM       7     214   operation code 7
XDRGOP08  DIM       7     221   operation code 8
XDRGOP09  DIM       7     228   operation code 9
XDRGOP10  DIM       7     235   operation code 10
XDRGOP11  DIM       7     242   operation code 11
XDRGOP12  DIM       7     249   operation code 12
XDRGOP13  DIM       7     256   operation code 13
XDRGOP14  DIM       7     263   operation code 14
XDRGOP15  DIM       7     270   operation code 15
XDRGOP16  DIM       7     277   operation code 16
XDRGOP17  DIM       7     284   operation code 17
XDRGOP18  DIM       7     291   operation code 18
XDRGOP19  DIM       7     298   operation code 19
XDRGOP20  DIM       7     305   operation code 20
XDRGOP21  DIM       7     312   operation code 21
.
.End of Record            319
.
.************************************************************************
.                  Unix Grouper File Variables
.************************************************************************
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  --------------------------------------
XDRGSTAT  DIM       1       1   State Code
XDRGHOSP  DIM      10       2   Hospital ID
XDRGMEDN  DIM      13      12   Medical Record Number(Admission Number)
XDRGHTYP  DIM       1      25   Hospital Type
.XDRGADAT  DIM      10      26   Admission date (dd/mm/ccyy)
.XDRGDDAT  DIM      10      36   Seperation(Discharge) date (dd/mm/ccyy)
.XDRGSEP   DIM       2      46   Separation mode
.XDRGBDAT  DIM      10      48   Birth date (dd/mm/ccyy)
.XDRGAWHT  DIM       4      58   Admission weight
.XDRGAGEY  DIM       3      62   Age in years (if > 364 days)
.XDRGAGED  DIM       3      65   Age in days (if <= 364 days)
.XDRGSEX   DIM       1      68   Sex
.XDRGHMV   DIM       4      69   Hours on mechanical ventiliation
.XDRGDS01  DIM       5      73   Principle Diagnosis 1
.XDRGDS02  DIM       5      78   diagnosis 2
.XDRGDS03  DIM       5      83   diagnosis 3
.XDRGDS04  DIM       5      88   diagnosis 4
.XDRGDS05  DIM       5      93   diagnosis 5
.XDRGDS06  DIM       5      98   diagnosis 6
.XDRGDS07  DIM       5     103   diagnosis 7
.XDRGDS08  DIM       5     108   diagnosis 8
.XDRGDS09  DIM       5     113   diagnosis 9
.XDRGDS10  DIM       5     118   diagnosis 10
.XDRGDS11  DIM       5     123   diagnosis 11
.XDRGDS12  DIM       5     128   diagnosis 12
.XDRGDS13  DIM       5     133   diagnosis 13
.XDRGDS14  DIM       5     138   diagnosis 14
.XDRGDS15  DIM       5     143   diagnosis 15
.XDRGDS16  DIM       5     148   diagnosis 16
.XDRGDS17  DIM       5     153   diagnosis 17
.XDRGDS18  DIM       5     158   diagnosis 18
.XDRGDS19  DIM       5     163   diagnosis 19
.XDRGDS20  DIM       5     168   diagnosis 20
.XDRGDS21  DIM       5     173   diagnosis 21
XDRGDS22   DIM       5     178   diagnosis 22                          
XDRGDS23   DIM       5     183   diagnosis 23                          
XDRGDS24   DIM       5     188   diagnosis 24                          
XDRGDS25   DIM       5     193   diagnosis 25                          
XDRGDS26   DIM       5     198   diagnosis 26                          
XDRGDS27   DIM       5     203   diagnosis 27                          
XDRGDS28   DIM       5     208   diagnosis 28                          
XDRGDS29   DIM       5     213   diagnosis 29                          
XDRGDS30   DIM       5     218   diagnosis 30                          
XDRGDS31   DIM       5     223   diagnosis 31                          
XDRGDS32   DIM       5     228   diagnosis 32                          
XDRGDS33   DIM       5     233   diagnosis 33                          
XDRGDS34   DIM       5     238   diagnosis 34                          
XDRGDS35   DIM       5     243   diagnosis 35                          
XDRGDS36   DIM       5     248   diagnosis 36                          
XDRGDS37   DIM       5     253   diagnosis 37                          
XDRGDS38   DIM       5     258   diagnosis 38                          
XDRGDS39   DIM       5     263   diagnosis 39                          
XDRGDS40   DIM       5     268   diagnosis 40                          
XDRGDS41   DIM       5     273   diagnosis 41                          
XDRGDS42   DIM       5     278   diagnosis 42                          
XDRGDS43   DIM       5     283   diagnosis 43                          
XDRGDS44   DIM       5     288   diagnosis 44                          
XDRGDS45   DIM       5     293   diagnosis 45                          
XDRGDS46   DIM       5     298   diagnosis 46                          
XDRGDS47   DIM       5     303   diagnosis 47                          
XDRGDS48   DIM       5     308   diagnosis 48                          
XDRGDS49   DIM       5     313   diagnosis 49                          
XDRGDS50   DIM       5     318   diagnosis 50                          
.XDRGOP01  DIM       7     323   operation code 1
.XDRGOP02  DIM       7     330   operation code 2
.XDRGOP03  DIM       7     337   operation code 3
.XDRGOP04  DIM       7     344   operation code 4
.XDRGOP05  DIM       7     351   operation code 5
.XDRGOP06  DIM       7     358   operation code 6
.XDRGOP07  DIM       7     365   operation code 7
.XDRGOP08  DIM       7     372   operation code 8
.XDRGOP09  DIM       7     379   operation code 9
.XDRGOP10  DIM       7     386   operation code 10
.XDRGOP11  DIM       7     393   operation code 11
.XDRGOP12  DIM       7     400   operation code 12
.XDRGOP13  DIM       7     407   operation code 13
.XDRGOP14  DIM       7     414   operation code 14
.XDRGOP15  DIM       7     421   operation code 15
.XDRGOP16  DIM       7     428   operation code 16
.XDRGOP17  DIM       7     435   operation code 17
.XDRGOP18  DIM       7     442   operation code 18
.XDRGOP19  DIM       7     449   operation code 19
.XDRGOP20  DIM       7     456   operation code 20
.XDRGOP21  DIM       7     463   operation code 21                     
XDRGOP22   DIM       7     470   operation code 22                     
XDRGOP23   DIM       7     477   operation code 23                     
XDRGOP24   DIM       7     484   operation code 24                     
XDRGOP25   DIM       7     491   operation code 25                     
XDRGOP26   DIM       7     498   operation code 26                     
XDRGOP27   DIM       7     505   operation code 27                     
XDRGOP28   DIM       7     512   operation code 28                     
XDRGOP29   DIM       7     519   operation code 29                     
XDRGOP30   DIM       7     526   operation code 30                     
XDRGOP31   DIM       7     533   operation code 31                     
XDRGOP32   DIM       7     540   operation code 32                     
XDRGOP33   DIM       7     547   operation code 33                     
XDRGOP34   DIM       7     554   operation code 34                     
XDRGOP35   DIM       7     561   operation code 35                     
XDRGOP36   DIM       7     568   operation code 36                     
XDRGOP37   DIM       7     575   operation code 37                     
XDRGOP38   DIM       7     582   operation code 38                     
XDRGOP39   DIM       7     589   operation code 39                     
XDRGOP40   DIM       7     596   operation code 40                     
XDRGOP41   DIM       7     603   operation code 41                     
XDRGOP42   DIM       7     610   operation code 42                     
XDRGOP43   DIM       7     617   operation code 43                     
XDRGOP44   DIM       7     624   operation code 44                     
XDRGOP45   DIM       7     631   operation code 45                     
XDRGOP46   DIM       7     638   operation code 46                     
XDRGOP47   DIM       7     645   operation code 47                     
XDRGOP48   DIM       7     652   operation code 48                     
XDRGOP49   DIM       7     659   operation code 49                     
XDRGOP50   DIM       7     666   operation code 50                     
XDRGALS2   DIM       5     673   Acute los Same as XDRGALOS but 5 digit
XDRGNLOS   DIM       4     678   Non-acceptable los
XDRGTOTL   DIM       4     682   Total Leave Days
.XDRGSDAY  DIM       1     686   Same day (0 = not sameday, 1 = sameday)
.XDRGMHLS  DIM       1     687   Mental health legal status

.XDRGAMOD  DIM       1     688   * Admission mode
.XDRGCTYP  DIM       2     689   * Care Type
.XDRGFNDS  DIM       2     691   * Funding source
.XDRGICUH  DIM       5     693   * Hours in ICU
.XDRGATSI  DIM       1     698   * Aboriginal Torres Straight Islander
.XDRGPCOD  DIM       8     699   * Post Code
.XDRGQDAY  DIM       3     707   * Total qualified baby days
.XDRGPDAY  DIM       3     710   * Total psyciatric care days
.
.End of Record             713
.
.************************************************************************
. * ICD10 unix grouper file when using NWAU
.************************************************************************
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  --------------------------------------
.XDRGSTAT DIM       1        1  State Code
.XDRGHOSP DIM      10        2  Hospital ID
.XDRGMEDN DIM      13       12  Medical Record Number(Admission Number)
.XDRGHTYP DIM       1       25  Hospital Type
.XDRGADAT DIM      10       26  Admission date (dd/mm/ccyy)
.XDRGDDAT DIM      10       36  Discharge date (dd/mm/ccyy)
.XDRGSEP  DIM       2       46  Separation mode
.XDRGBDAT DIM      10       48  Birth date (dd/mm/ccyy)
.XDRGAWHT DIM       4       58  Admission weight
.XDRGAGEY DIM       3       62  Age in years (if > 364 days)
.XDRGAGED DIM       3       65  Age in days (if <= 364 days)
.XDRGSEX  DIM       1       68  Sex
.XDRGHMV  DIM       4       69  Hours on mechanical ventiliation
.XDRGDS01 DIM       5       73  diagnosis 1
XDRGDC01  DIM       2       78  diagnosis 1 Condition Onset
.XDRGDS02 DIM       5       80  diagnosis 2
.XDRGDS03 DIM       5       85  diagnosis 3
.XDRGDS04 DIM       5       90  diagnosis 4
.XDRGDS05 DIM       5       95  diagnosis 5
.XDRGDS06 DIM       5      100  diagnosis 6
.XDRGDS07 DIM       5      105  diagnosis 7
.XDRGDS08 DIM       5      110  diagnosis 8
.XDRGDS09 DIM       5      115  diagnosis 9
.XDRGDS10 DIM       5      120  diagnosis 10
.XDRGDS11 DIM       5      125  diagnosis 11
.XDRGDS12 DIM       5      130  diagnosis 12
.XDRGDS13 DIM       5      135  diagnosis 13
.XDRGDS14 DIM       5      140  diagnosis 14
.XDRGDS15 DIM       5      145  diagnosis 15
.XDRGDS16 DIM       5      150  diagnosis 16
.XDRGDS17 DIM       5      155  diagnosis 17
.XDRGDS18 DIM       5      160  diagnosis 18
.XDRGDS19 DIM       5      165  diagnosis 19
.XDRGDS20 DIM       5      170  diagnosis 20
.XDRGDS21 DIM       5      175  diagnosis 21
.XDRGDS22 DIM       5      180  diagnosis 22
.XDRGDS23 DIM       5      185  diagnosis 23
.XDRGDS24 DIM       5      190  diagnosis 24
.XDRGDS25 DIM       5      195  diagnosis 25
.XDRGDS26 DIM       5      200  diagnosis 26
.XDRGDS27 DIM       5      205  diagnosis 27
.XDRGDS28 DIM       5      210  diagnosis 28
.XDRGDS29 DIM       5      215  diagnosis 29
.XDRGDS30 DIM       5      220  diagnosis 30
.XDRGDS31 DIM       5      225  diagnosis 31
.XDRGDS32 DIM       5      230  diagnosis 32
.XDRGDS33 DIM       5      235  diagnosis 33
.XDRGDS34 DIM       5      240  diagnosis 34
.XDRGDS35 DIM       5      245  diagnosis 35
.XDRGDS36 DIM       5      250  diagnosis 36
.XDRGDS37 DIM       5      255  diagnosis 37
.XDRGDS38 DIM       5      260  diagnosis 38
.XDRGDS39 DIM       5      265  diagnosis 39
.XDRGDS40 DIM       5      270  diagnosis 40
XDRGDC02  DIM       2      275  diagnosis 2 Condition Onset
XDRGDC03  DIM       2      277  diagnosis 3 Condition Onset
XDRGDC04  DIM       2      279  diagnosis 4 Condition Onset
XDRGDC05  DIM       2      281  diagnosis 5 Condition Onset
XDRGDC06  DIM       2      283  diagnosis 6 Condition Onset
XDRGDC07  DIM       2      285  diagnosis 7 Condition Onset
XDRGDC08  DIM       2      287  diagnosis 8 Condition Onset
XDRGDC09  DIM       2      289  diagnosis 9 Condition Onset
XDRGDC10  DIM       2      291  diagnosis 10 Condition Onset
XDRGDC11  DIM       2      293  diagnosis 11 Condition Onset
XDRGDC12  DIM       2      295  diagnosis 12 Condition Onset
XDRGDC13  DIM       2      297  diagnosis 13 Condition Onset
XDRGDC14  DIM       2      299  diagnosis 14 Condition Onset
XDRGDC15  DIM       2      301  diagnosis 15 Condition Onset
XDRGDC16  DIM       2      303  diagnosis 16 Condition Onset
XDRGDC17  DIM       2      305  diagnosis 17 Condition Onset
XDRGDC18  DIM       2      307  diagnosis 18 Condition Onset
XDRGDC19  DIM       2      309  diagnosis 19 Condition Onset
XDRGDC20  DIM       2      311  diagnosis 20 Condition Onset
XDRGDC21  DIM       2      313  diagnosis 21 Condition Onset
XDRGDC22  DIM       2      315  diagnosis 22 Condition Onset
XDRGDC23  DIM       2      317  diagnosis 23 Condition Onset
XDRGDC24  DIM       2      319  diagnosis 24 Condition Onset
XDRGDC25  DIM       2      321  diagnosis 25 Condition Onset
XDRGDC26  DIM       2      323  diagnosis 26 Condition Onset
XDRGDC27  DIM       2      325  diagnosis 27 Condition Onset
XDRGDC28  DIM       2      327  diagnosis 28 Condition Onset
XDRGDC29  DIM       2      329  diagnosis 29 Condition Onset
XDRGDC30  DIM       2      331  diagnosis 30 Condition Onset
XDRGDC31  DIM       2      333  diagnosis 31 Condition Onset
XDRGDC32  DIM       2      335  diagnosis 32 Condition Onset
XDRGDC33  DIM       2      337  diagnosis 33 Condition Onset
XDRGDC34  DIM       2      339  diagnosis 34 Condition Onset
XDRGDC35  DIM       2      341  diagnosis 35 Condition Onset
XDRGDC36  DIM       2      343  diagnosis 36 Condition Onset
XDRGDC37  DIM       2      345  diagnosis 37 Condition Onset
XDRGDC38  DIM       2      347  diagnosis 38 Condition Onset
XDRGDC39  DIM       2      349  diagnosis 39 Condition Onset
XDRGDC40  DIM       2      351  diagnosis 40 Condition Onset
.XDRGOP01 DIM       7      353  operation code 1
.XDRGOP02 DIM       7      360  operation code 1
.XDRGOP03 DIM       7      367  operation code 1
.XDRGOP04 DIM       7      374  operation code 1
.XDRGOP05 DIM       7      381  operation code 1
.XDRGOP06 DIM       7      388  operation code 1
.XDRGOP07 DIM       7      395  operation code 1
.XDRGOP08 DIM       7      402  operation code 1
.XDRGOP09 DIM       7      409  operation code 1
.XDRGOP10 DIM       7      416  operation code 1
.XDRGOP11 DIM       7      423  operation code 1
.XDRGOP12 DIM       7      430  operation code 1
.XDRGOP13 DIM       7      437  operation code 1
.XDRGOP14 DIM       7      444  operation code 1
.XDRGOP15 DIM       7      451  operation code 1
.XDRGOP16 DIM       7      458  operation code 1
.XDRGOP17 DIM       7      465  operation code 1
.XDRGOP18 DIM       7      472  operation code 1
.XDRGOP19 DIM       7      479  operation code 1
.XDRGOP20 DIM       7      486  operation code 1
.XDRGOP21 DIM       7      493  operation code 1
.XDRGOP22 DIM       7      500  operation code 1
.XDRGOP23 DIM       7      507  operation code 1
.XDRGOP24 DIM       7      514  operation code 1
.XDRGOP25 DIM       7      521  operation code 1
.XDRGOP26 DIM       7      528  operation code 1
.XDRGOP27 DIM       7      535  operation code 1
.XDRGOP28 DIM       7      542  operation code 1
.XDRGOP29 DIM       7      549  operation code 1
.XDRGOP30 DIM       7      556  operation code 1
.XDRGOP31 DIM       7      563  operation code 1
.XDRGOP32 DIM       7      570  operation code 1
.XDRGOP33 DIM       7      577  operation code 1
.XDRGOP34 DIM       7      584  operation code 1
.XDRGOP35 DIM       7      591  operation code 1
.XDRGOP36 DIM       7      698  operation code 1
.XDRGOP37 DIM       7      605  operation code 1
.XDRGOP38 DIM       7      612  operation code 1
.XDRGOP39 DIM       7      619  operation code 1
.XDRGOP40 DIM       7      626  operation code 1
.XDRGALS2 DIM       5      633  Acute los Same as XDRGALOS but 5 digit
.XDRGNLOS DIM       4      638  Non-acceptable los
.XDRGTOTL DIM       4      642  Total Leave Days
.XDRGSDAY DIM       1      646  Same day (0 = not sameday, 1 = sameday)
.XDRGMHLS DIM       1      647  Mental health legal status
.XDRGAMOD DIM       1      648  Admission mode
.XDRGCTYP DIM       2      649  Care Type
.XDRGFNDS DIM       2      651  Funding source
.XDRGICUH DIM       4      653  Hours in ICU
.XDRGATSI DIM       1      657  Aboriginal Torres Straight Islander
.XDRGPCOD DIM       4      658  Post Code
.XDRGQDAY DIM       3      662  Total qualified baby days
.XDRGPDAY DIM       4      665  Total psyciatric care days
.XDRGUROR DIM       1      669  Unplanned return to theatre
.XDRGURGA DIM       1      670  DRG Urgency of Admission
.
. End of Record            673
.
XDRGDC41  DIM       2           diagnosis 41 Condition Onset
XDRGDC42  DIM       2           diagnosis 42 Condition Onset
XDRGDC43  DIM       2           diagnosis 43 Condition Onset
XDRGDC44  DIM       2           diagnosis 44 Condition Onset
XDRGDC45  DIM       2           diagnosis 45 Condition Onset
XDRGDC46  DIM       2           diagnosis 46 Condition Onset
XDRGDC47  DIM       2           diagnosis 47 Condition Onset
XDRGDC48  DIM       2           diagnosis 48 Condition Onset
XDRGDC49  DIM       2           diagnosis 49 Condition Onset
XDRGDC50  DIM       2           diagnosis 50 Condition Onset
.
.****************************************************************************
INPFIL9   FILE      ASCII, FIXED=256        * ICD9 grouper file
.
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  --------------------------------------
.XDRGADMN DIM       8       1   Admission number
.XDRGADAT DIM      10       9   Admission date (dd/mm/ccyy)
.XDRGATIM DIM       2      19   Admission time (hh)
.XDRGDDAT DIM      10      21   Discharge date (dd/mm/ccyy)
.XDRGDTIM DIM       2      31   Discharge time (hh)
.XDRGBDAT DIM      10      33   Birth date (dd/mm/ccyy)
.XDRGAGEY DIM       3      43   Age in years (if > 364 days)
.XDRGAGED DIM       3      46   Age in days (if <= 364 days)
.XDRGSEX  DIM       1      49   Sex
.XDRGSEP  DIM       2      50   Separation mode
.XDRGAWHT DIM       4      52   Admission weight
.XDRGILOS DIM       1      56   Intended los
.                                 0 = not entered
.                                 1 = same day
.                                 2 = overnight
.XDRGSDAY DIM       1      57   Same day (0 = not sameday, 1 = sameday)
.XDRGMHLS DIM       1      58   Mental health legal status
.XDRGHMV  DIM       4      59   Hours on mechanical ventiliation
.XDRGALOS DIM       4      63   Acute los
XDRGD901  DIM       5      67   diagnosis 1
XDRGD902  DIM       5      72   diagnosis 2
XDRGD903  DIM       5      77   diagnosis 3
XDRGD904  DIM       5      82   diagnosis 4
XDRGD905  DIM       5      87   diagnosis 5
XDRGD906  DIM       5      92   diagnosis 6
XDRGD907  DIM       5      97   diagnosis 7
XDRGD908  DIM       5     102   diagnosis 8
XDRGD909  DIM       5     107   diagnosis 9
XDRGD910  DIM       5     112   diagnosis 10
XDRGD911  DIM       5     117   diagnosis 11
XDRGD912  DIM       5     122   diagnosis 12
XDRGD913  DIM       5     127   diagnosis 13
XDRGD914  DIM       5     132   diagnosis 14
XDRGD915  DIM       5     137   diagnosis 15
XDRGD916  DIM       5     142   diagnosis 16
XDRGD917  DIM       5     147   diagnosis 17
XDRGD918  DIM       5     152   diagnosis 18
XDRGD919  DIM       5     157   diagnosis 19
XDRGD920  DIM       5     162   diagnosis 20
XDRGD921  DIM       5     167   diagnosis 21
XDRGO901  DIM       4     172   operation code 1
XDRGO902  DIM       4     176   operation code 2
XDRGO903  DIM       4     180   operation code 3
XDRGO904  DIM       4     184   operation code 4
XDRGO905  DIM       4     188   operation code 5
XDRGO906  DIM       4     192   operation code 6
XDRGO907  DIM       4     196   operation code 7
XDRGO908  DIM       4     200   operation code 8
XDRGO909  DIM       4     204   operation code 9
XDRGO910  DIM       4     208   operation code 10
XDRGO911  DIM       4     212   operation code 11
XDRGO912  DIM       4     216   operation code 12
XDRGO913  DIM       4     220   operation code 13
XDRGO914  DIM       4     224   operation code 14
XDRGO915  DIM       4     228   operation code 15
XDRGO916  DIM       4     232   operation code 16
XDRGO917  DIM       4     236   operation code 17
XDRGO918  DIM       4     240   operation code 18
XDRGO919  DIM       4     244   operation code 19
XDRGO920  DIM       4     248   operation code 20
XDRGO921  DIM       4     252   operation code 21
.
.End of Record            256
.
.********************************************************************
OUTFILE2  FILE      ASCII, FIXED=327
.
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  ------------------------------------
.XDRGADMN DIM       8       1   Admission number
XDRGDRG   DIM       4       9   Diagnostic Related Group (DRG)
XDRGDRGD  DIM       72     13   DRG description
XDRGMDC   DIM       2      85   Major Diagnostic Category (MDC)
XDRGMDCD  DIM       73     87   MDC description
XDRGCCL   DIM       1     160   CC class level
XDRGGSC   DIM       2     161   Grouper status code
XDRGNWT   DIM       9     163   DRG national weight
XDRGNALS  DIM       7     172   DRG national average LOS
XDRGSWT   DIM       9     179   DRG state weight
XDRGSALS  DIM       7     188   DRG state average LOS
XDRGLWT   DIM       9     195   DRG local weight
XDRGLALS  DIM       7     204   DRG local average LOS
XDRGCTRV  DIM       5     211   Grouper Country 04 for Aust. + version *C-50344
XDRGECRW  DIM      11     216   ECCS RAW Format
.
.
.XDRGNWAU  DIM     11     227   Total NWAU for unix grouper (11 Characters)
.
.End of Record            238
.
.************************************************************************
.                  Unix Grouper Output File Variables
.************************************************************************
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  --------------------------------------
.XDRGSTAT  DIM       1       1   State Code
.XDRGHOSP  DIM      10       2   Hospital ID
.XDRGMEDN  DIM      13      12   Medical Record Number(Admission Number)
.XDRGHTYP  DIM       1      25   Hospital Type
.XDRGADAT  DIM      10      26   Admission date (dd/mm/ccyy)
.XDRGDDAT  DIM      10      36   Seperation(Discharge) date (dd/mm/ccyy)
.XDRGSEP   DIM       2      46   Separation mode
.XDRGBDAT  DIM      10      48   Birth date (dd/mm/ccyy)
.XDRGAWHT  DIM       4      58   Admission weight
.XDRGAGEY  DIM       3      62   Age in years (if > 364 days)
.XDRGAGED  DIM       3      65   Age in days (if <= 364 days)
.XDRGSEX   DIM       1      68   Sex
.XDRGHMV   DIM       4      69   Hours on mechanical ventiliation
.XDRGDS01  DIM       5      73   Principle Diagnosis 1
.XDRGDS02  DIM       5      78   diagnosis 2
.XDRGDS03  DIM       5      83   diagnosis 3
.XDRGDS04  DIM       5      88   diagnosis 4
.XDRGDS05  DIM       5      93   diagnosis 5
.XDRGDS06  DIM       5      98   diagnosis 6
.XDRGDS07  DIM       5     103   diagnosis 7
.XDRGDS08  DIM       5     108   diagnosis 8
.XDRGDS09  DIM       5     113   diagnosis 9
.XDRGDS10  DIM       5     118   diagnosis 10
.XDRGDS11  DIM       5     123   diagnosis 11
.XDRGDS12  DIM       5     128   diagnosis 12
.XDRGDS13  DIM       5     133   diagnosis 13
.XDRGDS14  DIM       5     138   diagnosis 14
.XDRGDS15  DIM       5     143   diagnosis 15
.XDRGDS16  DIM       5     148   diagnosis 16
.XDRGDS17  DIM       5     153   diagnosis 17
.XDRGDS18  DIM       5     158   diagnosis 18
.XDRGDS19  DIM       5     163   diagnosis 19
.XDRGDS20  DIM       5     168   diagnosis 20
.XDRGDS21  DIM       5     173   diagnosis 21                          
.XDRGDS22  DIM       5     178   diagnosis 22                          
.XDRGDS23  DIM       5     183   diagnosis 23                          
.XDRGDS24  DIM       5     188   diagnosis 24                          
.XDRGDS25  DIM       5     193   diagnosis 25                          
.XDRGDS26  DIM       5     198   diagnosis 26                          
.XDRGDS27  DIM       5     203   diagnosis 27                          
.XDRGDS28  DIM       5     208   diagnosis 28                          
.XDRGDS29  DIM       5     213   diagnosis 29                          
.XDRGDS30  DIM       5     218   diagnosis 30                          
.XDRGDS31  DIM       5     223   diagnosis 31                          
.XDRGDS32  DIM       5     228   diagnosis 32                          
.XDRGDS33  DIM       5     233   diagnosis 33                          
.XDRGDS34  DIM       5     238   diagnosis 34                          
.XDRGDS35  DIM       5     243   diagnosis 35                          
.XDRGDS36  DIM       5     248   diagnosis 36                          
.XDRGDS37  DIM       5     253   diagnosis 37                          
.XDRGDS38  DIM       5     258   diagnosis 38                          
.XDRGDS39  DIM       5     263   diagnosis 39                          
.XDRGDS40  DIM       5     268   diagnosis 40                          
.XDRGOP01  DIM       7     273   operation code 1
.XDRGOP02  DIM       7     280   operation code 2
.XDRGOP03  DIM       7     287   operation code 3
.XDRGOP04  DIM       7     294   operation code 4
.XDRGOP05  DIM       7     301   operation code 5
.XDRGOP06  DIM       7     308   operation code 6
.XDRGOP07  DIM       7     315   operation code 7
.XDRGOP08  DIM       7     322   operation code 8
.XDRGOP09  DIM       7     329   operation code 9
.XDRGOP10  DIM       7     336   operation code 10
.XDRGOP11  DIM       7     343   operation code 11
.XDRGOP12  DIM       7     350   operation code 12
.XDRGOP13  DIM       7     357   operation code 13
.XDRGOP14  DIM       7     364   operation code 14
.XDRGOP15  DIM       7     371   operation code 15
.XDRGOP16  DIM       7     378   operation code 16
.XDRGOP17  DIM       7     385   operation code 17
.XDRGOP18  DIM       7     392   operation code 18
.XDRGOP19  DIM       7     399   operation code 19
.XDRGOP20  DIM       7     406   operation code 20
.XDRGOP21  DIM       7     413   operation code 21                     
.XDRGOP22  DIM       7     420   operation code 22                     
.XDRGOP23  DIM       7     427   operation code 23                     
.XDRGOP24  DIM       7     434   operation code 24                     
.XDRGOP25  DIM       7     441   operation code 25                     
.XDRGOP26  DIM       7     448   operation code 26                     
.XDRGOP27  DIM       7     455   operation code 27                     
.XDRGOP28  DIM       7     462   operation code 28                     
.XDRGOP29  DIM       7     469   operation code 29                     
.XDRGOP30  DIM       7     476   operation code 30                     
.XDRGOP31  DIM       7     483   operation code 31                     
.XDRGOP32  DIM       7     490   operation code 32                     
.XDRGOP33  DIM       7     497   operation code 33                     
.XDRGOP34  DIM       7     504   operation code 34                     
.XDRGOP35  DIM       7     511   operation code 35                     
.XDRGOP36  DIM       7     518   operation code 36                     
.XDRGOP37  DIM       7     525   operation code 37                     
.XDRGOP38  DIM       7     532   operation code 38                     
.XDRGOP39  DIM       7     539   operation code 39                     
.XDRGOP40  DIM       7     546   operation code 40                     
.XDRGALS2  DIM       5     553   Acute los Same as XDRGALOS but 5 digit*C-50344
.XDRGNLOS  DIM       4     558   Non-acceptable los
.XDRGTOTL  DIM       4     562   Total Leave Days
.XDRGSDAY  DIM       1     566   Same day (0 = not sameday, 1 = sameday)
.XDRGMHLS  DIM       1     567   Mental health legal status
.XDRGDRG   DIM       4     568   Diagnostic Related Group (DRG)
.XDRGMDC   DIM       2     572   Major Diagnostic Category (MDC)
XDRGGAGE  DIM       1     574   Age used for grouping edit
XDRGGSEX  DIM       1     575   Sex used for grouping edit
XDRGGLOS  DIM       1     576   Los used for grouping edit
XDRGGSDF  DIM       1     577   Same Day Field used for grouping edit
XDRGGSEP  DIM       1     578   Seperation Code used for grouping edit
XDRGADMW  DIM       2     579   Admission Weight used for grouping edit
XDRGGHMV  DIM       1     581   Hrs on Mech Ventilation used for grouping edit
XDRGGMHL  DIM       1     582   Mental Hlth Leave status used for grouping edit
XDRGGPDX  DIM       1     583   Principle Diagnosis used for grouping edits
XDRGDX01  DIM       3     584   Secondary diagnosis used for grouping edits
XDRGDX02  DIM       3     587   Secondary diagnosis used for grouping edits
XDRGDX03  DIM       3     590   Secondary diagnosis used for grouping edits
XDRGDX04  DIM       3     593   Secondary diagnosis used for grouping edits
XDRGDX05  DIM       3     596   Secondary diagnosis used for grouping edits
XDRGDX06  DIM       3     699   Secondary diagnosis used for grouping edits
XDRGDX07  DIM       3     602   Secondary diagnosis used for grouping edits
XDRGDX08  DIM       3     605   Secondary diagnosis used for grouping edits
XDRGDX09  DIM       3     608   Secondary diagnosis used for grouping edits
XDRGDX10  DIM       3     611   Secondary diagnosis used for grouping edits
XDRGDX11  DIM       3     614   Secondary diagnosis used for grouping edits
XDRGDX12  DIM       3     617   Secondary diagnosis used for grouping edits
XDRGDX13  DIM       3     620   Secondary diagnosis used for grouping edits
XDRGDX14  DIM       3     623   Secondary diagnosis used for grouping edits
XDRGDX15  DIM       3     626   Secondary diagnosis used for grouping edits
XDRGDX16  DIM       3     629   Secondary diagnosis used for grouping edits
XDRGDX17  DIM       3     632   Secondary diagnosis used for grouping edits
XDRGDX18  DIM       3     635   Secondary diagnosis used for grouping edits
XDRGDX19  DIM       3     638   Secondary diagnosis used for grouping edits
XDRGDX20  DIM       3     641   Secondary diagnosis used for grouping edits
XDRGDX21  DIM       3     644   Secondary diagnosis used for grouping  
XDRGDX22  DIM       3     647   Secondary diagnosis used for grouping  
XDRGDX23  DIM       3     650   Secondary diagnosis used for grouping  
XDRGDX24  DIM       3     653   Secondary diagnosis used for grouping  
XDRGDX25  DIM       3     656   Secondary diagnosis used for grouping  
XDRGDX26  DIM       3     659   Secondary diagnosis used for grouping  
XDRGDX27  DIM       3     662   Secondary diagnosis used for grouping  
XDRGDX28  DIM       3     665   Secondary diagnosis used for grouping  
XDRGDX29  DIM       3     668   Secondary diagnosis used for grouping  
XDRGDX30  DIM       3     671   Secondary diagnosis used for grouping  
XDRGDX31  DIM       3     674   Secondary diagnosis used for grouping  
XDRGDX32  DIM       3     677   Secondary diagnosis used for grouping  
XDRGDX33  DIM       3     680   Secondary diagnosis used for grouping  
XDRGDX34  DIM       3     683   Secondary diagnosis used for grouping  
XDRGDX35  DIM       3     686   Secondary diagnosis used for grouping  
XDRGDX36  DIM       3     689   Secondary diagnosis used for grouping  
XDRGDX37  DIM       3     692   Secondary diagnosis used for grouping  
XDRGDX38  DIM       3     695   Secondary diagnosis used for grouping  
XDRGDX39  DIM       3     698   Secondary diagnosis used for grouping  
XDRGDX40  DIM       3     701   Secondary diagnosis used for grouping  
XDRGSR01  DIM       3     704   Procedure used for grouping edits
XDRGSR02  DIM       3     707   Procedure used for grouping edits
XDRGSR03  DIM       3     710   Procedure used for grouping edits
XDRGSR04  DIM       3     713   Procedure used for grouping edits
XDRGSR05  DIM       3     716   Procedure used for grouping edits
XDRGSR06  DIM       3     719   Procedure used for grouping edits
XDRGSR07  DIM       3     722   Procedure used for grouping edits
XDRGSR08  DIM       3     725   Procedure used for grouping edits
XDRGSR09  DIM       3     728   Procedure used for grouping edits
XDRGSR10  DIM       3     731   Procedure used for grouping edits
XDRGSR11  DIM       3     734   Procedure used for grouping edits
XDRGSR12  DIM       3     737   Procedure used for grouping edits
XDRGSR13  DIM       3     740   Procedure used for grouping edits
XDRGSR14  DIM       3     743   Procedure used for grouping edits
XDRGSR15  DIM       3     746   Procedure used for grouping edits
XDRGSR16  DIM       3     749   Procedure used for grouping edits
XDRGSR17  DIM       3     752   Procedure used for grouping edits
XDRGSR18  DIM       3     755   Procedure used for grouping edits
XDRGSR19  DIM       3     758   Procedure used for grouping edits
XDRGSR20  DIM       3     761   Procedure used for grouping edits
XDRGSR21  DIM       3     764   Procedure used for grouping edits
XDRGSR22  DIM       3     767   Procedure used for grouping edits
XDRGSR23  DIM       3     770   Procedure used for grouping edits
XDRGSR24  DIM       3     773   Procedure used for grouping edits
XDRGSR25  DIM       3     776   Procedure used for grouping edits
XDRGSR26  DIM       3     779   Procedure used for grouping edits
XDRGSR27  DIM       3     782   Procedure used for grouping edits
XDRGSR28  DIM       3     785   Procedure used for grouping edits
XDRGSR29  DIM       3     788   Procedure used for grouping edits
XDRGSR30  DIM       3     791   Procedure used for grouping edits
XDRGSR31  DIM       3     794   Procedure used for grouping edits
XDRGSR32  DIM       3     797   Procedure used for grouping edits
XDRGSR33  DIM       3     800   Procedure used for grouping edits
XDRGSR34  DIM       3     803   Procedure used for grouping edits
XDRGSR35  DIM       3     806   Procedure used for grouping edits
XDRGSR36  DIM       3     809   Procedure used for grouping edits
XDRGSR37  DIM       3     812   Procedure used for grouping edits
XDRGSR38  DIM       3     815   Procedure used for grouping edits
XDRGSR39  DIM       3     818   Procedure used for grouping edits
XDRGSR40  DIM       3     821   Procedure used for grouping edits
.XDRGGSC   DIM       2     824   Grouper status code
.XDRGCCL   DIM       1     826   Clinical Complexity class level
XDRGCLOS  DIM       5     827   System Calculated length of Stay       
XDRGCAGD  DIM       3     832   System Calculated Age in Days          
XDRGCAGY  DIM       3     835   System Calculated Age in Years         
XDRGCBWT  DIM       4     838   System Calculated Birth Weight         
XDRGCSDF  DIM       1     842   System Calculated Same Day Field       
XDRGCMHL  DIM       1     843   System Calculated M. Healt. Leg.Status 
XDRGULOS  DIM       5     844   Used Length of Stay                    
XDRGUAGD  DIM       3     849   Used Age in Days                       
XDRGUAGY  DIM       3     852   Used Age in Years                      
XDRGUBWT  DIM       4     855   Used Birth Weight                      
XDRGUSDF  DIM       1     859   Used Same Day Field                    
XDRGUMHL  DIM       1     860   Used M. Healt. Leg.Status              
.XDRGECRW DIM      11     861   ECCS RAW Format
XDRGCHSC  DIM       2     872   Charlson Score
.
.End of Record            8742
.
...
...XDRGMD01  DIM       5     466   Mapped diagnosis 1
...XDRGMD02  DIM       5     471   Mapped diagnosis 2
...XDRGMD03  DIM       5     476   Mapped diagnosis 3
...XDRGMD04  DIM       5     481   Mapped diagnosis 4
...XDRGMD05  DIM       5     486   Mapped diagnosis 5
...XDRGMD06  DIM       5     491   Mapped diagnosis 6
...XDRGMD07  DIM       5     496   Mapped diagnosis 7
...XDRGMD08  DIM       5     501   Mapped diagnosis 8
...XDRGMD09  DIM       5     506   Mapped diagnosis 9
...XDRGMD10  DIM       5     511   Mapped diagnosis 10
...XDRGMD11  DIM       5     516   Mapped diagnosis 11
...XDRGMD12  DIM       5     521   Mapped diagnosis 12
...XDRGMD13  DIM       5     526   Mapped diagnosis 13
...XDRGMD14  DIM       5     531   Mapped diagnosis 14
...XDRGMD15  DIM       5     536   Mapped diagnosis 15
...XDRGMD16  DIM       5     541   Mapped diagnosis 16
...XDRGMD17  DIM       5     546   Mapped diagnosis 17
...XDRGMD18  DIM       5     551   Mapped diagnosis 18
...XDRGMD19  DIM       5     556   Mapped diagnosis 19
...XDRGMD20  DIM       5     561   Mapped diagnosis 20
...XDRGMP01  DIM       7     566   Mapped operation code 1
...XDRGMP02  DIM       7     573   Mapped operation code 2
...XDRGMP03  DIM       7     580   Mapped operation code 3
...XDRGMP04  DIM       7     587   Mapped operation code 4
...XDRGMP05  DIM       7     594   Mapped operation code 5
...XDRGMP06  DIM       7     601   Mapped operation code 6
...XDRGMP07  DIM       7     608   Mapped operation code 7
...XDRGMP08  DIM       7     615   Mapped operation code 8
...XDRGMP09  DIM       7     622   Mapped operation code 9
...XDRGMP10  DIM       7     629   Mapped operation code 10
...XDRGMP11  DIM       7     636   Mapped operation code 11
...XDRGMP12  DIM       7     643   Mapped operation code 12
...XDRGMP13  DIM       7     650   Mapped operation code 13
...XDRGMP14  DIM       7     657   Mapped operation code 14
...XDRGMP15  DIM       7     664   Mapped operation code 15
...XDRGMP16  DIM       7     671   Mapped operation code 16
...XDRGMP17  DIM       7     678   Mapped operation code 17
...XDRGMP18  DIM       7     685   Mapped operation code 18
...XDRGMP19  DIM       7     692   Mapped operation code 19
...XDRGMP20  DIM       7     699   Mapped operation code 20
...                                                                    *D-50344
...End of Record            706                                        *D-50344
.
.
.************************************************************************
.                Codefinder DRG Output File Variables
.************************************************************************
.Name     Type   Length  Start  Description
.-------  -----  ------  -----  --------------------------------------
.XDRGGRP   DIM       3           Grouper version used
.XDRGDRG   DIM       4           Diagnostic Related Group (DRG)
.XDRGDRGD  DIM       72          DRG description
.XDRGMDC   DIM       2           Major Diagnostic Category (MDC)
.XDRGMDCD  DIM       73          MDC description
.XDRGCCL   DIM       1           CC class level
.XDRGGSC   DIM       2           Grouper status code
.XDRGNWT   DIM       9           DRG national weight
.XDRGNALS  DIM       7           DRG national average LOS
.XDRGSWT   DIM       9           DRG state weight
.XDRGSALS  DIM       7           DRG state average LOS
.XDRGLWT   DIM       9           DRG local weight
.XDRGLALS  DIM       7           DRG local average LOS
.
.
. ----- Include Variables -----
.
.                               * This is actually the Grouper version
.                               * and is the last 3 digits of XDRGCTRV.
.                               * It changed to 5 digits with
.                               * the new CME. It gets extracted later.
XDRGGRP   DIM       3           * Grouper version used                 *C-50344
XDRGURGA  DIM       1           * DRG Urgency of Admission
.
XDRGAMOD  DIM       1           * Admission mode
XDRGATSI  DIM       1           * Aboriginal Torres Straight Islander
XDRGCTYP  DIM       2           * Care Type
XDRGCCTY  DIM       2           * Care Type - Codefinder input
XDRGATYP  DIM       2           * Admit Type - NZ - Codefinder input
XDRGFNDS  DIM       2           * Funding source
XDRGICUH  DIM       4           * Hours in ICU
XDRGPCDY  DIM       4           * PC Days
XDRGPCOD  DIM       4           * Post Code
XDRGUROR  DIM       1           * Unplanned return to theatre
XDRGTOTN  FORM      12.4        * Total NWAU
XDRGNWAU  DIM       11          * Total NWAU for unix grouper (11 Characters)
XDRGQDAY  DIM       3           * Total qualified baby days
XDRGPDAY  DIM       4           * Total psyciatric care days
UNIXNWAU  FORM      1           * Unix grouper export and import NWAU fields
.
AUTHCODE  INIT      "kW3qhvk06hZiIEID"      * CSC's Authrization code
AUTHFLAG  FORM      1                       * Authorization code matches CSC's? 
BYPASSRD  FORM      1
CODECNT   FORM      3
CODELINE  DIM       250                                               *I-190768
DATA150B  DIM       250
ICDCDESC  DIM       200                     * Code description        *I-190768
CCCLASS   DIM       1                       * CC Class Level (for ARCL:)
CONTCARF  DIM       2                       * Contract care flag for ICD Coding
DACCDATE  DIM       8                       * Accident Date (for Disease Coding)
.
DOUT31    DIM       8                       * 3.1 output filename
DOUT41    DIM       8                       * 4.1 output filename
DOUT42    DIM       8                       * 4.2 output filename
DOUT50    DIM       8                       * 5.0 output filename      
DOUT51    DIM       8                       * 5.1 output filename      *I-61562
DOUT52    DIM       8                       * 5.2 output filename     *I-137125
DOUT60    DIM       8                       * 6.0 output filename     *I-197814
DOUT62    DIM       8                       * 6.2 output filename     *I-267797
DOUT70    DIM       8                       * 7.0 output filename     *I-284669
DOUT80    DIM       8                       * 8.0 output filename
DOUT90    DIM       8                       * 9.0 output filename
DOUT100   DIM       8                       * 10.0 output filename
DOUT110   DIM       8                       * 11.0 output filename
.
.                                      * moved from programs - start  *I-197814
DRGFLNAM  DIM       12      * used for standard routine LODGXX00
DRGO41FN  DIM       12      * DRG 4.1 Batch file name
DRGO42FN  DIM       12      * DRG 4.2 Batch file name
DRGO50FN  DIM       12      * DRG 5.0 Batch file name
DRGO51FN  DIM       12      * DRG 5.1 Batch file name
DRGO52FN  DIM       12      * DRG 5.2 Batch file name
DRGO60FN  DIM       12      * DRG 6.0 Batch file name                 *I-197814
DRGO62FN  DIM       12      * DRG 6.2 Batch file name                 *I-267797
DRGO70FN  DIM       12      * DRG 7.0 Batch file name                 *I-284669
DRGO80FN  DIM       12      * DRG 8.0 Batch file name
DRGO90FN  DIM       12      * DRG 9.0 Batch file name
DRG100FN  DIM       12      * DRG 10.0 Batch file name
DRG110FN  DIM       12      * DRG 11.0 Batch file name
.
DRG041    INIT      "041"
DRG042    INIT      "042"
DRG050    INIT      "050"
DRG051    INIT      "051"
DRG052    INIT      "052"
DRG060    INIT      "060"                                             *I-197814
DRG062    INIT      "062"                                             *I-267797
DRG070    INIT      "070"                                             *I-284669
DRG080    INIT      "080"
DRG090    INIT      "090"
DRG100    INIT      "100"
DRG110    INIT      "110"
.                                      * moved from programs - end    *I-197814
.
DRGIND    DIM       1                       * "DRG Driver in use" Indicator
DTXTEXT   DIM       100                     * 
DTXDATA   DIM       15
ENCSTDAT  DIM       8                       * from ADATE or Episode Start Date
ENCENDAT  DIM       8                       * from DDATE or Episode End Date
ENCSTTIM  DIM       8
ENCENTIM  DIM       8
ENCDTYPE  DIM       1                       * CodeFinder Disease Prefix DISTYPE
..
EPSTTDAT  DIM       8       * selected Episode Start Date - Date format
EPENDDAT  DIM       8       * selected Episode End Date   - Date format
EPSTTDIS  DIM       15      * selected Episode Start Date - Display format
EPENDDIS  DIM       15      * selected Episode End Date   - Display format
EPSTTTIM  DIM       8       * selected Episode Start Time
EPENDTIM  DIM       8       * selected Episode End Time
CARETYPE  DIM       3       
EPNODAYS  DIM       20      
EPSNOLOS  FORM      4       
ADNODAYS  FORM      4
ADATEDIS  DIM       11
DDATEDIS  DIM       11
..
FILRFGRP  FORM      1                       * File returned from grouper flag
FMTTXNO   FORM      2                       * FMT: texts count
FMTTEXT   DIM       30[10]                  * FMT: texts returned 
FMTLINE   DIM       100
FMTWORK   DIM       15[10]
GRPDTE    DIM       8                       * Grouper date
GRPSWICH  DIM       1                       * CPDATS00 switch
DRGVERS   DIM       3
DFLTVFLG  FORM      1                       * Default Grouper version flag
USENZWIS  FORM      1                       * Use NZ WIES tags from Codefinder
OPENFLG   FORM      2                       * grouper version output file
ONSETIND  DIM       1                       * Onset Ind. returned from CodeFindr
RUNGRP    FORM      1                       * Run grouper on this machine flag
PASSNUM   FORM      1
PLACE2    DIM       2                       * 2 digit place holder     
PLACE3    DIM       3                       * 3 digit place holder
PROCDATE  DIM       8                       * Procedure date
PHYSTEXT  DIM       35                      * Physician text
WAHEALTH  FORM      1                       * Flag to bypass Oper.Dates
SETCLACC  FORM      1                       * Indicator to set call to CLRACC00
.
FPTR      FORM      3
LPTR      FORM      3
F1B       FORM      1
TOTWISCF  FORM      12.4                    * WIES Total (for Codefinder WIES)
FORM84    FORM      8.4
FORM64    FORM      6.4
FORM42    FORM      4.2
FORM124   FORM      12.4
ENCRNWGT  DIM       11
ENCRNLOS  DIM       7
SYSTGVAL  DIM       3                       * 3M Codefinder System Value
CFPAYCOD  DIM       3                       * 3M Codefinder PAY Code
WEBCODER  FORM      "0"                     * initiate web Codefinder? (1=yes)
+
.
TURBOCMD  DIM       1                       * TurboGrouper command
TURBOSAV  FORM      1                       * Retain previous details
TURBFTIM  DIM       11                      * TurboGrouper file time hhmmssuu
TURBODRG  DIM       3                       * Temp TurboGrouper DRG field
.
. Export TurboGrouper Fields
.
TURBOFL1  FILE      ASCII, FIXED=4096       * TurboGrouper export file
.
.Name     Type   Length  Description
.-------  -----  ------  --------------------------------------
XTRB0001  DIM       10   Interface ID
XTRB0002  DIM       3    Interface Version
XTRB0003  DIM       9    PAS Version
XTRB0004  DIM       8    Episode ID
XTRB0005  DIM       1    TurboGrouper Command
XTRB0006  DIM       1    PAS Command
XTRB0007  DIM       4    Hospital Campus Code
XTRB0008  DIM       1    State Identifier
XTRB0009  DIM       1    Establishment Identifier
XTRB0010  DIM       1    SA2  of Hospital
XTRB0011  DIM       1    SLA  of Hospital
XTRB0012  DIM       4    Postcode of Hospital
XTRB0013  DIM       1    Remoteness of Hospital
XTRB0014  DIM       8    Patient ID
XTRB0015  DIM       20   Family Name
XTRB0016  DIM       25   Given Names
XTRB0017  DIM       10   Date of Birth
XTRB0018  DIM       1    Sex
XTRB0019  DIM       1    Indigenous Status
XTRB0020  DIM       1    SA2  of Patient's Usual Residence
XTRB0021  DIM       1    SLA  of Patient's Usual Residence
XTRB0022  DIM       4    Postcode of Patient's Usual Residence
XTRB0023  DIM       1    Remoteness of Patient's Usual Residence
XTRB0024  DIM       2    Care Type
XTRB0025  DIM       1    Age in Years
XTRB0026  DIM       1    Age in Days
XTRB0027  DIM       6    Admission Weight
XTRB0028  DIM       10   Admission Date
XTRB0029  DIM       10   Separation Date
XTRB0030  DIM       4    Leave Days
XTRB0031  DIM       1    Length of Stay
XTRB0032  DIM       1    Non-acceptable Length of Stay
XTRB0033  DIM       1    HITH  Days
XTRB0034  DIM       5    Psychiatric Care Days
XTRB0035  DIM       5    Qualified Days for Newborns
XTRB0036  DIM       5    Mechanical Ventilation Hours
XTRB0037  DIM       5    Intensive Care Unit Hours
XTRB0038  DIM       1    Mental Health Legal Status
XTRB0039  DIM       1    Urgency of Admission
XTRB0040  DIM       1    Same Day Status
XTRB0041  DIM       1    Short Stay Status
XTRB0042  DIM       1    Separation Mode
XTRB0043  DIM       2    Funding Source
XTRB0044  DIM       2    ICD-10-AM Edition
.
XTRB0045  DIM       9    ICD-10-AM principal diagnosis
XTRB45SV  DIM       9    ICD-10-AM Save orig. principal diag (Not exported)
XTRB45CI  DIM       10   ICD-10-AM Save orig. principal diag Coder(Not exported)
.
XTRB46XX  DIM       9[200]  ICD-10-AM secondary diags/morph codes 1 to 200
XTRB47XX  DIM       1[200]  COF 1 to 200
XTRB48XX  DIM       10[200] Diagnosis dates 1 to 200
XTRB48AD  DIM       8[200]  Accident date 1 to 200 (Not exported)
XTRB0049  DIM       1       ACHI Edition
.
XTRB50XX  DIM       9[200]  ACHI intervention codes 1 to 200
XTRB51XX  DIM       16[200] Intervention dates 1 to 200
XTRB51CL  DIM       10[200] Intervention Clinician (Not exported)
.
XTRB0052  DIM       1    TurboGrouper Version
XTRB0053  DIM       4    AR-DRG Version
XTRB0054  DIM       4    AR-DRG
XTRB0055  DIM       4    VIC-DRG Version
XTRB0056  DIM       4    VIC-DRG
XTRB0057  DIM       4    MDC
XTRB0058  DIM       1    GAGE
XTRB0059  DIM       1    GSEX
XTRB0060  DIM       1    GLOS
XTRB0061  DIM       1    GSDF
XTRB0062  DIM       1    GSEP
XTRB0063  DIM       1    GADMW
XTRB0064  DIM       1    GHMV
XTRB0065  DIM       1    GMHLS
XTRB0066  DIM       1    GURGADM
XTRB0067  DIM       1    GPDX
XTRB68XX  DIM       3[200]   GDX  1 to 200
XTRB69XX  DIM       3[200]   GSRG 1 to 200
XTRB0070  DIM       1    GST
XTRB0071  DIM       1    PCCL
XTRB0072  DIM       1    CLOS
XTRB0073  DIM       1    CAGED
XTRB0074  DIM       1    CAGEY
XTRB0075  DIM       1    CADMW
XTRB0076  DIM       1    CSDF
XTRB0077  DIM       1    CMHLS
XTRB0078  DIM       1    CURGADM
XTRB0079  DIM       1    ULOS
XTRB0080  DIM       1    UAGED
XTRB0081  DIM       1    UAGEY
XTRB0082  DIM       1    UADMW
XTRB0083  DIM       1    USDF
XTRB0084  DIM       1    UMHLS
XTRB0085  DIM       1    UURGADM
XTRB0086  DIM       11   ECCS_RAW
XTRB0087  DIM       1    ECCS_RND
XTRB0088  DIM       1    NWAU Version
XTRB0089  DIM       1    NWAU Status
XTRB0090  DIM      17    NWAU Total
XTRB0091  DIM       1    NWAU Price
XTRB0092  DIM       1    NWAU Funding
XTRB0093  DIM       1    WIES Version
XTRB0094  DIM       1    WIES Status
XTRB0095  DIM       1    WIES Total
XTRB0096  DIM       1    WIES Price
XTRB0097  DIM       1    WIES Funding
XTRB0098  DIM       1    Non-invasive Ventilation Hours
XTRB0099  DIM       1    Coronary Care Unit Hours
XTRB0100  DIM       1    Admission Mode
XTRB0101  DIM       1    Unplanned Theatre
XTRB0102  DIM       1    Unplanned Intensive Care Unit
XTRB0103  DIM       1    Diagnosis finish dates 1 to 200
XTRB104X  DIM       16[200] Interventionfinish  dates 1 to 200
XTRB105X  DIM       1[200]  Intervention flags 1 to 200
XTRB0106  DIM       19   PAS Export Date/Time
XTRB0107  DIM       10   PAS User ID
XTRB0108  DIM       80   PAS User Name
XTRB109X  DIM       10[200]  Diagnosis Coder ID X 200
XTRB110X  DIM       80[200]  Diagnosis Coder Name X 200
XTRB111X  DIM       16[200]  Diagnosis Coder Date X 200
XTRB112X  DIM       10[200]  Procedure Coder ID X 200
XTRB113X  DIM       80[200]  Procedure Coder Name X 200
XTRB114X  DIM       16[200]  Procedure Coder Date X 200
XTRB0115  DIM       1    Not used - Diagnosis Row ID X 200
XTRB0116  DIM       1    Not used - Intervention Row ID X 200
XTRB0117  DIM       6    Health Fund ID
XTRB0118  DIM       40   Health Fund Name
XTRB0119  DIM       4    Health Fund AR-DRG Version
XTRB0120  DIM       1    Contract Days
XTRB0121  DIM       1    NWAU Base
XTRB0122  DIM       1    Admission COunt
XTRB0123  DIM       1    AHR Index Episode ID
XTRB0124  DIM       1    NWAU AHR Category
XTRB0125  DIM       1    NWAU AHR Complexity
XTRB0126  DIM       1    Reasmission Episode ID List
XTRB0127  DIM       1    Readmission NWAU Base List
XTRB0128  DIM       1    Readmission NWAU AHR Category List
XTRB0129  DIM       1    Readmission NWAU AHR Complexity List
XTRB0130  DIM       1    HAC Version
XTRB0131  DIM       1    AHR Version
XTRB0132  DIM       1    ABF Type
XTRB0133  DIM       1    CCHI Version
XTRB0134  DIM       1    CCHI Tier
XTRB0135  DIM       1    CCHI Status
XTRB0136  DIM       1    CCHI Total
XTRB0137  DIM       1    CCHI Price
XTRB0138  DIM       1    CCHI Funding
XTRB0139  DIM       1    Gender
XTRB0140  DIM       1    NWAU Length of Stay (Average)
XTRB0141  DIM       1    NWAU Length of Stay (Low)
XTRB0142  DIM       1    NWAU Length of Stay (High)
XTRB0143  DIM       1    NWAU Length of Stay (Adjusted)
XTRB0144  DIM       1    WIES Length of Stay(Average)
XTRB0145  DIM       1    WIES Length of Stay(Low)
XTRB0146  DIM       1    WIES Length of Stay(High)
XTRB0147  DIM       2    Charlson Score
.
TABDELIM  INIT      011                     * TAB character (Octal)
.
. Import TurboGrouper Fields
.
TURBOFL2  FILE      HL7, FIXED=4096         * TurboGrouper import file
.
.         Fields must be pipe delimited and in the following sequence.
.         Field lengths are irrelevant other than the fact that where
.         a field is longer than allowed, the extra data will be ignored.
.
.Name     Type   Length  Description
.-------  -----  ------  --------------------------------------
.XTRB0001 DIM       10   Interface ID
.XTRB0002 DIM       3    Interface Version
.XTRB0003 DIM       1    PAS Version
.XTRB0004 DIM       8    Episode ID
.XTRB0005 DIM       1    TurboGrouper Command
.XTRB0006 DIM       1    PAS Command
.XTRB0007 DIM       1    Hospital Campus Code
.XTRB0008 DIM       1    State Identifier
.XTRB0009 DIM       1    Establishment Identifier
.XTRB0010 DIM       1    SA2  of Hospital
.XTRB0011 DIM       1    SLA  of Hospital
.XTRB0012 DIM       4    Postcode of Hospital
.XTRB0013 DIM       1    Remoteness of Hospital
.XTRB0014 DIM       8    Patient ID
.XTRB0015 DIM       20   Family Name
.XTRB0016 DIM       25   Given Names
.XTRB0017 DIM       10   Date of Birth
.XTRB0018 DIM       1    Sex
.XTRB0019 DIM       1    Indigenous Status
.XTRB0020 DIM       1    SA2  of Patient's Usual Residence
.XTRB0021 DIM       1    SLA  of Patient's Usual Residence
.XTRB0022 DIM       1    Postcode of Patient's Usual Residence
.XTRB0023 DIM       1    Remoteness of Patient's Usual Residence
.XTRB0024 DIM       2    Care Type
.XTRB0025 DIM       1    Age in Years
.XTRB0026 DIM       1    Age in Days
.XTRB0027 DIM       6    Admission Weight
.XTRB0028 DIM       10   Admission Date
.XTRB0029 DIM       10   Separation Date
.XTRB0030 DIM       1    Leave Days
.XTRB0031 DIM       1    Length of Stay
.XTRB0032 DIM       1    Non-acceptable Length of Stay
.XTRB0033 DIM       1    HITH  Days
.XTRB0034 DIM       1    Psychiatric Care Days
.XTRB0035 DIM       1    Qualified Days for Newborns
.XTRB0036 DIM       5    Mechanical Ventilation Hours
.XTRB0037 DIM       5    Intensive Care Unit Hours
.XTRB0038 DIM       1    Mental Health Legal Status
.XTRB0039 DIM       1    Urgency of Admission
.XTRB0040 DIM       1    Same Day Status
.XTRB0041 DIM       1    Short Stay Status
.XTRB0042 DIM       1    Separation Mode
.XTRB0043 DIM       2    Funding Source
.XTRB0044 DIM       2    ICD-10-AM Edition
.XTRB0045 DIM       9    ICD-10-AM principal diagnosis
XTRB46AA  DIM       2250 ICD-10-AM secondary diags/morph codes (X 200)
XTRB47AA  DIM       450  COF (X 200)
XTRB48AA  DIM       2250 Diagnosis date (X 200)
.XTRB0049 DIM       1    ACHI Edition
XTRB50AA  DIM       2250 ACHI intervention code (X 200)
XTRB51AA  DIM       3450 Intervention date start time(X 200)
.XTRB0052 DIM       1    TurboGrouper Version
.XTRB0053 DIM       3    AR-DRG Version
.XTRB0054 DIM       4    AR-DRG
.XTRB0055 DIM       4    VIC-DRG Version
.XTRB0056 DIM       4    VIC-DRG
.XTRB0057 DIM       4    MDC
.XTRB0058 DIM       1    GAGE
.XTRB0059 DIM       1    GSEX
.XTRB0060 DIM       1    GLOS
.XTRB0061 DIM       1    GSDF
.XTRB0062 DIM       1    GSEP
.XTRB0063 DIM       1    GADMW
.XTRB0064 DIM       1    GHMV
.XTRB0065 DIM       1    GMHLS
.XTRB0066 DIM       1    GURGADM
.XTRB0067 DIM       1    GPDX
XTRB68AA  DIM       850  GDX  (X 200)
XTRB69AA  DIM       850  GSRG (X 200)
.XTRB0070 DIM       1    GST
.XTRB0071 DIM       1    PCCL
.XTRB0072 DIM       1    CLOS
.XTRB0073 DIM       1    CAGED
.XTRB0074 DIM       1    CAGEY
.XTRB0075 DIM       1    CADMW
.XTRB0076 DIM       1    CSDF
.XTRB0077 DIM       1    CMHLS
.XTRB0078 DIM       1    CURGADM
.XTRB0079 DIM       1    ULOS
.XTRB0080 DIM       1    UAGED
.XTRB0081 DIM       1    UAGEY
.XTRB0082 DIM       1    UADMW
.XTRB0083 DIM       1    USDF
.XTRB0084 DIM       1    UMHLS
.XTRB0085 DIM       1    UURGADM
.XTRB0086 DIM       11   ECCS_RAW
.XTRB0087 DIM       1    ECCS_RND
.XTRB0088 DIM       1    NWAU Version
.XTRB0089 DIM       1    NWAU Status
.XTRB0090 DIM       17   NWAU Total
.XTRB0091 DIM       1    NWAU Price
.XTRB0092 DIM       1    NWAU Funding
.XTRB0093 DIM       1    WIES Version
.XTRB0094 DIM       1    WIES Status
.XTRB0095 DIM       1    WIES Total
.XTRB0096 DIM       1    WIES Price
.XTRB0097 DIM       1    WIES Funding
.XTRB0098 DIM       1    Non-invasive Ventilation Hours
.XTRB0099 DIM       1    Coronary Care Unit Hours
.XTRB0100 DIM       1    Admission Mode
.XTRB0101 DIM       1    Unplanned Theatre
.XTRB0102 DIM       1    Unplanned Intensive Care Unit
.XTRB0103 DIM       1    Diagnosis finish dates 1 to 200
XTRB104A  DIM       3450 Intervention finish dates 1 to 200
XTRB105A  DIM       450  Intervention flags 1 to 200
.XTRB0106 DIM       19   PAS Export Date/Time
.XTRB0107 DIM       10   PAS User ID
.XTRB0108 DIM       80   PAS User Name
XTRB109A  DIM       2250  Diagnosis Coder ID X 200
XTRB110A  DIM       1     Diagnosis Coder Name X 200
XTRB111A  DIM       3250  Diagnosis Coder Date X 200
XTRB112A  DIM       2250  Procedure Coder ID X 200
XTRB113A  DIM       1     Procedure Coder Name X 200
XTRB114A  DIM       3250  Procedure Coder Date X 200
.XTRB0115 DIM       1     Not used - Diagnosis Row ID X 200
.XTRB0116 DIM       1     Not used - Intervention Row ID X 200
.XTRB0117 DIM       6     Health Fund ID
.XTRB0118 DIM       40    Health Fund Name
.XTRB0119 DIM       4     Health Fund AR-DRG Version
.XTRB0120  DIM       1    Contract Days
.XTRB0121  DIM       1    NWAU Base
.XTRB0122  DIM       1    Admission COunt
.XTRB0123  DIM       1    AHR Index Episode ID
.XTRB0124  DIM       1    NWAU AHR Category
.XTRB0125  DIM       1    NWAU AHR Complexity
.XTRB0126  DIM       1    Reasmission Episode ID List
.XTRB0127  DIM       1    Readmission NWAU Base List
.XTRB0128  DIM       1    Readmission NWAU AHR Category List
.XTRB0129  DIM       1    Readmission NWAU AHR Complexity List
.XTRB0130  DIM       1    HAC Version
.XTRB0131  DIM       1    AHR Version
.XTRB0132  DIM       1    ABF Type
.XTRB0133  DIM       1    CCHI Version
.XTRB0134  DIM       1    CCHI Tier
.XTRB0135  DIM       1    CCHI Status
.XTRB0136  DIM       1    CCHI Total
.XTRB0137  DIM       1    CCHI Price
.XTRB0138  DIM       1    CCHI Funding
.XTRB0139  DIM       1    Gender
.XTRB0140  DIM       1    NWAU Length of Stay (Average)
.XTRB0141  DIM       1    NWAU Length of Stay (Low)
.XTRB0142  DIM       1    NWAU Length of Stay (High)
.XTRB0143  DIM       1    NWAU Length of Stay (Adjusted)
.XTRB0144  DIM       1    WIES Length of Stay(Average)
.XTRB0145  DIM       1    WIES Length of Stay(Low)
.XTRB0146  DIM       1    WIES Length of Stay(High)
.XTRB0147  DIM       2    Charlson Score
