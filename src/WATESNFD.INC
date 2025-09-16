. V9.04.001 08/06/2005 JH                                                    
. V9.04.002 08/06/2005 JH  Added WTENSADI to index                           
. V9.04.003 08/06/2005                                                       
. V9.04.004 08/06/2005                                                       
. V9.04.005 14/09/2005 EC  Added WTENMANU CAR 76051                          
. V9.04.006 28/09/2005 EC  Added Index 5 CAR 76051                           
. *----------------------------------------------------------------------
. * Include Name  :   WATESNFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   ESIS Intra Episode Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   watesnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESNA1   IFILE    SQL, FIXED=199, KEY="U1-9,18-18,19-26,10-17,149-158"        
WATESNA2   IFILE    SQL, FIXED=199, KEY="U1-9,10-17,18-18,19-26,149-158"        
WATESNA3   IFILE    SQL, FIXED=199, KEY="U10-17,1-9,18-18,19-26,149-158"        
WATESNA4   IFILE    SQL, FIXED=199, KEY="U1-9,10-17,19-26,149-158,18-18"        
WATESNA5   IFILE    SQL, FIXED=199, KEY="U1-9,18-18,149-158,19-26,10-17"        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTENUNIQ  DIM       9      9        1     Unique Key                         
WTENEDAT  DIM       8      8        10    Extract Sent date (CCYYMMDD)       
WTENETYP  DIM       1      1        18    Event Type                         
.                                         U=Urgency
.                                         R=Readiness
.                                         S=Set SAD
.                                         P=Reason changed SAD
.                                         T=Transfer
.                                         M=MAPT
WTENEVDT  DIM       8      8        19    Event Date (CCYYMMDD)              
WTENEVAL  DIM       70     70       27    Event Value                        
WTENWEBC  DIM       10     10       97    Web User ID Creator                
WTENCDAT  DIM       8      8        107   Date Created (CCYYMMDD)            
WTENCTIM  DIM       8      8        115   Time Created (hh:mm:ss)            
WTENWEBU  DIM       10     10       123   Web User ID Updated                
WTENUDAT  DIM       8      8        133   Date Updated (CCYYMMDD)            
WTENUTIM  DIM       8      8        141   Time Updated (hh:mm:ss)            
WTENSADI  DIM       10     10       149   Schedule Admisssion Identifier     
WTENMANU  DIM       1      1        159   Manually Added Record              
.                                         0=No 1=Yes
WTENSPAR  DIM       39     39       160   Spare                              
.
.End of Record                      199  
.
