. V10.13.01 25/07/2018 RPH C-0848506 Extended PRTMDOCT from 6 to 10             
. V9.09.001 03/09/2007 EC Created FD CAR 146075                                 
. *----------------------------------------------------------------------
. * Include Name  :   PRITMPFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Temporary Item File                
. *
. * File Type     :   SQL
. *
. * File Name     :   pritmpaf.dat
. *
. * Index Values  :   KEY35                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRITMPA1   IFILE    SQL, FIXED=186, KEY="U1-8,9-14,15-24,25-27,28-35"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRTMUNIQ  DIM       8      8        1     Unique Identifier                  
PRTMPRAC  DIM       6      6        9     Medical Practice Code              
PRTMDOCT  DIM       10     10       15    Service Doctor                     
PRTMPIND  DIM       3      3        25    Patient Indicator (Cat GI)         
PRTMCNTR  DIM       8      8        28    Counter                            
PRTMDATE  DIM       8      8        36    Date (CCYYMMDD)                    
PRTMTIME  DIM       8      8        44    Time (HH:MM:SS)                    
PRTMITYP  DIM       1      1        52    Item Type                          
PRTMITEM  DIM       9      9        53    Item                               
PRTMSUBI  DIM       3      3        62    Sub Item                           
PRTMDESC  DIM       30     30       65    Description                        
PRTMTEST  FORM      1      2        95    Pathology Flag                     
PRTMS4FL  FORM      1      2        97    S4B3 Flag                          
PRTMGSTA  FORM      1      2        99    GST Applicable                     
PRTMGSTC  DIM       6      6        101   GST Code                           
PRTMQUNT  FORM      3      3        107   Quantity                           
PRTMCAMT  FORM      12.2   8        110   Calculated Amount                  
PRTMIAMT  FORM      12.2   8        118   Item Amount                        
PRTMSPAR  DIM       60     60       126   Spare                              
.
.End of Record                      186  
.
