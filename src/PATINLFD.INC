. V9.04.01  03/08/05 J.Tan    CAR 62750
.           Removed redefined amount variables
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. *****************************************************************************
. *                                                                           *
. * Include Name  : PATINLFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Patient                            *
. *                 Invoice Lost Revenue                                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patinlaf.dat                                              *
. *                                                                           *
. * Keys          : KEY21                                                     *
. *                                                                           *
. * I/O Include   : PATINLIO.INC                                              *
. *                                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATINLA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-9,10-12,13-21"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
PTILINVN  DIM       8           8      1  Invoice Number
PTILTYPE  DIM       1           1      9  Record Type
.                                           A = accomodation
.                                           M = miscellaneous charge
PTILGRP   DIM       3           3     10  Fees invoiced group (Cat FI)
.                                           blank for accomodation
PTILCODE  DIM       9           9     13  Miscellaneous group code
.                                           blank for accomodation
PTILACTL  FORM     12.2         8     22  Actual charge
PTILLOSS  FORM     12.2         8     30  Loss of Revenue
PTILSPAR  DIM       12         12     38  Spare Variable
.End of Record                        50
.
