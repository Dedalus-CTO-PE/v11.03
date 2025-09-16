. ****************************************************************************
. *                                                                          *
. *  Include Name      :   ACCLODFD.INC                                      *
. *                                                                          *
. *  Function          :   File Def'n Include for ACC Claim Lodge  Files     *
. *                                                                          *
. *  File Type         :   SQL                                               *
. *                                                                          *
. *  File Name         :   acclodaf.dat                                      *
. *                                                                          *
. *  Keys              :   KEY20                                             *
. *                                                                          *
. *  Modifications     :                                                     *
. *                                                                          *
. *      V11.01.01   17/08/2021  Don Nguyen    TSK 0875549                   *
. *                  Added new ACC Status values (4-9) for API responses     *
. *      V9.10.01    01/05/2008  Mike Laming   CAR 153670                    *
. *                  Add fields ACLOURNO, ACLOUDAT, ACLOUTIM, ACLOWUID       *
. *                  Add seconf Index                                        *
. *      07/06/2007  Janet George  CAR 142467                                *
. *                  FD created.                                             *
. ****************************************************************************
.
.Data File Definition
.--------------------
ACCLODA1   IFILE    SQL, FIXED=80, KEY="U1-20"
ACCLODA2   IFILE    SQL, FIXED=80, KEY="U30-37,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ACLOACCN  DIM       20     20       1     ACC Number
ACLOSTAT  DIM       1      1        21    ACC Status
.                                          0 - Submitted
.                                          1 - Sent
.                                          2 - Receipted
.                                          3 - Failed
.                                          4 - Failed - Bad Request: invalid data
.                                          5 - Failed - Unauthorized: authentication error
.                                          6 - Failed - Forbidden: authorization error
.                                          7 - Failed - Not Found
.                                          9 - Failed - Internal Server Error
ACLOSDAT  DIM       8      8        22    Date Sent
ACLOURNO  DIM       8      8        30    UR Number
ACLOUDAT  DIM       8      8        38    Date updated  (ccyymmdd)
ACLOUTIM  DIM       8      8        46    Time updated  (hh:mm:ss)
ACLOWUID  DIM       10     10       54    WEB User Id   (websecaf)
ACLOSPAR  DIM       16     16       64    Spare Variable
.
.End of Record                      80 
