. V11.01.01 26/04/2021 EC C-0901388 Added MRPSFTM1 to MRPSFTM5
. V5.01.001 27/11/1991 GKW Created FD                                        
. V5.09.000 18/01/2001 Pat Dirito Added Missing Details variables            
. *----------------------------------------------------------------------
. * Include Name  :   MRTPSHFD.INC
. *
. * Function      :   File Def'n Include for Medical Records Tracking
. *                   Post Discharge Status History 
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtpshaf.dat
. *
. *----------------------------------------------------------------------
.Data File Definition
.--------------------
MRTPSHA1   IFILE    SQL, FIXED=511, KEY="U1-8,9-16,17-21"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DMRPSADM  DIM       8      8        1     Event number (admission number)
MRPSDATE  DIM       8      8        9     Date of status
MRPSTIME  DIM       5      5        17    Time of status
MRPSSTAT  DIM       3      3        22    Status (Cat CP)
MRPSCMNT  DIM       30     30       25    Comments                              
MRPSMIS1  DIM       1      1        55    Missing Details 1 1=Yes 0=No
MRPSMIS2  DIM       1      1        56    Missing Details 2 1=Yes 0=No 
MRPSMIS3  DIM       1      1        57    Missing Details 3 1=Yes 0=No 
MRPSMIS4  DIM       1      1        58    Missing Details 4 1=Yes 0=No 
MRPSMIS5  DIM       1      1        59    Missing Details 5 1=Yes 0=No 
MRPSMIS6  DIM       1      1        60    Missing Details 6 1=Yes 0=No 
MRPSFTM1  DIM       80     80       61    Free Text Missing Details Line 1
MRPSFTM2  DIM       80     80      141    Free Text Missing Details Line 2
MRPSFTM3  DIM       80     80      221    Free Text Missing Details Line 3
MRPSFTM4  DIM       80     80      301    Free Text Missing Details Line 4
MRPSFTM5  DIM       80     80      381    Free Text Missing Details Line 5
MRPSSPAR  DIM       50     50      461    Spare                              
.
.End of Record                     511  
.
.Redefine Key Variables
.----------------------
MRPSADMN  FORM      8    
