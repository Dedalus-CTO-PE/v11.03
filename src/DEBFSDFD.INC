. VF.01.000 07/09/2000 CH  First Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   DEBFSDFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable                
. *                   Statement Detail                   
. *
. * File Type     :   SQL
. *
. * File Name     :   debfsdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBFSDA1   IFILE    SQL, FIXED=149, KEY="U1-10,11-18,19-23"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBSDSTAT  DIM       10     10       1     Statement No.                      
DBSDDEBC  DIM       8      8        11    Debtor Code                        
DBSDLINE  DIM       5      5        19    Detail Line                        
DBSDTYPE  DIM       1      1        24    Type  0-Outstanding, 1-Current     
DBSDDESC  DIM       80     80       25    Detail Description                 
DBSDAMNT  FORM      12.2   8        105   Amount                             
DBSDGST   FORM      12.2   8        113   GST                                
DBSDTOTA  FORM      12.2   8        121   Total                              
DBSDSPAR  DIM       20     20       129   Spare                              
.
.End of Record                      149  
.
