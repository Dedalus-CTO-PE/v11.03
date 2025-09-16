. V5.08.001 01/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSGPFFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Synthetic Patient Service Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsgpfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSGPFA1   IFILE    SQL, FIXED=74, KEY="U1-2,3-10,11-18,19-20,21-28,29-36"      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCGPHCD   DIM       2      2        1     Hospital                           
CCGPDPT   DIM       8      8        3     Department                         
CCGPPCD   DIM       8      8        11    Patient Service                    
CCGPGHCD  DIM       2      2        19    Generated Hospital                 
CCGPGDPT  DIM       8      8        21    Generated Department               
CCGPGPCD  DIM       8      8        29    Generated Patient Service          
CCGPGQTY  FORM      10.2   7        37    Generated Quantity                 
CCGPGCH   FORM      10.2   7        44    Generated Associated Charge        
CCGPSPA   DIM       23     23       51    Spare                              
.
.End of Record                      74   
.
