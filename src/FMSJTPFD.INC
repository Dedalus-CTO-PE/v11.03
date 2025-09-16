. *----------------------------------------------------------------------
. * Include Name  :   FMSJTPFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Periodic Journal Posting Details   
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsjtpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSJTPA1   IFILE    SQL, FIXED=45, KEY="U1-1,2-7,8-13,14-16"                    
FMSJTPA2   IFILE    SQL, FIXED=45, KEY="U1-1,2-7,14-16,8-13"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMJTJTY   DIM       1      1        1     Journal Type (Must be P)           
FMJTJID   DIM       6      6        2     Journal ID                         
FMJTPER   DIM       6      6        8     Journal Period (CCYYPP)            
FMJTLNO   DIM       3      3        14    Journal Line Number                
FMJTAMT   FORM      12.2   8        17    Line Period Posting Amount         
FMJTSPAR  DIM       20     20       25    Spare Variable                     
.
.End of Record                      45   
.
