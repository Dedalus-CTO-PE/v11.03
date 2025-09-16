. 9.08 .001 22/03/2007 JH  Created                                           
. 9.08 .002 22/03/2007                                                       
. *----------------------------------------------------------------------
. * Include Name  :   ALLEMDFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Encounter Medications
. *
. * File Type     :   SQL
. *
. * File Name     :   allemdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLEMDA1   IFILE    SQL, FIXED=216, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALEMVISN  DIM       8      8        1     Referral/Visit Number              
ALEMENCT  DIM       8      8        9     Encounter Number                   
ALEMMCNT  DIM       8      8        17    Medication Count                   
ALEMCODE  DIM       20     20       25    Medication code (allmedaf)         
ALEMQANT  DIM       3      3        45    Quantity                           
ALEMUNIT  DIM       3      3        48    Units (Cat UN)                     
ALEMDURA  DIM       4      4        51    Duration                           
ALEMDTYP  DIM       3      3        55    Duration Type (Cat UI)             
ALEMMEDR  DIM       3      3        58    Medication Route (Cat MR)          
ALEMMEDT  DIM       3      3        61    Medication Type (Cat MZ)           
ALEMTEXT  DIM       50     50       64    Free text                          
ALEMCDAT  DIM       8      8        114   Date record created (CCYYMMDD)     
ALEMCTIM  DIM       8      8        122   Time record created (HH:MM:SS)     
ALEMCUID  DIM       10     10       130   WEB user ID created (websecaf)     
ALEMUDAT  DIM       8      8        140   Date record updated (CCYYMMDD)     
ALEMUTIM  DIM       8      8        148   Time record updated (HH:MM:SS)     
ALEMUUID  DIM       10     10       156   WEB user ID updated (websecaf)     
ALEMSPAR  DIM       50     50       166   Spare                              
.
.End of Record                      216  
.
