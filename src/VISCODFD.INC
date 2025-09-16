. V10.10.01 09/03/2017 EC C-0814747 Add ED Breach                               
. V10.08.02 24/05/2016 PV C-0321157 Added Link Type 03                          
. V10.08.01 29/03/2016 SA C-309924 Added VSCODELT, VSCODDAT, VSCODTIM & VSCODUID
. V10.03.02 31/05/2013 DS C-283509 Increased VSCOTKEY to 30 chars               
. V10.03.01 17/08/2012 EC C-270231 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   VISCODFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Visit Coding Details               
. *
. * File Type     :   SQL
. *
. * File Name     :   viscodaf.dat
. *
. * Index Values  :   KEY37                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISCODA1   IFILE    SQL, FIXED=344, KEY="U1-2,3-32,33-34,35-37"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSCOTYPE  DIM       2      2        1     Link Type                          
.                                         "01" - ED visit                      
.                                         "02" - Cancer Registration           
.                                         "03" - Pre-Operative Check List      
.                                         "04" - ED Breach Reason 1            
.                                         "05" - ED Breach Reason 2            
.                                         "06" - ED Breach Reason 3            
VSCOTKEY  DIM       30     30       3     Link Type Key                      
.                                         "01" - ED Visit Number               
.                                         "02" - Visit No/Primary Site/Reg.No. 
.                                         "03" - Unique ID/Record Type         
.                                         "04" - ED Visit Number               
.                                         "05" - ED Visit Number               
.                                         "06" - ED Visit Number               
VSCOCATG  DIM       2      2        33    Category (patcodes)                
VSCOCODE  DIM       3      3        35    Category Code (patcodes)           
VSCOTEXT  DIM       200    200      38    Free Format Text                   
VSCOCDAT  DIM       8      8        238   Date Record Created (CCYYMMDD)     
VSCOCTIM  DIM       8      8        246   Time Record Created (HH:MM:SS)     
VSCOCUID  DIM       10     10       254   WEB User ID Created (websecaf)     
VSCODELT  DIM       1      1        264   Deleted Flag                       
.                                         0 or Blank = No                      
.                                         1 = Yes                              
VSCODDAT  DIM       8      8        265   Date Record Deleted (ccyymmdd)     
VSCODTIM  DIM       8      8        273   Time record Deleted (hh:mm:ss)     
VSCODUID  DIM       10     10       281   User Who Deleted (websecaf)        
VSCOSPAR  DIM       53     53       291   Spare                              
.
.End of Record                      344  
.
