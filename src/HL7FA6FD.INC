. V11.02.01 17/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FA6FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Allergy Intl Reaction Not     
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fa6af.dat
. *
. * Index Values  :   KEY86   KEY86                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FA6A1   IFILE    SQL, FIXED=2757, KEY="U1-64,65-74,75-78,79-82,83-86"
HL7FA6A2   IFILE    SQL, FIXED=2757, KEY="U83-86,1-64,65-74,75-78,79-82"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLA6RSID  DIM       64     64       1     Allergy Intl Logical Id            
HLA6VRID  DIM       10     10       65    Allergy Intl Version Id            
HLA6CNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLA6CNT2  DIM       4      4        79    Reaction Counter                   
HLA6CNT3  DIM       4      4        83    Reaction Note Counter              
HLA6NTIM  DIM       40     40       87    Note Time                          
HLA6NTXT  DIM       300    300      127   Note Text                          
HLA6NSTR  DIM       200    200      427   Note Auth String                   
HLA6NREF  DIM       200    200      627   Note Auth Reference                
HLA6NTYP  DIM       255    255      827   Note Auth Type                     
HLA6NDIS  DIM       255    255      1082  Note Auth Display                  
HLA6NIDU  DIM       20     20       1337  Note Auth Id Use                   
HLA6NSYS  DIM       255    255      1357  Note Auth Id System                
HLA6NIVL  DIM       200    200      1612  Note Auth Id Value                 
HLA6NIDS  DIM       255    255      1812  Note Auth Id Type Cod System       
HLA6NIDV  DIM       50     50       2067  Note Auth Id Type Cod Ver          
HLA6NIDC  DIM       50     50       2117  Note Auth Id Type Cod Code         
HLA6NIDD  DIM       200    200      2167  Note Auth Id Type Cod Disp         
HLA6NIUS  DIM       10     10       2367  Note Auth Id Type Cod UserSelected 
HLA6NIDT  DIM       200    200      2377  Note Auth Id Type Cod Text         
HLA6NIPS  DIM       40     40       2577  Note Auth Id Period Start          
HLA6NIPE  DIM       40     40       2617  Note Auth Id Period End            
HLA6SPAR  DIM       100    100      2657  Spare Variable                     
.
.End of Record                      2757 
.
