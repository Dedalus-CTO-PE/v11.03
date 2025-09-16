. *****************************************************************************
. *                                                                           *
. * Include Name  : PATPNIFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Pre-Admission National ID Numbers                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patpniaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 10, KEY 30                                            *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
PATPNIA1  IFILE     SQL, FIXED=40, KEY="U1-2,3-10"
PATPNIA2  IFILE     SQL, FIXED=40, KEY="U11-30,1-2,3-10"
.
. NAME    TYPE   LENGTH  PHYSICAL  START     DECRIPTION
. ----    ----   ------  --------  ------    ----------
. SAME FORMAT AS PATMAST EXCEPT AADMNO IS MOVED TO PTNILNUM
.
DPTPNHNU  DIM         2         2       1    Hospital number     
PTPNADNO  DIM         8         8       3    Visit Number
PTPNNMPI  DIM        20        20      11    National ID No. (right justified)
PTPNSPAR  DIM         9         9      31    Spare variable 
.End of Record                         40
.
. redefine form fields from key
. -----------------------------
. NAME    TYPE   LENGTH  START     DECRIPTION
. ----    ----   ------  ------    ----------
PTPNHNUM  FORM        2       1    Hospital number     
.
