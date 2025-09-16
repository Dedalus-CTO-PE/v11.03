. V11.01.01 20/05/2021 PVL C-0906538 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCIFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PCIW Claim Request Tabl
. *
. * File Type     :   SQL
. *
. * File Name     :   webpciaf.dat
. *
. * Index Values  :   KEY30   KEY17   KEY24   KEY24   KEY35   KEY40   KEY53  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCIA1   IFILE    SQL, FIXED=730, KEY="U1-3,4-5,6-6,7-14,15-22,23-30"
WEBPCIA2   IFILE    SQL, FIXED=730, KEY="U15-22,23-30,6-6"
WEBPCIA3   IFILE    SQL, FIXED=730, KEY="U23-30,7-14,15-22"
WEBPCIA4   IFILE    SQL, FIXED=730, KEY="U7-14,15-22,23-30"
WEBPCIA5   IFILE    SQL, FIXED=730, KEY="U1-3,31-38,7-14,15-22,23-30"
WEBPCIA6   IFILE    SQL, FIXED=730, KEY="U55-78,15-22,23-30"
WEBPCIA7   IFILE    SQL, FIXED=730, KEY="U89-124,15-22,23-30,6-6"
WEBPCIA8   IFILE    SQL, FIXED=730, KEY="U4-5,1-3,6-6,7-14,15-22,23-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPIHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
DWBPIFLG  DIM       2      2        4     Eclipse Status Flag                
.                                         ibaPAS Processing                    
.                                            0 = Not Sent                      
.                                            1 = Error (PAS validation)        
.                                            2 = Extracted                     
.                                         Eclipse - Processing                 
.                                            3 = Error (SA validation)         
.                                            4 = Posted                        
.                                            5 = Received                      
.                                            6 = Closed                        
WBPIMODL  DIM       1      1        6     webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
WBPIUNIQ  DIM       8      8        7     Unique Identifier                  
WBPIINVN  DIM       8      8        15    Invoice Number                     
WBPIBATN  DIM       8      8        23    Batch Number                       
WBPIURNO  DIM       8      8        31    U/R Number                         
WBPIPBAT  DIM       8      8        39    Previous Batch Number              
.                                         (Resubmission from)                  
WBPINBAT  DIM       8      8        47    Next Batch Number                  
.                                         (Resubmission to)                    
WBPITRID  DIM       24     24       55    Claim Transaction Id               
WBPIAMTC  FORM      12.2   8        79    Amount Claimed                     
WBPISTAT  DIM       2      2        87    Closed Status                      
.                                         Spaces - not closed                  
.                                         " 0" = Closed                        
WBPIMSID  DIM       36     36       89    Message ID                         
WBPICTYP  DIM       1      1        125   PCIW Claim Type                    
.                                         G = General                          
.                                         P = Pathology (not in use)           
.                                         S = Specialist (not in use)          
WBPIEROR  DIM       4      4        126   Error Code Returned                
WBPIRESN  DIM       500    500      130   Error Reason Text                  
WBPISPAR  DIM       100    100      630   Spare Variable                     
.
.End of Record                      730  
.
. Redefine FORM fields from key
. -----------------------------
WBPIFLAG  FORM      2
