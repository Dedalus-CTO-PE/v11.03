. *----------------------------------------------------------------------
. * Include Name  :   CASXHDFD.INC
. *
. * Function      :   File Def'n Include for Analysis Codes File
. *
. * File Type     :   SQL
. *
. * File Name     :   casxhdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CASXHDA1   IFILE    SQL, FIXED=112, KEY="U1-3,4-6,7-16"                         
CASXHDA2   IFILE    SQL, FIXED=112, KEY="U1-3,4-6,52-61,7-16"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CAXHTOE   DIM       3      3        1     Type of Episode                    
CAXHSTY   DIM       3      3        4     Casemix Type                       
CAXHKEY   DIM       10     10       7     Casemix Code                       
CAXHDES   DIM       35     35       17    Description                        
CAXHSUM   DIM       10     10       52    Summary Casemix                    
CAXHSUMA  DIM       10     10       62    Summary Type A                     
CAXHSUMB  DIM       10     10       72    Summary Type B                     
CAXHSUMC  DIM       10     10       82    Summary Tyoe C                     
CAXHSPA   DIM       20     20       92    Spare                              
.
.End of Record                      112  
.
