. 9.04.03 19/05/2005 JT Added Received amount
. 9.04.02 11/05/2005 SA Added Item Position
. 9.04.01 10/05/2005 JT Added Adjustment amount
.         21/04/2005 JT Added variable for Resubmit date
.         07/04/2005 JT Added Item Description
. 9.04 .004 23/05/2005 EC  Added Provider Usage                              
. *----------------------------------------------------------------------
. * Include Name  :   HICCITFD.INC
. *
. * Function      :   File Def'n Include for HIC CLAIMS                         
. *                   Item Claims File                   
. *
. * File Type     :   SQL
. *
. * File Name     :   hiccitaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HICCITA1   IFILE    SQL, FIXED=300, KEY="U1-8,9-16,17-18"                       
HICCITA2   IFILE    SQL, FIXED=300, KEY="U9-16,17-18,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HCCICLMN  DIM       8      8        1     Claim Number                       
HCCIVISN  DIM       8      8        9     Visit Number                       
HCCITRAN  DIM       2      2        17    Item count                         
HCCIPMCI  DIM       8      8        19    MCI (3 Alpha 5 Numeric)            
HCCIPYEE  DIM       10     10       27    Payee Provider Number              
HCCIPSRV  DIM       10     10       37    Service Provider Number            
HCCIBTCH  DIM       5      5        47    Batch Number (1 Alpha 4 Numeric)   
HCCIIFLG  DIM       2      2        52    Item Flag 0=MBS 1=AMA              
HCCIITMN  DIM       9      9        54    MBS Item Number                    
HCCISUBN  DIM       3      3        63    MBS Subitem Number                 
HCCIIDAT  DIM       8      8        66    Service Date                       
HCCICAMT  FORM      12.2   8        74    Item Amount                        
HCCIRCVA  FORM      12.2   8        82    Amount Received                    
HCCIREJA  FORM      12.2   8        90    Amount Rejected                    
HCCIWOFF  FORM      12.2   8        98    Amount 'Write off'                 
HCCITRIN  FORM      12.2   8        106   Amount 'Transfer to Invoice'       
HCCIADJM  FORM      12.2   8        114   Adjustment Amount                  
HCCIREJR  DIM       3      3        122   Reason for Rejection (hicemsaf)    
HCCIREJD  DIM       8      8        125   Rejection Date (ccyymmdd)          
HCCIRWOF  DIM       3      3        133   Reason for 'Write Off' catg HE     
HCCIWOFD  DIM       8      8        136   Write Off Date (ccyymmdd)          
HCCITRND  DIM       8      8        144   Transfer to Invoice Date (ccyymmdd)
HCCICDAT  DIM       8      8        152   Date Record Created (ccyymmdd)     
HCCICTIM  DIM       8      8        160   Time Record Created (hh:mm:ss)     
HCCICUID  DIM       10     10       168   WEB User ID Created (websecaf)     
HCCIUDAT  DIM       8      8        178   Date Record Updated (ccyymmdd)     
HCCIUTIM  DIM       8      8        186   Time Record Updated (hh:mm:ss)     
HCCIUUID  DIM       10     10       194   WEB User Id Updated (websecaf)     
HCCIIDES  DIM       30     30       204   Item Description                   
HCCIRDAT  DIM       8      8        234   Resubmit Date (ccyymmdd)           
HCCIADJR  DIM       3      3        242   Reason for Adjustment Catg HF      
HCCIADJD  DIM       8      8        245   Adjustment Date (ccyymmdd)         
HCCIIPOS  DIM       2      2        253   Item Position                      
HCCIPUSE  DIM       20     20       255   Provider Usage                     
HCCISPAR  DIM       25     25       275   Spare Variable                     
.
.End of Record                      300  
.
