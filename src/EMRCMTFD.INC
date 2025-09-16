. v9.00.001 29/06/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   EMRCMTFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   System Comments                    
. *
. * File Type     :   SQL
. *
. * File Name     :   emrcmtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRCMTA1   IFILE    SQL, FIXED=93, KEY="U1-2"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMCMLINE  DIM       2      2        1     Line Number                        
EMCMCMNT  DIM       70     70       3     Comment Line                       
EMCMSPAR  DIM       20     20       73    Spare Variable                     
.
.End of Record                      93   
.
