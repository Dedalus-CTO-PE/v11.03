. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSEADFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse IHC Assessment Details Table          *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmseadaf.dat                                  * 
. *                                                                      * 
. *  Keys              :   KEY45                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.01  12/01/2009  Peter Vela      CAR 183976              *
. *                  Ported from 6.16                                    *
. *        V6.16.01  08/08/2008  Davin           CAR 175850              *
. *                  Added PMADRPTC and PMADEXPC and adjusted index      *
. *                  accordingly                                         *
. *        V6.16.00  21/05/2008  Davin           CAR 168954              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition
.--------------------
PMSEADA1   IFILE SQL, FIXED=291, KEY="U1-3,4-23,24-35,36-38,39-42,43-45"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMADFBID  DIM       3         3       1   Fund Brand ID (Participant Code)
PMADARID  DIM       20        20      4   Account Reference ID
PMADFRID  DIM       12        12     24   Fund Reference ID
PMADRPTC  DIM       3         3      36   Report counter (right justified)
PMADCFEC  DIM       4         4      39   Claim Fund Explanation Code
PMADEXPC  DIM       3         3      43   Explanation Code Counter (rj)
PMADCFET  DIM       80        80     46   Claim Fund Explanation Text
PMADELNM  DIM       127       127   126   Element Name
PMADMPID  DIM       8         8     253   Message Part ID
PMADSPAR  DIM       30        30    261   Spare Variable
.
.End of Record                      291
+
