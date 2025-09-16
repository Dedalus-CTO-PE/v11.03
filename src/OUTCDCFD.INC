. V9.03.001 12/11/2003 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   OUTCDCFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Clinic Type Diagnosis Codes        
. *
. * File Type     :   SQL
. *
. * File Name     :   outcdcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTCDCA1   IFILE    SQL, FIXED=184, KEY="U1-6,7-12,13-21"                       
OUTCDCA2   IFILE    SQL, FIXED=184, KEY="U1-6,7-12,22-91,13-21"                 
FILCDCA1  INIT      "cdcaf"
FILCDCA2  INIT      "cdcaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTCDSITE  DIM       6      6        1     Site Code                          
OTCDCTYP  DIM       6      6        7     Clinic Type                        
OTCDDIAG  DIM       9      9        13    Diagnosis Code                     
OTCDDESC  DIM       70     70       22    Diagnosis Description              
OTCDICD   DIM       9      9        92    Equivalent ICD10 Code              
OTCDACTV  DIM       1      1        101   Active (0=No,1=Yes)                
OTCDCDAT  DIM       8      8        102   Date Record Created (CCYYMMDD)     
OTCDCTIM  DIM       8      8        110   Time Record Created (HH:MM:SS)     
OTCDCUID  DIM       10     10       118   WEB User ID Created (websecaf)     
OTCDUDAT  DIM       8      8        128   Date Record Updated (CCYYMMDD)     
OTCDUTIM  DIM       8      8        136   Time Record Updated (HH:MM:SS)     
OTCDUUID  DIM       10     10       144   WEB User ID Updated (websecaf)     
OTCDSPAR  DIM       30     30       154   Spare Variable                     
.
.End of Record                      184  
.
