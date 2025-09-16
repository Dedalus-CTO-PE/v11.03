. V10.09.01 04/01/2017 DS C-0818645 Added index 2 and index 3
. V10.08.01 24/03/2016 SA C-0321234 Added PTALCPAC, PTALUCPF & PTALDCPU
. V10.04.01 06/01/2014 DN C-294399 Increased record size for new spare variable.
.                                  Moved PTALTPID out of spare variable.
. V10.03.02 05/04/2012 SA C-263261 Added PTALTPID                               
. V10.03.01 21/11/2011 JP C-249362 Added Counter                                
. V10.01.01 08/03/2011 DS  Added new fields ICDC to UUID CAR 239539             
. V9.07.001 18/09/2007 EC  Added second audit file index CAR 107243             
. V5.10.004 27/03/2001 DM  Generated FD                                         
. *----------------------------------------------------------------------
. * Include Name  :   PATALRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Alerts                     
. *
. * File Type     :   SQL
. *
. * File Name     :   patalrtf.dat
. * Audit Name    :   pataudal.dat
. *
. * Index Values  :   KEY16   KEY24   KEY24
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PATAUDAL   IFILE    SQL, FIXED=243, KEY="D1-8,9-16,17-18,19-19"                 
PATAUDA2   IFILE    SQL, FIXED=243, KEY="D26-33,1-8,9-16,17-18,19-19"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTALAUDD  DIM       8      8        1     Date of Change
PTALAUDT  DIM       8      8        9     Time of Change
PTALAUDP  DIM       2      2        17    Port
PTALAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PTALAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PTALAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PATALRT1   IFILE    SQL, FIXED=218, KEY="U1-8,9-10,11-13,14-16"                 
PATALRT2   IFILE    SQL, FIXED=218, KEY="U93-100,1-8,9-10,11-13,14-16"
PATALRT3   IFILE    SQL, FIXED=218, KEY="U85-92,1-8,9-10,11-13,14-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTALURNO  DIM       8      8        1     Patients UR Number                 
PTALCATG  DIM       2      2        9     Codes File Category (H1-H9)        
PTALCODE  DIM       3      3        11    Codes File Code (for Category)     
PTALCNTR  DIM       3      3        14    Counter                            
PTALDATE  DIM       8      8        17    Alert Date (CCYYMMDD)              
PTALCDTE  DIM       8      8        25    Creation Date (CCYYMMDD)           
PTALLIFE  DIM       1      1        33    Life Threatening Alert?            
.                                         PTCNLFCH = Yes, " " = No.            
PTALREAC  DIM       3      3        34    Reaction code (Category wn)        
PTALUSID  DIM       10     10       37    Web User ID                        
PTALLSEV  DIM       1      1        47    Severity Level (0-9)               
PTALRCOM  DIM       20     20       48    Reaction Comment                   
PTALRDTE  DIM       8      8        68    Review Date (ccyymmdd)             
PTALICDC  DIM       9      9        76    ICD10 Code                         
PTALDTIN  DIM       8      8        85    Date Inactive (ccyymmdd)           
PTALEDAT  DIM       8      8        93    End Date/Date Cleared (ccyymmdd)   
PTALRQBY  DIM       10     10       101   Requested By (HCP Code)            
PTALHOSP  DIM       3      3        111   Initiating Hospital                
PTALCTIM  DIM       8      8        114   Time Record Created (hh:mm:ss)     
PTALUDAT  DIM       8      8        122   Date Record Updated (ccyymmdd)     
PTALUTIM  DIM       8      8        130   Time Record Updated (hh:mm:ss)     
PTALUUID  DIM       10     10       138   WEB User ID Updated (websecaf)     
PTALTPID  DIM       20     20       148   Third Party System Identifier      
PTALCPAC  DIM       1      1        168   Care Pathway Activated             
.                                         0 or Blank = No                      
.                                         1 = Yes                              
PTALUCPF  DIM       10     10       169   User Id Who Last Updated Care      
.                                         Pathway Flag (websecaf)              
PTALDCPU  DIM       8      8        179   Last Date Care Pathway Activated   
.                                         Updated (ccyymmdd)                   
PTALSPAR  DIM       31     31       187   Spare Variable                     
.
.End of Record                      218  
.
.
. Variables for NZHIS Medical Warning Function
.
NZHISWRN  FORM      1        * KURN National Read OK 0-Read Failed
.                            *                       1-Read OK Warning Set
.                            *                       2-Read OK Warning Not Set
.
            INC     PATALTFD/INC                  * Alerts Save file
            INC     PATMWSFD/INC                  * Medical Warnings
