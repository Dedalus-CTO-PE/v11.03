. VF.01.001 05/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSAADFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Area Analysis Definition           
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsaadaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSAADA1   IFILE    SQL, FIXED=102, KEY="U1-1,2-11"                             
CCSAADA2   IFILE    SQL, FIXED=102, KEY="U1-1,42-51,52-61,62-71,2-11"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCADDEF   DIM       1      1        1     Definition 1-9                     
CCADPC    DIM       10     10       2     Post Code                          
CCADDES   DIM       30     30       12    Area Desciption                    
CCADLV2   DIM       10     10       42    Level 2 eg Australia               
CCADLV3   DIM       10     10       52    Level 3 eg Victoria                
CCADLV4   DIM       10     10       62    Level 4 eg Melbourne               
CCADSPA   DIM       30     30       72    Spare                              
.
.End of Record                      102  
.
