. V11.02.01 05/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FADFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Encounter Ref
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fadaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FADA1   IFILE    SQL, FIXED=2200, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLADRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLADVRID  DIM       10     10       65    Allergy Intl Version Id            
HLADCNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLADEREF  DIM       200    200      79    Encounter Reference                
HLADETYP  DIM       255    255      279   Encounter Type                     
HLADEDIS  DIM       255    255      534   Encounter String                   
HLADEIDU  DIM       20     20       789   Encounter Id Use                   
HLADESYS  DIM       255    255      809   Encounter Id System                
HLADEIVL  DIM       200    200      1064  Encounter Id Value                 
HLADEIDS  DIM       255    255      1264  Encounter Id Type Cod System       
HLADEIDV  DIM       50     50       1519  Encounter Id Type Cod Ver          
HLADEIDC  DIM       50     50       1569  Encounter Id Type Cod Code         
HLADEIDD  DIM       200    200      1619  Encounter Id Type Cod Disp         
HLADEIDL  DIM       1      1        1819  Encounter Id Type Cod User Sel     
HLADEIDT  DIM       200    200      1820  Encounter Id Type Cod Text         
HLADEIPS  DIM       40     40       2020  Encounter Id Period Start          
HLADEIPE  DIM       40     40       2060  Encounter Id Period End            
HLADSPAR  DIM       100    100      2100  Spare Variable                     
.
.End of Record                      2200 
.
