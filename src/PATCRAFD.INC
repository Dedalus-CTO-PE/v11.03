. 20/10/1998  Glenn Berry  5.07 Changes
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCRAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Cash Receipts Audit                             *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patcraaf.dat                                    *
.  *                                                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *            29/06/1993     Robert Sumsion    SRF122783              *
.  *            Changed format to allow for duplicates (added admission#*
.  *            ,invoice# and transaction# onto the keys.               *
.  *                                                                    *
.  **********************************************************************
.
PATCRAA1  IFILE     SQL, FIXED=75, KEY="U1-12,13-20,21-28,29-34"        * KEY34
PATCRAA2  IFILE     SQL, FIXED=75, KEY="U35-42,1-12,13-20,21-28,29-34"  * KEY42
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
PTCRRCPN  DIM      12       12        1       Receipt Number          
DPTCRADM  DIM       8        8       13       Visit Number
PTCRINVN  DIM       8        8       21       Invoice Number
DPTCRTRA  DIM       6        6       29       Transaction Number (from PATDTR)
PTCRDATE  DIM       8        8       35       Date of Receipt
PTCRPORT  DIM       2        2       43       Port Number
PTCROPER  DIM       4        4       45       Operator ID
PTCRSPAR  DIM      26       26       49       Spare Variable
.
.End of Record                       75
.
.Redefined Variables
.-------------------
PTCRADMN  FORM      8                         Visit Number
PTCRTRAN  FORM      6                         Transaction Number (from PATDTR)
