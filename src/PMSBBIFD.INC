. V9.09.001 25/9062007 EC  Changed PMBBAMBS to admission type CAR 143038
. V9.08.001 17/05/2007 EC  Added PMBBWARD to PMBBCARE CAR 133432             
. *----------------------------------------------------------------------
. * Include Name  :   PMSBBIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bulk Backdate Invoice              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbbiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBBIA1   IFILE    SQL, FIXED=85, KEY="U1-4,5-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBBSEID  DIM       4      4        1     Selection ID.                      
PMBBVISN  DIM       8      8        5     Visit number                       
PMBBURNO  DIM       8      8        13    UR Number                          
PMBBADDT  DIM       8      8        21    Admission date                     
PMBBIFDT  DIM       8      8        29    Invoice from                       
PMBBITDT  DIM       8      8        37    Invoice to                         
PMBBAMNT  FORM      12.2   8        45    Invoice Amount                     
PMBBPDRG  DIM       9      9        53    Provisional DRG/ICD10              
PMBBCFLG  DIM       1      1        62    Coding completed                   
PMBBSTAT  DIM       1      1        63    Delete status indicator            
PMBBPRNT  DIM       1      1        64    Already Printed                    
PMBBWARD  DIM       3      3        65    Ward                               
PMBBAMBS  DIM       9      9        68    Admission Type (Cat A)            
PMBBCARE  DIM       3      3        77    Care Class (Cat CC)                
PMBBSPAR  DIM       5      5        80    Spare                              
.
.End of Record                      85   
.
