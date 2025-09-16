. *****************************************************************************
. *                                                                           *
. *       Include Name : PATSFAFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      Special Funding Arrangement Codes                    *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patsfaaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY1                                                 *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *                                                                           *
. *****************************************************************************
.
PATSFAA1  IFILE SQL, FIXED=100, KEY="U1-1"
.
.Name     Type    Length   Physical   Start Loc.   Description
.----     ----    ------   --------   ----------   -----------
PTSFCODE  DIM       1         1           1        Special funding arrange code
PTSFDESC  DIM       78        78          2        Special funding arrange desc
PTSFSPAR  DIM       20        20          80       Spare variable
.
.End of Record                            100
+
.

