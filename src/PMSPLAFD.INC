. V10.00.01 24/05/2010 JP  Created for CAR 222551                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSPLAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Pregnancy Linked Admission         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsplaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPLAA1   IFILE    SQL, FIXED=119, KEY="U1-10,11-18"                           
PMSPLAA2   IFILE    SQL, FIXED=119, KEY="U11-18,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPLUNIQ  DIM       10     10       1     Pregnancy Unique Id                
PMPLADMN  DIM       8      8        11    Admission Number                   
PMPLWEBC  DIM       10     10       19    Web User ID created                
PMPLDATC  DIM       8      8        29    Date Created (CCYYMMDD)            
PMPLTIMC  DIM       8      8        37    Time Created (hh:mm:ss)            
PMPLWEBU  DIM       8      8        45    Web User ID updated                
PMPLDATU  DIM       8      8        53    Date Updated (CCYYMMDD)            
PMPLTIMU  DIM       8      8        61    Time Updated (hh:mm:ss)            
PMPLSPAR  DIM       50     50       69    Spare                              
.
.End of Record                      119  
.
