. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSOVVFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse OVV Response File                     *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsovvaf.dat                                  *
. *                                                                      *
. *  Keys              :   KEY26, KEY29                                  *
. *                                                                      *
. *  Modifications     :                                                 *
. *                        V10.05.01  12/11/2014 Peter Vela  CAR 294157  *
. *                                   Created Include                    *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSOVVA1   IFILE SQL, FIXED=279, KEY="U1-8,9-16,17-24,25-26"
PMSOVVA2   IFILE SQL, FIXED=279, KEY="U27-29,9-16,17-24,1-8,25-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMOVURNO  DIM       8         8       1   U/R Number
PMOVDATE  DIM       8         8       9   Date of OVV (CCYYMMDD)
PMOVTIME  DIM       8         8      17   Time of OVV (hh:mm:ss)
DPMOVCNT  DIM       2         2      25   Counter (Right Justified)
PMOVHOSP  DIM       3         3      27   Hospital Code (pathspaf)
PMOVTRID  DIM       24        24     30   Transaction ID
PMOVSNAM  DIM       40        40     54   Current Patient Family Name
PMOVFNAM  DIM       40        40     94   Current Patient First Name
PMOVVETN  DIM       9         9     134   Current Veteran File Number
PMOVPRDT  DIM       8         8     143   DVA Processed Date
PMOVSTAT  DIM       4         4     151   DVA Status Code
PMOVEROR  DIM       100       100   155   Error Description
PMOVVENC  DIM       4         4     255   Veteran Entitlement Code
PMOVSPAR  DIM       20        20    259   Spare Variable
.
.End of Record                      279
.
. Redefine form fields from key
. -----------------------------
PMOVCNTR  FORM      2
