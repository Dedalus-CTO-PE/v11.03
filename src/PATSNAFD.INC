. *****************************************************************************
. *                                                                           *
. * Include Name  : PATSNAFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Safety Net Amount (Pharmacy)                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patsnaaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 12                                                    *
. *                                                                           *
. *****************************************************************************
.
PATSNAA1  IFILE     SQL, FIXED=47, KEY="U1-8,9-12"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
PTSNURNO  DIM       8        8        1        U/R Number
PTSNYEAR  DIM       4        4        9        Year (ccyy)   
PTSNAMNT  FORM    4.2        4       13        Amount (Safety Net)
PTSNSPAR  DIM      30       30       17        Spare
.End of Record                       47 
.
