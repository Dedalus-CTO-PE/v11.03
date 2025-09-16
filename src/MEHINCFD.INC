. V9.06.008 11/05/2006 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   MEHINCFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   MH Information National Collection 
. *
. * File Type     :   SQL
. *
. * File Name     :   mehincaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHINCA1   IFILE    SQL, FIXED=175, KEY="U1-4"                                  
MEHINCA2   IFILE    SQL, FIXED=175, KEY="U25-32,1-4"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHINSEID  DIM       4      4        1     Selection ID                       
MHINDESC  DIM       20     20       5     Selection Description              
MHINFDAT  DIM       8      8        25    From Date (CCYYMMDD)               
MHINTDAT  DIM       8      8        33    To Date (CCYYMMDD)                 
MHINRECN  FORM      6      4        41    Total records in batch             
MHINERRN  FORM      6      4        45    Total Errors in batch              
MHINCUID  DIM       10     10       49    WEB User ID created (websecaf)     
MHINCDAT  DIM       8      8        59    Date Record created (ccyymmdd)     
MHINCTIM  DIM       8      8        67    Time Record created (hh:mm:ss)     
MHINUUID  DIM       10     10       75    WEB User ID updated (websecaf)     
MHINUDAT  DIM       8      8        85    Date Record updated (ccyymmdd)     
MHINUTIM  DIM       8      8        93    Time Record updated (hh:mm:ss)     
MHINFILN  DIM       12     12       101   Extract Filename                   
MHINEFLG  DIM       2      2        113   Extract Flag 0=Extracted 1=Processd
MHINSPAR  DIM       60     60       115   Spare Variable                     
.
.End of Record                      175  
.
