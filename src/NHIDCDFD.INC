. V5.02.001 25/09/1994 BGA Create File                                       
. *----------------------------------------------------------------------
. * Include Name  :   NHIDCDFD.INC
. *
. * Function      :   File Def'n Include for NZ Health Interface        
. *                   Donor Codes                        
. *
. * File Type     :   SQL
. *
. * File Name     :   nhidcdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NHIDCDA1   IFILE    SQL, FIXED=50, KEY="U1-1"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHDCDCD   DIM       1      1        1     Donor Code                         
NHDCDES   DIM       25     25       2     Description                        
NHDCIBA   DIM       3      3        27    IBA Donor Code                     
NHDCSPA   DIM       20     20       30    Spare                              
.
.End of Record                      50   
.
