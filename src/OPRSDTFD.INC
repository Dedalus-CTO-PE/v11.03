. V10.10.01 30/05/2017 SA C-0837660 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   OPRSDTFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Staff Details                      
. *
. * File Type     :   SQL
. *
. * File Name     :   oprsdtaf.dat
. *
. * Index Values  :   KEY89                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRSDTA1   IFILE    SQL, FIXED=174, KEY="U1-10,11-11,12-13,14-73,74-81,82-89"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPSDUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPSDTNUM  DIM       1      1        11    Team Number
OPSDSTYP  DIM       2      2        12    Staff Type                         
.                                         0 = Operating Surgeon                
.                                         1 = Doctor                           
.                                         2 = Nurse                            
.                                         3 = Other                            
OPSDSNAM  DIM       60     60       14    Staff Name (Free Format)           
OPSDSDAT  DIM       8      8        74    Start Date (ccyymmdd)              
OPSDSTIM  DIM       8      8        82    Start Time (hh:mm:ss)              
OPSDEDAT  DIM       8      8        90    End Date (ccyymmdd)                
OPSDETIM  DIM       8      8        98    End Time (hh:mm:ss)                
OPSDSLEV  DIM       3      3        106   Supervisor Level (Cat OS)          
OPSDSTCC  DIM       3      3        109   Staff Category Code                
.                                         OP = Doctor Category                 
.                                         ON = Nurse Category                  
.                                         OF = Other Category                  
OPSDFICT  DIM       1      1        112   Final Instrument Count             
OPSDUYN1  DIM       1      1        113   User Defined Y/N 1                 
OPSDSPAR  DIM       60     60       114   Spare Variable                     
.
.End of Record                      174  
.
