. VF.00.001 29/02/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   APSTFBFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Transfer Batch List                
. *
. * File Type     :   SQL
. *
. * File Name     :   apstfbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSTFBA1   IFILE    SQL, FIXED=31, KEY="U1-5"                                   
APSTFBA2   IFILE    SQL, FIXED=31, KEY="U6-10,1-5"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APTFBAT   DIM       5      5        1     Batch Number                       
APTFTRAN  DIM       5      5        6     Transmit Batch Number              
APTFDATE  DIM       8      8        11    Run Date CCYYMMDD                  
APTFSPAR  DIM       12     12       19    Spare Variable                     
.
.End of Record                      31   
.
