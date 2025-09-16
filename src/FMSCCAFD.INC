. VF.00.001 20/10/1999 CH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   FMSCCAFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Cost Centre Master Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsccaaf.dat
. * Audit Name    :   fmsaudcc.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
FMSAUDCC   IFILE    SQL, FIXED=216, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCCAUDD  DIM       8      8        1     Date of Change
FMCCAUDT  DIM       8      8        9     Time of Change
FMCCAUDP  DIM       2      2        17    Port
FMCCAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
FMCCAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
FMCCAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
FMSCCAA1   IFILE    SQL, FIXED=190, KEY="U1-2,3-14"                             
FMSCCAA2   IFILE    SQL, FIXED=190, KEY="U1-2,15-49,3-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCCLEDG  DIM       2      2        1     Ledger                             
FMCCCOCE  DIM       12     12       3     Cost Centre                        
FMCCDESC  DIM       35     35       15    Cost Centre Description            
FMCCADES  DIM       35     35       50    Abbreviated Description            
FMCCPPOS  DIM       5      5        85    Print Position                     
FMCCSECC  DIM       3      3        90    Security Code                      
FMCCTELE  DIM       15     15       93    Telephone    (Inv Use)
FMCCCONT  DIM       35     35       108   Contact      (Inv Use)
FMCCIDAY  DIM       7      7        143   Imprest Days (Inv Use)
.                                          0 = No
.                                          1 = Yes
FMCCSTAT  DIM       2      2        150   Status
.                                          0 = Open
.                                          1 = Journal Only
.                                          2 = Closed
FMCCSPAR  DIM       38     38       152   Spare                              
.
.End of Record                      190  
.
