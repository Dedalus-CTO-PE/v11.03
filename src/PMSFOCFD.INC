. V10.03.01 09/05/2012 DS C-260600 Created FD for VAED-2012                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSFOCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Phase of Care Change Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfocaf.dat
. *
. * Index Values  :   KEY18                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFOCA1   IFILE    SQL, FIXED=156, KEY="U1-8,9-10,11-18"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFOVISN  DIM       8      8        1     Visit Number                       
PMFOEPNO  DIM       2      2        9     Episode Number                     
PMFOPCDT  DIM       8      8        11    Phase Change Date (ccyymmdd)       
PMFOPHOC  DIM       3      3        19    Phase of Care (cat pu)             
PMFORAPC  DIM       2      2        22    RUG ADL on Phase Change            
PMFOCDAT  DIM       8      8        24    Date created (ccyymmdd)            
PMFOCTIM  DIM       8      8        32    Time created (hh:mm:ss)            
PMFOCUID  DIM       10     10       40    User ID created (websecaf)         
PMFOUDAT  DIM       8      8        50    Date updated (ccyymmdd)            
PMFOUTIM  DIM       8      8        58    Time updated (hh:mm:ss)            
PMFOUUID  DIM       10     10       66    User ID updated (websecaf)         
PMFOSPAR  DIM       80     80       76    Spare                              
.
.End of Record                      156  
.
