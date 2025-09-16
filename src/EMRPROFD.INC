.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   EMRPROFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition Include for Emergency         *
.  *                        Procedure Codes                               *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   emrproaf.dat                                  * 
.  *  Audit File                                                          *
.  *                                                                      * 
.  *  Keys              :   Key 9, Key79                                  *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
EMRPROA1   IFILE SQL, FIXED=100, KEY="U1-9"
EMRPROA2   IFILE SQL, FIXED=100, KEY="U10-79,1-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMPRCODE  DIM         9       9       1   Procedure Code
EMPRDESC  DIM        70      70      10   Procedure Description
EMPRHDPE  DIM         6       6      80   HDP Equivalent Code
EMPRSPAR  DIM        14      14      86   Spare Variable
.
.End of Record                      100
.
EMPRQCNT  FORM        2     * count for displayed items in EMRPRODS
EMPRQLIN  FORM        1     * which prompt for line 24 in EMRPRODS
EMPRQARR  DIM         9[17] * array for key values in EMRPRODS
