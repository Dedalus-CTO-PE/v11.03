. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSETRFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Claim Transaction Request Table       *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsetraf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY51                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *      V10.13.01 24/09/2018  Peter Vela        TSK 0859743             *
. *                Added webPAS Module                                   *
. *      V10.11.02 16/08/2017  Peter Vela        CAR 0837619             *
. *                Added Request Type 15                                 *
. *      V10.11.01 20/06/2016  Peter Vela        CAR 0294177/0837619     *
. *                Added Request Types 11, 12, 13, 14                    *
. *      V10.08.01 12/01/2016  Peter Vela        CAR 0294177             *
. *                Added Request Type 7, 8, 9, 10                        *
. *      V6.16.02  28/07/2008  Steve Armstrong   CAR 175891              *
. *                Added Index 2 & 3                                     *
. *      V6.16.01  30/06/2008  Steve Armstrong   CAR 172082              *
. *                Added PMETEROR.                                       *
. *      V6.16.00  08/04/2008  Davin         CAR 166156                  *
. *                Created FD                                            *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSETRA1   IFILE SQL, FIXED=190, KEY="U1-1,2-3,76-83,28-35,36-43,4-27"
PMSETRA2   IFILE SQL, FIXED=190, KEY="U28-35,36-43,1-1,2-3,76-83,4-27"
PMSETRA3   IFILE SQL, FIXED=190, KEY="U1-1,28-35,36-43,2-3,76-83,4-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMETSTAT  DIM       1         1       1   Status
.                                           ' ' = Waiting to be processed
.                                           '0' = Processing by server adaptor
.                                           '1' = Processed by server adaptor
.                                           'E' = Processing Error
PMETTYPE  DIM       2         2       2   Type of Request (right justified)
.                                           0 = Not Applicable
.                                           1 = IHC Status Request
.                                           2 = Get Participant Request
.                                           3 = IHC Report Request
.                                           4 = ERA Status Request
.                                           5 = ERA Report Request 
.                                           6 = Location/Certificate Request
.                                           7 = OEC Status Request
.                                           8 = OEC Report Request
.                                           9 = IMC Status Request
.                                           10 = IMC Report Request
.                                           11 = BLK Report Request
.                                           12 = BLK ERA Report Request
.                                           13 = IHC Status Request Date Range
.                                           14 = IMC Status Request Date Range
.                                           15 = OEC Status Request Date Range
PMETTRID  DIM       24        24      4   Transaction Id (blank for ERA Status
.                                                        Request)
PMETCDTE  DIM       8         8      28   Date Created (ccyymmdd)
PMETCTIM  DIM       8         8      36   Time Created (hh:mm:ss)
PMETBATN  DIM       8         8      44   Batch Number (blank for ERA Request)
PMETINVN  DIM       8         8      52   Invoice Number (blank for ERA Request)
PMETUDTE  DIM       8         8      60   Date Updated (ccyymmdd)
PMETUTIM  DIM       8         8      68   Time Updated (hh:mm:ss)
PMETLOCN  DIM       8         8      76   Location Id
PMETSNID  DIM       60        60     84   Sender Id (email)
PMETFDTM  DIM       14        14    144   From DateTime (ccyymmddhhmmss)
.                                              (ERA Status Request Only)
PMETTDTM  DIM       14        14    158   To DateTime (ccyymmddhhmmss)
.                                              (ERA Status Request Only)
PMETEROR  DIM       4         4     172   Hub Error Code
PMETMODL  DIM       1         1     176   webPAS Module
.                                         1 = Emergency
.                                         2 = Private Practice
.                                         3 = Outpatient
PMETSPAR  DIM       13        13    177   Spare Variable
.
.End of Record                      190
+
