. V10.03.01 28/08/2013 EC C-275205 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSAMNFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Admission Request Patient Needs    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsamnaf.dat
. *
. * Index Values  :   KEY15                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAMNA1   IFILE    SQL, FIXED=308, KEY="U1-10,27-28,29-31"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAMREQN  DIM       10     10       1     Admission Request Number           
PMAMURNO  DIM       8      8        11    U/R Number                         
PMAMVISN  DIM       8      8        19    Visit Number                       
PMAMCATG  DIM       2      2        27    Category (patcodes)                
.                                         "yk" - Co-Morbidity Conditions       
.                                         "yn" - Medication Advice             
.                                         "yo" - Anti-Platelet                 
.                                         "WH" - Tertiary Care Reason          
.                                         "yq" - Patient Needs                 
PMAMCODE  DIM       3      3        29    Category Code (patcodes)           
PMAMCOMM  DIM       200    200      32    Comments                           
PMAMCDAT  DIM       8      8        232   Created Date (CCYYMMDD)            
PMAMCTIM  DIM       8      8        240   Created Time (HH:MM:SS)            
PMAMCUID  DIM       10     10       248   Created By User (websecaf)         
PMAMSPAR  DIM       50     50       258   Spare                              
.
.End of Record                      308  
.
