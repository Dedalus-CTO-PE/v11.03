. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. ******************************************************************************
. * Include Name  : PATSCFFD.INC                                               *
. *                                                                            *
. * Function      : File Definition Include for the                            *
. *                 Singapore Bed Fee Table                                    *
. *                                                                            *
. * File Type     : No Longer Required                                         *
. *                                                                            *
. * File Name     : patscfaf.dat                                               *
. *                                                                            *
. * Keys          : KEY 6                                                      *
. *                                                                            *
. ******************************************************************************
.
.Data File Definition
.--------------------
PATSCFA1  IFILE     SQL, FIXED=52, KEY="U1-3,4-6"
.
. NAME    TYPE    LENGTH   PHYSICAL   START LOC.  DESCRIPTION
. ----    ----    ------   --------   ----------  -----------
PTSCPTYP  DIM       3         3           1       Patient Type (Category P)
PTSCBTYP  DIM       3         3           4       Bed Type (Category BT)
PTSCDESC  DIM      30        30           7       Rate Description
PTSCDART  FORM   12.2         8          37       Daily Rate
.
PTSCSPAR  DIM       7         7          45       Spare Variable
.
.End of Record                           52 
.
PTSCRATE  FORM    5.2  

