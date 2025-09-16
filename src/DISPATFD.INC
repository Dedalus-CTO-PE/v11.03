. V10.02.04 26/07/2011 PV C-239559 Added STIM, ETIM                             
. V10.02.03 17/05/2011 PV C-239559 Changed variable order                       
. V10.02.02 16/05/2011 PV C-239559 Added Index 2                                
. V10.02.01 11/05/2011 PV C-239559 Created Patient / Disaster Header Table      
. *----------------------------------------------------------------------
. * Include Name  :   DISPATFD.INC
. *
. * Function      :   File Def'n Include for Disaster Management                
. *                   Disaster / Patient Header Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   dispataf.dat
. *
. * Index Values  :   KEY17   KEY17                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DISPATA1   IFILE    SQL, FIXED=227, KEY="U1-8,29-37"                            
DISPATA2   IFILE    SQL, FIXED=227, KEY="U29-37,1-8"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DSPTURNO  DIM       8      8        1     Patient UR Number                  
DSPTDIID  DIM       20     20       9     Disaster Identification Number     
DSPTCODE  DIM       9      9        29    Disaster Code                      
DSPTSDAT  DIM       8      8        38    Patient / Disaster Start Date      
DSPTSTIM  DIM       8      8        46    Patient / Disaster Start Time      
DSPTEDAT  DIM       8      8        54    Patient / Disaster End Date        
DSPTETIM  DIM       8      8        62    Patient / Disaster End Time        
DSPTOTCM  DIM       3      3        70    Patient / Disaster Outcome (Cat do)
DSPTFICA  DIM       2      2        73    System Disaster first captured in  
DSPTCUSR  DIM       10     10       75    Web Users Id who Created Record    
DSPTCDAT  DIM       8      8        85    Date Record Created                
DSPTCTIM  DIM       8      8        93    Time Record Created                
DSPTUUSR  DIM       10     10       101   Web Users Id who Updated Record    
DSPTUDAT  DIM       8      8        111   Date Record Updated                
DSPTUTIM  DIM       8      8        119   Time Record Updated                
DSPTSPAR  DIM       100    100      127   Spare                              
.
.End of Record                      227  
.
