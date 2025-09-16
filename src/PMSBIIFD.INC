. V9.03.001 02/10/2003 LV  Created New                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSBIIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bulk Invoice List Index            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbiiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBIIA1   IFILE    SQL, FIXED=90, KEY="U1-4,5-12"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBISEID  DIM       4      4        1     Selection ID.                      
PMBIVISN  DIM       8      8        5     Visit Number                       
PMBIURNO  DIM       8      8        13    UR Number                          
PMBIADDT  DIM       8      8        21    Admission Date                     
PMBIDSDT  DIM       8      8        29    Discharged Date                    
PMBIIFDT  DIM       8      8        37    Invoice From Date                  
PMBIITDT  DIM       8      8        45    Invoice To Date                    
PMBIIAMT  FORM      6.2    5        53    Invoice Amount                     
PMBIPDRG  DIM       9      9        58    Provisional DRG/ICD10              
PMBICFLG  DIM       1      1        67    Coding Completed                   
PMBISTAT  DIM       1      1        68    Delete Status Indicator            
PMBIPRNT  DIM       1      1        69    Already Printed                    
PMBISPAR  DIM       20     20       70    Spare                              
.
.End of Record                      90   
.
