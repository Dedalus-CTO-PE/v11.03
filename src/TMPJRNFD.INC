. V10.05.01 27/08/2014 PV C-302629 Added Journal Type to Key 1                  
. V10.01.01 15/12/2010 EC  Created FD CAR 233900
. *----------------------------------------------------------------------
. * Include Name  :   TMPJRNFD.INC
. *
. * Function      :   File Def'n Include for Temporary Code for Temp Files      
. *                   Bulk Journal Input Temp File       
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpjrnaf.dat
. *
. * Index Values  :   KEY35                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPJRNA1   IFILE    SQL, FIXED=131, KEY="U1-8,9-16,17-24,25-32,33-35"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TMJRBTCH  DIM       8      8        1     Batch Number                       
TMJRURNO  DIM       8      8        9     U/R Number                         
TMJRVIST  DIM       8      8        17    Visit Number                       
TMJRINVN  DIM       8      8        25    Invoice Number                     
TMJRJTYP  DIM       3      3        33    Type of Journal (Cat J)            
TMJRJDAT  DIM       8      8        36    Journal Date (CCYYMMDD)            
TMJRDESC  DIM       30     30       44    Journal Description                
TMJRAMNT  FORM      10.2   7        74    Journal Amount                     
TMJRGSTC  DIM       6      6        81    GST Code                           
TMJRSPAR  DIM       44     44       87    Spare                              
.
.End of Record                      131  
.
