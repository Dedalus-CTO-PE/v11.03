. V11.02.01 06/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FAHFD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   HL7 FHIR Allergy Intl Asserter Ref 
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fahaf.dat
. *
. * Index Values  :   KEY78                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FAHA1   IFILE    SQL, FIXED=2334, KEY="U1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLAHRSID  DIM       64     64       1     Allergy Intl Logical Id            
HLAHVRID  DIM       10     10       65    Allergy Intl Version Id            
HLAHCNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLAHAREF  DIM       200    200      79    Asserter Reference                 
HLAHATYP  DIM       255    255      279   Asserter Type                      
HLAHADIS  DIM       200    200      534   Asserter String                    
HLAHAIDU  DIM       50     50       734   Asserter Id Use                    
HLAHASYS  DIM       255    255      784   Asserter Id System                 
HLAHAIVL  DIM       200    200      1039  Asserter Id Value                  
HLAHAIDS  DIM       255    255      1239  Asserter Id Type Cod System        
HLAHAIDV  DIM       200    200      1494  Asserter Id Type Cod Ver           
HLAHAIDC  DIM       50     50       1694  Asserter Id Type Cod Code          
HLAHAIDD  DIM       200    200      1744  Asserter Id Type Cod Disp          
HLAHAIUS  DIM       10     10       1944  Asserter Id Type Cod User Sel      
HLAHAIDT  DIM       200    200      1954  Asserter Id Type Cod Text          
HLAHAIPS  DIM       40     40       2154  Asserter Id Period Start           
HLAHAIPE  DIM       40     40       2194  Asserter Id Period End             
HLAHSPAR  DIM       100    100      2234  Spare Variable                     
.
.End of Record                      2334 
.
