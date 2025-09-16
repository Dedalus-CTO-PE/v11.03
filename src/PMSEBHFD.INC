. ************************************************************************
. *                                                                      *
. *  Include Name : PMSEBHFD.INC                                         *
. *                                                                      *
. *  Function     : File definition include for Eclipse Batch Header     *
. *                 Table                                                *
. *                                                                      *
. *  File Type    : SQL                                                  *
. *                                                                      *
. *  File Name    : pmsebhaf.dat                                         *
. *                                                                      *
. *  Keys         : KEY8                                                 *
. *                                                                      *
. *  Modifications:                                                      *
. *                                                                      *
. *  Programmer Note: The variables in this FD have the same 4-character *
. *                   prefix as those in PMSEPBFD, so if you are adding  *
. *                   new variables, then make sure they don't clash     *
. *                   with those in PMSEPBFD.                            *
. *                                                                      *
. *  V9.11.01  03/12/2008  Peter Vela        CAR 183976                  *
. *            Ported to 9.11                                            *
. *  V6.16.00  17/03/2008  Steve Armstrong   CAR 160463                  *
. *            Copied from PATEBHFD and modified for Eclipse             *
. *                                                                      *
. ************************************************************************
.
PMSEBHA1  IFILE     SQL, FIXED=160, KEY="U1-8"
PMSEBHA2  IFILE     SQL, FIXED=160, KEY="U27-34,1-8"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
PMEBBTHN  DIM       8        8          1      Batch no
PMEBHFND  DIM       6        6          9      Health Fund
PMEBBHTL  FORM    12.2       8         15      Batch total
PMEBTRIB  FORM      6        4         23      Total records in batch
PMEBDTBC  DIM       8        8         27      Date batch created (ccyymmdd)
PMEBTMBC  DIM       8        8         35      Time batch created (hh:mm:ss)
PMEBOPER  DIM       10       10        43      Web User Id
DPMEBEET  DIM       1        1         53      Eclipse extract type
.                                                0 - Health Fund
.                                                1 - Claim Code (DVA)
PMEBEFNM  DIM       18       18        54      Extract Filename
PMEBLOCN  DIM       8        8         72      Location Id
PMEBSNID  DIM       60       60        80      Sender Id (email)
PMEBSPAR  DIM       20       20       140      Spare variable
.
.End of Record                        160
.
. Redefine FORM fields from key
. -----------------------------
PMEBEETP  FORM      1
+
