. V9.02.001 12/10/2002 EC  Added WTVWTELE                                       
. *----------------------------------------------------------------------
. * Include Name  :   WATVWLFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Valid Waiting Lists                
. *
. * File Type     :   SQL
. *
. * File Name     :   watvwlaf.dat
. *
. * Index Values  :   KEY9    KEY9                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATVWLA1   IFILE    SQL, FIXED=99, KEY="U1-6,7-9"                               
WATVWLA2   IFILE    SQL, FIXED=99, KEY="U7-9,1-6"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTVWCONS  DIM       6      6        1     Consultant                         
WTVWLTYP  DIM       3      3        7     List Type (Cat WU)                 
WTVWDESC  DIM       40     40       10    Description                        
WTVWWTEL  FORM      3      3        50    Maximum Waiting Time - Elective    
WTVWWTDC  FORM      3      3        53    Maximum Waiting Time - Day Case    
WTVWSTAT  FORM      1      2        56    Status   0=Active,  1=Inactive     
WTVWTELE  DIM       20     20       58    Telephone Number                   
WTVWSPAR  DIM       21     21       78    Spare                              
.
.End of Record                      99   
.
