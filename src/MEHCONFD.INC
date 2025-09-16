. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHCONFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Control File                                              *
. *                                                                           *
. * File Type     : ASCII                                                     *
. *                                                                           *
. * File Name     : controlf.txt        SECTOR 69                             *
. *                                                                           *
. * Author        : Justin Coates 13/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *---------------------------------------------------------------------------*
. *       V11.01.01 10/12/2021  Sunny         TSK 0858604                     *
. *                 Added MHCNPRDS - Add MH Diagnosis using prev MH Diagnosis *
. *       V11.00.01 20/05/2020  Thanh T       TSK 0858656                     *
. *                 Added MHCNHDDS - Hide DSM-IV coding from MH Diagnosis     *
. *       V10.11.01 19/10/2017  J.Tan         TSK 0843390                     *
. *                 Added MHCNRDHB - Record Responsible DHB on Legal Status   *
. *       V10.05.01 06/01/2015  Don Nguyen    CAR 306757                      *
. *                 Added MHCNMHLS - Category for allocating MH Legal Status  *
. *       V10.03.01 17/01/2012  Mike Laming   CAR 256500                      *
. *                 Added param "PRIMHD IP Activity Type (Cat.A or Cat.BT)"   *
. *       V9.10.02  05/09/2008  J.Tan     CAR 166690                          *
. *                 Added parameter for Extract Test/Live PRIMHED             *
. *       V9.10.01  26/05/2008  J.Tan     CAR 166690                          *
. *                 Added PRIMHED Extract parameters                          *
. *       V9.06.01  19/04/2006  J.Tan     CAR 91327                           *
. *                 Added MHCNMINC                                            *
. *       V9.05.B01 29/12/2005  J.Tan     CAR 90040                           *
. *                 Added MHCNUNIQ,MHCNSINP                                   *
. *       V9.02.02  04/12/2002  Greg Horvat                                   *
. *                 Added MHCEMPST                                            *
. *       V9.02.01: 15/10/2002  Jill Habasque                                 *
. *                             Added MHCNDVIS - Security level to view MH vis*
. *                 12/12/1991  ROD   (holidays in 6.1 working days)          *
. *                             Added MHCNMAXH & MHCNMAXT                     *
. *                 11/07/94    Whirlpool                                     *
. *                             Added MHCNKLER                                *
. *       V5.03.01  05/12/1995    Justin Coates  (SUHT mods)                  *
. *                 Added MHCNUDSA,MHCNUVOP                                   *
. *       V5.03.02  04/01/1996  Greg Horvat                                   *
. *                 Commented out the menu program, security key, IBA screen  *
. *                 password & data directory variables                       *
. *                                                                           *
. *****************************************************************************
.
.         SECTOR 69
.
. Name    Type      Length  Start  Description
.-------  -----     ------  -----  ---------------------------------------
.....HMENUMEH  DIM       8           1  Main Menu Name
.....HSECUMEH  DIM       6           9  Company security code
.....HSECRMEH  DIM       8          15  Password IBAMEH98
.....HDATAMEH  DIM       20         23  Data directory
.
.         AUDITS : 0 = Yes ; 1 = No
.
MHCNAUDA  FORM      1          43  Auditing mehvi1af ?
MHCNAUDB  FORM      1          44  Auditing mehds1af ?
MHCNAUDC  FORM      1          45  Auditing mehdl1af ?
MHCNAUDD  FORM      1          46  Auditing mehaxiaf ?
MHCNAUDE  FORM      1          47  Auditing meh...af ?
MHCNAUDF  FORM      1          48  Auditing meh...af ?
MHCNAUDG  FORM      1          49  Auditing meh...af ?
MHCNAUDH  FORM      1          50  Auditing meh...af ?
MHCNAUDI  FORM      1          51  Auditing meh...af ?
MHCNAUDJ  FORM      1          52  Auditing meh...af ?
MHCNAUDK  FORM      1          53  Auditing meh...af ?
MHCNAUDL  FORM      1          54  Auditing meh...af ?
MHCNAUDM  FORM      1          55  Auditing meh...af ?
MHCNAUDN  FORM      1          56  Auditing meh...af ?
MHCNAUDO  FORM      1          57  Auditing meh...af ?
MHCNAUDP  FORM      1          58  Auditing meh...af ?
MHCNAUDQ  FORM      1          59  Auditing meh...af ?
MHCNAUDR  FORM      1          60  Auditing meh...af ?
MHCNAUDS  FORM      1          61  Auditing meh...af ?
MHCNAUDT  FORM      1          62  Auditing meh...af ?
MHCNAUDU  FORM      1          63  Auditing meh...af ?
MHCNAUDV  FORM      1          64  Auditing meh...af ?
MHCNAUDW  FORM      1          65  Auditing meh...af ?
MHCNAUDX  FORM      1          66  Auditing meh...af ?
MHCNAUDY  FORM      1          67  Auditing meh...af ?
MHCNAUDZ  FORM      1          68  Auditing meh...af ?
.
MHCNUSE   FORM      1          69  Using Mental Health system ?
.                                    0 = No ; 1 = Yes
MHCNSUPL  FORM      1          70  Minimum sec. level to see suppress diag
MHCNMINH  FORM      2          71  Minimum number of days for holiday leave.
.                                    (if less than this, user will be asked to
.                                     change to short leave)
MHCNMINT  FORM      2          73  Minimum number of days to trial leave.
.                                    (if less than this, user will be asked to
.                                     change to short leave)
MHCNMAXH  FORM      2          75  Maximum No. of Months for Holiday leave
MHCNMAXT  FORM      2          77  Maximum No. of Years for Trial leave
MHCNKLER  FORM      1          79  Keying in Leave end reason in IBABIL01 
.                                    0 = No ; 1 = Yes
MHCNUDSA  FORM      1          80  Using Diagnosis Screen in Admissions ? 
.                                    0 = No ; 1 = Yes
MHCNUVOP  FORM      1          81  Using Valid Operators Security file ? 
.                                    0 = No ; 1 = Yes
MHCNDVIS  FORM      2          82  Security level to view MH Visits      
.                                    0 - 99 
MHCEMPST  DIM       2          84  Which UDF for MH Employment Status(V1-V5)?
.                                    V1 - V5
MHCNUNIQ  FORM      8          86  Next Legal status referral unique number
MHCNSINP  DIM       3          94  Default Section code for Inpatient (catg LS)
MHCNMINC  FORM      5          97  Next Filename Number for MHINC Extract
.
.   The next 7 fields are for PRIMHED Extract
.
MHCNPHED  DIM       1        102      Using PRIMHED Extract
.                                     0=No 1=Yes
MHCNPHVR  DIM       8        103      PRIMHED XML File Version - valid value
.                                     0.1 for Version 1 to
.                                     0.5 for Version 5
MHCNORID  DIM       8        111      Submitting Organisation ID (GXXNNN-C)
.                                     G is a constant prefix
.                                     X is either alpha or numeric
.                                     The org.ID is assigned by the HPI System
.                                     C is a check digit for Org.ID
MHCNOTYP  DIM       3        119      Organisation Type
.                                     Default to 001 for DHB (b/w 000-014)
MHCNEDAT  DIM       8        122      Last Extract Date (ccyymmdd)
.                                     System date of last extract
MHCNETIM  DIM       4        130      Last Extract Time (hhmm)
.                                     System Time of last extract
MHCNENUM  DIM       3        134      Last Extract Number (eg.001)
MHCNEDIR  DIM      50        137      PRIMHED Extract Directory
MHCNELIV  DIM       1        187      Extract Live PRIMHED (Y/N)
MHCNIPAT  DIM       2        188      PRIMHD IP Activity Type (Cat.A or Cat.BT)
MHCNMHLS  DIM       2        190      Category for allocating MH Legal Status 
.                                       (Cat.AC or Cat.CC)
MHCNRDHB  DIM       1        192      Record Responsible DHB on Legal Status
.                                     0=No 1=Yes
MHCNHDDS  DIM       1        193      Hide DSM-IV coding from MH Diagnosis
.                                     0=No 1=Yes
MHCNPRDS  DIM       1        194      Add MH Diagnosis using prev MH Diagnosis
.                                     0=No 1=Yes
.
. End of PRIMHED Extract parameters
.
.End of Record                250
.
