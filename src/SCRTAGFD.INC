. V6.00.001 20/08/0091 BGA Generated                                         
. *----------------------------------------------------------------------
. * Include Name  :   SCRTAGFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Program External Routine Definition
. *
. * File Type     :   SQL
. *
. * File Name     :   scrtagaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRTAGA1   IFILE    SQL, FIXED=78, KEY="U1-8,9-10,11-15"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCTAPID   DIM       8      8        1     Program ID                         
SCTASID   DIM       2      2        9     Screen ID                          
SCTAFNO   DIM       5      5        11    Field Number                       
SCTACBD   DIM       8      8        16    Call Before Display                
SCTACAD   DIM       8      8        24    Call After Display                 
SCTACBK   DIM       8      8        32    Call Before Keyin                  
SCTACAK   DIM       8      8        40    Call After Keyin                   
SCTASPA   DIM       30     30       48    Spare                              
.
.End of Record                      78   
.
