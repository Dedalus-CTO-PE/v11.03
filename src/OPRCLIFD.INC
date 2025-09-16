. V10.04.01 02/01/2014 PA C-295316 Moved Active Flag out of Spare Variable      
. V10.03.01 03/10/2013 Patrick Adair       CAR 284134                           
.                                                                               
. *----------------------------------------------------------------------
. * Include Name  :   OPRCLIFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Clinic File                
. *
. * File Type     :   SQL
. *
. * File Name     :   oprcliaf.dat
. *
. * Index Values  :   KEY6    KEY36                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRCLIA1   IFILE    SQL, FIXED=60, KEY="U1-6"                                   
OPRCLIA2   IFILE    SQL, FIXED=60, KEY="U7-36,1-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPCLCLIN  DIM       6      6        1     Clinic Code                        
OPCLDESC  DIM       30     30       7     Clinic Description                 
OPCLDOCT  DIM       6      6        37    Doctor Code                        
OPCLCAT   DIM       3      3        43    Group Code (Cat YG)                
OPCLACTV  DIM       1      1        46    Active Flag                        
.                                         Active = 0 or blank                  
.                                         Inactive = 1                         
OPCLSPAR  DIM       13     13       47    Spare                              
.
.End of Record                      60   
.
