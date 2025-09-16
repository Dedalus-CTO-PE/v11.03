. *****************************************************************************
. *                                                                           *
. * Include Name  : IBAEXTFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Common                        *
. *                    Call Extension Table (PABX)                            *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : ibaextaf.dat                                              *
. *                                                                           *
. * Keys          :                                                           *
. *                                                                           *
. *****************************************************************************
.
IBAEXTA1  IFILE     SQL, FIXED=69, KEY="U1-4"
IBAEXTA2  IFILE     SQL, FIXED=69, KEY="U30-37,1-4"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
IBEXEXTN  DIM       4        4        1        Extension Number
IBEXDESC  DIM      20       20        5        Description
IBEXCHRG  DIM       3        3       25        Charge Type  (Cat "CY")
IBEXETYP  FORM      2        2       28        Extension Type
.                                                1=Ward/Bed
.                                                2=Tenant
.                                                3=Accounts Receivable (Doctor)
.                                                4=Ward Only (no charging)
IBEXDEBT  DIM       8        8       30        Debtor code (Account Receivable)
IBEXPTYP  DIM       3        3       38        Phone Type (Cat "XV")
IBEXLEVL  DIM       3        3       41        Access Level Enable (Cat "XW")
IBEXSRVL  DIM       3        3       44        Service Level (Cat "XX")
DIBEXTEN  DIM       2        2       47        Tenant Number
IBEXLVLD  DIM       3        3       49        Access Level Disable (Cat "XW")
IBEXSPAR  DIM      17       17       52        Spare
.End of Record                       69 
IBEXTENN  FORM      2 
