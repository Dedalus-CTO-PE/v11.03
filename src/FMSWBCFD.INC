. V6.00.001 18/02/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   FMSWBCFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Web User Comments                  
. *
. * File Type     :   SQL
. *
. * File Name     :   fmswbcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSWBCA1   IFILE    SQL, FIXED=104, KEY="U1-4,5-8,9-10,11-13"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMWBUID   DIM       4      4        1     User ID                            
FMWBYR    DIM       4      4        5     Financial Year                     
FMWBPR    DIM       2      2        9     Period                             
FMWBLIN   DIM       3      3        11    Line Number                        
FMWBCOM   DIM       60     60       14    Line Comment                       
FMWBSPA   DIM       30     30       74    Spare                              
.
.End of Record                      104  
.
