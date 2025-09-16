. rf.09.001 27/04/2001 DM                                                    
. *----------------------------------------------------------------------
. * Include Name  :   FMSBZAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   Budget Temporary Input Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsbzaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSBZAA1   IFILE    SQL, FIXED=78, KEY="U1-2,3-14"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMBZPORT  DIM       2      2        1     User Port                          
FMBZACCT  DIM       12     12       3     Account Code                       
FMBZAMT   FORM      12.2   8        15    Budget Amount                      
FMBZDESC  DIM       35     35       23    Account Description                
FMBZSPA   DIM       20     20       58                                       
.
.End of Record                      78   
.
