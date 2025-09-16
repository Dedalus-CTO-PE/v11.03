. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTCTYFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                 Clinic Type Table                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outctyaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 12, KEY 42, KEY 15, KEY 45                            *
. *                                                                           *
. * Modifications :                                                           *
. *       V10.15.01 16/10/2019  Ebon Clements TSK 0308709                     *
. *                 Added OCTDEFCV                                            * 
. *       V9.08.01  17/10/2006  Ebon Clements CAR 121804                      *
. *                 Added OCTUSDF1 and OCTUSDF2                               * 
. *       V9.06.01  09/06/2006  Sandeep.A  CAR 105328                         *
. *                 Added OUTCTYA4 - Index 4 for sorting based on Description * 
. *       V9.03.01  29/07/2004  Ebon Clements   CAR 19975                     *
. *                 Added OCTWUNIT - Waiting list unit                        *
. *       V5.10.B00 23/04/2001  Dean Cramer                                   *
. *                 Add VACS Code (Category CQ)                               *
. *       V5.09.B01 01/02/2001  Greg Horvat                                   *
. *                 Removed the save variables as they werent used            *
. *                                                                           *
. *                 03.05.89 H.Donnard   (IBA)                                *
. *                 Change include heading                                    *
. *                                                                           *
. *                 13/03/1992    Justin Coates  (Southland changes)          *
. *                 Added OCTXBOK and OCTXATT for extra screen's Id           *
. *                                                                           *
. *                 28.07.1999 Pat Dirito                                     *
. *                            Added OCTBKT, OCTATT & OCTACT for WEB          *
. *                                                                           *
. *****************************************************************************
.
.    IO INC       OUTCTYIO
.
OUTCTYA1  IFILE     SQL, FIXED=93, KEY="U1-6,7-12"
OUTCTYA2  IFILE     SQL, FIXED=93, KEY="U1-6,16-45,7-12"
OUTCTYA3  IFILE     SQL, FIXED=93, KEY="U1-6,13-15,7-12"
OUTCTYA4  IFILE     SQL, FIXED=93, KEY="U1-6,13-15,16-45,7-12"
FILCTYA1  INIT      "ctyaf"
FILCTYA2  INIT      "ctyaf"
FILCTYA3  INIT      "ctyaf"
FILCTYA4  INIT      "ctyaf"
.
.NAME     TYPE   LENGTH  PHYS  START  DESCRIPTION
.----     ----   ------  ----  -----  --------------------------------
OCTSITE   DIM       6       6      1  SITE CODE
OCTCTYP   DIM       6       6      7  CLINIC TYPE
OCTGRP    DIM       3       3     13  GROUP CODE (CG)
OCTDESC   DIM       30     30     16  CLINIC TYPE DESCRIPTION
OCTXBOK   DIM       2       2     46  Extra Booking screen Id
OCTXATT   DIM       2       2     48  Extra Attendee screen Id
OCTBKT    DIM       3       3     50  Booking Template
OCTATT    DIM       3       3     53  Attendance Template
OCTACT    DIM       1       1     56  Clinic Inactive 1=Yes
OCTVACS   DIM       3       3     57  VACS Code (Category CQ)
OCTWUNIT  DIM       3       3     60  Waiting List Unit (Category WU)
OCTUSDF1  DIM       1       1     63  User Defined Field 1
OCTUSDF2  DIM       1       1     64  User Defined Field 2
OCTDEFCV  DIM       3       3     65  Default Visit Type (Category CV)
OCTSPARE  DIM       25      25    68  Spare                              
.
.End of record                    93
