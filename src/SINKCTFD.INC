. V6.00.001 18/03/1997 BGA New Table                                         
. V6.00.001 19/03/1997                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SINKCTFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Catalog Keyword Index              
. *
. * File Type     :   SQL
. *
. * File Name     :   sinkctaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINKCTA1   IFILE    SQL, FIXED=33, KEY="U1-15,16-22"                            
SINKCTA2   IFILE    SQL, FIXED=33, KEY="U16-22,1-15"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIKCKWD   DIM       15     15       1     Keyword                            
SIKCCAT   DIM       7      7        16    Catalog                            
SIKCSPA   DIM       10     10       23    Spare                              
.
.End of Record                      33   
.
