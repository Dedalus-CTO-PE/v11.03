. V10.02.03 30/05/2011 PV C-239582 Added second index                           
. V10.02.02 17/05/2011 PV C-239559 Removed Disaster ID Number                   
. V10.02.01 11/05/2011 PV C-239559 Created Patient / Disaster Linked Table      
. *----------------------------------------------------------------------
. * Include Name  :   DISPTLFD.INC
. *
. * Function      :   File Def'n Include for Disaster Management                
. *                   Disaster / Patient Linked Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   disptlaf.dat
. *
. * Index Values  :   KEY25   KEY25                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DISPTLA1   IFILE    SQL, FIXED=178, KEY="U1-8,9-17,18-25"                       
DISPTLA2   IFILE    SQL, FIXED=178, KEY="U9-17,1-8,18-25"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DSPLURNO  DIM       8      8        1     Patient UR Number                  
DSPLCODE  DIM       9      9        9     Disaster Code                      
DSPLVISN  DIM       8      8        18    Linked Visit Number                
DSPLCUSR  DIM       10     10       26    Web Users Id who Created Record    
DSPLCDAT  DIM       8      8        36    Date Record Created                
DSPLCTIM  DIM       8      8        44    Time Record Created                
DSPLUUSR  DIM       10     10       52    Web Users Id who Updated Record    
DSPLUDAT  DIM       8      8        62    Date Record Updated                
DSPLUTIM  DIM       8      8        70    Time Record Created                
DSPLSPAR  DIM       100    100      78    Spare                              
.
.End of Record                      178  
.
