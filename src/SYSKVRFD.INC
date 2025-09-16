. V6.00.001 05/06/1991 BGA Regenerated                                       
. *----------------------------------------------------------------------
. * Include Name  :   SYSKVRFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Keyin Validation Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   syskvraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSKVRA1   IFILE    SQL, FIXED=83, KEY="U1-2,3-4,5-5"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYKVSYS   DIM       2      2        1     System                             
SYKVFIL   DIM       2      2        3     File                               
SYKVRID   DIM       1      1        5     Routine I.D.                       
SYKVKFLD  DIM       4      4        6     Keyin Field                        
SYKVKDES  DIM       20     20       10    Description                         
SYKVKTYP  FORM      1      2        30    Keyin Type                         
SYKVIDX   DIM       1      1        32    Index                              
SYKVHID   DIM       1      1        33    Help Routine ID                    
SYKVSPAR  DIM       49     49       34    Spare                              
.
.End of Record                      83   
.
