. V9.12.001 01/10/2009 JP  Created for CAR 174079                               
. *----------------------------------------------------------------------
. * Include Name  :   PATPFAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Future Action Plan         
. *
. * File Type     :   SQL
. *
. * File Name     :   patpfaaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATPFAA1   IFILE    SQL, FIXED=143, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTPFINVN  DIM       8      8        1     Invoice Number                     
PTPFIFDT  DIM       8      8        9     Initiate from date CCYYMMDD        
PTPFPLAN  DIM       8      8        17    Plan Code (Cat AK)                 
PTPFSTAT  DIM       3      3        25    Status                             
PTPFMODR  DIM       3      3        28    Modify Reason (Cat mr)             
PTPFWEBC  DIM       10     10       31    Web User Id Created                
PTPFDATC  DIM       8      8        41    Date Created                       
PTPFTIMC  DIM       8      8        49    Time Created                       
PTPFWEBU  DIM       10     10       57    Web User Id Updated                
PTPFDATU  DIM       8      8        67    Date Update                        
PTPFTIMU  DIM       8      8        75    Time Updated                       
PTPFSPAR  DIM       60     60       83    Spare                              
.
.End of Record                      143  
.
