. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSLMBFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Ledger Report Description Table                  *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmslmbaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY4                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSLMBA1   IFILE SQL, FIXED=64, KEY="U1-2"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMLBRPNO  DIM       2      2        1     Report Number
FMLBDESC  DIM       35     35       3     Description
FMLBACUI  FORM      1      2        38    Actuals Total Account Update
.                                          0 No Update Required
.                                          1 Total Ac Update Required
.
FMLBBUUI  FORM      1      2        40    Budget Total Account Update
.                                          0 No Update Required
.                                          1 Total Ac Update Required
.
FMLBSPAR  DIM       22     22       44    
.
.End of Record                      64
.
.Notes on Indicator Setting
.--------------------------
.Actuals Total Account Update : Set to 1 by - Batch Update If An Account
.                                             in this Report is altered.
.                               Set to 1 by - Report Sequence Maintenance
.                                             If this Report is altered.
.                               Set to 0 by - Total Account Actual Update
.
.Budget  Total Account Update : Set to 1 by - Budget Maintenance 
.                                             If this Report is altered.
.                               Set to 1 by - Report Sequence Maintenance
.                                             If this Report is altered.
.                               Set to 0 by - Total Account Budget Update
.
