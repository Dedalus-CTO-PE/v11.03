. V10.00.01 15/04/2010 EC  Created FD CAR 218982                             
. *----------------------------------------------------------------------
. * Include Name  :   WATMHDFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Comments Header       
. *
. * File Type     :   SQL
. *
. * File Name     :   watmhdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATMHDA1   IFILE    SQL, FIXED=138, KEY="U1-8,9-17,18-19,20-22,23-28"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTMHURNO  DIM       8      8        1     U/R Number                         
WTMHPROC  DIM       9      9        9     Procedure Code                     
WTMHPCNT  DIM       2      2        18    Procedure Count                    
WTMHTYPE  DIM       3      3        20    Comment Type                       
.                                         001 - Waiting List Comments          
.                                         002 - Pre Admission Comments         
WTMHNOTE  DIM       6      6        23    Note Number                        
WTMHDATE  DIM       8      8        29    Input Date (CCYYMMDD)              
WTMHTIME  DIM       8      8        37    Input Time (HH:MM:SS)              
WTMHUSER  DIM       10     10       45    Input by WEB User ID (websecaf)    
WTMHOCCG  DIM       3      3        55    Occupational Group WEB User ID     
WTMHDELT  DIM       1      1        58    Delete Indicator (0=No,1=Yes)      
WTMHDDAT  DIM       8      8        59    Delete Date (CCYYMMDD)             
WTMHDTIM  DIM       8      8        67    Delete Time (HH:MM:SS)             
WTMHDUSE  DIM       10     10       75    Delete by WEB User ID (websecaf)   
WTMHDOCC  DIM       3      3        85    Occupational Group WEB User ID Dele
WTMHSPAR  DIM       50     50       88    Spare                              
.
.End of Record                      138  
.
