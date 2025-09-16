. 5.04 .001 17/10/1996                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EOCREFFD.INC
. *
. * Function      :   File Def'n Include for Episodes of Care                   
. *                   Referral Details      
. *
. * File Type     :   SQL
. *
. * File Name     :   eocrefaf.dat
. * 
. * Modifications :   
. *      V9.02.01  24/10/2002  Lina Vo
. *                Changed ECRFREFN to DECRFREF from FORM 8 to DIM 8 with
. *                a new redefine of ECRFREFN.  
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EOCREFA1   IFILE    SQL, FIXED=94, KEY="U1-8,9-13"                              
EOCREFA2   IFILE    SQL, FIXED=94, KEY="U1-8,14-15,9-13"                        
EOCREFA3   IFILE    SQL, FIXED=94, KEY="U24-43,1-8,9-13"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ECRFURNO  DIM       8      8        1     U/R Number                         
DECRFEPN  DIM       5      5        9     Episode of Care                    
DECRFHOS  DIM       2      2        14    Hospital Index                     
DECRFREF  DIM       8      8        16    Referral Event Number              
ECRFACCN  DIM       20     20       24    ACC Number                         
ECRFSTAT  FORM      1      2        44    Status 0=Open, 1=Closed            
ECRFCDAT  DIM       8      8        46    Date Closed (CCYYMMDD)             
ECRFSPAR  DIM       40     40       54    Spare                              
.
.End of Record                      94   
.
.Redefine Key Variables
.----------------------
ECRFEPNO  FORM      5    
ECRFHOSP  FORM      2    
ECRFREFN  FORM      8                                          
              
