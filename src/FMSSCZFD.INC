. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSCZFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Statistical Cash Transaction Details             *
. *                      This File Should be Identical to the STR file    *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmszyyyy.dat                                     *
. *                      yyyy = Financial Year                            *
. *                                                                       *
. *  Keys            :   KEY8                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSSCZA1  IFILE     SQL, FIXED=81, KEY="U1-5,6-8"
FMSSCZA2  IFILE     SQL, FIXED=81, KEY="U9-10,11-22,23-30,1-5,6-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSZBAT   DIM       5      5        1     Batch
FMSZUNIQ  DIM       3      3        6     Unique Id
FMSZLEDG  DIM       2      2        9     Ledger   
FMSZACCT  DIM       12     12       11    Account  
FMSZDATE  DIM       8      8        23    Date     CCYYMMDD
.
FMSZREF   DIM       15     15       31    Description
FMSZUNIT  FORM      12.5   10       46    Units
.
FMSZSPAR  DIM       25     25       56    Spare
.
.End of Record                      81
.
