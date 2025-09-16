. V9.03.001 28/01/2004 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PRITDTFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Common Items Detail Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   pritdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRITDTA1   IFILE    SQL, FIXED=63, KEY="U1-4,5-5,6-8"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRTDTMID  DIM       4      4        1     Template ID                        
PRTDTYPE  DIM       1      1        5     Item Type 0=MBS 1=AMA               
PRTDSEQN  DIM       3      3        6     Sequence No                        
PRTDCODE  DIM       9      9        9     Item Code                          
PRTDSUBI  DIM       3      3        18    Sub-Item No                        
PRTDQUAN  FORM      2      2        21    Quantity                           
PRTDSPAR  DIM       40     40       23    Spare                              
.
.End of Record                      63   
