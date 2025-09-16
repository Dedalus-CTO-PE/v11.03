. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSGRCFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Cost Centre Group Allocation Table               *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsgrcaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY22                                            *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************

FMSGRCA1  IFILE  SQL, FIXED=41, KEY="U1-3,4-8,9-10,11-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMGCCODE  DIM       3      3        1     Group Code
FMGCSEQ   DIM       5      5        4     Cost Centre Sequence No.
FMGCLEDG  DIM       2      2        9     Ledger
FMGCCC    DIM       12     12       11    Cost Centre
FMGCSPAR  DIM       18     18       23    Spare
.
.End of Record                      41
