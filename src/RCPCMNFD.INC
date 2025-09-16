. V10.14.01 22/03/2019 JT C-0857392 Changed Transaction number from DIM3 to DIM5
. V9.09.001 26/11/2007 PV  Created RCPCMNFD RCPCMNIO
. *----------------------------------------------------------------------
. * Include Name  :   RCPCMNFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Receipting Comments Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpcmnaf.dat
. *
. * Index Values  :   KEY20                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPCMNA1   IFILE    SQL, FIXED=223, KEY="U1-12,13-17,18-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCCMRECN  DIM       12     12       1     Receipt Number                     
RCCMTCNT  DIM       5      5        13    Transaction Count                  
RCCMLNNO  DIM       3      3        18    Line No                            
RCCMLNDA  DIM       100    100      21    Line Data                          
RCCMCRDT  DIM       8      8        121   Date Created                       
RCCMCRTM  DIM       8      8        129   Time Created                       
RCCMCRUD  DIM       10     10       137   User ID Created                    
RCCMUPDT  DIM       8      8        147   Date Updated                       
RCCMUPTM  DIM       8      8        155   Time Updated                       
RCCMUPUD  DIM       10     10       163   User ID Updated                    
RCCMSPAR  DIM       50     50       173   Spare Variable                     
.
.End of Record                      223  
.
