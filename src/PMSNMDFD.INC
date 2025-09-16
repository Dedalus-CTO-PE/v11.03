. V10.08.01 23/03/2016 DN C-303887 Changed comments of PMNDDIAG. Changed indexes
. V10.06.00 01/06/2015 DN C-303887 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSNMDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   NMDS Extract Records               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsnmdaf.dat
. *
. * Index Values  :   KEY19   KEY20   KEY29   KEY19                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSNMDA1   IFILE    SQL, FIXED=772, KEY="U1-8,17-18,54-55,48-52,66-67"          
PMSNMDA2   IFILE    SQL, FIXED=772, KEY="U1-8,17-18,54-55,48-52,53-53,66-67"    
PMSNMDA3   IFILE    SQL, FIXED=772, KEY="U1-8,17-18,54-55,48-52,56-63,64-65,66-67"
PMSNMDA4   IFILE    SQL, FIXED=772, KEY="U48-52,1-8,17-18,54-55,66-67"          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNDADMN  DIM       8      8        1     Admission number                   
PMNDPNHI  DIM       8      8        9     Patient NHI number                 
PMNDETYP  DIM       2      2        17    NMDS Event Type (IP, BT, IM etc)   
PMNDEDAT  DIM       8      8        19    Event Admission Date               
PMNDETIM  DIM       8      8        27    Event Admission Time               
PMNDFACI  DIM       4      4        35    Event Facility Code                
PMNDELID  DIM       1      1        39    Event Local Identifier (9,8,7...)  
PMNDXDAT  DIM       8      8        40    Extract Date                       
PMNDBTCH  DIM       5      5        48    Batch Number                       
PMNDSTAT  DIM       1      1        53    Processing Status                  
.                                         1=Sent                               
.                                         2=Error                              
.                                         3=Accepted                           
.                                         4=Corrected                          
.                                         5=File Failure                       
.                                         6=Cancelled                          
PMNDDIAG  DIM       2      2        54    Diag. No. (01.99) for Rec Type=HD  
.                                         or Msg Func (D1,A1,A2,etc) for Rec   
.                                         Type=HE                              
PMNDLSDT  DIM       8      8        56    Legal Status Date for Rec. Type=HC 
PMNDLSCD  DIM       2      2        64    Legal Status Code for Rec. Type=HC 
PMNDERRC  DIM       2      2        66    Error Count Index (00-99)          
PMNDERRN  DIM       8      8        68    Error Number                       
PMNDERRT  DIM       70     70       76    Error Text                         
PMNDUSRS  DIM       10     10       146   User last updated processing status
PMNDUDAT  DIM       8      8        156   Date last updated processing status
PMNDUTIM  DIM       8      8        164   Time last updated processing status
PMNDREDT  DIM       500    500      172   Extract record HE detail text      
PMNDSPAR  DIM       100    100      672   Spare                              
.
.End of Record                      772  
.
