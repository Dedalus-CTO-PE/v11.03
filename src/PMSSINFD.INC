. V6.09.001 21/11/2000 CS  Sameday Invoice Breakdown                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSSINFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Sameday Invoice Breakdown          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssinaf.dat
. *
. * Keys          :   KEY 30
. *
. *   ***** Programmer's Note **************************************
. *   *  Any changes made to this FD will also affect PMSSI1FD/IO. *
. *   *  Any changes made to this FD will also affect PMSSI2FD/IO. *
. *   **************************************************************
. *      V9.12.01  03/09/09 WeeLee Koo    CAR 205303               *
. *                Added Contract ID (PTSICNID)                    *
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSINA1   IFILE    SQL, FIXED=63, KEY="U33-38,1-3,4-9,10-12,13-21,22-24"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSICODE  DIM       3      3        1     Claim Code (Cat CL)
PMSIFUND  DIM       6      6        4     Health Fund                        
PMSITBLT  DIM       3      3        10    Table Type (Cat HT)
PMSICSCD  DIM       9      9        13    Casemix Code                       
PMSIBKCD  DIM       3      3        22    Breakdown Codes (Cat FI)
PMSIAMNT  FORM      12.2   8        25    Amount
PMSICNID  DIM       6      6        33    Contract ID                    
PMSISPAR  DIM       24     24       39    Spare
.
.End of Record                      63   
.
