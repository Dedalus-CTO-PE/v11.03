. V6.00.001 13/01/1992
. *----------------------------------------------------------------------
. * Include Name  :   FMSCAFFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Control Account Master Table
. *
. * File Type     :   SQL
. *
. * File Name     :   fmscafaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSCAFA1   IFILE    SQL, FIXED=54, KEY="U1-2,3-14"
FMSCAFA2   IFILE    SQL, FIXED=54, KEY="U19-33,1-2,3-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMCALED   DIM       2      2        1     Ledger                             
FMCAACC   DIM       12     12       3     Account                            
FMCATYP   FORM      1      2        15    Control Type                       
FMCAJNL   FORM      1      2        17    Allow Journals 0=No 1=Yes          
FMCACHQ   DIM       15     15       19    Cheque Account                     
FMCASPA   DIM       20     20       34    Spare                              
.
.End of Record                      54   
.
