. V6.00.001 06/01/1993                                                       
. *----------------------------------------------------------------------
. * Include Name  :   AMSSTPFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Stocktake Processing         
. *
. * File Type     :   SQL
. *
. * File Name     :   amsstpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AMSSTPA1   IFILE    SQL, FIXED=230, KEY="U1-5,6-8,9-14,15-16,17-28"             
AMSSTPA2   IFILE    SQL, FIXED=230, KEY="U15-16,17-28,1-5"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AMSTSTK   DIM       5      5        1     Stocktake Number                   
AMSTBLD   DIM       3      3        6     Building                           
AMSTLOC   DIM       6      6        9     Location                           
AMSTREG   DIM       2      2        15    Register                           
AMSTASS   DIM       12     12       17    Asset                              
AMSTGDT   DIM       8      8        29    Generated Date                     
AMSTPDT   DIM       8      8        37    Date Check                         
AMSTCBY   DIM       10     10       45    Checked By                         
AMSTCOM   DIM       30     30       55    Comment                            
AMSTLCM   DIM       30     30       85    Location Comment                   
AMSTPOP   DIM       4      4        115   Process Operator                   
AMSTPDA   DIM       8      8        119   Process Date                       
AMSTPTM   DIM       5      5        127   Process Time                       
AMSTUR1   DIM       30     30       132   User Def Ref 1                     
AMSTUR2   DIM       30     30       162   User Def Ref 2                     
AMSTUD1   DIM       8      8        192   User Def Date 1                    
AMSTUD2   DIM       8      8        200   User Def Date 2                    
AMSTUY1   DIM       1      1        208   User Def Y/N 1                     
AMSTUY2   DIM       1      1        209   User Def Y/N 2                     
AMSTSPA   DIM       20     20       210   Spare                              
.
.End of Record                      230  
.
