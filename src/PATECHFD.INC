. *****************************************************************************
. *                                                                           *
. * Include Name  : PATECHFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Exploding Charges Table                                   *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patechaf.dat                                              *
. *                                                                           *
. * Keys          : KEY18                                                     *
. *                                                                           *
. *****************************************************************************
.
PATECHA1  IFILE     SQL, FIXED=100, KEY="U1-3,4-6,7-15,16-18"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
PTECCTYP  DIM       3        3        1        Claim Type (Cat CL)
PTECATYP  DIM       3        3        4        Admission Type (Cat A)
PTECMBSC  DIM       9        9        7        MBS Code
DPTECUNI  DIM       3        3       16        Unique Counter
PTECEMCH  DIM       9        9       19        Exploding Miscellaneous Charge
PTECOPPC  DIM       3        3       28        Operating Personnel Code (Cat OP)
PTEC1MCF  FORM      3.2      4       31        1st % of Miscellaneous Charge Fee
PTEC2MCF  FORM      3.2      4       35        2nd % of Miscellaneous Charge Fee
PTEC3MCF  FORM      3.2      4       39        3rd % of Miscellaneous Charge Fee
PTECSPAR  DIM       57       57      43        Spare
.
.End of Record                      100
.
.Redefine form field key
.-----------------------
PTECUNIQ  FORM      3
+
.

