. V11.02.01 03/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FABFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Patient Ref  
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fabaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FABA1   IFILE    SQL, FIXED=2389, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLABRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLABVRID  DIM       10     10       65    Allergy Intl Version Id            
HLABCNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLABPREF  DIM       200    200      79    Patient Reference                  
HLABPTYP  DIM       255    255      279   Patient Type                       
HLABPDIS  DIM       255    255      534   Patient String                     
HLABPIDU  DIM       50     50       789   Patient Id Use                     
HLABPSYS  DIM       255    255      839   Patient Id System                  
HLABPIVL  DIM       200    200      1094  Patient Id Value                   
HLABPIDS  DIM       255    255      1294  Patient Id Type Cod System         
HLABPIDV  DIM       200    200      1549  Patient Id Type Cod Ver            
HLABPIDC  DIM       50     50       1749  Patient Id Type Cod Code           
HLABPIDD  DIM       200    200      1799  Patient Id Type Cod Disp           
HLABPIUS  DIM       10     10       1999  Patient Id Type Cod User Sel       
HLABPIDT  DIM       200    200      2009  Patient Id Type Cod Text           
HLABPIPS  DIM       40     40       2209  Patient Id Period Start            
HLABPIPE  DIM       40     40       2249  Patient Id Period End              
HLABSPAR  DIM       100    100      2289  Spare Variable                     
.
.End of Record                      2389 
.
