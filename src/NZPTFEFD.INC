. 9.08.001 06/10/2006 EC Created FD CAR 120013                              
. *----------------------------------------------------------------------
. * Include Name  :   NZPTFEFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Theatre Fee             
. *
. * File Type     :   SQL
. *
. * File Name     :   nzptfeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPTFEA1   IFILE    SQL, FIXED=207, KEY="U1-3,4-6,7-9,10-15,16-23,24-31,32-33"  
NZPTFEA2   IFILE    SQL, FIXED=207, KEY="U1-3,32-33,4-6,7-9,10-15,16-23,24-31"  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZTFHOSP  DIM       3      3        1     Hospital (pathspaf)                
NZTFSEST  DIM       3      3        4     Session Type (Cat TU)              
NZTFCLAM  DIM       3      3        7     Claim Code (Cat CL)                
NZTFFUND  DIM       6      6        10    Health Fund                        
NZTFFTAB  DIM       8      8        16    Health Fund Table                  
NZTFEDAT  DIM       8      8        24    Effective Date (CCYYMMDD)          
NZTFISEQ  DIM       2      2        32    Item Sequence                      
NZTFACTV  DIM       1      1        34    Active 0=Active 1=Inactive         
NZTFMUNI  FORM      5      4        35    Minutes Per Unit                   
NZTFUNTP  FORM      12.2   8        39    Unit Price                         
NZTFMINU  FORM      5      4        47    Minimum Units                      
NZTFMAXU  FORM      5      4        51    Maximum Units                      
NZTFCDAT  DIM       8      8        55    Date Record Created (CCYYMMDD)     
NZTFCTIM  DIM       8      8        63    Time Record Created (HH:MM:SS)     
NZTFCUID  DIM       10     10       71    WEB User ID Created (websecaf)     
NZTFUDAT  DIM       8      8        81    Date Record Update (CCYYMMDD)      
NZTFUTIM  DIM       8      8        89    Time Record Update (HH:MM:SS)      
NZTFUUID  DIM       10     10       97    WEB User ID Updated (websecaf)     
NZTFSPAR  DIM       100    100      107   Spare                              
.
.End of Record                      207  
.
