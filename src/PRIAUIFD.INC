.  **********************************************************************
.  *                                                                    *
.  *     Include Name  : PRIAUIFD.INC                                   *
.  *                                                                    *
.  *     Function      : File Definition include for Private Practice   *
.  *                     Cash Deposits Invoiced Audit                   * 
.  *                                                                    *
.  *     File Type     : SQL                                            *
.  *                                                                    *
.  *     File Name     : priauiaf.dat                                   *
.  *                                                                    *
.  *     Keys          : KEY 18                                         *
.  *                                                                    *
.  *     Modifications : 15/09/1995  Steve Armstrong                    *
.  *                     Made PRAISCAN a form field                     *
.  *                                                                    *
.  **********************************************************************
.
.Data File Definition
.--------------------
PRIAUIA1  IFILE     SQL, FIXED=97, KEY="U1-8,9-10,11-18"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PRAIDEBT   DIM       8         8           1      Debtor Number
DPRAISCN   DIM       2         2           9      Scan Flag
.                                                   0 = Debtor
.                                                   1 = PMI
PRAIINVN   DIM       8         8          11      Invoice Number
PRAIIDTE   DIM       8         8          19      Invoice Date (CCYYMMDD)
PRAIDDTE   DIM       8         8          27      Deposit Date (CCYYMMDD)
PRAIOPER   DIM       4         4          35      Operator Id
PRAIPORT   FORM      2         2          39      Port
PRAIAMNT   FORM    8.2         6          41      Amount Deposited
PRAISPAR   DIM      50        50          47
.
.End of Record                            97
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
PRAISCAN    FORM        2         2       Scan Flag
.
