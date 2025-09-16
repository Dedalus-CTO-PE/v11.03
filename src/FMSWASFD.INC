. V6.00.007 10/06/1998 BGA Added Link to Options                             
. V6.00.008 27/07/1998                                                       
. *----------------------------------------------------------------------
. * Include Name  :   FMSWASFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Web Access Security                
. *
. * File Type     :   SQL
. *
. * File Name     :   fmswasaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSWASA1   IFILE    SQL, FIXED=93, KEY="U1-4,19-21,5-6,7-18"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMWASEC   DIM       4      4        1     Security Code                      
FMWALEDG  DIM       2      2        5     Ledger                             
FMWAACCT  DIM       12     12       7     Account                            
FMWASEQ   DIM       3      3        19    Sequence Number                    
FMWADTY   FORM      1      2        22    Description 0-Posting 1-Subj 2-Cost
FMWADIV   FORM      12.2   8        24    Divide by Factor                   
FMWADEC   FORM      1      2        32    Decimal Places 0-5                 
FMWABLD   FORM      1      2        34    Bold 0=No 1=Yes                    
FMWABCK   DIM       7      7        36    Background Color                   
FMWACHD   DIM       1      1        43    Insert Column Heading After Account
FMWATMP   DIM       3      3        44    Template Number                    
FMWANEG   DIM       1      1        47    Negate Statistic for Variance      
FMWALPC   DIM       4      4        48    Link to Passcode                   
FMWAPRG   DIM       8      8        52    Link to Program                    
FMWAREP   DIM       2      2        60    Link to Report                     
FMWAURL   DIM       30     30       62    URL Link                           
FMWASPA   DIM       1      1        92    Spare                              
.
.End of Record                      93   
.
