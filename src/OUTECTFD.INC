. V10.13.03 18/12/2018 PVL C-0859743 Added OTECAMTP OTECPDAT                    
. V10.13.02 06/12/2018 PV C-0859743 Added OTECOKEY - O/P outbokaf key           
. V10.13.01 17/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTECTFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse Bulk Billing Transactions  
. *
. * File Type     :   SQL
. *
. * File Name     :   outectaf.dat
. *
. * Index Values  :   KEY30   KEY17   KEY24   KEY24   KEY35   KEY40          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTECTA1   IFILE    SQL, FIXED=221, KEY="U1-3,4-5,6-6,7-14,15-22,23-30"
OUTECTA2   IFILE    SQL, FIXED=221, KEY="U15-22,23-30,6-6"
OUTECTA3   IFILE    SQL, FIXED=221, KEY="U23-30,7-14,15-22"
OUTECTA4   IFILE    SQL, FIXED=221, KEY="U7-14,15-22,23-30"
OUTECTA5   IFILE    SQL, FIXED=221, KEY="U1-3,31-38,7-14,15-22,23-30"
OUTECTA6   IFILE    SQL, FIXED=221, KEY="U55-78,15-22,23-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTECHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
DOTECFLG  DIM       2      2        4     Eclipse Status Flag                
.                                          ibaPAS Processing                   
.                                             0 = Not Sent                     
.                                             1 = Error (PAS validation)       
.                                             2 = Extracted                    
.                                          Eclipse - Processing                
.                                             3 = Error (SA validation)        
.                                             4 = Received                     
.                                          Eclipse - Reported                  
.                                             5 = Complete - Reported          
.                                          Eclipse - Remittance                
.                                             6 = Reported                     
.                                             7 = Closed                       
OTECMODL  DIM       1      1        6     webPas Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
.                                         3 = Outpatient                       
OTECUNIQ  DIM       8      8        7     Unique Identifier / Visit Number   
OTECINVN  DIM       8      8        15    Invoice Number                     
OTECBATN  DIM       8      8        23    Batch Number                       
OTECURNO  DIM       8      8        31    U/R/ Number                        
OTECPBAT  DIM       8      8        39    Previous Batch Number              
.                                         (Resubmission from)                  
OTECNBAT  DIM       8      8        47    Next Batch Number                  
.                                         (Resubmission to)                    
OTECTRID  DIM       24     24       55    Claim Transaction ID               
OTECAMTC  FORM      12.2   8        79    Amount Claimed                     
OTECAMTP  FORM      12.2   8        87    Amount Paid by Medicare            
OTECPDAT  DIM       8      8        95    Payment Date                       
OTECSTAT  DIM       2      2        103   Closed Status                      
.                                         Spaces - not closed                  
.                                         " 0" = Closed                        
.                                         " 1" = Closed with Write Off         
.                                         " 2" = Closed with Payment           
.                                         " 3" = Closed with WO & Pymt         
OTECCLID  DIM       6      6        105   Claim ID                           
OTECRKEY  DIM       24     24       111   Report Retrieval Key / Trans Id.   
.                                         Consists Of:                         
.                                         PayeeProviderNum                     
.                                         PMSClaimId                           
.                                         Authorisation/Lodgement Date         
.                                         Format:                              
.                                         ppppppppxxxxxxddmmyyyy               
OTECOKEY  DIM       36     36       135   O/P outbokaf key                   
OTECSPAR  DIM       50     50       171   Spare Variable                     
.
.End of Record                      221  
.
. Redefine FORM feilds from key
. -----------------------------
OTECFLAG  FORM      2
