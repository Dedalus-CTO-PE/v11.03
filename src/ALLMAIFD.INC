. V9.03.001 10/03/2004 P.D Created FD                                        
. V9.03.002 19/03/2004 P.D Added Index 2                                     
. *----------------------------------------------------------------------
. * Include Name  :   ALLMAIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Equipment Maintenance Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   allmaiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLMAIA1   IFILE    SQL, FIXED=158, KEY="U1-10,11-18"                           
ALLMAIA2   IFILE    SQL, FIXED=158, KEY="U1-10,19-26,11-18"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALMAEQUI  DIM       10     10       1     Equipment Code                     
ALMAMNUM  DIM       8      8        11    Maintenance Number                 
ALMAMDAT  DIM       8      8        19    Maintenance Date                   
ALMAMTIM  DIM       8      8        27    Maintenance Time                   
ALMACOND  DIM       3      3        35    Condition After Main (Cat QM)      
ALMAHDAT  DIM       8      8        38    Hazard Notice Date (CCYYMMDD)      
ALMAHNUM  DIM       10     10       46    Hazard Notice Ref No.              
ALMACDAT  DIM       8      8        56    Date Record Created                
ALMACTIM  DIM       8      8        64    Time Record Created                
ALMACUSR  DIM       10     10       72    WEB User ID Created                
ALMAUDAT  DIM       8      8        82    Date Record Updatd                 
ALMAUTIM  DIM       8      8        90    Time Record Updated                
ALMAUUSR  DIM       10     10       98    WEB User ID Updated                
ALMASPAR  DIM       50     50       108   Spare                              
.
.End of Record                      158  
.
