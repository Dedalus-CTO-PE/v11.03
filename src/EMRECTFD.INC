. V10.13.01 20/08/2018 PV C-0859742 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   EMRECTFD.INC
. *
. * Function      :   File Def'n Include for Emergency/PP System                
. *                   Eclipse Store/Forward Transactions 
. *
. * File Type     :   SQL
. *
. * File Name     :   emrectaf.dat
. *
. * Index Values  :   KEY30   KEY17   KEY24   KEY24   KEY35   KEY40          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRECTA1   IFILE    SQL, FIXED=139, KEY="U1-3,4-5,6-6,7-14,15-22,23-30"
EMRECTA2   IFILE    SQL, FIXED=139, KEY="U15-22,23-30,6-6"
EMRECTA3   IFILE    SQL, FIXED=139, KEY="U23-30,7-14,15-22"
EMRECTA4   IFILE    SQL, FIXED=139, KEY="U7-14,15-22,23-30"
EMRECTA5   IFILE    SQL, FIXED=139, KEY="U1-3,31-38,7-14,15-22,23-30"
EMRECTA6   IFILE    SQL, FIXED=139, KEY="U55-78,15-22,23-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMECHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
DEMECFLG  DIM       2      2        4     Eclipse Status Flag                
.                                         ibaPAS Processing                    
.                                            0 = Not Sent                      
.                                            1 = Error (PAS validation)        
.                                            2 = Extracted                     
.                                         Eclipse - Processing                 
.                                            3 = Error (SA validation)         
.                                            4 = Received                      
.                                            5 = Closed                        
EMECMODL  DIM       1      1        6     webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
EMECUNIQ  DIM       8      8        7     Unique Identifier                  
EMECINVN  DIM       8      8        15    Invoice Number                     
EMECBATN  DIM       8      8        23    Batch Number                       
EMECURNO  DIM       8      8        31    U/R Number                         
EMECPBAT  DIM       8      8        39    Previous Batch Number              
.                                         (Resubmission from)                  
EMECNBAT  DIM       8      8        47    Next Batch Number                  
.                                         (Resubmission to)                    
EMECTRID  DIM       24     24       55    Claim Transaction Id               
EMECAMTC  FORM      12.2   8        79    Amount Claimed                     
EMECSTAT  DIM       2      2        87    Closed Status                      
.                                         Spaces - not closed                  
.                                         " 0" = Closed                        
EMECSPAR  DIM       50     50       89    Spare Variable                     
.
.End of Record                      139  
.
. Redefine FORM fields from key
. -----------------------------
EMECFLAG  FORM      2
