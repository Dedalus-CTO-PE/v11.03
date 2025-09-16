. *****************************************************************************
. *                                                                           *
. * Include Name  : IBACHGFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Common                        *
. *                    Call Charges Table (PABX)                              *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : ibachgaf.dat                                              *
. *                                                                           *
. * Keys          :                                                           *
. *                                                                           *
. *****************************************************************************
.
IBACHGA1  IFILE     SQL, FIXED=30, KEY="U1-3"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
IBCHCHRG  DIM       3        3        1        Charge Type (Cat CY)
IBCHRATE  FORM    3.2        4        4        Rate ($/Pulse)   ie. 0.55 cents
IBCHSPAR  DIM      22       22        8        Spare
.End of Record                       30 
.
