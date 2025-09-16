. C2.00.001 04/02/2000 DS                                                    
. *----------------------------------------------------------------------
. * Include Name  :   IBAGEDFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   GST Rates                          
. *
. * File Type     :   SQL
. *
. * File Name     :   ibagedaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAGEDA1   IFILE    SQL, FIXED=39, KEY="U1-6,7-14"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBGECODE  DIM       6      6        1     GST Code                           
IBGEEDAT  DIM       8      8        7     Effective Date (CCYYMMDD)          
IBGEAMNT  FORM      3.2    4        15    GST Percentage                     
IBGESPAR  DIM       20     20       19    Spare Variable                     
.
.End of Record                      39   
.
