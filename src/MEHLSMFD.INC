. V10.02.01 12/07/2011 PV C-246347 Created FD and IO                            
. *----------------------------------------------------------------------
. * Include Name  :   MEHLSMFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Legal Status Matrix Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   mehlsmaf.dat
. *
. * Index Values  :   KEY6                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHLSMA1   IFILE    SQL, FIXED=168, KEY="U1-3,4-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHLMCRLS  DIM       3      3        1     Current Legal Status               
MHLMVNLS  DIM       3      3        4     Valid Next Legal Status            
MHLMACTV  DIM       1      1        7     Active / Inactive                  
MHLMDINA  DIM       8      8        8     Date Inactive From                 
MHLMCUID  DIM       10     10       16    User Who Created Record            
MHLMCDAT  DIM       8      8        26    Date Record Created                
MHLMCTIM  DIM       8      8        34    Time Record Created                
MHLMIUID  DIM       10     10       42    User Who Made Record Inactive      
MHLMIDAT  DIM       8      8        52    Date Record Inactive               
MHLMITIM  DIM       8      8        60    Time Record Made Inactive          
MHLMSPAR  DIM       100    100      68    Spare                              
.
.End of Record                      168  
.
