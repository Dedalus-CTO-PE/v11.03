. V10.03.01 19/09/2013  C-287795                                                
. *----------------------------------------------------------------------
. * Include Name  :   PATWBAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Ward Bed Attribute Management      
. *
. * File Type     :   SQL
. *
. * File Name     :   patwbaaf.dat
. *
. * Index Values  :   KEY9    KEY9    KEY12   KEY12                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATWBAA1   IFILE    SQL, FIXED=85, KEY="U1-3,4-6,7-9"                           
PATWBAA2   IFILE    SQL, FIXED=85, KEY="U7-9,1-3,4-6"                           
PATWBAA3   IFILE    SQL, FIXED=85, KEY="U7-9,10-12,1-3,4-6"                     
PATWBAA4   IFILE    SQL, FIXED=85, KEY="U10-12,7-9,1-3,4-6"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTWAWARD  DIM       3      3        1     Ward Code                          
PTWABED   DIM       3      3        4     Bed Code                           
PTWABATR  DIM       3      3        7     Bed Attribute (Cat at)             
PTWAHOSP  DIM       3      3        10    Hospital Code                      
PTWADTCR  DIM       8      8        13    Date Created                       
PTWATMCR  DIM       8      8        21    Time Created                       
PTWAIDCR  DIM       10     10       29    UserID Created                     
PTWADTUP  DIM       8      8        39    Date Updated                       
PTWATMUP  DIM       8      8        47    Time Updated                       
PTWAIDUP  DIM       10     10       55    UserID Updated                     
PTWASPAR  DIM       20     20       65    Spare                              
.
.End of Record                      85   
.
