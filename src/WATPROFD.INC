. ***********************************************************
. *                                                         *
. * Include Name : WATPROFD                                 *
. *                                                         *
. * Function     : File Definition Include for Waiting List *
. *                Patient Procedures                       *
. *                                                         *
. * File Type    : SQL                                      *
. *                                                         *
. * File Name    : watproaf.dat                             *
. * Audit Name   : wataudwp.dat                             *
. *                                                         *
. * Keys         : KEY12, KEY9, KEY59, KEY19 (Audit File)   *
. * Modifications:                                          *
. *       V10.01.01 11/01/2011 Jill Parkinson CAR 234014    *
. *                 Increased description lengths           *
. *       V9.04.01 23/08/2004  J Habasque CAR 52919         *
. *                Changed WTWPHDPE from 4 to 9 characters  *
. *       V5.07.01 21/10/1999  J Habasque                   *
. *                Added WTWPACTV                           *
. *                28/03/1995  Helen Crick                  *
. *                            Standardised FD              *
. *                10/10/1995  Whirlpool  srf 612113        *
. *                            Moved WPDESCDS so makesql    *
. *                            would not pick it up         *
. *                14/04/1997  howellsy   RHA               *
. *                            added wprhat, wpchet         *
. *                18/09/1997  Steve Armstrong              *
. *                            added WTWPHDPE               *
. *                18/03/1998  Davin                        *
. *                            added WTWPDRGC               *
. *                18/05/2001  Bronko Sosic                 *
. *                            Added new Index              *
. ***********************************************************
.Audit File
.
WATAUDWP   IFILE SQL, FIXED=164, KEY="D1-8,9-16,17-18,19-19"
.
WTWPAUDD    DIM       8       8         1       Date of Change
WTWPAUDT    DIM       8       8         9       Time of Change
WTWPAUDP    DIM       2       2        17       Port Doing Change
WTWPAUDR    DIM       1       1        19       Record Type
.                                                 A = Added Record
.                                                 B = Before Change Record
.                                                 C = After Change Record
.                                                 D = Deleted Record
WTWPAUDS    FORM      1       2        20       Record Status
.                                                 1 = Not Printed
.                                                 2 = Printed
WTWPAUDO    DIM       4       4        22       Operator ID of Change
.
.Data File
.
WATPROA1  IFILE SQL, FIXED=139, KEY="U1-9"
WATPROA2  IFILE SQL, FIXED=139, KEY="U97-99,1-9"
WATPROA3  IFILE SQL, FIXED=139, KEY="U10-89,1-9"
WATPROA4  IFILE SQL, FIXED=139, KEY="U97-99,10-89,1-9"
.
. Name    Type    Length   Physical  Start     Description
.-------  ----    ------   --------  -----     -----------
WPCODE    DIM       9        9        1        Procedure Code
WPDESC    DIM       80       80       10       Description
WPTIME    FORM      5        4        90       Procedure Time
WPESTLS   FORM      3        3        94       Estimated Length of Stay in Hosp
WPGRP     DIM       3        3        97       Procedure Group (Category WG)
WPRHAT    DIM       6        6       100       RHA Threshold Level          
WPCHET    DIM       6        6       106       CHE Threshold Level          
WTWPHDPE  DIM       9        9       112       Procedure code HDP Equivalent
WTWPDRGC  DIM       6        6       121       DRG code
WTWPACTV  FORM      1        2       127       Status
.                                              0=Active   1=Inactive
WPTMASPAR  DIM       10       10      129       *** Spare ***
.
.End of Record                       139
.
.
.
. variables for watprods
. ----------------------
WPDESCDS  DIM       50            * Keyin Description 
WTPRQARR  DIM       59[17]        * array to store codes
WTPRQCNT  FORM      2             * count of items displayed
WTPRQLIN  FORM      1             * line 24 question control
.
