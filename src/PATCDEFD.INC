. *****************************************************************************
. *                                                                           *
. *       Include Name : PATCDEFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      Casemix Data Extract                                 *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patcdeaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY16, KEY13                                         *
. *                                                                           *
. *       Modifications:                                                      *
. *            V5.07.01  23/11/1999  Davin                                    *
. *                      Removed PTCDDRGC, PTCDDDRG & PTCDEDRG                *
. *****************************************************************************
.
PATCDEA1  IFILE     SQL, FIXED=50, KEY="U1-3,4-7,8-16"
PATCDEA2  IFILE     SQL, FIXED=50, KEY="U4-7,1-3,8-16"
PATCDEA3  IFILE     SQL, FIXED=50, KEY="U4-7,8-16"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
DPTCDREC  DIM       3        3          1      Record no
PTCD4DRG  DIM       4        4          4      DRG code
PTCDICDC  DIM       9        9          8      ICD disease code
PTCD4DDR  DIM       4        4         17      Default DRG code
PTCD4EDR  DIM       4        4         21      Equivalent DRG code
PTCDSPRR  DIM      25       25         25      Spare variable
.
.End of Record                         50
.
PTCDRECN  FORM      3                       * Record no
+
.

