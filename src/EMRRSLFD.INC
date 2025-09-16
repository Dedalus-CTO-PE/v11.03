. V10.03.01 23/10/2012 EC C-266929 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   EMRRSLFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Research Project Selection Criteria
. *
. * File Type     :   SQL
. *
. * File Name     :   emrrslaf.dat
. *
. * Index Values  :   KEY33                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRRSLA1   IFILE    SQL, FIXED=147, KEY="U1-3,4-11,12-13,14-23,24-33"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMRSRESP  DIM       3      3        1     Research Code (Cat eu)             
EMRSSDAT  DIM       8      8        4     Start Date (CCYYMMDD)              
EMRSTYPE  DIM       2      2        12    Selection Type                     
.                                         01 - Presenting Complaint            
.                                         02 - Diagnosis           
.                                         03 - Age
.                                         04 - Country of Birth
.                                         05 - Post Code
EMRSSELF  DIM       10     10       14    Selection From                     
.                                         Type 01 - Cat el Presenting complaint
.                                         Type 02 - Diagnosis (emricdaf)
.                                         Type 03 - Age    
.                                         Type 04 - Cat C Country of birth
.                                         Type 05 - Post Code
EMRSSELT  DIM       10     10       24    Selection To                       
.                                         Type 01 - Cat el Presenting complaint
.                                         Type 02 - Diagnosis (emricdaf)
.                                         Type 03 - Age
.                                         Type 04 - Cat C Country of birth
.                                         Type 05 - Post Code
EMRSSTAT  DIM       1      1        34    Active/Inactive                    
.                                         0=Active, 1=Inactive                 
EMRSCUID  DIM       10     10       35    WEB User ID Created (websecaf)     
EMRSCDAT  DIM       8      8        45    Date Record Created (CCYYMMDD)     
EMRSCTIM  DIM       8      8        53    Time Record Created (HH:MM:SS)     
EMRSUUID  DIM       10     10       61    WEB User ID Updated (websecaf)     
EMRSUDAT  DIM       8      8        71    Update Date (CCYYMMDD)             
EMRSUTIM  DIM       8      8        79    Update Time (HH:MM:SS)             
EMRSSPAR  DIM       60     60       87    Spare                              
.
.End of Record                      147  
.
