. V10.15.01 23/01/2020 EC C-0875124 Added index 7                               
. V10.03.02 15/05/2013 PA C-285158 Added New Status Type - Booked               
. V10.03.01 31/01/2013 JP C-280425 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSEHBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   eAdmission Pending Header Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsehbaf.dat
. *
. * Index Values  :   KEY20   KEY32   KEY37   KEY32   KEY28   KEY40   KEY32  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEHBA1   IFILE    SQL, FIXED=425, KEY="U1-20"
PMSEHBA2   IFILE    SQL, FIXED=425, KEY="U38-45,62-64,37-37,1-20"
PMSEHBA3   IFILE    SQL, FIXED=425, KEY="U46-53,38-45,37-37,1-20"
PMSEHBA4   IFILE    SQL, FIXED=425, KEY="U62-64,38-45,37-37,1-20"
PMSEHBA5   IFILE    SQL, FIXED=425, KEY="U54-61,1-20"
PMSEHBA6   IFILE    SQL, FIXED=425, KEY="U176-195,1-20"
PMSEHBA7   IFILE    SQL, FIXED=425, KEY="U21-28,62-64,37-37,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHBUNIQ  DIM       20     20       1     Unique Id                          
PMHBDATE  DIM       8      8        21    Date Created CCYYMMDD              
PMHBTIME  DIM       8      8        29    Time hh:mm:ss                      
PMHBSTAT  DIM       1      1        37    Status 1 - Pending                 
.                                                2 - Processed
.                                                3 - Processing
.                                                4 - Process Cancelled
.                                                5 - Ignore
.                                                6 - Cancelled
.                                                7 - Booked
PMHBADAT  DIM       8      8        38    Exp Admission Date CCYYMMDD        
PMHBURNO  DIM       8      8        46    UR Number                          
PMHBVISN  DIM       8      8        54    Visit Number                       
PMHBHOSP  DIM       3      3        62    Hospital (pathspaf)                
PMHBUDAT  DIM       8      8        65    Date Updated CCYYMMDD              
PMHBBTYP  DIM       3      3        73    Booking Type (cat BK)              
PMHBAVMO  DIM       100    100      76    Admitting VMO                      
PMHBEAID  DIM       20     20       176   eAdmission ID                      
PMHBLDDT  DIM       8      8        196   Last History Received Date CCYYMMDD
PMHBLDTY  DIM       3      3        204   Last History Document Type (Cat wi)
PMHBUTIM  DIM       8      8        207   Time Updated hh:mm:ss              
PMHBWEBU  DIM       10     10       215   Web User Updated (websecaf)        
PMHBSPAR  DIM       200    200      225   Spare                              
.
.End of Record                      425  
.
