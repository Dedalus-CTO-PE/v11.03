. V11.02.01 15/03/2022 EC C-0907640 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   EMRECHFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Expected Patient Comments Header   
. *
. * File Type     :   SQL
. *
. * File Name     :   emrechaf.dat
. *
. * Index Values  :   KEY19                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRECHA1   IFILE    SQL, FIXED=109, KEY="U1-10,11-13,14-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMEHUNIQ  DIM       10     10       1     Unique Counter                     
EMEHTYPE  DIM       3      3        11    Comment Type                       
.                                         001 - ED Expected Patient Notes      
EMEHNOTE  DIM       6      6        14    Note Number                        
EMEHCDAT  DIM       8      8        20    Input Date (CCYYMMDD)              
EMEHCTIM  DIM       8      8        28    Input Time (HH:MM:SS)              
EMEHCUID  DIM       10     10       36    Input by WEB User ID (websecaf)    
EMEHOCCG  DIM       3      3        46    Occupational Group WEB User ID     
EMEHDELT  DIM       1      1        49    Delete Indicator (0=No,1=Yes)      
EMEHDDAT  DIM       8      8        50    Delete Date (CCYYMMDD)             
EMEHDTIM  DIM       8      8        58    Delete Time (HH:MM:SS)             
EMEHDUID  DIM       10     10       66    Delete by WEB User ID (websecaf)   
EMEHDOCC  DIM       3      3        76    Occupational Group WEB User ID Dele
EMEHSPAR  DIM       30     30       79    Spare                              
.
.End of Record                      109  
.
