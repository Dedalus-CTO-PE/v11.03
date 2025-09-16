. *****************************************************************************
. *                                                                           *
. * Include Name  : CCICONFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for                               *
. *                      CCI Control File                                     *
. *                                                                           *
. * File Type     : ASCII                                                     *
. *                                                                           *
. * File Name     : controlf.txt       SECTOR 71                              *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *       V9.02.01  27/02/2002  Tonii (St Vincent's Only)                     *
. *                 Added CCCNSVHM - Using SVHM Tranisition II                *
. *                 Added CCCNX7SD - Start date for Extract 7 (ccyymmdd)      *
. *                 Added CCCNX7FP - Extract 7 File path                      *
. *****************************************************************************
. *       V5.01.02  27/12/1995    Justin Coates                               *
. *                 Added CCCNTSHC                                            *
. *       V5.01.01  24/09/92 Whirlpool                                        *
. *                 Added CCCNVUFM for epworth                                *
. *                 Added CCCN008A % CCCN008B                                 *
. *       V5.01.02  08/11/1993    Justin Coates  (Hawkes Bay Mods)            *
. *                 Added many variables                                      *
. *       V5.03.01  04/01/1996  Greg Horvat                                   *
. *                 Commented out the menu program, security key & IBA screen *
. *                 password variables                                        *
. *       V5.03.02  29/04/1996  Steve Armstrong    Quote 8534                 *
. *                 Added CCCNECPA                                            *
. *       V5.04.01  09/07/1997  Steve Armstrong     WHL Mods                  *
. *                 Added CCCNAEDP                                            *
. *                 Modified CCCNUFCD for Transition                          *
. *       V5.04.02  05/08/1997  Steve Armstrong     WHL Mods                  *
. *                 Added CCCNSERV                                            *
. *       V5.08.01  15/03/2000  Steve Armstrong                               *
. *                 Added CCCNOUTL                                            *
. *                                                                           *
. *****************************************************************************
.
.             SECTOR USED    :  71
.
.NAME     TYPE   LENGTH  PHYSICAL  START  DESCRIPTION
.-------  ----   ------  --------  -----  -----------
.....CCCNMENU  DIM       8       8         1   MAIN MENU NAME
.....CCCNSECU  DIM       6       6         9   COMPANY SECURITY CODE
CCCNDATA  DIM       20     20        15   DATA DIRECTORY
.....CCCNPASS  DIM       8       8        35   PASSWD IBARUS98
CCCNPCTP  DIM       5       5        43   Temp File Name for PC Interface
.                                         Code for Day Case Patients
CCCNAECD  DIM       3       3        48   A&E Clinical Department
CCCNBRDR  DIM       3       3        51   Code for boarder (Cat "A ")
CCCNBDCD  DIM       3       3        54   Pat. type for boarder (Cat "RP")
CCCNIPCD  DIM       3       3        57   Default code for "IP" (Cat "RP")
CCCNDCCD  DIM       3       3        60   Default code for "DC" (Cat "RP")
CCCNOPCD  DIM       3       3        63   Default code for "OP" (Cat "RP")
CCCNAECO  DIM       3       3        66   Default code for "AE" (Cat "RP")
CCCNDELY  FORM      1       1        69   No. days delay for auto-extract
.                                               0 = No 1 = Yes
CCCNBTYP  FORM      2       2        70   Type of code for boarder
CCCN009A  DIM       2       2        72   From time for procedure type 9
CCCN009B  DIM       2       2        74   To time for procedure type 9
CCCN012A  DIM       2       2        76   From time for procedure type 9
CCCN012B  DIM       2       2        78   To time for procedure type 9
CCCN013A  DIM       2       2        80   From time for procedure type 9
CCCN013B  DIM       2       2        82   To time for procedure type 9
CCCNOPO1  FORM      1       1        84   Theatre setup procedure per team ?
.                                            0 = per team, 1 = per booking
CCCNOPO2  FORM      1       1        85   Theatre operation procedure per team ?
.                                            0 = per team, 1 = per booking
CCCNOPO3  FORM      1       1        86   Theatre known infec proc. per team ?
.                                            0 = per team, 1 = per booking
CCCNOPO4  FORM      1       1        87   Theatre expensive item proc. per team?
.                                            0 = per team, 1 = per booking
CCCNOPO5  FORM      1       1        88   Theatre recovery procedure per team ?
.                                            0 = per team, 1 = per booking
CCCNOPO6  FORM      1       1        89   Theatre anaesthetic proc. per team ?
.                                            0 = per team, 1 = per booking
CCCNOPO7  FORM      1       1        90   Theatre after hours proc. per team ?
.                                            0 = per team, 1 = per booking
CCCNVPRO  FORM      1       1        91   Validate proc. for external batches
.                                               0 = No 1 = Yes
CCCNFYOS  FORM      1       1        92   Fiscal year offset  (0 or 1)
CCCNCLFL  FORM      1       1        93   Clear files before run (cci24,25,56)
.                                               0 = No 1 = Yes
CCCNVUFM  FORM      1       1        94   Using Epworth layout for ccivol &  
.                                            cciutl ?  (IBACCI24)
.                                               0 = No 1 = Yes
CCCN008A  DIM       2       2        95   From time for procedure type 8
CCCN008B  DIM       2       2        97   To time for procedure type 8
CCCNBATC  FORM      8       8        99   Next batch number
.
CCCNUFCD  FORM      1       1       107   Costing department to be used
.                                               0 = Normal (3 character)
.                                               1 = Trendstar (4 character)
.                                               2 = Transition (5 character)
CCCNGLCF  FORM      1       1       108   Clear files before G.L.Handover CCI63
.                                               0 = No 1 = Yes
CCCNAUDA  FORM      1       1       109   Audits for ccigltaf 0 = Yes 1 = No
CCCNGTPB  DIM       6       6       110   Last TO period T/S Budget
CCCNGTPA  DIM       6       6       116   Last TO period T/S Actuals
CCCNGTPS  DIM       6       6       122   Last TO period T/S Statistics
CCCNGTPL  DIM       6       6       128   Last TO period T/S All         
CCCNGHPB  DIM       6       6       134   Last TO period Handover Budget
CCCNGHPA  DIM       6       6       140   Last TO period Handover Actuals
CCCNGHPS  DIM       6       6       146   Last TO period Handover Statistics
CCCNGHPL  DIM       6       6       152   Last TO period Handover All
CCCNDLDG  DIM       2       2       158   Default Ledger Number
CCCNSPR1  FORM      2       2       160   Spare position
CCCNSITE  DIM       6       6       162   Default O/P site for CCI56 (outsitaf)
CCCNCEDT  DIM       8       8       168   Last TO date for Clinical Extract
CCCNCHDT  DIM       8       8       176   Last TO date for Clinical Handover
CCCNXRPT  FORM      1       1       184   Do reporting in extract ?
.                                               0 = No 1 = Yes
CCCNVDPT  FORM      1       1       185   Validate dept. throughout system ?
.                                               0 = No 1 = Yes
CCCNPRTL  FORM      1       1       186   Using Manual Data Entry Proc. Trans ?
.                                               0 = No 1 = Yes
CCCN032A  DIM       2       2       187   From time for procedure type 32
CCCN032B  DIM       2       2       189   To   time for procedure type 32
CCCNTSHC  DIM       3       3       191   Trendstar Hospital Code
CCCNECPA  FORM      1       1       194   Extracting "Contracts Payment Advisor"
.                                           Record Type
.                                               0 = No  1 = Yes
CCCNAEDP  DIM       3       3       195   A&E extract Default Department
CCCNSERV  FORM      1       1       198   Using Health Service Code &
.                                           Ordering Doctor
.                                               0 = No  1 = Yes
CCCNOUTL  FORM      1       1       199   Using Linked O/P events (CCI26)
.                                               0 = Yes 1 = No
CCCNSVHM  FORM      1       1       200   Using SHVM Transition II         
.                                               0 = No  1 = Yes
CCCNX7SD  DIM       8       8       201   Starting date for Extract 7 (ccyymmdd)
CCCNX7FP  DIM       35      35      209   Extract 7 File path
.
. End of Record                     250
.
