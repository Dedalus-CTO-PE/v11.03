. *****************************************************************************
. *                                                                           *
. *       Include Name : PATCLSFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Patient                  *
. *                      Clinical Speciality                                  *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : patclsaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY2                                                 *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
PATCLSA1  IFILE     SQL, FIXED=50, KEY="U1-2"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
PTCICODE  DIM       2        2          1      Clinical speciality code
PTCIDESC  DIM      40       40          3      Clinical speciality description
PTCISPAR  DIM       7        7         43      Spare variable
.
.End of Record                         50
+
.

