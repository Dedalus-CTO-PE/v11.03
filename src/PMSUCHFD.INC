. V10.11.01 14/07/2017 TNG C-0821710 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSUCHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   U/R Comments Header Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsuchaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUCHA1   IFILE    SQL, FIXED=107, KEY="U1-8,9-11,12-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUHURNO  DIM       8      8        1     U/R Number                         
PMUHCTYP  DIM       3      3        9     Comment Type                       
.                                         001 - U/R Number                     
PMUHCNUM  DIM       6      6        12    Counter/Note Number                
PMUHCUID  DIM       10     10       18    User Who Created Record            
PMUHCDAT  DIM       8      8        28    Date Record Created (ccyymmdd)     
PMUHCTIM  DIM       8      8        36    Time Record Created (hh:mm:ss)     
PMUHOCCG  DIM       3      3        44    Occupational Group WEB User ID     
.                                         (Cat w0)
PMUHDELT  DIM       1      1        47    Delete Indicator (0=No, 1=Yes)     
PMUHDUID  DIM       10     10       48    User Who Deleted Record (websecaf) 
PMUHDDAT  DIM       8      8        58    Date Record Deleted (ccyymmdd)     
PMUHDTIM  DIM       8      8        66    Time Record Deleted (hh:mm:ss)     
PMUHDOCG  DIM       3      3        74    Occupational Grp WEB UserID Deleted
.                                         (Cat w0)
PMUHSPAR  DIM       30     30       77    Spare Variable                     
.
.End of Record                      107  
.
