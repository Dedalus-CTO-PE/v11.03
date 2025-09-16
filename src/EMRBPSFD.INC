. V10.05.01 06/08/2014 DN C-297703 Added EMBPAHCP, EMBPFFNA, EMBPFFCA           
. V9.12.001 02/06/2009 wko Created FD for CAR 197930
. *----------------------------------------------------------------------
. * Include Name  :   EMRBPSFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Pre By Pass/ By Pass Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   emrbpsaf.dat
. *
. * Index Values  :   KEY20   KEY20                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRBPSA1   IFILE    SQL, FIXED=795, KEY="U1-3,4-4,5-12,13-20"                   
EMRBPSA2   IFILE    SQL, FIXED=795, KEY="U1-3,5-12,13-20,4-4"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMBPSTCD  DIM       3      3        1     Emergency Site Code                
EMBPPTYP  DIM       1      1        4     By Pass Type(0=Pre-ByPass,1=Bypass)
EMBPONDT  DIM       8      8        5     On Pre/By Pass Date (CCYYMMDD)     
EMBPONTM  DIM       8      8        13    On Pre/by Pass Time (HH:MM:SS)     
EMBPRSON  DIM       3      3        21    Reason for Pre/By Pass             
EMBPOFDT  DIM       8      8        24    Off Pre/By Pass Date (CCYYMMDD)    
EMBPOFTM  DIM       8      8        32    Off Pre/By Pass Time (HH:MM:SS)    
EMBPFFL1  DIM       100    100      40    Free Format Line 1                 
EMBPFFL2  DIM       100    100      140   Free Format Line 2                 
EMBPFFL3  DIM       100    100      240   Free Format Line 3                 
EMBPFFL4  DIM       100    100      340   Free Format Line 4                 
EMBPFFL5  DIM       100    100      440   Free Format Line 5                 
EMBPNAMB  DIM       3      3        540   No of Ambulances(manually recorded)
EMBPUSCR  DIM       10     10       543   User who Created Record            
EMBPDTRC  DIM       8      8        553   Date Record Created                
EMBPTMRC  DIM       8      8        561   Time Record Created                
EMBPUSUR  DIM       10     10       569   User who Updated Record            
EMBPDTRU  DIM       8      8        579   Date Record Updated                
EMBPTMRU  DIM       8      8        587   Time Record Updated                
EMBPAHCP  DIM       10     10       595   Active HCP for Doctor authorisation
EMBPFFNA  DIM       45     45       605   Free Format for Nurse authorisation
EMBPFFCA  DIM       45     45       650   Free Format for Co-ordinator author
EMBPSPAR  DIM       100    100      695   Spare                              
.
.End of Record                      795  
.
