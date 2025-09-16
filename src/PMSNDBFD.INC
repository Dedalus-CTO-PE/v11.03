. V11.03.02 10/10/2023 PVL C-0935874 Added NPUR, NSUR, NMUR                     
. V11.03.01 31/08/2023 PVL C-0935874 Created Table.                             
. *----------------------------------------------------------------------
. * Include Name  :   PMSNDBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   NIHC IHI Dashboard Device Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsndbaf.dat
. *
. * Index Values  :   KEY53   KEY53                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSNDBA1   IFILE    SQL, FIXED=1671, KEY="U1-50,701-703"
PMSNDBA2   IFILE    SQL, FIXED=1671, KEY="U701-703,1-50"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMNBDNAM  DIM       50     50       1     NIHC IHI Device Name               
PMNBDDSC  DIM       100    100      51    NIHC IHI Device Description        
PMNBGDAT  DIM       50     50       151   JWT Generation Date (Info Only)    
PMNBDPTH  DIM       500    500      201   NIHC IHI Device Directory Path     
PMNBHOSP  DIM       3      3        701   Hospital ID                        
PMNBEDAT  DIM       50     50       704   JWT Expiration Date (Info Only)    
PMNBNPUR  DIM       255    255      754   NIHC Path URL                      
PMNBNSUR  DIM       255    255      1009  NIHC Patient Summary Page URL      
PMNBNMUR  DIM       255    255      1264  NIHC MyHR Viewer URL               
PMNBCUID  DIM       10     10       1519  Created By User ID                 
PMNBCDAT  DIM       8      8        1529  Created By Date                    
PMNBCTIM  DIM       8      8        1537  Created By Time                    
PMNBUUID  DIM       10     10       1545  Updated By User ID                 
PMNBUDAT  DIM       8      8        1555  Updated By Date                    
PMNBUTIM  DIM       8      8        1563  Updated By Time                    
PMNBSPAR  DIM       100    100      1571  Spare Variable                     
.
.End of Record                      1671 
.
