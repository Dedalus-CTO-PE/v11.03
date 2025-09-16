. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTSIPFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Site Specific Parameters                                  *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outsipaf.dat                                              *
. *                                                                           *
. * Keys          : KEY6                                                      *
. *                                                                           *
. * I/O Include   : OUTSIPIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 04/02/1992                                  *
. *                                                                           *
. * Modifications : V9.07.01 24/07/2006 Ebon Clements CAR 99899               *
. *                          Updated category code descriptions               *
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTSIPA1  IFILE     SQL, FIXED=87, KEY="U1-6"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -------------------------------------
OTSPSITE  DIM       6           6      1  Site code
OTSPXC01  DIM       2           2      7  Category 01 (Category xc)
OTSPXC02  DIM       2           2      9  Category 02 (Category xd)
OTSPXC03  DIM       2           2     11  Category 03 (Category xe)
OTSPXC04  DIM       2           2     13  Category 04 (Category xf)
OTSPXC05  DIM       2           2     15  Category 05 (Category xg)
OTSPXC06  DIM       2           2     17  Category 06 (Category xh)
OTSPXC07  DIM       2           2     19  Category 07 (Category xi)
OTSPXC08  DIM       2           2     21  Category 08 (Category xj)
OTSPXC09  DIM       2           2     23  Category 09 (Category xk)
OTSPXC10  DIM       2           2     25  Category 10 (Category xl)
OTSPXC11  DIM       2           2     27  Category 11 (Category xm)
OTSPXC12  DIM       2           2     29  Category 12 (Category xn)
OTSPXC13  DIM       2           2     31  Category 13 (Category xo)
OTSPXC14  DIM       2           2     33  Category 14 (Category xp)
OTSPXC15  DIM       2           2     35  Category 15 (Category xq)
OTSPXC16  DIM       2           2     37  Category 16 (Category xr)
OTSPXC17  DIM       2           2     39  Category 17 (Category xs)
OTSPXC18  DIM       2           2     41  Category 18 (Category xt)
OTSPXC19  DIM       2           2     43  Category 19 (Category xu)
OTSPXC20  DIM       2           2     45  Category 20 (Category xv)
OTSPSPAR  DIM       40         40     47  Spare variable
.End of Record                        87
.
