. V5.07.001 03/11/1999 NMH Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   EMRMTXFD.INC
. *
. * Function      :   File Def'n Include for WEB                          
. *                   Emergency EMR Injury Surveillance Matrix     
. *
. * File Type     :   SQL
. *
. * File Name     :   emrmtxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRMTXA1   IFILE    SQL, FIXED=61, KEY="U1-2,3-4,5-10"                          
EMRMTXA2   IFILE    SQL, FIXED=61, KEY="U3-4,1-2,5-10"                          
EMRMTXA3   IFILE    SQL, FIXED=61, KEY="U5-10,3-4,1-2"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMMXNAT   DIM       2      2        1     Nature of Main Injury              
EMMXBRG   DIM       2      2        3     Body Region                        
EMMXPDG   DIM       6      6        5     Primary Diagnosis                  
EMMXSPA   DIM       50     50       11    Spare Variable                     
.
.End of Record                      61   
.
