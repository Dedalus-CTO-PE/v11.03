. V10.14.01 15/02/2019 DNG C-0821139 Added 'Telehealth' Room Type               
. *----------------------------------------------------------------------
. * Include Name  :   EMRLHIFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   ED Location History                
. *
. * File Type     :   SQL
. *
. * File Name     :   emrlhiaf.dat
. *
. * Index Values  :   KEY22   KEY38   KEY23                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRLHIA1   IFILE    SQL, FIXED=106, KEY="U1-3,4-6,8-15,16-23"
EMRLHIA2   IFILE    SQL, FIXED=106, KEY="U30-37,38-45,1-3,4-6,8-15,16-23"
EMRLHIA3   IFILE    SQL, FIXED=106, KEY="U24-24,1-3,4-6,8-15,16-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMLHLOCA  DIM       3      3        1     Location                           
EMLHSCOD  DIM       3      3        4     Site Code                          
EMLHOTYP  DIM       1      1        7     Room Type                          
.                                         " " = Emergency Map Room             
.                                         O = Other Dept                       
.                                         W = Waiting Room                     
.                                         N = Next Patient                     
.                                         E = Emergency Telehealth Service
EMLHEFDT  DIM       8      8        8     Last Effective Date                
EMLHEFTM  DIM       8      8        16    Last Effective Time                
EMLHDELE  DIM       1      1        24    Deleted                            
.                                         1 = Yes                              
EMLHACTV  DIM       1      1        25    Active                             
.                                         0 = Active                           
.                                         1 = Inactive                         
EMLHSSIN  DIM       1      1        26    Short Stay Indicator               
.                                         1 = Yes                              
EMLHMAXP  FORM      4      3        27    Maximum Number of Patients         
EMLHCDAT  DIM       8      8        30    Date Record Created (CCYYMMDD)     
EMLHCTIM  DIM       8      8        38    Time Record Created (HH:MM:SS)     
EMLHCUID  DIM       10     10       46    WEB User ID Created (websecaf)     
EMLHSPAR  DIM       50     50       56    Spare                              
.
.End of Record                      106  
.
