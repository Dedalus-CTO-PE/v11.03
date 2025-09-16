. V6.05.001 22/02/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESPMPFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results PIT Ward Mapping Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   respmpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESPMPA1   IFILE    SQL, FIXED=69, KEY="U1-3,4-35"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REPMLAB   DIM       3      3        1     Laboratory                         
REPMLWD   DIM       32     32       4     Laboratory Ward                    
REPMHWD   DIM       3      3        36    Hospital Ward                      
REPMSPA   DIM       30     30       39    Spare                              
.
.End of Record                      69   
.
