. V9.02.007 17/04/2003 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSCTCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Civil Tort Claim Details           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsctcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCTCA1   IFILE    SQL, FIXED=345, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCTADMN  DIM       8      8        1     Admission Number                   
PMCTURNO  DIM       8      8        9     U/R Number                         
PMCTVDAT  DIM       8      8        17    Visit Date                         
PMCTSNAM  DIM       30     30       25    Solicitor's name                   
PMCTSAD1  DIM       35     35       55    Solicitor's address line 1         
PMCTSAD2  DIM       35     35       90    Solicitor's address line 2         
PMCTSAD3  DIM       35     35       125   Solicitor's address line 3         
PMCTSAD4  DIM       35     35       160   Solicitor's address line 4         
PMCTSPCO  DIM       8      8        195   Solicitor's postcode               
PMCTSPHN  DIM       12     12       203   Solicitor's phone number           
PMCTCONT  DIM       30     30       215   Contact Name                       
PMCTREFN  DIM       20     20       245   Reference Number                   
PMCTSPAR  DIM       80     80       265   Spare variable                     
.
.End of Record                      345  
.
