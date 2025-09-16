. V6.01.001 30/03/1994                                                       
. V6.01.002 21/04/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   CASAMEFD.INC
. *
. * Function      :   File Def'n Include for Casemix Analysis System            
. *                   Analysis Measures                  
. *
. * File Type     :   SQL
. *
. * File Name     :   casameaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CASAMEA1   IFILE    SQL, FIXED=110, KEY="U1-3,4-6"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CAAMTOE   DIM       3      3        1     Type of Episode                    
CAAMAM    DIM       3      3        4     Analysis Measure                   
CAAMDES   DIM       35     35       7     Description                        
CAAMDEC   FORM      1      2        42    Decimal Places                     
CAAMUNT   DIM       6      6        44    Unit of Measure                    
CAAMSDEC  DIM       10     10       50    Short Description                  
CAAMSPA   DIM       50     50       60    Spare                              
.
.End of Record                      110  
.
