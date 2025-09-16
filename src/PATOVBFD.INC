. V5.09.01 08/12/2000 TT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATOVBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Overnight Revenue Breakdown        
. *
. * File Type     :   SQL
. *
. * File Name     :   patovbaf.dat
. *
. * Keys          :   KEY 30
. *
. *   ***** Programmer's Note **************************************
. *   *  Any changes made to this FD will also affect PATOV1FD/IO. *
. *   *  Any changes made to this FD will also affect PATOV2FD/IO. *
. *   **************************************************************
. *      V9.12.01  03/09/09 WeeLee Koo    CAR 205303               *
. *                Added Contract ID (PTOBCNID)                    *
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATOVBA1   IFILE    SQL, FIXED=63, KEY="U33-38,1-3,4-9,10-12,13-21,22-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTOBCODE  DIM       3      3        1     Claim Code (Cat CL)
PTOBFUND  DIM       6      6        4     Health Fund                        
PTOBTBLT  DIM       3      3        10    Table Type (Cat HT)
PTOBCSCD  DIM       9      9        13    Casemix Code                       
PTOBBRCD  DIM       3      3        22    Breakdown Code (Cat FI)
PTOBAMNT  FORM      12.2   8        25    Amount                             
PTOBCNID  DIM       6      6        33    Contract ID
PTOBSPAR  DIM       24     24       39    Spare
.
.End of Record                      63   
.
