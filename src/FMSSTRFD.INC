. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSSTRFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Statistical Transaction Details                  *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsayyyy.dat                                     *
. *                      yyyy = Financial Year                            *
. *                                                                       *
. *  Keys            :   KEY8                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSSTRA1  IFILE     SQL, FIXED=81, KEY="U1-5,6-8"
FMSSTRA2  IFILE     SQL, FIXED=81, KEY="U9-10,11-22,23-30,1-5,6-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMSRBAT   DIM       5      5        1     Batch
FMSRUNIQ  DIM       3      3        6     Unique Id
FMSRLEDG  DIM       2      2        9     Ledger   
FMSRACCT  DIM       12     12       11    Account  
FMSRDATE  DIM       8      8        23    Date     CCYYMMDD
.
FMSRREF   DIM       15     15       31    Description
FMSRUNIT  FORM      12.5   10       46    Units
.
FMSRSPAR  DIM       25     25       56    Spare
.
.End of Record                      81
.
