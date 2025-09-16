. V10.02.01 27/05/2011 ML C-240724 Added "Required Hospital" & changed Index 3  
. V9.01.001 13/11/2001 PD          Generated FD 
. *----------------------------------------------------------------------
. * Include Name  :   MRTBRHFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Records Bulk Request Header
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtbrhaf.dat
. *
. * Index Values  :   KEY10   KEY23   KEY30                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTBRHA1   IFILE    SQL, FIXED=169, KEY="U1-10"                                 
MRTBRHA2   IFILE    SQL, FIXED=169, KEY="U11-18,19-23,1-10"                     
MRTBRHA3   IFILE    SQL, FIXED=169, KEY="U119-121,37-40,11-18,19-23,1-10"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRBRRQNM  DIM       10     10       1     Request Number                     
MRBRDTRI  DIM       8      8        11    Date Required                      
MRBRTMRI  DIM       5      5        19    Time Required                      
MRBRDTRE  DIM       8      8        24    Date Requested                     
MRBRTMRE  DIM       5      5        32    Time Requested                     
MRBRLOCA  DIM       4      4        37    MR Required Location               
MRBRNUMR  FORM      3      3        41    Number of records requested        
MRBRREQS  DIM       35     35       44    Person Requesting Record           
MRBRPHON  DIM       20     20       79    Requestor Phone No/Extension No    
MRBRPAGR  DIM       20     20       99    Requestor Pager No                 
MRBRRHOS  DIM       3      3        119   MR Required Hospital ID            
MRBRSPAR  DIM       47     47       122   Spare Variable                     
.
.End of Record                      169  
.
