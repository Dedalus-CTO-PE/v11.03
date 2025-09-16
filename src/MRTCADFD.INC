. V11.03.01 13/07/2023 ITU C-0901388 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   MRTCADFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Audit Details               
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtcadaf.dat
. *
. * Index Values  :   KEY27                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTCADA1   IFILE    SQL, FIXED=585, KEY="U1-8,9-16,17-24,25-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRCDADMN  DIM       8      8        1     Admission Number                   
MRCDADAT  DIM       8      8        9     Audit Date (ccyymmdd)              
MRCDATIM  DIM       8      8        17    Audit Time (hh:mm:ss)              
MRCDCNTR  DIM       3      3        25    Counter                            
MRCDRTYP  DIM       2      2        28    Record Type                        
.                                         01 = Diagnosis                       
.                                         02 = Procedure                       
.                                         03 = Claim Type                      
.                                         04 = Health Fund                     
MRCDPRFX  DIM       1      1        30    Prefix                             
MRCDDCOD  DIM       9      9        31    Diagnosis Code                     
MRCDDDES  DIM       200    200      40    Diagnosis Description              
MRCDOFLG  DIM       1      1        240   Onset Flag                         
MRCDPCOD  DIM       9      9        241   Procedure Code                     
MRCDPDES  DIM       200    200      250   Procedure Description              
MRCDODAT  DIM       8      8        450   Operation Date (ccyymmdd)          
MRCDOSTM  DIM       8      8        458   Operation Start Time (hh:mm:ss)    
MRCDOETM  DIM       8      8        466   Operation End Time (hh:mm:ss)      
MRCDSURG  DIM       10     10       474   Operating Surgeon                  
MRCDDRGD  DIM       1      1        484   DRG Driver                         
MRCDSPAR  DIM       100    100      485   Spare Variable                     
.
.End of Record                      585  
.
