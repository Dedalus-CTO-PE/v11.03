.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFEEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Fee Categories                                  *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfeepf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 1                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.                                                                       *
PATFEEP1  IFILE  SQL, FIXED=50, KEY="U1-1"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
FEECAT    DIM       1         1          1   FEE CATEGORY
.                                            ie B = Benefit Fee
.                                               A = AMA Fee
.                                               S = Scheduled Fee
FEEDESC   DIM      30         30         2   BENEFIT FEE DESCRIPTION
FEEPCEN   FORM      4.2        4        32   PERCENTAGE
FEESPARE  DIM      14         14        36   SPARE VARIABLE
.End of Record                          50
.
