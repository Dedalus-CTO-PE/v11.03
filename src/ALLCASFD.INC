. V10.12.01 30/01/2018 TNG C-0814204  ALCAACTV - 2=Active, exclude from PRIMHD(N
. V10.01.01 23/03/2011 ML  Add ALCAORID - Organisation Id                       
. V9.04.000 18/11/2004 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLCASFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   HCP Case Team Details              
. *
. * File Type     :   SQL
. *
. * File Name     :   allcasaf.dat
. *
. * Index Values  :   KEY10   KEY50                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLCASA1   IFILE    SQL, FIXED=196, KEY="U1-10"
ALLCASA2   IFILE    SQL, FIXED=196, KEY="U11-50,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALCATEAM  DIM       10     10       1     Team Number                        
ALCADESC  DIM       40     40       11    Team Description                   
ALCALPAT  DIM       10     10       51    Letter to Patient                  
ALCALREF  DIM       10     10       61    Letter to Referrer                 
ALCACDEP  DIM       5      5        71    Costing Department                 
ALCALCOD  DIM       2      2        76    Ledger Code                        
ALCAACOD  DIM       12     12       78    Account Code                       
ALCAACTV  DIM       1      1        90    Status                             
.                                          0=Inactive                          
.                                          1=Active                            
.                                          2=Active, exclude from PRIMHD       
.                                             (NZ only)                        
ALCAHOSP  DIM       3      3        91    Hospital Code (pathspaf)           
ALCACDAT  DIM       8      8        94    Date Record Created (CCYYMMDD)     
ALCACTIM  DIM       8      8        102   Time Record Created (HH:MM:SS)     
ALCACUID  DIM       10     10       110   WEB User ID Created (websecaf)     
ALCAUDAT  DIM       8      8        120   Update Date (CCYYMMDD)             
ALCAUTIM  DIM       8      8        128   Update Time (HH:MM:SS)             
ALCAUUID  DIM       10     10       136   WEB User ID Updated (websecaf)     
ALCAORID  DIM       8      8        146   Organisation ID (GXXNNN-C)         
.                                         G= Constant Prefix,                  
.                                         XX=Alpha or Numeric,                 
.                                         C=Check  Digit                       
ALCASPAR  DIM       42     42       154   Spare                              
.
.End of Record                      196  
.
