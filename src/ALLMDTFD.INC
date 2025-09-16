. V9.05.001 20/12/2005 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLMDTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Free Format Encounter Notes        
. *
. * File Type     :   SQL
. *
. * File Name     :   allmdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLMDTA1   IFILE    SQL, FIXED=115, KEY="U1-8,9-16,17-19,20-25"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALMDVISN  DIM       8      8        1     Visit Number                       
ALMDENCN  DIM       8      8        9     Encounter Number                   
ALMDTYPE  DIM       3      3        17    Comment Type                       
.                                         001 - Encounter Notes
ALMDNOTE  DIM       6      6        20    Note Number                        
ALMDDATE  DIM       8      8        26    Input Date (CCYYMMDD)              
ALMDTIME  DIM       8      8        34    Input Time (HH:MM:SS)              
ALMDUSER  DIM       10     10       42    Input by WEB User ID (websecaf)    
ALMDOCCG  DIM       3      3        52    Occupational Group WEB User ID     
ALMDDELT  DIM       1      1        55    Delete Indicator (0=No,1=Yes)      
ALMDDDAT  DIM       8      8        56    Delete Date (CCYYMMDD)             
ALMDDTIM  DIM       8      8        64    Delete Time (HH:MM:SS)             
ALMDDUSE  DIM       10     10       72    Delete by WEB User ID (websecaf)   
ALMDDOCC  DIM       3      3        82    Occupat. Group WEB User ID Deleted 
ALMDSPAR  DIM       30     30       85    Spare Variable                     
.
.End of Record                      115  
.
