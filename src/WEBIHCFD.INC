. V11.01.01 01/04/2021 PVL C-0902857 Added Index 8
. V11.00.01 18/02/2021 PVL C-0902857 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIHCFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IHCW Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   webihcaf.dat
. *
. * Index Values  :   KEY35   KEY16   KEY24   KEY24   KEY35   KEY40   KEY52  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIHCA1   IFILE    SQL, FIXED=298, KEY="U133-135,1-2,3-8,9-16,17-24,25-32"
WEBIHCA2   IFILE    SQL, FIXED=298, KEY="U17-24,25-32"
WEBIHCA3   IFILE    SQL, FIXED=298, KEY="U25-32,9-16,17-24"
WEBIHCA4   IFILE    SQL, FIXED=298, KEY="U9-16,17-24,25-32"
WEBIHCA5   IFILE    SQL, FIXED=298, KEY="U133-135,33-40,9-16,17-24,25-32"
WEBIHCA6   IFILE    SQL, FIXED=298, KEY="U58-81,17-24,25-32"
WEBIHCA7   IFILE    SQL, FIXED=298, KEY="U162-197,17-24,25-32"
WEBIHCA8   IFILE    SQL, FIXED=298, KEY="U1-2,3-8,9-16,17-24,25-32,133-135"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DWBICFLG  DIM       2      2        1     Eclipse Status Flag                
.                                         ibaPAS Processing                    
.                                            0 = Not Sent                      
.                                            1 = Error (PAS validation)        
.                                            2 = Extracted                     
.                                         WebServices - Processing             
.                                            3 = Error (SA validation)         
.                                            4 = Posted                        
.                                            5 = Received                      
.                                            6 = Health Fund Unverified        
.                                            7 = Health Fund Verified          
.                                            8 = Health Fund Assessing         
.                                         Eclipse - Interim Report             
.                                            9 = Ready                         
.                                            10 = Reported                     
.                                         Eclipse - Ready                      
.                                            11 = Health Fund Rejected         
.                                            12 = Assessing Complete           
.                                         Eclipse - Reported                   
.                                            13 = HF Rejected - Reported       
.                                            14 = Complete - Reported          
.                                         Eclipse - Remittance                 
.                                            15 = Reported                     
.                                            16 = Closed                       
WBICHFND  DIM       6      6        3     Health Fund Code                   
WBICADMN  DIM       8      8        9     Admission Number                   
WBICINVN  DIM       8      8        17    Invoice Number                     
WBICBATN  DIM       8      8        25    Batch Number                       
WBICURNO  DIM       8      8        33    U/R Number                         
WBICPBAT  DIM       8      8        41    Previous Batch Number              
.                                         (Resubmission from)                  
WBICNBAT  DIM       8      8        49    Next Batch Number                  
.                                         (Resubmission to)                    
WBICCCFL  DIM       1      1        57    Contiguous Claim Flag              
.                                         (EDI field 40005)                    
.                                         N = Not in series                    
.                                         F = First in series                  
.                                         L = Last in series                   
.                                         M = Middle in series                 
WBICTRID  DIM       24     24       58    Claim Transaction Id               
DWBICEET  DIM       1      1        82    Eclipse extract type               
.                                         0 - Health Fund                      
.                                         1 - Claim Code (DVA)                 
WBICAMTC  FORM      12.2   8        83    Amount Claimed                     
WBICAMTP  FORM      12.2   8        91    Amount Paid by Health Fund         
WBICPDAT  DIM       8      8        99    Payment Date (ccyymmdd)            
WBICSTAT  DIM       2      2        107   Closed Status                      
.                                         Spaces - not closed                  
.                                         " 0" = Closed                        
.                                         " 1" = Closed with Write Off         
.                                         " 2" = Closed with Payment           
.                                         " 3" = Closed with WO & Pymt         
WBICFTID  DIM       24     24       109   Fund Report Transaction Id         
WBICHOSP  DIM       3      3        133   Hospital ID                        
WBICPCTI  DIM       24     24       136   Previous Claim Transaction ID      
.                                         (Eclipse)                            
WBICCTYP  DIM       2      2        160   IHCW Type                          
.                                         PR - Private                         
.                                         PU - Public                          
WBICMSID  DIM       36     36       162   Message Id                         
WBICSPAR  DIM       100    100      198   Spare Variable                     
.
.End of Record                      298  
.
. Redefine FORM fields from key
. -----------------------------
WBICFLAG  FORM      2
WBICEETP  FORM      1
