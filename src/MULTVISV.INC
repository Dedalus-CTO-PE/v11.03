.******************************************************************************
.*                                                                            *
.* Include Name   : MULTVISV.INC                                              *
.*                                                                            *
.* Function       : Variables required for MULTIVIS.PBL                       *
.*                                                                            *
.* Modifications  :                                                           *
.*                                                                            *
.******************************************************************************
.
.>>>>>>>> MRCHNOHS  FORM      1
.
.         visit temp file
.
MULTIVS1  IFILE     SQL, FIXED=163, KEY="U1-8,9-12"
MULTIVS2  IFILE     SQL, FIXED=163, KEY="U13-20,1-8,9-12"
.
.Name     Type      length  Phys  Start  Description
.-------  ----      ------  ----  -----  -------------------
DXXVISNO  DIM       8         8       1  Visit Number
XXHOSP    DIM       4         4       9  Hospital code
XXVISDAT  DIM       8         8      13  Visit Date
XXDPATH   DIM       120     120      21  Data path
XXPTYPE   FORM      1         2     141  Patient type
XXDOCT    DIM       6         6     143  Doctor code
XXSITE    DIM       6         6     149  Site code
XXURNO    DIM       8         8     155  U/R Number
.End of record                      163
XXVISNO   FORM      8
.
CFNAMEMV  DIM       8         * temp file name for multi visits
HOSPCNT   FORM      2         * count of hospitals up to
INCOPFB   FORM      1         * include O/P future bookings 1=yes, 0=no
.>>>>>PATH      DIM       60        * exact pathname for files
..............................................................................
