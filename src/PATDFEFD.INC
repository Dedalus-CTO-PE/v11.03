. V9.04.01  03/08/05 J.Tan    CAR 62750
.           Removed redefined amount variables
. V5.07.001 19/08/1998 Glenn  507 Changes
. ******************************************************************************
. *                                                                            *
. *  Include Name     :  PATDFEFD.INC                                          *
. *                                                                            *
. *  Function         :  File Def'n Include for Patient                        *
. *                      Doctors Fees Paid                                     *
. *                                                                            *
. *  File Type        :  SQL                                                   *
. *                                                                            *
. *  File Name        :  patdfeaf.dat                                          *
. *                                                                            *
. *  Keys             :  KEY 15, KEY 15                                        *
. *                                                                            *
. *  I/O Include      :  PATDFEIO.INC                                          *
. *                                                                            *
. *  Author           :  Sandra Barcham 18/01/1994                             *
. *                                                                            *
. ******************************************************************************
.
.Data File Definition
.--------------------
.
PATDFEA1  IFILE     SQL, FIXED=56, KEY="U1-6,7-7,8-15"
PATDFEA2  IFILE     SQL, FIXED=56, KEY="U7-7,1-6,8-15"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
PTDFDCOD  DIM       6           6         1  Doctor Code
PTDFPAID  DIM       1           1         7  Paid Indicator
.                                              Y = Yes, N = No
PTDFADMN  DIM       8           8         8  Admission Number
PTDFMDAM  FORM     12.2         8        16  Amount Paid by Medisave
PTDFCOAM  FORM     12.2         8        24  Amount Collected by Hospital
PTDFADFE  FORM     12.2         8        32  Administration Fee
PTDFSPAR  DIM       16         16        40  Spare variable
.
.End of Record                           56
.
