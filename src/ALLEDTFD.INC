. V10.00.01 08/04/2010 EC  Created FD CAR 192466                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLEDTFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Free Format Equipment Notes        
. *
. * File Type     :   SQL
. *
. * File Name     :   alledtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLEDTA1   IFILE    SQL, FIXED=115, KEY="U1-8,9-16,17-19,20-25"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALEDURNO  DIM       8      8        1     U/R Number                         
ALEDLOAN  DIM       8      8        9     Loan Number                        
ALEDTYPE  DIM       3      3        17    Comment Type                       
.                                         001 - Equipment Notes                
ALEDNOTE  DIM       6      6        20    Note Number                        
ALEDDATE  DIM       8      8        26    Input Date (CCYYMMDD)              
ALEDTIME  DIM       8      8        34    Input Time (HH:MM:SS)              
ALEDUSER  DIM       10     10       42    Input by WEB User ID (websecaf)    
ALEDOCCG  DIM       3      3        52    Occupational Group WEB User ID     
ALEDDELT  DIM       1      1        55    Delete Indicator (0=No, 1=Yes)     
ALEDDDAT  DIM       8      8        56    Delete Date (CCYYMMDD)             
ALEDDTIM  DIM       8      8        64    Delete Time (HH:MM:SS)             
ALEDDUSE  DIM       10     10       72    Delete by WEB User ID (websecaf)   
ALEDDOCC  DIM       3      3        82    Occupat. Group WEB User ID Delete  
ALEDSPAR  DIM       30     30       85    Spare                              
.
.End of Record                      115  
.
