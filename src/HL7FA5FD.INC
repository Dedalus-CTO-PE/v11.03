. V11.02.01 17/10/2022  C-                                                      
. *----------------------------------------------------------------------
. * Include Name  :   HL7FA5FD.INC
. *
. * Function      :   File Def'n Include for Health Level 7                     
. *                   FHIR Allergy Intl Notes            
. *
. * File Type     :   SQL
. *
. * File Name     :   hl7fa5af.dat
. *
. * Index Values  :   KEY82   KEY82                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
HL7FA5A1   IFILE    SQL, FIXED=2753, KEY="U1-64,65-74,75-78,79-82"
HL7FA5A2   IFILE    SQL, FIXED=2753, KEY="U79-82,1-64,65-74,75-78"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
HLA5RSID  DIM       64     64       1     Allergy Intl Logical Id            
HLA5VRID  DIM       10     10       65    Allergy Intl Version Id            
HLA5CNT1  DIM       4      4        75    Allergy Intl Ver Id Counter        
HLA5CNT2  DIM       4      4        79    Allergy Intl Note Counter          
HLA5NTIM  DIM       40     40       83    Note Time                          
HLA5NTXT  DIM       300    300      123   Note Text                          
HLA5NSTR  DIM       200    200      423   Note Auth String                   
HLA5NREF  DIM       200    200      623   Note Auth Reference                
HLA5NTYP  DIM       255    255      823   Note Auth Type                     
HLA5NDIS  DIM       255    255      1078  Note Auth Display                  
HLA5NIDU  DIM       20     20       1333  Note Auth Id Use                   
HLA5NSYS  DIM       255    255      1353  Note Auth Id System                
HLA5NIVL  DIM       200    200      1608  Note Auth Id Value                 
HLA5NIDS  DIM       255    255      1808  Note Auth Id Type Cod System       
HLA5NIDV  DIM       50     50       2063  Note Auth Id Type Cod Ver          
HLA5NIDC  DIM       50     50       2113  Note Auth Id Type Cod Code         
HLA5NIDD  DIM       200    200      2163  Note Auth Id Type Cod Disp         
HLA5NIUS  DIM       10     10       2363  Note Auth Id Type Cod User Sel     
HLA5NIDT  DIM       200    200      2373  Note Auth Id Type Cod Text         
HLA5NIPS  DIM       40     40       2573  Note Auth Id Period Start          
HLA5NIPE  DIM       40     40       2613  Note Auth Id Period End            
HLA5SPAR  DIM       100    100      2653  Spare Variable                     
.
.End of Record                      2753 
.
