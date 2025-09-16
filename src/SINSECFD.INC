. *----------------------------------------------------------------------
. * Include Name  :   SINSECFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Contract Comments Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsecaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSECA1   IFILE    SQL, FIXED=112, KEY="U1-10,11-13"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SISECON   DIM       10     10       1     Contract Code                      
SISELIN   DIM       3      3        11    Line Number                        
SISECOM   DIM       78     78       14    Comment                            
SISESPA   DIM       20     20       92    Spare                              
.
.End of Record                      112  
.
