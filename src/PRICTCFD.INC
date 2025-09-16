. V9.03.00 24/03/2004 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PRICTCFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Civil Tort Claim details           
. *
. * File Type     :   SQL
. *
. * File Name     :   prictcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRICTCA1   IFILE    SQL, FIXED=277, KEY="U1-8,9-16"                             
PRICTCA2   IFILE    SQL, FIXED=277, KEY="U9-16,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRCTINVN  DIM       8      8        1     Invoice Number                     
DPRCTUNI  DIM       8      8        9     Unique Claim Number                
PRCTSNAM  DIM       30     30       17    Solicitor's name                   
PRCTSAD1  DIM       35     35       47    Solicitor's address line 1         
PRCTSAD2  DIM       35     35       82    Solicitor's address line 2         
PRCTSAD3  DIM       35     35       117   Solicitor's address line 3         
PRCTSAD4  DIM       35     35       152   Solicitor's address line 4         
PRCTSPCO  DIM       8      8        187   Solicitor's postcode               
PRCTSPHN  DIM       12     12       195   Solicitor's phone number           
PRCTCONT  DIM       30     30       207   Contact Name                       
PRCTREFN  DIM       20     20       237   Reference Number                   
PRCTSPAR  DIM       20     20       257   Spare variable                     
.
.End of Record                      277  
.
.Redefine Key Variables
.----------------------
PRCTUNIQ  FORM      8    
