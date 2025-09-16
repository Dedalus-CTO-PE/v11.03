. V10.13.01 22/08/2018 PV C-0859742 Added Contact Medicare Number, Reference, 
.                                   DOB to spare variable
. V10.07.01 02/11/2015 SA C-294154 Added PMCESSMS
. V10.03.03 30/11/2011 SA C-248529 Added PMCEWPID
. V10.03.02 25/11/2011 SA C-248529 Added PMCETPID
. V10.03.01 07/11/2011 EC C-248529 Added audit file and counter to key
. V10.02.02 08/06/2011 EC C-239530 Added PMCECONT
. V10.02.01 06/06/2011 JT C-240722 Added second given name
. V10.01.01 15/03/2011 DS  Added PMCESLET and PMCEACTV    CAR 239530
. V9.05.001 24/03/2006 EC  Created FD CAR 79277
. *----------------------------------------------------------------------
. * Include Name  :   PMSCEXFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Extra Contact Details              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscexaf.dat
. * Audit Name    :   pmsaudce.dat
. *
. * Index Values  :   KEY14                                                  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PMSAUDCE   IFILE    SQL, FIXED=614, KEY="D1-8,9-16,17-18,19-19"                 
PMSAUDC2   IFILE    SQL, FIXED=614, KEY="D26-33,34-36,37-39,1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCEAUDD  DIM       8      8        1     Date of Change
PMCEAUDT  DIM       8      8        9     Time of Change
PMCEAUDP  DIM       2      2        17    Port
PMCEAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PMCEAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PMCEAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PMSCEXA1   IFILE    SQL, FIXED=589, KEY="U1-8,9-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCEURNO  DIM       8      8        1     U/R Number                         
PMCETYPE  DIM       3      3        9     Type of Contact (Cat tc)           
PMCECNTR  DIM       3      3        12    Counter                            
PMCETITL  DIM       4      4        15    Title                              
PMCESNAM  DIM       40     40       19    Surname                            
PMCEGNAM  DIM       40     40       59    Given Name                         
PMCEGNM2  DIM       40     40       99    Second Given Name                  
PMCEADD1  DIM       35     35       139   Address Line 1                     
PMCEADD2  DIM       35     35       174   Address Line 2                     
PMCEADD3  DIM       35     35       209   Address Line 3                     
PMCEADD4  DIM       35     35       244   Address Line 4                     
PMCEPOST  DIM       8      8        279   Post Code                          
PMCETELP  DIM       20     20       287   Telephone Private                  
PMCETELB  DIM       20     20       307   Telephone Business                 
PMCETELM  DIM       20     20       327   Telephone Mobile                   
PMCERELP  DIM       10     10       347   Relationship                       
PMCEEMAI  DIM       80     80       357   Email Address                      
PMCECDAT  DIM       8      8        437   Date Record Created (CCYYMMDD)     
PMCECTIM  DIM       8      8        445   Time Record Created (HH:MM:SS)     
PMCECUID  DIM       10     10       453   WEB User ID Created (websecaf)     
PMCEUDAT  DIM       8      8        463   Update Date (CCYYMMDD)             
PMCEUTIM  DIM       8      8        471   Update Time (HH:MM:SS)             
PMCEUUID  DIM       10     10       479   WEB User ID Updated (websecaf)     
PMCESLET  DIM       1      1        489   Send Letter (0=No,1=Yes)           
PMCEACTV  DIM       1      1        490   Active (0=Active 1=Inactive)       
PMCECONT  DIM       3      3        491   Country of Birth (Cat C)           
PMCEDINA  DIM       8      8        494   Inactivate Date (CCYYMMDD)         
PMCETPID  DIM       20     20       502   Third Party Unique ID              
PMCEWPID  DIM       10     10       522   webPAS Unique ID                   
PMCESSMS  DIM       1      1        532   Send SMS                           
.                                         0 or Blank = No                      
.                                         1 = Yes                              
PMCECMED  DIM       10     10       533   Contact Medicare Card Number       
PMCECREF  DIM       1      1        543   Contact Reference Number           
PMCECDOB  DIM       8      8        544   Contact Date of Birth              
PMCESPAR  DIM       37     37       552   Spare                              
.
.End of Record                      589  
.
