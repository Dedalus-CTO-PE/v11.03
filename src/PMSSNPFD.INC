. V10.08.01 07/04/2016 EC C-0816095 Added PMSNETYP comments                     
. V10.06.01 20/04/2015 SA C-290369 Added PMSNHDPE, PMSNHCPE & PMSNANSE          
. V10.03.00 09/03/2012 PHA C-257776 AN-SNAP Classification Code Table           
. *----------------------------------------------------------------------
. * Include Name  :   PMSSNPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   AN-SNAP Classification Code        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmssnpaf.dat
. *
. * Index Values  :   KEY5                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSSNPA1   IFILE    SQL, FIXED=176, KEY="U1-3,4-5"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMSNCLCD  DIM       3      3        1     AN-SNAP Classification Code        
PMSNVERS  DIM       2      2        4     AN-SNAP Version                    
PMSNDESC  DIM       50     50       6     Description                        
PMSNETYP  DIM       1      1        56    Episode Type                       
.                                         "C" = Outpatient/Community           
.                                         "O" = Overnight                      
.                                         "S" = Same day                       
PMSNACTV  DIM       1      1        57    Active 1=yes                       
PMSNDACT  DIM       8      8        58    Date Active                        
PMSNDIAC  DIM       8      8        66    Date Inactive                      
PMSNCUID  DIM       10     10       74    User who created record            
PMSNCDAT  DIM       8      8        84    Date Record Created                
PMSNCTIM  DIM       8      8        92    Time Record Created                
PMSNUUID  DIM       10     10       100   User who updated record            
PMSNUDAT  DIM       8      8        110   Date Record updated                
PMSNUTIM  DIM       8      8        118   Time record updated                
PMSNHDPE  DIM       4      4        126   HDP Equivalent                     
PMSNHCPE  DIM       4      4        130   HCP Equivalent                     
PMSNANSE  DIM       3      3        134   AN-SNAP Equivalent                 
PMSNSPAR  DIM       39     39       137   Spare                              
.
.End of Record                      176  
.
