. V10.00.01 09/04/2010 DS  Added date/time/user created  CAR 219667             
. V9.00.001 11/11/2003 JT                                                       
. V9.04.002 07/10/2004 DS  Added index 4                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSCNOFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Credit Note Header table           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscnoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCNOA1   IFILE    SQL, FIXED=111, KEY="U1-8"                                  
PMSCNOA2   IFILE    SQL, FIXED=111, KEY="U17-24,1-8"                            
PMSCNOA3   IFILE    SQL, FIXED=111, KEY="U25-32,1-8"                            
PMSCNOA4   IFILE    SQL, FIXED=111, KEY="U9-16,33-34,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCNCRNO  DIM       8      8        1     Credit Note number                 
PMCNDATE  DIM       8      8        9     Credit Note date                   
PMCNVISN  DIM       8      8        17    Visit Number                       
PMCNINVN  DIM       8      8        25    Invoice number                     
PMCNSYST  DIM       2      2        33    System                             
.                                         1 - Emergency                        
.                                         2 - Outpatients                      
.                                         3 - Inpatients                       
PMCNSTAT  DIM       1      1        35    Credit note status                 
.                                         1 - Fully Credited                   
.                                         2 - Credit by Item                   
PMCNREAS  DIM       3      3        36    Reason for Credit Note (catg BX)   
PMCNAMNT  FORM      12.2   8        39    Total credit note amount (inc.GST) 
PMCNGSTM  FORM      12.2   8        47    GST credit note amount             
PMCNCDAT  DIM       8      8        55    Date Record Created (CCYYMMDD)     
PMCNCTIM  DIM       8      8        63    Time Record Created (HH:MM:SS)     
PMCNCUID  DIM       10     10       71    WEB User ID Created (websecaf)     
PMCNSPAR  DIM       30     30       81    Spare variable                     
.
.End of Record                      111  
.
