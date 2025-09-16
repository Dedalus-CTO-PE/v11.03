. *****************************************************************************
. *                                                                           *
. * Include Name  : IBAPBXFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Common                        *
. *                    Call / Repository (PABX)                               *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : ibapabxf.dat                                              *
. *                                                                           *
. * Keys          :                                                           *
. *                                                                           *
. *****************************************************************************
.
IBAPBXA1  IFILE     SQL, FIXED=100, KEY="U1-4,5-12,13-20"
IBAPBXA2  IFILE     SQL, FIXED=100, KEY="U5-12,13-20,1-4"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
IBPBEXTN  DIM       4        4        1        Extension Number
IBPBSDAT  DIM       8        8        5        Call Start Date    
IBPBSTIM  DIM       8        8       13        Call Start Time
IBPBEDAT  DIM       8        8       21        Call End Date
IBPBETIM  DIM       8        8       29        Call End Time
IBPBPHNO  DIM      32       32       37        Phone Number Called
IBPBPULS  FORM      4        3       69        Number of Pulses
IBPBBILD  DIM       8        8       72        Billed Date 
IBPBSPAR  DIM      20       20       80        Spare
.End of Record                      100 
.
