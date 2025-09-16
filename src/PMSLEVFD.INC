. V10.00.01 28/07/2010 JP  Created for CAR 222551                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSLEVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Labour Events                      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmslevaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSLEVA1   IFILE    SQL, FIXED=275, KEY="U1-10,11-18,19-26,27-34,35-36,37-39"   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMLVUNIQ  DIM       10     10       1     Pregnancy Unique ID                
PMLVADMN  DIM       8      8        11    Admission Number                   
PMLVDATE  DIM       8      8        19    Date CCYYMMDD                      
PMLVTIME  DIM       8      8        27    Time hh:mm:ss                      
PMLVTYPE  DIM       2      2        35    Category                           
.                                         Cat AG = Agents                      
.                                         Cat AH = Anaesthesia for Delivery    
.                                         Cat AJ = Fetal Monitoring            
.                                         Cat AN = Analgesia for Labour        
PMLVETYP  DIM       3      3        37    Codes based on category above      
PMLVSTAT  DIM       3      3        40    Status (Cat AL)                    
PMLVDES1  DIM       50     50       43    Description 1                      
PMLVDES2  DIM       50     50       93    Description 2                      
PMLVSPAR  DIM       80     80       143   Spare                              
PMLVWEBC  DIM       10     10       223   Web User Created                   
PMLVDATC  DIM       8      8        233   Date Created CCYYMMDD              
PMLVTIMC  DIM       8      8        241   Time Created hh:mm:ss              
PMLVWEBU  DIM       10     10       249   Web User Updated                   
PMLVDATU  DIM       8      8        259   Date Update CCYYMDD                
PMLVTIMU  DIM       8      8        267   Time Updated hh:mm:ss              
.
.End of Record                      275  
.
