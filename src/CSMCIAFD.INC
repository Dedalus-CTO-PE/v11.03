. V6.00.001 10/04/1997 BGA New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   CSMCIAFD.INC
. *
. * Function      :   File Def'n Include for Corporate Supply
. *                   Corporate Catalog Master Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   csmciaaf.dat
. * Audit Name    :   csmaudia.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
CSMAUDIA   IFILE    SQL, FIXED=259, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSIAAUDD  DIM       8      8        1     Date of Change
CSIAAUDT  DIM       8      8        9     Time of Change
CSIAAUDP  DIM       2      2        17    Port
CSIAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
CSIAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
CSIAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
CSMCIAA1   IFILE    SQL, FIXED=233, KEY="U1-7"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CSIACAT   DIM       7      7        1     Catalog                            
CSIADES   DIM       60     60       8     Description                        
CSIASUB   DIM       5      5        68    Product Group                      
CSIAISS   DIM       15     15       73    Issue Unit                         
CSIASTI   DIM       6      6        88    Stock Indicator                    
CSIAAVC   FORM      12.6   10       94    Average Cost                       
CSIANAT   DIM       10     10       104   NATO Code                          
CSIAABC   DIM       1      1        114   ABC Flag                           
CSIAPSC   DIM       5      5        115   Preffered Supplier                 
CSIAREX   FORM      1      2        120   Record Expiry Details 1=yes        
CSIANON   FORM      1      2        122   0-Stock Item 1-Non Stock           
CSIASAB   FORM      1      2        124   Suspend ABC                        
CSIASUS   FORM      1      2        126   Suspend Flag 1-Req,2-P/O,3-All     
CSIADTC   DIM       8      8        128   Date of Last Change                
CSIATMC   DIM       5      5        136   Time of Last Change                
CSIAUSC   DIM       4      4        141   User Last Changed By               
CSIAUR1   DIM       25     25       145   User Def Ref 1                     
CSIAUR2   DIM       25     25       170   User Def Ref 2                     
CSIAUD1   DIM       8      8        195   User Def Date 1                    
CSIAUD2   DIM       8      8        203   User Def Date 2                    
CSIAUY1   DIM       1      1        211   User Def Y/N 1                     
CSIAUY2   DIM       1      1        212   User Def Y/N 2                     
CSIASPA   DIM       20     20       213   Spare                              
.
.End of Record                      233  
.
