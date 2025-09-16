. V10.04.01 08/04/2014 JT C-294210 New FD for Program Maintenance Comments      
. *----------------------------------------------------------------------
. * Include Name  :   PMSUDTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Program Comments Header table      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsudtaf.dat
. *
. * Index Values  :   KEY40                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUDTA1   IFILE    SQL, FIXED=194, KEY="U1-8,9-11,12-14,15-20,21-23,24-31,32-34,35-40"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUTURNO  DIM       8      8        1     U/R Number                         
PMUTATYP  DIM       3      3        9     Admission Type (Cat A)             
PMUTCTYP  DIM       3      3        12    Claim Type (Cat CL)                
PMUTHFND  DIM       6      6        15    Health Fund                        
PMUTHTAB  DIM       3      3        21    Health Fund Table Type (Cat HT)    
PMUTEXPD  DIM       8      8        24    Expiry Date (ccyymmdd)             
PMUTCOMT  DIM       3      3        32    Comment Type                       
.                                         001 - Progarm Maintenance Comments   
PMUTNNUM  DIM       6      6        35    Note Number                        
PMUTIDAT  DIM       8      8        41    Input Date (ccyymmdd)              
PMUTITIM  DIM       8      8        49    Input Time (hh:mm:ss)              
PMUTIUID  DIM       10     10       57    Input by WEB User ID (websecaf)    
PMUTDIND  DIM       1      1        67    Delete Indicatore (0=No, 1=Yes)    
PMUTDDAT  DIM       8      8        68    Delete Date (ccyymmdd)             
PMUTDTIM  DIM       8      8        76    Delete Time (hh:mm:ss)             
PMUTDUID  DIM       10     10       84    Delete by WEB User ID (websecaf)   
PMUTSPAR  DIM       100    100      94    Spare variable                     
.
.End of Record                      194  
.
