. V10.02.02 26/07/2011 PV C-239559 Added STIM, ETIM, AICD                       
. V10.02.01 11/05/2011 PV C-239559 Created Disaster Code Master Table           
. *----------------------------------------------------------------------
. * Include Name  :   DISMASFD.INC
. *
. * Function      :   File Def'n Include for Disaster Management                
. *                   Disaster Code Master Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   dismasaf.dat
. *
. * Index Values  :   KEY9                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DISMASA1   IFILE    SQL, FIXED=258, KEY="U1-9"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DSMACODE  DIM       9      9        1     Disaster Code                      
DSMADESC  DIM       60     60       10    Disaster Description               
DSMASDAT  DIM       8      8        70    Disaster Start Date                
DSMASTIM  DIM       8      8        78    Disaster Start Time                
DSMAEDAT  DIM       8      8        86    Disaster End Date                  
DSMAETIM  DIM       8      8        94    Disaster End Time                  
DSMAAICD  DIM       3      3        102   Alternate Id Code for this Disaster
DSMAACTV  DIM       1      1        105   Active/Inactive/Pending            
DSMACUSR  DIM       10     10       106   Web Users Id who Created Record    
DSMACDAT  DIM       8      8        116   Date Record Created                
DSMACTIM  DIM       8      8        124   Time Record Created                
DSMAUUSR  DIM       10     10       132   Web Users Id who Updated Record    
DSMAUDAT  DIM       8      8        142   Date Record Updated                
DSMAUTIM  DIM       8      8        150   Time Record Updated                
DSMASPAR  DIM       100    100      158   Spare                              
.
.End of Record                      258  
.
