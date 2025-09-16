. *****************************************************************************
. *                                                                           *
. * Include Name  : CCICTYFD.INC                                              *
. *                                                                           *
. * Function      : File definition include for Clinical Costing              *
. *                 Clinic/Type Department Table                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : ccictyaf.dat                                              *
. *                                                                           *
. * Keys          : KEY12                                                     *
. *                                                                           *
. * Modifications : 11/01/1994    Justin Coates  (Hawkes Bay Mods)            *
. *                 added second index                                        *
.  *                V5.03 25.05.95 Paul Howells                               *
.  *                Fixed Second Index                                        *
. *****************************************************************************
.
. IO include   : CCICTYIO.INC
.
CCICTYA1  IFILE     SQL, FIXED=36, KEY="U1-6,7-12"
CCICTYA2  IFILE     SQL, FIXED=36, KEY="U13-15,1-6,7-12"
.
.NAME     TYPE      LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----      ------  --------  -----  -----------
CCCTSITE  DIM       6          6         1   Site Code (OUTSITFD)
CCCTTYPE  DIM       6          6         7   Clinic Type (OUTCTYFD)
CCCTDEPT  DIM       3          3        13   Department code
CCCTSPAR  DIM       20        20        16   Spare
.End of Record                          36
.
