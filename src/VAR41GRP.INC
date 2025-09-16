.******************************************************************************
.*                                                                            *
.* Include Name     : VAR41GRP.INC                                            *
.*                                                                            *
.******************************************************************************
.*                              OBSOLETE OBSOLETE                             *
.*                                                                            *
.*        01/04/2009 replaced by WEBGRPVA.INC for 2009 Codefinder changes     *
.*                                                                            *
.*                                                                            *
.******************************************************************************
.*                                                                            *
.* Description      : Common variables for PAT41GRP                           *
.*                                                                            *
.* Author           : Davin Sloan  13/10/1999                                 *
.*                                                                            *
.* Modifications    :                                                         *
.*        V9.11.01  15/03/2009  Mike Laming      CAR 190768                   *
.*                  Replaced by WEBGRPVA.INC for 2009 Codefinder changes      *
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
.XDRGOP20  DIM       7     306   operation code 20
.XDRGOP21  DIM       7     413   operation code 21                     
XDRGOP22   DIM       7     420   operation code 22                     
XDRGOP23   DIM       7     427   operation code 23                     
XDRGOP24   DIM       7     434   operation code 24                     
XDRGOP25   DIM       7     441   operation code 25                     
XDRGOP26   DIM       7     448   operation code 26                     
XDRGOP27   DIM       7     455   operation code 27                     
XDRGOP28   DIM       7     462   operation code 28                     
XDRGOP29   DIM       7     469   operation code 29                     
XDRGOP30   DIM       7     476   operation code 30                     
XDRGOP31   DIM       7     483   operation code 31                     
XDRGOP32   DIM       7     490   operation code 32                     
XDRGOP33   DIM       7     497   operation code 33                     
XDRGOP34   DIM       7     504   operation code 34                     
XDRGOP35   DIM       7     511   operation code 35                     
XDRGOP36   DIM       7     518   operation code 36                     
XDRGOP37   DIM       7     525   operation code 37                     
XDRGOP38   DIM       7     532   operation code 38                     
XDRGOP39   DIM       7     539   operation code 39                     
XDRGOP40   DIM       7     546   operation code 40                     
XDRGALS2   DIM       5     553   Acute los Same as XDRGALOS but 5 digit
XDRGNLOS   DIM       4     558   Non-acceptable los
XDRGTOTL   DIM       4     562   Total Leave Days
.XDRGSDAY  DIM       1     566   Same day (0 = not sameday, 1 = sameday)
.XDRGMHLS  DIM       1     567   Mental health legal status
.
.End of Record             568
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
OUTFILE2  FILE      ASCII, FIXED=214
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
.
.End of Record            214
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
.
.End of Record            861
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
. ----- Include Variables -----
.
.                               * This is actually the Grouper version
.                               * and is the last 3 digits of XDRGCTRV.
.                               * It changed to 5 digits with
.                               * the new CME. It gets extracted later.
XDRGGRP   DIM       3           * Grouper version used                 *C-50344
.
DOUT31    DIM       8                       * 3.1 output filename
DOUT41    DIM       8                       * 4.1 output filename
DOUT42    DIM       8                       * 4.2 output filename
DOUT50    DIM       8                       * 5.0 output filename      
DOUT51    DIM       8                       * 5.1 output filename      *I-61562
DOUT52    DIM       8                       * 5.2 output filename     *I-137125
FILRFGRP  FORM      1                       * File returned from grouper flag
GRPDTE    DIM       8                       * Grouper date
GRPVER    FORM      1                       * Grouper version flag
OPENFLG   FORM      1                       * grouper version output file
RUNGRP    FORM      1                       * Run grouper on this machine flag
PLACE2    DIM       2                       * 2 digit place holder     
PLACE3    DIM       3                       * 3 digit place holder     
+
.
