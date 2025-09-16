. V10.06.01 13/03/2015 EC C-303890 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   OUTCPCFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Clinic Type Procedure Codes        
. *
. * File Type     :   SQL
. *
. * File Name     :   outcpcaf.dat
. *
. * Index Values  :   KEY21   KEY91                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTCPCA1   IFILE    SQL, FIXED=184, KEY="U1-6,7-12,13-21"                       
OUTCPCA2   IFILE    SQL, FIXED=184, KEY="U1-6,7-12,22-91,13-21"                 
FILCPCA1  INIT      "cpcaf"
FILCPCA2  INIT      "cpcaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTCPSITE  DIM       6      6        1     Site Code                          
OTCPCTYP  DIM       6      6        7     Clinic Type                        
OTCPPROC  DIM       9      9        13    Procedcure Code                    
OTCPDESC  DIM       70     70       22    Procedure Description               
OTCPICDC  DIM       9      9        92    Equivalent ICD10 Code              
OTCPACTV  DIM       1      1        101   Active (0=No,1=Yes)                
OTCPCDAT  DIM       8      8        102   Date Record Created (CCYYMMDD)     
OTCPCTIM  DIM       8      8        110   Time Record Created (HH:MM:SS)     
OTCPCUID  DIM       10     10       118   WEB User ID Created (websecaf)     
OTCPUDAT  DIM       8      8        128   Date Record Updated (CCYYMMDD)     
OTCPUTIM  DIM       8      8        136   Time Record Updated (HH:MM:SS)     
OTCPUUID  DIM       10     10       144   WEB User ID Updated (websecaf)     
OTCPSPAR  DIM       30     30       154   Spare Variable                     
.
.End of Record                      184  
.
