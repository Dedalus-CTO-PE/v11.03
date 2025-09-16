. V10.05.01 08/09/2014 jt C-274958 Added Organisation Type E for Employer       
. v9.11.001 14/01/2009 ML New Table - External Organisation Keyword Table
. *----------------------------------------------------------------------
. * Include Name  :   PATKEOFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   External Organisation Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkeoaf.dat
. *
. * Index Values  :   KEY22   KEY22   KEY22                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKEOA1   IFILE    SQL, FIXED=50, KEY="U1-1,2-7,8-22"                          
PATKEOA2   IFILE    SQL, FIXED=50, KEY="U8-22,1-1,2-7"                          
PATKEOA3   IFILE    SQL, FIXED=50, KEY="U1-1,8-22,2-7"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTKOTYPE  DIM       1      1        1     Organisation Type                  
.                                         A - External Agencies                
.                                         B - Public Hospitals                 
.                                         C - Schools                          
.                                         D - Residential                      
.                                         E - Employer                         
.                                         I - Indigenous Organisations         
.                                         J - Justice Department               
.                                         L - Lawyers                          
.                                         P - Private Hospitals                
PTKOCODE  DIM       6      6        2     Organisation Code                  
PTKOKWRD  DIM       15     15       8     Key Word                           
PTKOSPAR  DIM       27     27       23    Spare                              
.
.End of Record                      50   
.
