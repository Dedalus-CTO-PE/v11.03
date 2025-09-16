. VF.00.001 30/10/1998 SB  Extend Reference to 12
. VF.01.001 10/08/2000 SB  Change comments for DBFHDTY,DBFHUC2
. VF.01.002 23/08/2000 CH  Add Statement No.                                 
. *----------------------------------------------------------------------
. * Include Name  :   DEBFTHFD.INC
. *
. * Function      :   File Def'n Include for Accounts Receivable                
. *                   Debtor Transaction Header          
. *
. * File Type     :   SQL
. *
. * File Name     :   debfthaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DEBFTHA1   IFILE    SQL, FIXED=175, KEY="U1-8,9-9,10-21"                        
DEBFTHA2   IFILE    SQL, FIXED=175, KEY="U1-8,22-29,9-9,10-21"                  
DEBFTHA3   IFILE    SQL, FIXED=175, KEY="U10-21,9-9,1-8"                        
DEBFTHA4   IFILE    SQL, FIXED=175, KEY="U1-8,57-64,9-9,10-21"                  
DEBFTHA5   IFILE    SQL, FIXED=175, KEY="U65-72,73-78,10-21,9-9,1-8"            
DEBFTHA6   IFILE    SQL, FIXED=175, KEY="U9-9,10-21,1-8"                        
DEBFTHA7   IFILE    SQL, FIXED=175, KEY="U9-9,83-107,10-21,1-8"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DBFHDEB   DIM       8      8        1     Debtor Code                        
DBFHDTY   DIM       1      1        9     Type 1=In,2=Cr,3=Py,4=Dr Ad,5=Cr Ad
DBFHDOC   DIM       12     12       10    Document Reference                 
DBFHDDAT  DIM       8      8        22    Document Date                      
DBFHTER   DIM       3      3        30    Terms Code                         
DBFHTOT   FORM      12.2   8        33    Total of Document                  
DBFHTAX   FORM      12.2   8        41    Tax Total                          
DBFHDPRT  DIM       8      8        49    Date Printed                       
DBFHDSTA  DIM       8      8        57    Statement Date                     
DBFHCDAT  DIM       8      8        65    Creation Date                      
DBFHCTIM  DIM       6      6        73    Creation Time                      
DBFHCUSR  DIM       4      4        79    Creation User ID                   
DBFHUR1   DIM       25     25       83    Statement Reference (Patient Name) 
DBFHUR2   DIM       25     25       108   User Def Ref 2 (HSH Admission No.8)
DBFHUD1   DIM       8      8        133   User Def Date 1                    
DBFHUD2   DIM       8      8        141   User Def Date 2                    
DBFHUY1   DIM       1      1        149   User Def Y/N 1                     
DBFHUY2   DIM       1      1        150   User Def Y/N 2                     
DBFHUC1   DIM       3      3        151   User Def Code 1                    
DBFHUC2   DIM       3      3        154   Adjustment Code for Journals       
DBFHSTAN  DIM       10     10       157   Statement No.                      
DBFHSPA   DIM       8      8        167   Spare                              
.
.End of Record                      175  
.
