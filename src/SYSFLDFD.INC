. *----------------------------------------------------------------------
. * Include Name  :   SYSFLDFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Field Definition Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   sysfldaf.dat
. *
. * Modifications :   
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSFLDA1   IFILE    SQL, FIXED=139, KEY="U1-2,3-4,5-8"                          
SYSFLDA2   IFILE    SQL, FIXED=139, KEY="U1-2,3-4,9-12"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYFLSYS   DIM       2      2        1     System                             
SYFLFIL   DIM       2      2        3     File                               
SYFLNUM   DIM       4      4        5     Field Number                       
SYFLFLD   DIM       4      4        9     Field Code                         
SYFLDES   DIM       35     35       13    Field Description                  
SYFLTYP   FORM      1      2        48    Field Type 0=Dim 1=Form            
SYFLLEN   FORM      3.1    4        50    Field Length (TBL)                 
SYFLPHY   FORM      3      3        54    Physical Length                    
SYFLSTR   FORM      4      3        57    Start Position                     
SYFLRED   FORM      1      2        60    Redefined 0=No 1=Yes               
SYFLV4N   DIM       8      8        62    Version 4 Field Name               
SYFLSPA   DIM       69     69       70    Spare                              
.
.End of Record                      139  
.
