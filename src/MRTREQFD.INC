. *****************************************************************************
. *                                                                           *
. * Include Name  : MRTREQFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Medical Records Tracking      *
. *                 Record Request                                            *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mrtreqaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 10, KEY26, KEY56                                      *
. *                                                                           *
. * Author        : Justin Coates           30/07/1996                        *
. *                                                                           *
. * Modifications :                                                           *
. *                                                                           *
. *****************************************************************************
.
MRTREQA1  IFILE     SQL, FIXED=159, KEY="U1-10"
MRTREQA2  IFILE     SQL, FIXED=159, KEY="U11-18,19-26,1-10"
MRTREQA3  IFILE     SQL, FIXED=159, KEY="U27-56,11-18,19-26,1-10"
.
. NAME     TYPE   LENGTH   PHYSICAL  START  DESCRIPTION
. ----     ----   ------   --------  -----  -----------
DMRRQNUM  DIM       10        10         1  Request Number
MRRQDATE  DIM       8          8        11  Request Date (CCYYMMDD)
MRRQTIME  DIM       8          8        19  Request Time (HH:MM:SS)
MRRQDEPT  DIM       30        30        27  Department (Free Format or
.                                                        Codes File QD)
MRRQRQST  DIM       30        30        57  Requestor (Free Format or
.                                                       Codes File QR)
MRRQURGN  DIM       30        30        87  Urgency (Free Format or
.                                                     Codes File QU)
MRRQURNO  DIM       8          8       117  U/R Number
MRRQOPID  DIM       4          4       125  Operator Id
MRRQHOSP  DIM       3          3       129  Hospital Code
MRRQSPAR  DIM       27        27       132  Spare Variable
.End of Record                         159
.
.  redefine form fields from key
.  -----------------------------
.NAME     TYPE     LENGTH     START     DESCRIPTION
.----     ----     ------     -----     -----------
MRRQNUMB  FORM       10         1       Request Number
.
