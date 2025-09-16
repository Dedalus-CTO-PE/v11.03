. V10.04.01 30/12/2013 PA C-294466 Moved ACTV out of spare variable             
. V10.03.01 02/05/2013 DN  CAR-284693 Added PMTLACTV to spar                    
. V9.04.001 10/06/2005 JH  Created                                              
. V9.04.002 10/06/2005                                                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSTLEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Titles                     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmstleaf.dat
. *
. * Index Values  :   KEY4    KEY34                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSTLEA1   IFILE    SQL, FIXED=85, KEY="U1-4"                                   
PMSTLEA2   IFILE    SQL, FIXED=85, KEY="U5-34,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMTLTITL  DIM       4      4        1     Title Code                         
PMTLDESC  DIM       30     30       5     Description                        
PMTLACTV  DIM       1      1        35    Active Indicator (0=YES,1=NO)      
PMTLSPAR  DIM       49     49       36    Spare                              
.
.End of Record                      85   
.
