. V10.08.01 07/04/2016 JP C-0813956 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   WATPHIFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Procedure Code History Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   watphiaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATPHIA1   IFILE    SQL, FIXED=95, KEY="U1-9,10-17"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTPHPROC  DIM       9      9        1     Procedure Code                     
WTPHEFDT  DIM       8      8        10    Effective to Date (CCYYMMDD)       
WTPHHDPV  DIM       9      9        18    HDP Value                          
WTPHDRGC  DIM       6      6        27    DRG Code                           
WTPHRHAT  DIM       6      6        33    RHA Threshold Level                
WTPHCHET  DIM       6      6        39    CHE Threshold Level                
WTPHSPAR  DIM       50     50       45    Spare                              
.
.End of Record                      95   
.
