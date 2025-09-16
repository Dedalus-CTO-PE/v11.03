. V11.03.01 28/03/2023 EC C-0888745 Added audit file - EMCNHISA                 
. V11.00.01 15/04/2020 EC C-0888745 Added Created/Update By and Indexes         
. V10.06.02 15/04/2015 DS C-314567 Added ODCD/ODSD/ODST                         
. V10.06.01 18/03/2015 PHA C-244314 Add Dr Billing Complete                     
. V10.00.01 12/04/2010 EC  Added EMHIRHND CAR 164849                            
. V9.02.003 05/06/2007 JT  Added 2nd index  CAR 142173                          
. V9.02.002 01/11/2002 EC  Added EMHINSD and EMHINST                            
. *----------------------------------------------------------------------
. * Include Name  :   EMRHISFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   History Table                      
. *
. * File Type     :   SQL
. *
. * File Name     :   emrhisaf.dat
. * Audit Name    :   emraudhi.dat
. *
. * Index Values  :   KEY22   KEY32   KEY38   KEY38                          
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
EMRAUDHI   IFILE    SQL, FIXED=244, KEY="D1-8,9-16,17-18,19-19"                 
EMRAUDH2   IFILE    SQL, FIXED=244, KEY="D26-33,1-8,9-16,17-18,19-19" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMHIAUDD  DIM       8      8        1     Date of Change
EMHIAUDT  DIM       8      8        9     Time of Change
EMHIAUDP  DIM       2      2        17    Port
EMHIAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
EMHIAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
EMHIAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
EMRHISA1   IFILE    SQL, FIXED=219, KEY="U1-8,9-16,17-22"
EMRHISA2   IFILE    SQL, FIXED=219, KEY="U1-8,41-50,9-16,17-22"
EMRHISA3   IFILE    SQL, FIXED=219, KEY="U117-124,125-132,1-8,9-16,17-22"
EMRHISA4   IFILE    SQL, FIXED=219, KEY="U143-150,151-158,1-8,9-16,17-22"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMHIVIS   DIM       8      8        1     Visit Number                       
EMHIDAT   DIM       8      8        9     Date  (ccyymmdd)                   
EMHITIM   DIM       6      6        17    Time  (hhmmss)                     
EMHIUPT   DIM       5      5        23    Update Type                        
EMHIEUS   DIM       10     10       28    Emergency User ID.                 
EMHILOC   DIM       3      3        38    Location   (category ew)           
EMHIDOC   DIM       10     10       41    Doctor Code                        
EMHINUR   DIM       10     10       51    Nurse Code                         
EMHIDSD   DIM       8      8        61    Doctor Seen Date (ccyymmdd)        
EMHIDST   DIM       6      6        69    Doctor Seen Time (hhmmss)          
EMHINSD   DIM       8      8        75    Nurse Seen Date (ccyymmdd)         
EMHINST   DIM       6      6        83    Nurse Seen Time (hhmmss)           
EMHIRHND  DIM       3      3        89    Reason for Handover (category fw)  
EMHIDRBC  DIM       1      1        92    Dr Billing Complete                
.                                         0 or blank = No                      
.                                         1 = Dr Billing Complete              
.                                         2 = No Dr Charge                     
EMHIODCD  DIM       10     10       93    Other Doctor Code                  
EMHIODSD  DIM       8      8        103   Other Doctor Seen Date (ccyymmdd)  
EMHIODST  DIM       6      6        111   Other Doctor Seen Time (hhmmss)    
EMHICDAT  DIM       8      8        117   Date Record Created (ccyymmdd)     
EMHICTIM  DIM       8      8        125   Time Record Created (hh:mm:ss)     
EMHICUID  DIM       10     10       133   Web User Id Created (websecaf)     
EMHIUDAT  DIM       8      8        143   Date Record Updated (ccyymmdd)     
EMHIUTIM  DIM       8      8        151   Time Record Updated (hh:mm:ss)     
EMHIUUID  DIM       10     10       159   Web User Id Updated (websecaf)     
EMHISPA   DIM       50     50       169   Spare Variable                     
.
.End of Record                      219  
.
