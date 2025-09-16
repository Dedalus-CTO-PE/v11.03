. V5.00     22/05/1991 DWJ New Field - Current Version                       
. V5.01.02  23/05/1991 DWJ Split Release & Version Fields                    
. V5.01. 03 23/05/1991 DWJ Test                                              
. *----------------------------------------------------------------------
. * Include Name  :   SYSFILFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Table Codes Details                    
. *
. * File Type     :   SQL
. *
. * File Name     :   sysfilaf.dat
. *
. * Modifications :   
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSFILA1   IFILE    SQL, FIXED=123, KEY="U1-2,3-4"                              
SYSFILA2   IFILE    SQL, FIXED=123, KEY="U1-2,5-7"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYFISYS   DIM       2      2        1     System Code                        
SYFIFIL   DIM       2      2        3     File Code                          
SYFIID3   DIM       3      3        5     File ID                            
SYFIDES   DIM       35     35       8     File Description                   
SYFIAUD   FORM      1      2        43    Audit 0=No 1=Yes                   
SYFITIO   FORM      1      2        45    I/O Type 0=2/2 1=2/3 2=Ver 4       
SYFIID4   DIM       1      1        47    Seventh Character                  
SYFIASEC  FORM      5      4        48    Audit Sector                       
SYFIAPOS  FORM      3      3        52    Audit Position                     
SYFILOC   FORM      1      2        55    Include Record Locking 0=No 1=Yes  
SYFIREL   DIM       5      5        57    Release                            
SYFIVERS  FORM      3      3        62    Version                            
SYFISPA   DIM       58     58       65    Spare Variable                     
.
.End of Record                      123  
.
