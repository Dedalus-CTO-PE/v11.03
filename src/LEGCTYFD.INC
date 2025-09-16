. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTCTYFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                 Clinic Type Table                                         *
. *                 Legacy Visits                                             *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : legctyaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 12  KEY 42  KEY 15                                    *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.03.00  06/05/2004  Ebon Clements    CAR 49209                    *
. *                 Ported from 6.11                                          *
. *                                                                           *
. *****************************************************************************
.
LEGCTYA1  IFILE     SQL, FIXED=60, KEY="U1-6,7-12"
LEGCTYA2  IFILE     SQL, FIXED=60, KEY="U1-6,16-45,7-12"
LEGCTYA3  IFILE     SQL, FIXED=60, KEY="U1-6,13-15,7-12"
.
.NAME     TYPE   LENGTH  PHYS  START  DESCRIPTION
.----     ----   ------  ----  -----  -----------
LOCTSITE  DIM       6       6      1  SITE CODE
LOCTCTYP  DIM       6       6      7  CLINIC TYPE
LOCTGRP   DIM       3       3     13  GROUP CODE (CG)
LOCTDESC  DIM       30     30     16  CLINIC TYPE DESCRIPTION
LOCTXBOK  DIM       2       2     46  Extra Booking screen Id
LOCTXATT  DIM       2       2     48  Extra Attendee screen Id
LOCTBKT   DIM       3       3     50  Booking Template
LOCTATT   DIM       3       3     53  Attendance Template
LOCTACT   DIM       1       1     56  Clinic Inactive 1=Yes
LOCTSPAR  DIM       3       3     57  Spare Variable
.
.End of record                    60
.
.  Save variables
.
LSOCTSIT  DIM       6         * SITE CODE
LSOCTCTY  DIM       6         * CLINIC TYPE
LSOCTGRP   DIM       3         * GROUP CODE (CG)
LSOCTDES  DIM       30        * CLINIC TYPE DESCRIPTION
+
.

