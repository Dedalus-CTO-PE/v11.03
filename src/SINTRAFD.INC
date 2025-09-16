. V6.00.001 25/09/1992 Nez New File                                          
. V6.00.002 30/09/1992 Nez Added ACC field                                   
. *----------------------------------------------------------------------
. * Include Name  :   SINTRAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Stock Transfer Header Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   sintraaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINTRAA1   IFILE    SQL, FIXED=177, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SITANUM   DIM       8      8        1     Transfer Number                    
SITAIRF   DIM       20     20       9     Item History Reference             
SITAREF   DIM       40     40       29    Reference                          
SITADAT   DIM       8      8        69    Date CCYYMMDD                      
SITAPL    FORM      12.2   8        77    Profit/Loss on Transfer Total      
SITAACC   DIM       14     14       85    Profit Loss Ledger/Account         
SITAUD1   DIM       8      8        99    User Def Date 1                    
SITAUD2   DIM       8      8        107   User Def Date 2                    
SITAUR1   DIM       15     15       115   User Def Reference 1               
SITAUR2   DIM       15     15       130   User Def Reference 2               
SITAUY1   DIM       1      1        145   User Def Y/N 1 (0=No)              
SITAUY2   DIM       1      1        146   User Def Y/N 1 (0=No)              
SITASPA   DIM       30     30       147   Spare                              
.
.End of Record                      177  
.
