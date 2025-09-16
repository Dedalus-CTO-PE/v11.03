. V10.14.01 19/02/2019 TN C-0869882 Added PMRLHDPE using Spare variable         
. V10.04.01 30/12/2013 PA  CAR-294465 Moved PMRLACTV out of spare               
. V10.03.01 02/05/2013 DN  CAR-284693 Added PMRLACTV to spare                   
. V9.04.001 10/06/2005 JH  Created                                              
. *----------------------------------------------------------------------
. * Include Name  :   PMSRELFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Relationship File                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrelaf.dat
. *
. * Index Values  :   KEY10   KEY40                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRELA1   IFILE    SQL, FIXED=91, KEY="U1-10"
PMSRELA2   IFILE    SQL, FIXED=91, KEY="U11-40,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRLRELS  DIM       10     10       1     Relationship Code                  
PMRLDESC  DIM       30     30       11    Description                        
PMRLACTV  DIM       1      1        41    Active Indicator (0=YES,1=NO)      
PMRLHDPE  DIM       10     10       42    HDP Equivalent                     
PMRLSPAR  DIM       39     39       52    Spare                              
.
.End of Record                      91   
.
