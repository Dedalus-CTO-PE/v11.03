. *****************************************************************************
. *                                                                           *
. * Include Name  : PATNIDFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 National ID Number                                        *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patnidaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 10, KEY 30                                            *
. *                                                                           *
. * Modifications : 03/08/1992    Justin Coates  (HONG KONG changes)          *
. *                 Adapted from PATNMPFD (increase NMP to 20 characters)     *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATNIDA1  IFILE     SQL, FIXED=40, KEY="U1-2,3-10"
PATNIDA2  IFILE     SQL, FIXED=40, KEY="U11-30,1-2,3-10"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DESCRIPTION
. ----    ----   ------  --------  ------    ----------
DPTNIHNU  DIM         2         2       1    Hospital number     
PTNILNUM  DIM         8         8       3    Local U/R number
PTNINMPI  DIM        20        20      11    National ID No. (right justified)
PTNISPAR  DIM         9         9      31    Spare variable 
.End of Record                         40
.
. redefine form fields from key
. -----------------------------
. NAME    TYPE   LENGTH  START     DECRIPTION
. ----    ----   ------  ------    ----------
PTNIHNUM  FORM        2       1    Hospital number     
.
