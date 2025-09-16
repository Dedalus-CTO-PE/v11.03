. VF.00.001 29/10/1998 SB  Year 2000                                         
. *----------------------------------------------------------------------
. * Include Name  :   SINTRBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Stock Transfer Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   sintrbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINTRBA1   IFILE    SQL, FIXED=94, KEY="U1-8,9-11"                              
SINTRBA2   IFILE    SQL, FIXED=94, KEY="U52-53,54-65,47-51,1-8,9-11"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SITBNUM   DIM       8      8        1     Transfer Number                    
SITBUNI   DIM       3      3        9     Unique ID                          
SITBTYP   DIM       1      1        12    Type 0=From, 1=To                  
SITBPER   DIM       6      6        13    Period CCYYMM                      
SITBCAT   DIM       7      7        19    Catalog                            
SITBWAR   DIM       5      5        26    Warehouse                          
SITBQTY   FORM      12.2   8        31    Quantity                           
SITBCST   FORM      12.2   8        39    Cost                               
SITBBCH   DIM       5      5        47    General Ledger Batch               
SITBLED   DIM       2      2        52    Ledger                             
SITBACC   DIM       12     12       54    Account                            
SITBSPA   DIM       28     28       66    Spare                              
.
.End of Record                      94   
.
