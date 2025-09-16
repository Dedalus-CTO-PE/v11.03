. V10.00.01 10/08/2010 JP  Created for CAR 222551                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSWFMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Maternity Mandatory Fields         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmswfmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSWFMA1   IFILE    SQL, FIXED=212, KEY="U1-5"                                  
PMSWFMA2   IFILE    SQL, FIXED=212, KEY="U111-111,1-5"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMWFFLDN  DIM       5      5        1     Field Number                       
PMWFIDES  DIM       35     35       6     IBA Description                    
PMWFSDES  DIM       35     35       41    Site Description                   
PMWFSCDE  DIM       35     35       76    Screen Description                 
PMWFMAND  DIM       1      1        111   Mandatory 1=Yes                    
PMWFSPAR  DIM       100    100      112   Spare                              
.
.End of Record                      212  
.
