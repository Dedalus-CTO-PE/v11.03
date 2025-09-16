. V11.03.01 21/03/2023 PVL C-0923750 Add new fields ALDISDAT, ALDIEDAT          
. V11.01.01 31/03/2021 EC C-0902602 Changed ALDIDESC to DIM 80 & Increased spare
. V10.04.01 20/01/2014 EC C-285465 Added ALDIMHCP
. V9.07.001 01/08/2006 EC  Added HDP CAR 110190
. V9.00.001 12/05/2001 SB  Created FD
. *----------------------------------------------------------------------
. * Include Name  :   ALLDIAFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Diagnosis Codes For Each Department
. *
. * File Type     :   SQL
. *
. * File Name     :   alldiaaf.dat
. *
. * Index Values  :   KEY12   KEY92                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLDIAA1   IFILE    SQL, FIXED=213, KEY="U1-3,4-12"
ALLDIAA2   IFILE    SQL, FIXED=213, KEY="U1-3,13-92,4-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALDIDEPT  DIM       3      3        1     Department (alldepaf)              
ALDIDIAG  DIM       9      9        4     Diagnosis Code                     
ALDIDESC  DIM       80     80       13    Diagnosis Description              
ALDIICD   DIM       9      9        93    Equivalent ICD10 Code              
ALDIACTV  DIM       1      1        102   Active (0=No,1=Yes)                
ALDICDAT  DIM       8      8        103   Date Record Created (CCYYMMDD)     
ALDICTIM  DIM       8      8        111   Time Record Created (HH:MM:SS)     
ALDICUID  DIM       10     10       119   WEB User ID Created (websecaf)     
ALDIUDAT  DIM       8      8        129   Date Record Updated (CCYYMMDD)     
ALDIUTIM  DIM       8      8        137   Time Record Updated (HH:MM:SS)     
ALDIUUID  DIM       10     10       145   WEB User ID Updated (websecaf)     
ALDIMHDP  DIM       4      4        155   HDP Equivalent                     
ALDIMHCP  DIM       4      4        159   HCP Equivalent                     
ALDISDAT  DIM       8      8        163   Diagnosis Code Start Date (CCYYMMDD
ALDIEDAT  DIM       8      8        171   Diagnosis Code End Date (CCYYMMDD) 
ALDISPAR  DIM       34     34       179   Spare Variable                     
.
.End of Record                      213  
.
