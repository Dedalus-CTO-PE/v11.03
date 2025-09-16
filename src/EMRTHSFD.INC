. V10.14.01 16/04/2019 DNG C-0821139 Added new Status value '4' - Exited ETS    
. V10.14.00 12/02/2019 DNG C-0821139 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   EMRTHSFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Telehealth Services      
. *
. * File Type     :   SQL
. *
. * File Name     :   emrthsaf.dat
. *
. * Index Values  :   KEY11   KEY14   KEY17   KEY12                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRTHSA1   IFILE    SQL, FIXED=124, KEY="U1-8,9-11"
EMRTHSA2   IFILE    SQL, FIXED=124, KEY="U12-14,1-8,9-11"
EMRTHSA3   IFILE    SQL, FIXED=124, KEY="U12-14,15-17,1-8,9-11"
EMRTHSA4   IFILE    SQL, FIXED=124, KEY="U21-21,1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMTSVISN  DIM       8      8        1     Visit Number                       
EMTSCNTR  DIM       3      3        9     Counter                            
EMTSSITE  DIM       3      3        12    Emergency Site Code (emrsitaf)     
EMTSHOSP  DIM       3      3        15    Hospital ID (pathspaf)             
EMTSLOCN  DIM       3      3        18    Location                           
EMTSSTAT  DIM       1      1        21    Status                             
.                                          1 = Current Emergency Patient       
.                                          2 = Discharged                      
.                                          3 = Cancelled                       
.                                          4 = Exited ETS                      
EMTSCDAT  DIM       8      8        22    Date Record Created (CCYYMMDD)     
EMTSCTIM  DIM       8      8        30    Time Record Created (HH:MM:SS)     
EMTSCUID  DIM       10     10       38    WEB User ID Created (websecaf)     
EMTSUDAT  DIM       8      8        48    Date Record Updated (CCYYMMDD)     
EMTSUTIM  DIM       8      8        56    Time Record Updated (HH:MM:SS)     
EMTSUUID  DIM       10     10       64    WEB User ID Updated (websecaf)     
EMTSSPAR  DIM       50     50       74    Spare                              
.
.End of Record                      124  
.
