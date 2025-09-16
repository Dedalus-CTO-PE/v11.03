. V10.10.01 27/03/2017 DN C-0817797 Added MRHIMOVN and Index 5 & 6 
. V10.02.03 15/07/2011 PM C-243582 Added receipt acknowledgment fields          
. V10.02.02 19/05/2011 ML C-240724 Added Destination Hospital Id. (MRHILHOS)    
. V10.02.01 10/05/2011 ML C-240707  Add MRHICOMM, increase MRHISPAR             
. V9.08.01  25/10/2006 EC C-122346  Added index 4                               
. V9.0?.000 11/09/2003 PD C-43132 - Modified description of MRHIRECV            
. V9.02.000 19/01/2001 ?? Created                                               
. *----------------------------------------------------------------------
. * Include Name  :   MRTHISFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Tracking History                   
. *
. * File Type     :   SQL
. *
. * File Name     :   mrthisaf.dat
. *
. * Index Values  :   KEY26   KEY35   KEY26   KEY33   KEY36   KEY36          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTHISA1   IFILE    SQL, FIXED=260, KEY="U1-10,11-18,19-26"
MRTHISA2   IFILE    SQL, FIXED=260, KEY="U55-55,47-54,1-10,11-18,19-26"
MRTHISA3   IFILE    SQL, FIXED=260, KEY="U11-18,19-26,1-10"
MRTHISA4   IFILE    SQL, FIXED=260, KEY="U1-10,11-18,19-26,193-195,27-30"
MRTHISA5   IFILE    SQL, FIXED=260, KEY="U223-232,1-10,11-18,19-26"
MRTHISA6   IFILE    SQL, FIXED=260, KEY="U11-18,19-26,223-232,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRHIKEY   DIM       10     10       1     Key to History Table               
MRHIDATE  DIM       8      8        11    Date of Movement (CCYYMMDD)        
MRHITIME  DIM       8      8        19    Time of Movement (HH:MM:SS)        
MRHILOC   DIM       4      4        27    Destination Location of MR Record  
MRHIRECV  DIM       6      6        31    Requested By (Using Staff Code)    
MRHIREAS  DIM       4      4        37    Reason for Movement                
MRHIOPER  DIM       6      6        41    Operator                           
MRHIDDUE  DIM       8      8        47    Due Date         (CCYYMMDD)        
MRHISTAT  DIM       1      1        55    Status (1 - Out, 2 - In)           
MRHILOCK  DIM       2      2        56    Lock Field Variable                
MRHIREQB  DIM       35     35       58    Requested by (Free Text Field)     
MRHIUSID  DIM       10     10       93    Web User ID                        
MRHIEXTN  DIM       20     20       103   Extension Number                   
MRHIPAGE  DIM       20     20       123   Pager Number                       
MRHICOMM  DIM       50     50       143   Movement Comments                  
MRHIDHOS  DIM       3      3        193   Destination Hospital Id of MR Recrd
MRHIRCST  DIM       1      1        196   Receipt status                     
.                                         1 - In transit                       
.                                         2 - Received                         
.                                         3 - Sent direct                      
MRHIRCUI  DIM       10     10       197   User who received record           
MRHIRCDT  DIM       8      8        207   Received date                      
MRHIRCTM  DIM       8      8        215   Received time                      
MRHIMOVN  DIM       10     10       223   Bulk Record Movement Number        
MRHISPAR  DIM       27     27       233   Spare Variable                     
.
.End of Record                      260  
.
