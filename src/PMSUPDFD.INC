. V10.03.01 13/02/2013 JP C-257831 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSUPDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Details Updated            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsupdaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUPDA1   IFILE    SQL, FIXED=261, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUDURNO  DIM       8      8        1     UR Number                          
PMUDDATE  DIM       8      8        9     Date Updated CCYYMMDD              
PMUDTIME  DIM       8      8        17    Time Updated hh:mm:ss              
PMUDUSER  DIM       10     10       25    User ID updated (websecaf)         
PMUDDATC  DIM       8      8        35    Date record created CCYYMMDD       
PMUDTIMC  DIM       8      8        43    Time record created hh:mm:ss       
PMUDWEBC  DIM       10     10       51    Web user created by (websecaf)     
PMUDSPAR  DIM       200    200      61    Spare                              
.
.End of Record                      261  
.
