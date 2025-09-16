. *----------------------------------------------------------------------
. * Include Name  :   WEBCONFD.INC
. *
. * Function      :   File Def'n Include 
. *                   WEB Systems Control Sector                     
. *
. * File Type     :   ASCII Sector 91, 101, 102, 104
. *
. * File Name     :   controlf.txt
. *
. * Modifications :   
. *                   V11.03.01 24.02.2023 PJ Le Febour   TSK 0923333
. *                            Added parameter CWEBDDOB for default DOB
. *                   V11.02.01 01.04.2022 DA Sarkies     TSK 0906511
. *                            Added parameter CWEBGVTD to determine
. *                            which gender variable to display
. *                   V9.11.01 23/03/2009  Peter McMullen CAR 190945
. *                            Added CWEBGFIL                            
. *                   V9.10.01 26/08/2008  Peter Vela    CAR 176904
. *                            Moved CWEBPSAR to Sector 101 Pos 54 DIM 2
. *                   V9.09.01 18/12/2007  Ebon Clements CAR 155123
. *                            Added CWEBDNAI
. *                   V9.02.02 04/04/2003  Ebon Clements SRF 37705
. *                            Added RSCNTIMD
. *                   V9.02.01 25/10/2002  Ebon Clements SRF 22413
. *                            Removed CWEBTIMO
. *                   V9.00.00 14/05/2001  Ebon Clements
. *                            Added CWEBSDAY to sector 101 for patient Srch
. *                   V5.09.00 01/08/2000  Pat Dirito
. *                            Added sector 104
. *
. *----------------------------------------------------------------------
.
.----------------------------------------------------------------------
. Sector 91
.----------------------------------------------------------------------
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CWEBAU01  FORM      1      1        1     Audit File Indicator 1
CWEBAU02  FORM      1      1        2     Audit File Indicator 2 
CWEBAU03  FORM      1      1        3     Audit File Indicator 3 
CWEBAU04  FORM      1      1        4     Audit File Indicator 4 
CWEBAU05  FORM      1      1        5     Audit File Indicator 5
CWEBAU06  FORM      1      1        6     Audit File Indicator 6
CWEBAU07  FORM      1      1        7     Audit File Indicator 7
CWEBAU08  FORM      1      1        8     Audit File Indicator 8
CWEBAU09  FORM      1      1        9     Audit File Indicator 9
CWEBAU10  FORM      1      1        10    Audit File Indicator 10
CWEBPASS  DIM       8      8        11    Password             
CWEBPCMD  DIM       40     40       19    Remote Password Command
CWEBPFIL  DIM       40     40       59    Remote Password File
CWEBRDIR  DIM       40     40       99    Report Output Directory (Not Used)
CWEBRCFG  DIM       40     40       139   Report Input Directory  (Not Used)
CWEBROOT  DIM       40     40       179   HTML Root Directory
CWEBCLOC  DIM       4      4        219   Current Storage Location
CWEBRUNM  DIM       25     25       223   Run Macro for Reports   (Not Used)
.
.End of Record                      248
.
.----------------------------------------------------------------------
. Sector 101
.----------------------------------------------------------------------
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CWEBEXDR  DIM       40     40       1     Extract Storage Directory
CWEBPSTY  DIM       1      1        41    Default Patient Search Type
CWEBPSAG  DIM       2      2        42    Default Patient Search Age
.SPARE                              44    CWEBPSAR moved 10 Sec 101 Pos 54 DIM2
CWEBPNAM  DIM       2      2        45    Default Patient Name Format    
CWEBDNAM  DIM       2      2        47    Default Doctors Name Format    
CWEBSDAY  FORM      4      4        49    Current Admission Day Range
CWEBDNAI  DIM       1      1        53    Display Doctors Name Case as Entered
.                                         0=No, 1=Yes
CWEBPSAR  DIM       2      2        54    Default Patient Search Age Range
CWEBGFIL  DIM       40     40       56    Remote Group File     
CWEBGVTD  DIM       2      2        96    Gender value to display
.                                         1=Actual Code
.                                         2=HDP Default
.
CWEBDDOB  DIM       8      8        98    Default Date Of Birth  (CCYYMMDD)
.
.End of Record                     105
.
.----------------------------------------------------------------------
. Sector 102
.----------------------------------------------------------------------
.NAME     TYPE    LENGTH    START     DESCRIPTION
.----     ----    ------    -----     -----------
RSCNCCP   FORM      4        1        Number of Concurrent Processes
RSCNSLP   FORM      2        5        Sleep Time           
RSCNRCD   DIM       60       7        Report Configuration File Directory
RSCNROD   DIM       60       67       Report Output Directory
RSCNCMD   DIM       60       127      Schedule Execute Command
RSCNCLP1  DIM       10       187      Optional Command Line Parameter 1
RSCNCLP2  DIM       10       197      Optional Command Line Parameter 2
RSCNCLP3  DIM       10       207      Optional Command Line Parameter 3
RSCNCLP4  DIM       10       217      Optional Command Line Parameter 4
RSCNCLP5  DIM       10       227      Optional Command Line Parameter 5
RSCNSPDL  DIM       3        237      Auto Delete Spool Files After X Days
RSCNCMDL  DIM       3        240      Auto Delete Comp/Fail Files After X Days
RSCNTIMD  DIM       5        243      Time of Day To Run Auto Delete Spool Files
.
. End of Record              250
.
.----------------------------------------------------------------------
. Sector 104
.----------------------------------------------------------------------
.NAME     TYPE    LENGTH    START     DESCRIPTION
.----     ----    ------    -----     -----------
RSCNEXT   DIM       60       1        Report Extract Output Directory 
.
. End of Record              250
