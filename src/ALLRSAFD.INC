. V10.11.01 19/12/2017 SA C-0306843 Added Index 2                               
. V9.08 .001 05/04/2007 JH  Created                                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLRSAFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Residential Admissions             
. *
. * File Type     :   SQL
. *
. * File Name     :   allrsaaf.dat
. *
. * Index Values  :   KEY16   KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRSAA1   IFILE    SQL, FIXED=119, KEY="U1-8,9-16"
ALLRSAA2   IFILE    SQL, FIXED=119, KEY="U9-16,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRAVISN  DIM       8      8        1     Referral/Visit Number              
ALRALADM  DIM       8      8        9     Linked admission number            
ALRACDAT  DIM       8      8        17    Date Record Created (CCYYMMDD)     
ALRACTIM  DIM       8      8        25    Time Record Created (HH:MM:SS)     
ALRACUID  DIM       10     10       33    WEB User ID Created (websecaf)     
ALRAUDAT  DIM       8      8        43    Date Record Updated (CCYYMMDD)     
ALRAUTIM  DIM       8      8        51    Time Record Updated (HH:MM:SS)     
ALRAUUID  DIM       10     10       59    WEB User ID Updated (websecaf)     
ALRASPAR  DIM       50     50       69    Spare                              
.
.End of Record                      119  
.
