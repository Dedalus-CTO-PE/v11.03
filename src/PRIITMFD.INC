. V5.07.001 07/08/1998 Glenn  507 Changes
.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIITMFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        MBS/AMA Item Table                            *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   priitemf.dat                                  * 
.  *  Audit File        :   priaudit.dat                                  *
.  *                                                                      * 
.  *  Keys              :   KEY 19, KEY 22, KEY 52                        *
.  *                                                                      *
.  *      V10.08.01 29/09/2016  Peter Vela          TSK 0294177           *
.  *                Added 2 - Derived Item to PRITPATH description        *
.  *      V9.08.01  24/05/2007  Peter Vela          CAR SJOG ED Billing   *
.  *                Extended the file length and added the following vars *
.  *                Schedule Fee 75%                                      *
.  *                Schedule Fee 85%                                      *
.  *                Suggested AMA Fee                                     *
.  *                Print Service Date/Time on Invoice for this Item indi *
.  *                        15/10/1999   J.Tan      CAR 62750             *
.  *                        Removed amount redefined variable             *
.  *      V9.00.B01 30/05/2001  Greg Horvat                               *
.  *                Changed the length of the audit file from 149 to 163  *
.  *                        15/10/1999   D. Di Paola                      *
.  *                        Chenged length of audit file from 150 to 149  *
.  *                                                                      *
.  ************************************************************************
.Audit File Definition
.---------------------
PRIAUDIT   IFILE SQL, FIXED=263, KEY="D1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRITAUDD  DIM       8      8        1     Date of Change
PRITAUDT  DIM       8      8        9     Time of Change
PRITAUDP  DIM       2      2        17    Port Doing Change
PRITAUDR  DIM       1      1        19    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete
PRITAUDS  FORM      1      2        20    Record Status
.                                              1 = Not Printed
.                                              2 = Printed
PRITAUDO  DIM       4      4        22    Operator of Change
.
.Data File Definition
.--------------------
PRIITEM1   IFILE SQL, FIXED=238, KEY="U1-2,3-11,12-14,15-22"
PRIITEM2   IFILE SQL, FIXED=238, KEY="U1-2,23-52,3-11,12-14,15-22" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRITFLG  DIM       2      2        1     Item Type
.                                            0 = MBS
.                                            1 = AMA
PRITITMN  DIM       9      9        3     MBS Item Number
PRITSUBN  DIM       3      3        12    MBS Subitem Number
PRITDAT1  DIM       8      8        15    Date item commenced (CCYYMMDD format)
.
PRITDESC  DIM       30     30       23    Item Description
PRITKEYI  FORM      1      2        53    Keyin Indicator
.                                            0 = Normal Maintenance
.                                            1 = Operator Keyin
PRITSFEE  FORM     12.2    8        55    Item Schedule Fee ($)
PRITSETC  DIM       3      3        63    Set Code (Category PG)
.
.         MBS Proposed Item File Structure
.
PRITDAT2  DIM       8      8        66    Date item will cease
PRITICAT  DIM       3      3        74    Item Category
PRITIGRP  DIM       3      3        77    Item Group
PRITSGRP  DIM       3      3        80    Item Subgroup
PRITFTYP  DIM       1      1        83    Fee Type
.                                              S - Standard Item
.                                              A - Aggregate (Derived) Item
PRITPTYP  DIM       3      3        84    Provider Type
.
PRITPATH  FORM      1      2        87    Pathology item indicator
.                                              0 = Pathology
.                                              1 = Non - pathology 
.                                              2 = IMC Derived Item
PRITMAXR  FORM      3      3        89    Maximum no. of Requests
PRITDAYS  FORM      3      3        92    Period of Days
PRITSTEP  DIM       9      9        95    Item to stepdown to after max req.
PRITSTSB  DIM       3      3        104   Sub-item to stepdown to
PRITFIXD  FORM      1      2        107   Fixed charged item ?
.                                           1 = Yes, 2 = No
PRITGSTA  FORM      1      2        109   GST Charge
.                                               0 = GST Free
.                                               1 = GST Payable
.                                               2 = Either
PRITGSTC  DIM       6      6        111   GST Payable Code
PRITSF75  FORM      12.2   8        117   Schedule Fee 75%
PRITSF85  FORM      12.2   8        125   Schedule Fee 85%
PRITSAFE  FORM      12.2   8        133   Suggested AMA Fee
PRITPDTI  DIM       1      1        141   Print Service Date/Time on Invoice
.                                         for this Item
PRITSPAR  DIM       96     96       142   Spare Variables
.
.End of Record                      238   
.
.
. Redefine form fields from key
. -----------------------------
.
PRITFLAG  FORM      2
.
.
