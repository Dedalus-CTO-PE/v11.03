. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSERDFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse ERA Payment Details Table             *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmserdaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY82                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      21/03/2011  Steve Armstrong   CAR 240009                        *
. *                  Added PMEDLTYP                                      *
. *      10/05/2010  Steve Armstrong   CAR 221795                        *
. *                  Replaced PMEDPART with PMEDFTID                     *
. *      12/01/2009  Peter Vela        CAR 183976                        *
. *                  Ported from 6.16                                    *
. *      06/06/2008  Steve Armstrong   CAR 170301                        *
. *                  Created FD.                                         *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSERDA1   IFILE SQL, FIXED=188, KEY="U1-24,25-54,55-58,59-82"
PMSERDA2   IFILE SQL, FIXED=188, KEY="U59-82,1-24,25-54,55-58"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEDFTID  DIM       24        24      1   Fund Transaction ID
PMEDRADV  DIM       30        30     25   Remittance Advice ID
PMEDPNUM  DIM       4         4      55   Part Number
PMEDTRID  DIM       24        24     59   Transaction ID
PMEDARID  DIM       20        20     83   Account Reference ID
PMEDBAMT  DIM       9         9     103   Benefit Amount
PMEDCCOD  DIM       3         3     112   Claim Channel Code
PMEDLDAT  DIM       8         8     115   Date of Lodgement
PMEDPARI  DIM       20        20    123   Previous Account Reference ID
PMEDPTID  DIM       24        24    143   Previous Transaction ID
PMEDSTAT  DIM       1         1     167   Status
.                                            0 = Received
.                                            1 = Locked
.                                            2 = Released
.                                            3 = Released to Suspense A/C
PMEDLTYP  DIM       2         2     168   Lock Type (numeric - right justified)
PMEDSPAR  DIM       18        18    170   Spare Variable
.
.End of Record                      188
+
