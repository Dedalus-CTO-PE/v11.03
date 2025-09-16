. 5.09 .001 19/01/2001 CS  SPECIAL INTERESTS & QUALIFICATIONS                
. *----------------------------------------------------------------------
. * Include Name  :   PATSQAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Special Interests & Qualifications 
. *
. * File Type     :   SQL
. *
. * File Name     :   patsqaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATSQAA1   IFILE    SQL, FIXED=69, KEY="U1-6,7-7,8-10"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTSQCODE  DIM       6      6        1     DOCTOR CODE                        
PTSQTCOM  DIM       1      1        7     TYPE OF COMMENTS (S=spec.  Q=qual.)
PTSQTCOD  DIM       3      3        8     CODE FROM Cat. TS or TQ            
PTSQDCRE  DIM       8      8        11    DATE CREATED                       
PTSQLMOD  DIM       8      8        19    DATE LAST MODIFIED                 
PTSQTLMO  DIM       8      8        27    TIME LAST MODIFIED                 
PTSQMOPE  DIM       4      4        35    OPER ID - LAST MODIFICATION        
PTSQSPAR  DIM       30     30       39    SPARE                              
.
.End of Record                      69   
.
