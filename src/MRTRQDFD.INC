. V10.04.01 23/12/2013 PA C-294391 Move Filled By User ID out of Spare Variable 
.V10.03.01  22/05/2013      Ania P - CAR 216497: Added MRRDFUID
.V 5.09.003 27/12/2000
. *----------------------------------------------------------------------
. * Include Name  :   MRTRQDFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Request Detail File                
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtrqdaf.dat
. *
. * Index Values  :   KEY20   KEY20                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTRQDR1   IFILE    SQL, FIXED=82, KEY="U1-10,11-20"                            
MRTRQDR2   IFILE    SQL, FIXED=82, KEY="U11-20,1-10"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRRDRQNO  DIM       10     10       1     Request Number                     
MRRDRKEY  DIM       10     10       11    Medical Record Key                 
MRRDFILL  DIM       1      1        21    Request Filled (Y/N/C)             
.                                         Y = Filled                           
.                                         P = Processed                        
.                                         N = New                              
.                                         C = Cancelled                        
MRRDFUID  DIM       10     10       22    Filled By UserID (from websecaf)   
MRRDSPAR  DIM       50     50       32    Spare                              
.
.End of Record                      82   
.
