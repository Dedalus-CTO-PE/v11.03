. V11.02.01 06/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FAFFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Recorder Ref 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fafaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FAFA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLAFRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLAFVRID  DIM       10     10       65    Allergy Intl Version Id            
HLAFCNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLAFRREF  DIM       200    200      79    Recorder Reference                 
HLAFRTYP  DIM       255    255      279   Recorder Type                      
HLAFRDIS  DIM       200    200      534   Recorder String                    
HLAFRIDU  DIM       50     50       734   Recorder Id Use                    
HLAFRSYS  DIM       255    255      784   Recorder Id System                 
HLAFRIVL  DIM       200    200      1039  Recorder Id Value                  
HLAFRIDS  DIM       255    255      1239  Recorder Id Type Cod System        
HLAFRIDV  DIM       200    200      1494  Recorder Id Type Cod Ver           
HLAFRIDC  DIM       50     50       1694  Recorder Id Type Cod Code          
HLAFRIDD  DIM       200    200      1744  Recorder Id Type Cod Disp          
HLAFRIUS  DIM       10     10       1944  Recorder Id Type Cod User Sel      
HLAFRIDT  DIM       200    200      1954  Recorder Id Type Cod Text          
HLAFRIPS  DIM       40     40       2154  Recorder Id Period Start           
HLAFRIPE  DIM       40     40       2194  Recorder Id Period End             
HLAFSPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
