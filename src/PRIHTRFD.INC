. *****************************************************************************
. *                                                                           *
. *  Include Name      :   PRIHTRFD.INC                                       *
. *                                                                           *
. *  Function          :   File Definition include for Private Practice       *
. *                        Holding Table for billing Transactions             *
. *                                                                           *
. *  File Type         :   SQL                                                *
. *                                                                           *
. *  File Name         :   prihtraf.dat                                       *
. *                                                                           *
. *  Keys              :   KEY62, KEY22, KEY62, KEY70                         *
. *                                                                           *
. *  Mods              :                                                      *
. *  V10.13.03  20/09/2018  J.Tan         TSK 0863727                         *
. *             Added Restrictive Override Code                               *
. *  V10.13.02  21/08/2018  J.Tan         TSK 0859742                         *
. *             Added Hospital Indicator using spare variable                 *
. *  V10.13.01  27/07/2018  Richa Phogat  TSK 0848506                         *
. *             Updated field length for PRHTDOCT & PRHTREFD from 6 to 10     *
. *****************************************************************************
. *             V10.11.04 25/09/2017  Steve Armstrong TSK 0837619             *
. *                       Changed PRHTASPF to be used for Compensation Claim  *
. *                       Indicator                                           *
. *             V10.11.03 18/09/2017  Peter Vela      TSK 0837619             *
. *                       Changed PRHTASPF and PRHTAICF to not used           *
. *             V10.11.02 29/08/2017  Steve Armstrong TSK 0837619             *
. *                       Added value "2" to DPRHTFLG.                        *
. *                       Added PRHTLVIS & PRHTROVR and reduced the length    *
. *                       of PRHTSPAR.                                        *
. *             V10.11.01 14/07/2017  Steve Armstrong TSK 0837619             *
. *                       Added PRHTMPOV to PRHTSDCD and extended length of   *
. *                       PTHTSPAR.                                           *
. *****************************************************************************
. *             V10.08.01  24/03/2016  Steve Armstrong  TSK 0294177           *
. *                        Added PRHTACOI & PRHTTDUR and reduced length of    *
. *                        PTHTSPAR.                                          *
. *****************************************************************************
. *              V9.12.01  07/08/2009  Mike Laming   CAR 123419               *
. *                        Add 4th Index for Pathology Stepdown processing    *
. *****************************************************************************
. *              V9.05.B01 19/12/2005 Ebon Clements CAR 76341                 *
. *                        Changed PRHTENCN to DIM 8                          *
. *****************************************************************************
. *              V9.04.03  03/08/05 J.Tan    CAR 62750                        *
. *                        Removed redefined amount variables                 *
. *              V9.04.02  10/06/2005  J.Tan         CAR 56701                *
. *                        Added PRHTHICI                                     *
. *              V9.04.01  08/06/2005  J.Tan         CAR 56701                *
. *                        Added PRHTREFN and PRHTENCN                        *
. *              V9.03.00  02/03/2004  Ebon Clements CAR 19985                *
. *                        Added PRHTREFN and PRHTENCN                        *
. *              V9.02.00  24/06/2002  Ebon Clements SRF 18839                *
. *                        Changed PRIHTRA1 for oracle                        *
. *              V5.08.01  28/08/2000  Jill Habasque                          *
. *                        Added PRHTRFPD - Referral Period                   *
. *              V5.08.B02 28/02/2000  Jill Habasque                          *
. *                        Added PRHTGSTA                                     *
. *              V5.08.B01 28/01/2000  Steve Downing                          *
. *                        Added new fields for GST                           *
. *                        12/10/1999  J Habasque                             *
. *                        Mods to index 1                                    *
. *              V5.07.001 07/08/1998 Glenn  507 Changes                      *
. *                                                                           *
. *****************************************************************************
.Data File Definition
.--------------------
PRIHTRA1 IFILE SQL, FIXED=407, KEY="U1-8+9-14+15-24+25-27+28-37,123-130,38-39,40-48,49-51,52-54"
PRIHTRA2 IFILE SQL, FIXED=407, KEY="D38-39,40-48,49-51,55-62"
PRIHTRA3 IFILE SQL, FIXED=407, KEY="U1-8+9-14+15-24+25-27+28-37,123-130,52-54,38-39,40-48,49-51"
PRIHTRA4 IFILE SQL, FIXED=407, KEY="U1-8+9-14+15-24+25-27+28-37,123-130,38-39,40-48,49-51,55-62,52-54"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRHTUNQ  DIM       8      8        1     Unique Identifier
PRHTPRAC  DIM       6      6        9     Medical Practice Code
PRHTDOCT  DIM       10     10       15    Service Doctor Code
PRHTPIND  DIM       3      3        25    Patient Indicator (Category GI)
PRHTREFD  DIM       10     10       28    Referring doctor code
DPRHTFLG  DIM       2      2        38    Item Flag
.                                              0 = MBS
.                                              1 = AMA
.                                              2 = IMC Details
PRHTITMN  DIM       9      9        40    Item Number/Test Code (For pathology)
PRHTSUBN  DIM       3      3        49    Subitem Number
DPRHTNUM  DIM       3      3        52    Transaction Number
.
PRHTDATE  DIM       8      8        55    Service Date
PRHTTIME  DIM       5      5        63    Service Time
PRHTSERN  FORM      3      3        68    Number of Services
PRHTIDES  DIM       30     30       71    Item Description
PRHTIAMT  FORM     12.2    8       101    Item Amount
PRHTPFLG  FORM      1      2       109    Pathology Flag
.                                            0 = No
.                                            1 = Yes
PRHTS4B3  FORM      1      2       111    S4B3 Flag
.                                            0 = No
.                                            1 = Yes
PRHTMEDA  DIM       10     10      113    Medicare Assign Form Number
PRHTRDAT  DIM       8      8       123    Referral date
PRHTREFT  DIM       50     50      131    Referral Details
PRHTGSTA  FORM      1      2       181    Is GST Applicable to this item
PRHTGSTC  DIM       6      6       183    GST Payable Code
PRHTRFPD  DIM       3      3       189    Referral Period (Cat RF)
PRHTREFN  DIM       8      8       192    Referral/Encounter Number
PRHTENCN  DIM       8      8       200    Encounter Number
PRHTHICI  DIM       18     18      208    HIC Item Key
PRHTACOI  DIM       1      1       226    After Care Override Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRHTTDUR  DIM       3      3       227    Time Duration (mins)
PRHTMPOV  DIM       1      1       230    Multi Procedure Override
.                                          0 or Blank = No
.                                          1 = Yes
PRHTDSOV  DIM       1      1       231    Duplicate Service Override
.                                          0 or Blank = No
.                                          1 = Yes
PRHTSTXT  DIM       100    100     232    Service Text
PRHTASPF  DIM       1      1       332    Compensation Claim Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRHTASPC  DIM       10     10      333    Alternate Service Provider HCP Code
.                                          (pmshcpaf)
PRHTAICF  DIM       1      1       343    Not used    
PRHTAICV  DIM       3      3       344    Alternate IFC Issue Code Value
.                                          (Cat ic)
PRHTNMPT  DIM       2      2       347    Number of Patients
.                                          (R-Justified numeric)
PRHTLSPN  DIM       6      6       349    Location Specific Practice No. Value
PRHTSDCD  DIM       2      2       355    Self Deem Code (Cat Sd)
.                                          SD = Self Deemed
.                                          SS = Substituted Service
.                                          N  = Not Self Deemed
PRHTLVIS  DIM       8      8       357    Linked Visit Number
PRHTROVR  DIM       3      3       365    Referral Override (Cat ro)
PRHTHOSI  DIM       1      1       368    Hospital Indicator
.                                          0 or Blank = No
.                                          1 = Yes
PRHTROVC  DIM       3      3       369    Restrictive Override Code (Cat Ro)
PRHTSPAR  DIM       35     35      372    Spare Variable
.
.End of Record                     407
.
.
. Redefine form fields from key
. -----------------------------
.
PRHTUNIQ  FORM      8
PRHTFLAG  FORM      2
PRHTNUMB  FORM      3
.
.
