. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHLSSFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Legal status Summary statistics                           *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehlssaf.dat                                              *
. *                                                                           *
. * Keys          : KEY9                                                      *
. *                                                                           *
. * I/O Include   : MEHLSSIO.INC                                              *
. *                                                                           *
. * Author        : ROD           02/12/1991  (The PHANTOM or DESERT STORM)   *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHLSSA1  IFILE     SQL, FIXED=124, KEY="U1-6,7-9"
.
. Name    Type    Length       Start       Description
. ----    ----    ------       -----       -----------
MHLSDATE  DIM       6            1         Period  (CCYYMM)
MHLSSTAT  DIM       3            7         Legal Status code (Cat LS)
MHLSINST  FORM      6           10         No. pats in hosp at start of period
MHLSSLST  FORM      6           14         No. pats on short leave start of per.
MHLSADMN  FORM      6           18         No. of admissions during period
MHLSCHGF  FORM      6           22         No. of changes from legal status
MHLSCHGT  FORM      6           26         No. of changes to legal status
MHLSRETN  FORM      6           30         No. returns from holiday/trial leave
MHLSRETA  FORM      6           34         No. of returns from A.W.O.L.
MHLSLVES  FORM      6           38         No. pats on holiday/trial leave  
MHLSLVEA  FORM      6           42         No. of pats who went on A.W.O.L.
MHLSDSCH  FORM      6           46         No. of discharges (excluding deaths)
MHLSDEAD  FORM      6           50         No. of deaths
MHLSINBD  FORM      8           54         Inpatient bed days in period
MHLSSLBD  FORM      8           59         Short leave bed days in period
MHLSLVBD  FORM      8           64         Holiday/trial leave bed days in per.
MHLSAWBD  FORM      8           69         A.W.O.L. bed days in period
MHLSSEPB  FORM      8           74         Separation inpatient bed days
MHLSSSLB  FORM      8           79         Separation short leave bed days
MHLSDSCB  FORM      8           84         Discharge inpatient bed days 
MHLSDSLB  FORM      8           89         Discharge short leave bed days 
MHLSSPAR  DIM       30          94         Spare
.
.End of Record                 124
.
