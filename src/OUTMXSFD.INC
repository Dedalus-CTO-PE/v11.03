. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTMXSFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Master Extra Staff                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outmxsaf.dat                                              *
. *                                                                           *
. * Keys          : KEY20                                                     *
. *                                                                           *
. * Author        : Justin Coates      23/10/1995                             *
. *                                                                           *
. * Modifications : V9.11.01 Peter Vela CAR ??????                            *
. *                          Changed name of spare variable                   *
. *****************************************************************************
.
FILMXSA1  INIT      "mxsaf"
.
.Data File Definition 
.--------------------
OUTMXSA1  IFILE     SQL, FIXED=50, KEY="U1-6,7-12,13-13,14-18,19-20"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------------------
OTXSSITE  DIM       6           6      1  Site Code
OTXSCLIN  DIM       6           6      7  Clinic ID
DOTXSDAY  DIM       1           1     13  Day of the Week
OTXSTIME  DIM       5           5     14  Time of Clinic
DOTXSCNT  DIM       2           2     19  Count
OTXSDOCT  DIM       6           6     21  Doctor/H.C.P
OTXSSPEC  DIM       3           3     27  Specialty (Cat A)
OTXCSPAR  DIM       20         20     30  Spare variable
.
.End of Record                        50
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  --------------------------------------
OTXSDAY   FORM      1       Day of the Week
OTXSCNT   FORM      2       Count
.
