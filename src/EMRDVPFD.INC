. V9.12.001 22/06/2009 wko                                                      
. *----------------------------------------------------------------------
. * Include Name  :   EMRDVPFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Diverted Patients Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   emrdvpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRDVPA1   IFILE    SQL, FIXED=675, KEY="U1-3,4-11,12-19"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMDVSTCD  DIM       3      3        1     Emergency Site Code                
EMDVDDTE  DIM       8      8        4     Diversion Date (CCYYMMDD)          
EMDVDTIM  DIM       8      8        12    Diversion Time (HH:MM:SS)          
EMDVRDVN  DIM       3      3        20    Reason for Diversion               
EMDVFFL1  DIM       100    100      23    Free Fromat Line 1                 
EMDVFFL2  DIM       100    100      123   Free Format Line 2                 
EMDVFFL3  DIM       100    100      223   Free Format Line 3                 
EMDVFFL4  DIM       100    100      323   Free Format Line 4                 
EMDVFFL5  DIM       100    100      423   Free Format Line 5                 
EMDVUSCR  DIM       10     10       523   User who Created Record            
EMDVDTRC  DIM       8      8        533   Date Record Created                
EMDVTMRC  DIM       8      8        541   Time Record Created                
EMDVUSUR  DIM       10     10       549   User who Updated Record            
EMDVDTRU  DIM       8      8        559   Date Record Updated                
EMDVTMRU  DIM       8      8        567   Time Record Updated                
EMDVSPAR  DIM       100    100      575   Spare                              
.
.End of Record                      675  
.
