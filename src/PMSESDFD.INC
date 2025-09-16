. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSESDFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse IHC Services Details Table            *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsesdaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY59                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.01  12/01/2009  Peter Vela      CAR 183976              *
. *                  Ported from 6.16                                    *
. *        V6.16.01  08/08/2008  Davin           CAR 175850              *
. *                  Added PMSDRPTC, PMSDSRVC and PMSDSEXC and adjusted  *
. *                  index accordingly                                   *
. *        V6.16.00  21/05/2008  Davin           CAR 168954              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSESDA1   IFILE SQL, FIXED=170, KEY="U1-3,4-23,24-35,36-38,39-49,50-52,53-56,57-59"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSDFBID  DIM       3         3       1   Fund Brand ID (Participant Code)
PMSDARID  DIM       20        20      4   Account Reference ID
PMSDFRID  DIM       12        12     24   Fund Reference ID
PMSDRPTC  DIM       3         3      36   Report counter (right justified)
PMSDSCOD  DIM       11        11     39   Service Code
PMSDSRVC  DIM       3         3      50   Service counter (right justified)
PMSDSFEC  DIM       4         4      53   Service Fund Explanation Code
PMSDSEXC  DIM       3         3      57   Service explanation code counter (rj)
PMSDSFET  DIM       80        80     60   Service Fund Explanation Text
PMSDSPAR  DIM       30        30    140   Spare Variable
.
.End of Record                      170
+
