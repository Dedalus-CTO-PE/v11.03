. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSRSFFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Reporting Sequence Table                         *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsrsfaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY26                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSRSFA1  IFILE  SQL, FIXED=45, KEY="U1-2,3-7,8-12,13-14,15-26" 
FMSRSFA2  IFILE  SQL, FIXED=45, KEY="U13-14,15-26,1-2,3-7,8-12"
FMSRSFA3  IFILE  SQL, FIXED=45, KEY="U13-14,1-2,3-7,8-12,15-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMRFREP   DIM       2      2        1     Report
FMRFPOS   DIM       5      5        3     Print Position
FMRFSEQ   DIM       5      5        8     Account Sequence
FMRFLED   DIM       2      2        13    Ledger
FMRFACC   DIM       12     12       15    Account
.
FMRFPRT   DIM       3      3        27    Print Code
FMRFCRP   DIM       1      1        30    Credit Account Print 
.
FMRFSPAR  DIM       14     14       31    Spare
.
.End of Record                      45
.
