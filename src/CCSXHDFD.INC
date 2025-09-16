. V9.03.001 18/11/2003 LV  Added third index with description.               
. VF.01.001 08/05/2000 SB
. *----------------------------------------------------------------------
. * Include Name  :   CCSXHDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Casemix Code File                  
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsxhdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSXHDA1   IFILE    SQL, FIXED=69, KEY="U1-3,4-13"                              
CCSXHDA2   IFILE    SQL, FIXED=69, KEY="U1-3,49-58,4-13"                        
CCSXHDA3   IFILE    SQL, FIXED=69, KEY="U1-3,14-48,4-13"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCXHSTY   DIM       3      3        1     Casemix Type                       
CCXHKEY   DIM       10     10       4     Casemix Code                       
CCXHDES   DIM       35     35       14    Description                        
CCXHSUM   DIM       10     10       49    Summary Casemix                    
CCXHSPA   DIM       10     10       59                                       
.
.End of Record                      69   
.
