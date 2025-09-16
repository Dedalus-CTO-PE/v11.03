. V5.09.01 08/12/2000 TT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATIOVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Invoice Breakdown for Overnight    
. *
. * File Type     :   SQL
. *
. * File Name     :   patiovaf.dat
. *
. * Keys          :   KEY 30
. *
. *   ***** Programmer's Note **************************************
. *   *  Any changes made to this FD will also affect PATIO1FD/IO. *
. *   *  Any changes made to this FD will also affect PATIO2FD/IO. *
. *   **************************************************************
. *      V9.12.01  03/09/09 WeeLee Koo    CAR 205303               *
. *                Added Contract ID (PTIOCNID)                    *
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATIOVA1   IFILE    SQL, FIXED=63, KEY="U33-38,1-3,4-9,10-12,13-21,22-24"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTIOCODE  DIM       3      3        1     Claim Code (Cat CL)
PTIOFUND  DIM       6      6        4     Health Fund                        
PTIOTBLT  DIM       3      3        10    Table Type - catg. "HT"            
PTIOCSCD  DIM       9      9        13    Casemix Code                       
PTIOBRCD  DIM       3      3        22    Breakdown Code (Cat FI)
PTIOAMNT  FORM      12.2   8        25    Amount                             
PTIOCNID  DIM       6      6        33    Contract ID
PTIOSPRE  DIM       24     24       39    Spare    
.
.End of Record                      63   
.
