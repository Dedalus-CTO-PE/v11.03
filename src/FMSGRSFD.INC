. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSGRSFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Subjective Group Allocation Table                *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsgrsaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY22                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSGRSA1  IFILE  SQL, FIXED=41, KEY="U1-3,4-8,9-10,11-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMGSCODE  DIM       3      3        1     Group Code
FMGSSEQ   DIM       5      5        4     Subjective Sequence No.
FMGSLEDG  DIM       2      2        9     Ledger
FMGSSUBJ  DIM       12     12       11    Subjective
FMGSSPAR  DIM       18     18       23    Spare
.
.End of Record                      41
