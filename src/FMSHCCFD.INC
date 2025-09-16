. ***********************************************************************
. *                                                                     *
. *  Include Name    : FMSHCCFD.INC                                     *
. *                                                                     *
. *  Function        : File Def'n Include for Financial Management      *
. *                    HCS Cost Centre Conversion Table                 *
. *                                                                     *
. *  File Type       : SQL                                              *
. *                                                                     *
. *  File Name       : fmshccaf.dat                                     *
. *                                                                     *
. *  Keys            : KEY8                                             *
. *                                                                     *
. *  Modifications   : Neeriem Dye  16.09.91                            *
. *                    Added institution code                           *
. *                    srf 110653                                       *
. *                                                                     *
. ***********************************************************************
.
FMSHCCA1  IFILE SQL, FIXED=43, KEY="U1-3,4-8"  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMHAINST  DIM       3      3        1     HCS Institution Code
FMHAHCCC  DIM       5      5        4     HCS Cost Centre
.
FMHALEDG  DIM       2      2        9     FMS Ledger
FMHACOCE  DIM       12     12       11    FMS Cost Centre
.
FMHASPAR  DIM       20     20       23    Spare Variable
.
.End of Record                      43 
