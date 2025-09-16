. V10.04.01 19/12/2013 AP C-294294 Moved SIIACTV out of SPARE                   
. V10.03.01 30/07/2012 PA  Car 243843 -  Deactivating supplies
. VF.01.002 28/04/2000 SB  Added EAN Number
. VF.01.001 04/02/2000 SB  Added GST Code
. *----------------------------------------------------------------------
. * Include Name  :   SINCIAFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Masterfile                 
. *
. * File Type     :   SQL
. *
. * File Name     :   sinciaaf.dat
. * Audit Name    :   sinaudia.dat
. *
. * Index Values  :   KEY7    KEY12   KEY67                                  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
SINAUDIA   IFILE    SQL, FIXED=275, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIAAUDD  DIM       8      8        1     Date of Change
SIIAAUDT  DIM       8      8        9     Time of Change
SIIAAUDP  DIM       2      2        17    Port
SIIAAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
SIIAAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
SIIAAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
SINCIAA1   IFILE    SQL, FIXED=250, KEY="U1-7"                                  
SINCIAA2   IFILE    SQL, FIXED=250, KEY="U68-72,1-7"                            
SINCIAA3   IFILE    SQL, FIXED=250, KEY="U8-67,1-7"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIIACAT   DIM       7      7        1     Catalog Code                       
SIIADES   DIM       60     60       8     Description                        
SIIASUB   DIM       5      5        68    Subjective                         
SIIAISS   DIM       15     15       73    Issue Unit                         
SIIASTI   DIM       6      6        88    Stock Indicator                    
SIIAAVC   FORM      12.6   10       94    Average Cost                       
SIIANAT   DIM       10     10       104   NATO Number                        
SIIAABC   DIM       1      1        114   ABC Flag                           
SIIAPSC   DIM       5      5        115   Preffered Supplier Code            
SIIAREX   FORM      1      2        120   Record Expiry Dates                
SIIANON   FORM      1      2        122   0 - Stock Item 1 - Non-Stock Item  
SIIASAB   FORM      1      2        124   Suspend ABC    0=No                
SIIASUS   FORM      1      2        126   Susp. Flag 1-Req'n 2-P/O 3-Both    
SIIADTC   DIM       8      8        128   Date Last Changed                  
SIIATMC   DIM       5      5        136   Time Last Changed                  
SIIAUSC   DIM       4      4        141   Users Last Changed by              
SIIAUR1   DIM       15     15       145   EAN Number                         
SIIAUR2   DIM       15     15       160   User Reference 2                   
SIIAUD1   DIM       8      8        175   User Date 1                        
SIIAUD2   DIM       8      8        183   User Date 2                        
SIIAUC1   DIM       3      3        191   User Code 1 Category IA1           
SIIAUC2   DIM       3      3        194   User Code 2 Category IA2           
SIIAUY1   DIM       1      1        197   User Yes/No 1                      
SIIAUY2   DIM       1      1        198   User Yes/No 2                      
SIIAQIN   DIM       10     10       199   Total Quantity Invoiced (Issue Unit
SIIADUN   DIM       15     15       209   Dispensing Units                   
SIIAGST   DIM       6      6        224   GST Code                           
SIIAACTV  DIM       1      1        230   Active Code (1= Inactive)          
SIIASPA   DIM       19     19       231   Spare Variable                     
.
.End of Record                      250  
.
