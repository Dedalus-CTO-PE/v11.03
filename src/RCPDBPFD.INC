. V10.14.01 21/03/2019 JT C-0857392 Changed Transaction number from DIM3 to DIM5
. V9.03.000 14/01/2004 LV  Created new
. *----------------------------------------------------------------------
. * Include Name  :   RCPDBPFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Acc Rec Debtor invoice item payment
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpdbpaf.dat
. *
. * Index Values  :   KEY32   KEY32                                          
. *   ***** Programmer's Note **************************************
. *   *  Any changes made to this FD may also affect TMPDBPFD/IO.  *
. *   **************************************************************
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPDBPA1   IFILE    SQL, FIXED=91, KEY="U1-12,13-17,18-29,30-32"
RCPDBPA2   IFILE    SQL, FIXED=91, KEY="U18-29,30-32,1-12,13-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCDBRECN  DIM       12     12       1     Receipt Number                     
RCDBTCNT  DIM       5      5        13    Transacation Number                
RCDBINVN  DIM       12     12       18    Invoice Number                     
RCDBILNE  DIM       3      3        30    Invoice Line Number                
RCDBPAMT  FORM      12.2   8        33    Payment Amount                     
RCDBSPAR  DIM       50     50       41    Spare                              
.
.End of Record                      91   
.
