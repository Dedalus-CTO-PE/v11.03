. V11.01.01 17/09/2021 JT C-0906222 Created New table for Multiple NEP Values   
. *----------------------------------------------------------------------
. * Include Name  :   PMSNEPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Multiple NEP values                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsnepaf.dat
. *
. * Index Values  :   KEY58   KEY58                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSNEPA1   IFILE    SQL, FIXED=242, KEY="U1-6,7-8,9-18,19-28,29-58"
PMSNEPA2   IFILE    SQL, FIXED=242, KEY="U7-8,1-6,9-18,19-28,29-58"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNECNTR  DIM       6      6        1     Contract ID                        
PMNEVTYP  DIM       2      2        7     Type of Visit                      
.                                         1 - Emergency                        
.                                         2 - Outpatients                      
.                                         3 - Inpatients                       
.                                         9 - Events                           
PMNECODE  DIM       10     10       9     Code Set                           
.                                         Category of Codes                    
PMNEINDC  DIM       10     10       19    Indicator Number                   
PMNEINDV  DIM       30     30       29    Indicator Value                    
PMNENEPP  FORM      14.4   10       59    NEP Price ($)                      
PMNEACTV  DIM       1      1        69    Active/Inactive                    
.                                         Blank or 0 =Active                   
.                                         1 = Inactive                         
PMNECUID  DIM       10     10       70    Record Created By                  
PMNECDAT  DIM       8      8        80    Date Record Created                
PMNECTIM  DIM       8      8        88    Time Record Created                
PMNEUUID  DIM       10     10       96    Record Updated By                  
PMNEUDAT  DIM       8      8        106   Date Record Updated                
PMNEUTIM  DIM       8      8        114   Time Record Updated                
PMNESPAR  DIM       120    120      122   Spare                              
.
.End of Record                      242  
.
