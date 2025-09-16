. V10.03.01 26/10/2012 EC C-266929 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   EMRRVSFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Research Project Visits            
. *
. * File Type     :   SQL
. *
. * File Name     :   emrrvsaf.dat
. *
. * Index Values  :   KEY19                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRRVSA1   IFILE    SQL, FIXED=133, KEY="U1-3,4-11,12-19"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMRVRESP  DIM       3      3        1     Research Code (Cat eu)             
EMRVSDAT  DIM       8      8        4     Start Date (CCYYMMDD)              
EMRVVISN  DIM       8      8        12    Visit Number                       
EMRVPSTA  DIM       1      1        20    Project Status                     
.                                         0=Suggested, 1=Accepted, 2=Rejected  
EMRVCUID  DIM       10     10       21    WEB User ID Created (websecaf)     
EMRVCDAT  DIM       8      8        31    Date Record Created (CCYYMMDD)     
EMRVCTIM  DIM       8      8        39    Time Record Created (HH:MM:SS)     
EMRVUUID  DIM       10     10       47    WEB User ID Updated (websecaf)     
EMRVUDAT  DIM       8      8        57    Update Date (CCYYMMDD)             
EMRVUTIM  DIM       8      8        65    Update Time (HH:MM:SS)             
EMRVSPAR  DIM       60     60       73    Spare                              
.
.End of Record                      133  
.
