. ************************************************************************
. *   Program     :  PATCSLFD.INC                                        *
. *   Function    :  File Definition include for Patient                 *
. *                  Record Location                                     *
. *                                                                      *
. *   File Name   :  patcslaf.dat                                        *
. *   File Type   :  SQL                                                 *
. *   Key(s)      :  KEY11, KEY41                                        *
. *                                                                      *
. *   Mod's       :  28/03/1995  Helen Crick                             *
. *                              Standardised FD                         *
. ************************************************************************
.
PATCSLA1  IFILE     SQL, FIXED=62, KEY="U1-8,9-11"
PATCSLA2  IFILE     SQL, FIXED=62, KEY="U1-8,12-41,9-11"
.
. Name    Type    Length    Physical   Start    Description
. ----    ----    ------    --------   -----    -----------
PTCLURNO  DIM       8           8         1     U/R Number
DPTCLUNI  DIM       3           3         9     Unique counter
PTCLDESC  DIM       30         30        12     Description
PTCLSPAR  DIM       20         20        42     Spare
.
.End of Record                           62
.
. Redefine Form field keys
.
PTCLUNIQ  FORM      3                           Unique Counter
.
