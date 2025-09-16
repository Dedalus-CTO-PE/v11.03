. V10.07.01 02/11/2015 SA C-303363 Added RECLDEL & Index 3
. V5.08.001 28/09/2000     Link between Results & Correspondence
. *----------------------------------------------------------------------
. * Include Name  :   RESCLNFD.INC
. *
. * Function      :   File Def'n Include for Clinical Results                   
. *                   Result Correspondence Links        
. *
. * File Type     :   SQL
. *
. * File Name     :   resclnaf.dat
. *
. * Index Values  :   KEY20   KEY28   KEY40                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESCLNA1   IFILE    SQL, FIXED=101, KEY="U1-8,9-13,14-17,18-20"
RESCLNA2   IFILE    SQL, FIXED=101, KEY="U21-28,1-8,9-13,14-17,18-20"
RESCLNA3   IFILE    SQL, FIXED=101, KEY="U21-28,29-36,37-40,1-8,9-13,14-17,18-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RECLRDT   DIM       8      8        1     Result Date                        
RECLRTM   DIM       5      5        9     Result Time                        
RECLRUN   DIM       4      4        14    Result Unique ID                   
RECLLNO   DIM       3      3        18    Link Number                        
RECLURN   DIM       8      8        21    U/R Number                         
RECLVIS   DIM       8      8        29    Visit Number                       
RECLCID   DIM       4      4        37    Correspondence ID                  
RECLDEL   DIM       1      1        41    Marked as Deleted                  
.                                         0 or Blank = No                      
.                                         1 = Yes                              
RECLSPA   DIM       59     59       42    Spare                              
.
.End of Record                      101  
.
