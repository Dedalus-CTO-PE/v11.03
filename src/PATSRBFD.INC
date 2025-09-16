. V5.09.001 19/12/2000 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATSRBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Sameday Revenue Breakdown          
. *
. * File Type     :   SQL
. *
. * File Name     :   patsrbaf.dat
. *
. * Keys          :   KEY 30                                          
. *                                                                    
. *   ***** Programmer's Note **************************************
. *   *  Any changes made to this FD will also affect PATSR1FD/IO. *
. *   *  Any changes made to this FD will also affect PATSR2FD/IO. *
. *   **************************************************************
. *      V9.12.01  03/09/09 WeeLee Koo    CAR 205303               *
. *                Added Contract ID (PTSBCNID)                    *
. *                                                                *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATSRBA1   IFILE    SQL, FIXED=63, KEY="U33-38,1-3,4-9,10-12,13-21,22-24"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTSBCODE  DIM       3      3        1     Claim Code (Cat CL)
PTSBFUND  DIM       6      6        4     Health Fund                        
PTSBTBLT  DIM       3      3        10    Table Type (Cat HT)
PTSBCSCD  DIM       9      9        13    Casemix Code                       
PTSBBRCD  DIM       3      3        22    Breakdown Code (Cat FI)
PTSBAMNT  FORM      12.2   8        25    Amount                    
PTSBCNID  DIM       6      6        33    Contract ID      
PTSBSPAR  DIM       24     24       39    Spare                              
.
.End of Record                      63   
.
