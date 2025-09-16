. VF.01.002 14/11/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   FMSBASFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   BAS Code Transaction Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsgyyyy.dat
. *                   yyyy = Financial Year
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBASA1   IFILE    SQL, FIXED=44, KEY="U1-5,6-10"                              
FMSBASA2   IFILE    SQL, FIXED=44, KEY="U11-12,13-15,16-23,1-5,6-10"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBSBAT   DIM       5      5        1     Batch Number                       
FMBSUNIQ  DIM       5      5        6     Unique Identifier                  
FMBSLEDG  DIM       2      2        11    Ledger Code                        
FMBSBASC  DIM       3      3        13    BAS Code                           
FMBSPDAT  DIM       8      8        16    Posting Date (CCYYMMDD)            
FMBSSPAR  DIM       20     20       24    Spare Variable                     
.
.End of Record                      44   
.
