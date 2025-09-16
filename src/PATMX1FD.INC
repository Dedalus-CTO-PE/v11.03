. *****************************************************************************
. *                                                                           *
. * Include Name  : PATMX1FD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 U/R Master Details Extension                              *
. *                                                                           *
. *                 NOTE: any variables added to this file should also be     *
. *                 added to CLPATMAS - the include which clears each var.    *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patmx1af.dat                                              *
. *                                                                           *
. * Keys          : KEY 8                                                     *
. *                                                                           *
. * Modifications :                                                           *
. *  **** Programmer Note **************                                      *
. *       Any changes to this FD may also need to be made in PMSQPTFD.        *
. *       Please check this before proceeding.                                *
. *                                                                           *
. *****************************************************************************
. *                V11.00.01 08/12/2020  Thanh T         TSK 0868699          *
. *                          Added option 2 - Not Provided for PTMXESPF field *
. *                V10.10.02 15/05/2017  Steve Armstrong TSK 0833052          *
. *                          Updated description for PTMXESPF                 *
. *                V10.10.01 15/03/2017  Steve Armstrong TSK 0833052          *
. *                          Added PTMXESPF                                   *
. *****************************************************************************
. *                V10.08.01 05/04/2016  Steve Armstrong CAR 0279181          *
. *                          Added PTMXUUID                                   *
. *                V10.07.01 02/11/2015  Steve Armstrong CAR 294154           *
. *                          Added PTMXOSMS.                                  *
. *                V10.06.01 12/03/2015  Steve Armstrong CAR 314108           *
. *                          Changed PTMXREGP, PTMXGPPC & PTMXGPPT to be      *
. *                          "No longer in use"                               *
. *                 V9.10.01 27/06/2008  Jill Habasque   CAR 162660           *
. *                          Changed description of PTMXSIN1                  *
. *                 V9.09.01 15/10/2007  Mike Laming     CAR 150068           *
. *                          Changed description of PTMXCELL - Patient's Mobile
. *                 V9.07.01 18.09.2006  Ebon Clements   CAR 107243           *
. *                          Changed description of PTMXSIN1 - Security Alert *
. *                 V9.04.02 26/10/2005  Jill Habasque   CAR 62384            *
. *                          Added PTMXDEAF                                   *
. *                 V9.04.01 17.03.2005  Ebon Clements   CAR 58443            *
. *                          Changed description of PTMXSIN1 - Security Alert *
. *                 V9.03.01 12.05.2004  Sylvek Litewka  CAR 49209            *
. *                          Changed description for PTMXSIN5                 *
. *                 V5.09.00 13.06.2001  B.G.Ackland                          *
. *                          Changed Description on PTMXSIN4                  *
. *                 V5.09.00 18/01/2001  Pat Dirito                           *
. *                          Added field PTMXFILN, Filling Required           *
. *                 26/09/2000  Dean Cramer                                   *
. *                 Added field PTMXSLAC, SLA Code                            *
. *                 05/05/2000  Tonii                                         *
. *                 Removed field PTMXDATE, and merged with PTMXCTIM          *
. *                 PTMXCTIM now (ccyymmddhh:mm:ss:mmm)                       *
. *                 27/04/2000  Tonii                                         *
. *                 Added new field PTMXDATE, date change (ddmmccyy)          *
. *                 06/03/2000  Tonii                                         *
. *                 Altered field PTMXCTIM to include milliseconds also       *
. *                 format for PTMXCTIM is now (hh:mm:ss:mmm)                 *
. *                 24/02/2000  Tonii                                         *
. *                 Added new field PTMXCTIM, time change                     *
. *                 19/01/2000  Jill Habasque                                 *
. *                 Added PTMXSIN1 - PTMXSIN5                                 *
. *                 06/08/90 Steve O'Gorman                                   *
. *                 Include Created                                           *
. *                 10/10/90 Glen Hobby                                       *
. *                 Changed PTMXLGA to DIM4 and PTMXFIL1 to DIM49             *
. *                 12/08/1991    Justin Coates - Mental Health System        *
. *                 Added PTMXLS to PTMXNRRE                                  *
. *                 16/09/1991    Graeme Williams      SRF 108797 (Quote 7027)*
. *                 Added PTMX3BEX (3B expiry date)                           *
. *                 27/12/1991    Graeme Williams                             *
. *                 Added PTMXCARD, PTMXCEXP, PTMXCXMP, PTMXFMLY              *
. *                 30/07/1992    Justin Coates - HONG KONG changes           *
. *                 Added PTMXCHNM                                            *
. *                 28/10/1993    Justin Coates  (GP Practice changes)        *
. *                 added PTMXGPPT                                            *
. *                 12/01/1994    Steve O'Gorman                              *
. *                 Modified to allow for new SFORMAT                         *
. *                 05/10/1995    Howellsy     suht                           *
. *                 Added PTMXOSDT & PTMXOPER.                                *
. *                 31/10/1995    Justin Coates  (SUHT mods)                  *
. *                 Added PTMXUKDO                                            *
. *                 14/02/1997    Howellsy     WHT                            *
. *                 Added Cellular Phone Number & Postal Address              *
. *                 16/12/1997  Steve Armstrong    EMR                        *
. *                 Added PTMXMCCD                                            *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATMX1A1  IFILE     SQL, FIXED=901, KEY="U1-8"
.
.NAME     Type      Length  PHYS.  START  DESCRIPTION
.----     ----      ------  -----  -----  -------------------------------
.PURNO    DIM       8           8      1  Patient U/R No.
PTMXRDAT  DIM       8           8      9  Registration Date
PTMXMEAL  DIM       30         30     17  Special Meal Requirements
PTMXLGA   DIM       4           4     47  LGA Code
PTMXLS    DIM       3           3     51  Current Legal status (Cat LS)
PTMXLSDT  DIM       8           8     54  Date of legal status (ccyymmdd)
PTMXFHMD  DIM       1           1     62  Familial history of mental disorder ?
.                                           1 = Yes ; 2 = No
PTMXMHU1  DIM       3           3     63  M.H. User defined field 1 (Cat V6)
PTMXMHU2  DIM       3           3     66  M.H. User defined field 2 (Cat V7)
PTMXMHU3  DIM       3           3     69  M.H. User defined field 3 (Cat V8)
PTMXECNM  DIM       20         20     72  Emergency contact name
PTMXECA1  DIM       35         35     92  Emergency contact address line 1
PTMXECA2  DIM       35         35    127  Emergency contact address line 2
PTMXECA3  DIM       35         35    162  Emergency contact address line 3
PTMXECA4  DIM       35         35    197  Emergency contact address line 4
PTMXECPC  DIM       8           8    232  Emergency contact postcode
PTMXECPP  DIM       20         20    240  Emergency contact private phone
PTMXECBP  DIM       20         20    260  Emergency contact business phone
PTMXECRE  DIM       10         10    280  Emergency contact relationship
PTMXNRNM  DIM       20         20    290  Nearest relative name
PTMXNRA1  DIM       35         35    310  Nearest relative address line 1
PTMXNRA2  DIM       35         35    345  Nearest relative address line 2
PTMXNRA3  DIM       35         35    380  Nearest relative address line 3
PTMXNRA4  DIM       35         35    415  Nearest relative address line 4
PTMXNRPC  DIM       8           8    450  Nearest relative postcode
PTMXNRPP  DIM       20         20    458  Nearest relative private phone
PTMXNRBP  DIM       20         20    478  Nearest relative business phone
PTMXNRRE  DIM       10         10    498  Nearest relative relationship
PTMX3BEX  DIM       8          8     508  3B certificate expiry date
PTMXCARD  DIM       20         20    516  Card number (NZ billing)
PTMXCEXP  DIM       8          8     536  Card expiry date (NZ billing)
PTMXCXMP  DIM       3          3     544  Card exemption type (Cat XM)
PTMXFMLY  DIM       12         12    547  Family id
PTMXCHNM  DIM       20         20    559  Chinese Name
PTMXDOFR  DIM       3          3     579  District of Residence (Cat DA)
PTMXREGP  DIM       8          8     582  No longer in use
PTMXGPPC  DIM       6          6     590  No longer in use
PTMXSPID  DIM       20         20    596  Supplementary Id
PTMXGPPT  DIM       2          2     616  No longer in use
PTMXOSDT  DIM       8          8     618  Date Arrived from Overseas (CCYYMMDD) 
PTMXOPER  DIM       4          4     626  Sec. Code Operator who Created Record
PTMXUKDO  DIM       1          1     630  Unknown Date Arrived from O/S (Y/N)
PTMXCELL  DIM       20         20    631  Patient's Mobile Phone No.          
PTMXADD1  DIM       35         35    651  Postal Address Line 1    
PTMXADD2  DIM       35         35    686  Postal Address Line 2     
PTMXADD3  DIM       35         35    721  Postal Address Line 3     
PTMXADD4  DIM       35         35    756  Postal Address Line 4      
PTMXPOST  DIM       8          8     791  Postal Address Post Code 
PTMXMCCD  DIM       2          2     799  Medicare Code
PTMXSIN1  DIM       1          1     801  Status Ind 1 - Alerts present(1=yes)
.                                         2=Security alerts 3=Deleted Alerts
.                                         or lowest indicator 4 alert assigned
PTMXSIN2  DIM       1          1     802  Status Ind 2 - Results present(1=yes)
PTMXSIN3  DIM       1          1     803  Status Ind 3 - Clinical notes present
PTMXSIN4  DIM       1          1     804  Status Ind 4 - Clinical Documentation
PTMXSIN5  DIM       1          1     805  Status Ind 5 - Legacy Visits (1=yes)
PTMXCTIM  DIM       20         20    806  Time/Date Change(ccyymmddhh:mm:ss:mmm)
PTMXSLAC  DIM       8          8     826  Year last Psych adm (was SLA Code)
PTMXFILN  DIM       3          3     834  Filing Required
PTMXDEAF  DIM       3          3     837  Deaf  (Category DK)
PTMXOSMS  DIM       1          1     840  Opt Out of SMS
.                                           0 or Blank = No
.                                           1 = Yes
PTMXUUID  DIM       10         10    841  Web User ID who Updated Record
.                                           (websecaf)
PTMXESPF  DIM       2          2     851  NDIS Flag
.                                         (VINAH Episode Special Purpose Flag)
.                                         "0" = No, "1" = Yes
.                                         "2" = Not Provided
PTMXSPAR  DIM       48         48    853  Spare Variable   
.
.End of Record                       901
.
.
