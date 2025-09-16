. 5.04 .001 31/12/1996 PH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATCMHFD.INC
. *
. * Function      :   File Def'n Include for Patient                            
. *                   Merge File for CMH                 
. *
. * File Type     :   SQL
. *
. * File Name     :   patcmhaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCMHA1   IFILE    SQL, FIXED=37, KEY="U1-8,9-16"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCMOURN  DIM       8      8        1     Old U/R Number                     
PTCMNURN  DIM       8      8        9     New U/R Number                     
PTCMSPAR  DIM       20     20       17    Spare                              
.
.End of Record                      37   
.
