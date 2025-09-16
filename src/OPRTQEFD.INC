. v9.00.004 01/02/2002 dc  add comments variable and reduce spare            
. *----------------------------------------------------------------------
. * Include Name  :   OPRTQEFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre System Tourniquet Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   oprtqeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRTQEA1   IFILE    SQL, FIXED=59, KEY="U1-10,11-11,12-13"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPTQUNID  DIM       10     10       1     Unique ID.                         
OPTQRTYP  DIM       1      1        11    Record Type                        
.                                           1 = Right Leg  
.                                           2 = Left Leg  
.                                           3 = Right Arm  
.                                           4 = Left Arm  
.                                           5 = Free Text Tourniquet
.                                           6 = Carotid
.                                           7 = Aorta
OPTQCNTR  DIM       2      2        12    Counter                            
OPTQADAT  DIM       8      8        14    Applied Date (CCYYMMDD)            
OPTQATIM  DIM       8      8        22    Applied Time (HH:MM:SS)            
OPTQRDAT  DIM       8      8        30    Removed Date (CCYYMMDD)            
OPTQRTIM  DIM       8      8        38    Removed Time (HH:MM:SS)            
OPTQCOMM  DIM       10     10       46    Comments                           
OPTQSPAR  DIM       3      3        56    Spare Variable                     
.
.End of Record                      59   
.
