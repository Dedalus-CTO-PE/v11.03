. V11.02.01 10/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FA3FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR AllergyI Inbound Holding Table
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fa3af.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FA3A1   IFILE    SQL, FIXED=1963, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLA3RSID  DIM       64     64       1     Allergy Intl Logical Id            
HLA3VRID  DIM       10     10       65    Allergy Intl Version I             
HLA3CNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLA3CNT2  DIM       4      4        79    Reaction Counter                   
HLA3RSTX  DIM       200    200      83    Reaction Substance Text            
HLA3RSSY  DIM       255    255      283   Reac Sub Coding System             
HLA3RSVE  DIM       50     50       538   Reac Sub Coding Version            
HLA3RSCD  DIM       50     50       588   Reac Sub Coding Code               
HLA3RSDI  DIM       200    200      638   Reac Sub Coding Display            
HLA3RSSL  DIM       10     10       838   Reac Sub Coding UserSelected       
HLA3RDES  DIM       200    200      848   Reaction Description of Event      
HLA3ROST  DIM       40     40       1048  Reaction OnSet Datetime            
HLA3RSVY  DIM       10     10       1088  Reaction Severity                  
HLA3RETX  DIM       200    200      1098  Reaction Exposure Route Text       
HLA3RESY  DIM       255    255      1298  Reac Exp Route Coding System       
HLA3REVE  DIM       50     50       1553  Reac Exp Route Coding Version      
HLA3RECD  DIM       50     50       1603  Reac Exp Route Coding Code         
HLA3REDI  DIM       200    200      1653  Reac Exp Route Coding Display      
HLA3RESL  DIM       10     10       1853  Reac Exp Route Coding UserSelected 
HLA3SPAR  DIM       100    100      1863  Spare Variable                     
.
.End of Record                      1963 
.
