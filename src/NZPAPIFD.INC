. V9.09.001 20/08/2007 EC  Added cost centre and sub acc code CAR 147415     
. V9.08.001 03/01/2007 EC  Created FD CAR 126779
. *----------------------------------------------------------------------
. * Include Name  :   NZPAPIFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   AP Interface File                  
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpapiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPAPIA1   IFILE    SQL, FIXED=417, KEY="U1-8"                                  
NZPAPIA2   IFILE    SQL, FIXED=417, KEY="U9-9,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZAPRPIS  DIM       8      8        1     Related Provider Invoice Sequence  
NZAPSTAT  DIM       1      1        9     Process Status                     
NZAPRINV  DIM       20     20       10    RP Invoice Number                  
NZAPRDAT  DIM       8      8        30    RP Invoice Date (ccyymmdd)         
NZAPRAMT  FORM      12.2   8        38    RP Invoice Amount                  
NZAPRGST  FORM      12.2   8        46    RP GST Amount                      
NZAPRPIN  DIM       50     50       54    RPI Provider Name                  
NZAPADMN  DIM       8      8        104   Admission Number                   
NZAPURNO  DIM       8      8        112   U/R Number                         
NZAPSNAM  DIM       20     20       120   Patient Surname                    
NZAPGNAM  DIM       25     25       140   Patient Given Name                 
NZAPCNTR  DIM       6      6        165   Contract (Health Fund)             
NZAPCNAM  DIM       40     40       171   Contract Name                      
NZAPHSNO  DIM       2      2        211   Hospital Number                    
NZAPORGN  DIM       5      5        213   Organisation Id                    
NZAPHNAM  DIM       50     50       218   Hospital Name                      
NZAPINVN  DIM       8      8        268   Invoice Number                     
NZAPSRID  DIM       11     11       276   Supplier ABN Number                
NZAPAPDT  DIM       8      8        287   AP Interface Date (ccyymmdd)       
NZAPCOST  DIM       3      3        295   Cost Centre                        
NZAPACOD  DIM       5      5        298   Account Code                       
NZAPSCOD  DIM       3      3        303   Sub Account Code                   
NZAPGSTC  DIM       3      3        306   GST Cost Centre                    
NZAPGSTA  DIM       5      5        309   GST Account Code                   
NZAPGSTS  DIM       3      3        314   GST Sub Account Code               
NZAPSPAR  DIM       100    100      317   Spare                              
.
.End of Record                      417  
.
