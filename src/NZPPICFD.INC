. V9.08.001 01/12/2006 EC  Created FD CAR 126779
. V9.08.002 09/01/2007 EC  Added Anaesthetist CAR 126779                     
. V9.09.001 19/11/2007 EC  Changed description of NZPIFPAY CAR 155139
. *----------------------------------------------------------------------
. * Include Name  :   NZPPICFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   Related Provider Invoice Contract  
. *
. * File Type     :   SQL
. *
. * File Name     :   nzppicaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPPICA1   IFILE    SQL, FIXED=222, KEY="U1-8,9-16,47-52"                       
NZPPICA2   IFILE    SQL, FIXED=222, KEY="U62-69,1-8,9-16,47-52"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZPIADMN  DIM       8      8        1     Admission Number                   
NZPIINVN  DIM       8      8        9     Invoice Number                     
NZPIURNO  DIM       8      8        17    U/R Number                         
NZPICNTR  DIM       6      6        25    Contract (Health Fund)             
NZPICLMN  DIM       3      3        31    Claim Code (Cat CL)                
NZPISURG  DIM       10     10       34    Surgeon/Consultant (pmshcpaf)      
NZPIFPAY  DIM       1      1        44    User Defined Yes/No 1 0=No 1=Yes   
NZPICAPS  DIM       1      1        45    Capture Status                     
.                                         " " = Null 1=Processing
.                                         2=Completed 3=Finalised
NZPIEXPT  DIM       1      1        46    Export    
.                                         0=No 1=Flaged for Export 2=Exported
NZPIUNIQ  DIM       6      6        47    Unique Number                      
NZPICPRC  DIM       9      9        53    Contract Procedure Code            
NZPIPDAT  DIM       8      8        62    Procedure Date (ccyymmdd)          
NZPICDAT  DIM       8      8        70    Date Record Created (ccyymmdd)     
NZPICTIM  DIM       8      8        78    Time Record Created (hh:mm:ss)     
NZPICUID  DIM       10     10       86    Web User Id Created (websecaf)     
NZPIUDAT  DIM       8      8        96    Date Record Update (ccyymmdd)      
NZPIUTIM  DIM       8      8        104   Time Record Updated (hh:mm:ss)     
NZPIUUID  DIM       10     10       112   Web User Id Updated (websecaf)     
NZPIANAE  DIM       10     10       122   Anaesthetist (pmshcpaf)            
NZPISPAR  DIM       90     90       132   Spare                              
.
.End of Record                      222  
.
