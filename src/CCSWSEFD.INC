. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSWSEFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Casemix Extract Web Security       
. *
. * File Type     :   SQL
. *
. * File Name     :   ccswseaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSWSEA1   IFILE    SQL, FIXED=79, KEY="U1-4,5-14"                              
CCSWSEA2   IFILE    SQL, FIXED=79, KEY="U5-14,1-4"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCWSEID   DIM       4      4        1     Extract ID                         
CCWSWPC   DIM       10     10       5     Web User ID                        
CCWSSLV   DIM       1      1        15    Start Level                        
CCWSSCD   DIM       10     10       16    Start Code                         
CCWSTEM   DIM       3      3        26    Template                           
CCWSSPA   DIM       50     50       29    Spare                              
.
.End of Record                      79   
.
