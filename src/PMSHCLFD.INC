. V10.12.01 26/04/2018 EC C-0848318 Added index 4 and 5                         
. V5.10.001 05/04/2001 SB  Created FD                                           
. V9.04.001 26/05/2005 DS  Added index 3                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSHCLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   HCP/HCG Practice Link was patgclaf 
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshclaf.dat
. *
. * Index Values  :   KEY20   KEY20   KEY30   KEY36   KEY36                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHCLA1   IFILE    SQL, FIXED=162, KEY="U1-10,11-20"
PMSHCLA2   IFILE    SQL, FIXED=162, KEY="U11-20,1-10"
PMSHCLA3   IFILE    SQL, FIXED=162, KEY="U39-48,1-10,11-20"
PMSHCLA4   IFILE    SQL, FIXED=162, KEY="U90-97,98-105,1-10,11-20"
PMSHCLA5   IFILE    SQL, FIXED=162, KEY="U116-123,124-131,1-10,11-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHLHCPC  DIM       10     10       1     HCP Code (pmshcpaf)                
PMHLHCPR  DIM       10     10       11    HCP Practice (pmshcgaf)            
PMHLTYPE  DIM       1      1        21    HCP Record Type                    
PMHLJPDT  DIM       8      8        22    Date HCP Joined Practice (ccyymmdd)
PMHLLPDT  DIM       8      8        30    Date HCP Left Practice (ccyymmdd)  
PMHLPRMK  DIM       1      1        38    Processed Rec. Marker (1=Processed)
PMHLPRV1  DIM       10     10       39    Provider Number 1                  
PMHLPRV2  DIM       10     10       49    Provider Number 2                  
PMHLPRV3  DIM       10     10       59    Provider Number 3                  
PMHLPRV4  DIM       10     10       69    Provider Number 4                  
PMHLPRV5  DIM       10     10       79    Provider Number 5                  
PMHLSTAT  DIM       1      1        89    Status (0=Active,1=Not Active)     
PMHLCDTE  DIM       8      8        90    Date Record Created (ccyymmdd)     
PMHLCTIM  DIM       8      8        98    Time Record Created (hh:mm:ss)     
PMHLWEBC  DIM       10     10       106   WEB User Id creator (websecaf)     
PMHLLUPD  DIM       8      8        116   Last Update Date (ccyymmdd)        
PMHLLUPT  DIM       8      8        124   Last Update Time (hh:mm:ss)        
PMHLWEBU  DIM       10     10       132   WEB user Id updated (websecaf)     
PMHLSPAR  DIM       20     20       142   Spare Variable                     
.
.End of Record                      162  
.
