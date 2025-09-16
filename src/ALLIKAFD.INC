. 9.08 .002 27/03/2007 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   ALLIKAFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Intervention Key word table        
. *
. * File Type     :   SQL
. *
. * File Name     :   allikaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLIKAA1   IFILE    SQL, FIXED=113, KEY="U1-3,4-12,13-62"                       
ALLIKAA2   IFILE    SQL, FIXED=113, KEY="U1-3,13-62,4-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALIKDEPT  DIM       3      3        1     Department (alldepaf)              
ALIKCODE  DIM       9      9        4     Intervention Code                  
ALIKKWRD  DIM       50     50       13    Keyword                            
ALIKSPAR  DIM       50     50       63    Spare                              
.
.End of Record                      113  
.
