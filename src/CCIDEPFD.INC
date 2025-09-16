. 5.01 .001 07/01/1992 PE  Generated                                         
. *----------------------------------------------------------------------
. * Include Name  :   CCIDEPFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Costing Department Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   ccidepaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCIDEPA1   IFILE    SQL, FIXED=67, KEY="U1-3"                                   
CCIDEPA2   IFILE    SQL, FIXED=67, KEY="U4-33,1-3"                              
CCIDEPA3   IFILE    SQL, FIXED=67, KEY="U34-34,4-33,1-3"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCDPDEPT  DIM       3      3        1     Costing Department Code            
CCDPDESC  DIM       30     30       4     Department description             
DCCDPMAN  DIM       1      1        34    Manual Data Entry                  
CCDPIOPA  FORM      1      2        35    Input OP proc's when attending ?   
CCDPSPAR  DIM       30     30       37    Spare                              
.
.End of Record                      67   
.
.Redefine Key Variables
.----------------------
CCDPMANU  FORM      1    
