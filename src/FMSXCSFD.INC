. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSXCSFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Subjective Cost Centre Cross Reference Table     *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsxcsaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY26 , KEY31                                    *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSXCSA1  IFILE  SQL, FIXED=57, KEY="U1-2,3-14,15-26"        * Master Index
FMSXCSA2  IFILE  SQL, FIXED=57, KEY="U1-2,3-14,27-31,15-26"  * Subjective
FMSXCSA3  IFILE  SQL, FIXED=57, KEY="U1-2,15-26,32-36,3-14"  * Cost Center
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMXCLED   DIM       2      2        1     Ledger
FMXCSUB   DIM       12     12       3     Subjective
FMXCCOS   DIM       12     12       15    Cost Centre
FMXCCPR   DIM       5      5        27    Cost Centre Print Position
FMXCSPR   DIM       5      5        32    Subjective Print Position
.
FMXCSPAR  DIM       20     20       37    Spare
.
.End of Record                      57
.
