. V10.12.01 04/04/2018 TNG C-0841644 Added Impairment Group Code                
. V10.03.02 04/05/2012 DS C-260600 Added HDP Eqivalent (HDPE) for VAED-2012     
. V10.03.01 05/03/2012 PHA C-257776 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PMSIMPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Impairment Code Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsimpaf.dat
. *
. * Index Values  :   KEY7                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIMPA1   IFILE    SQL, FIXED=184, KEY="U1-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIMCODE  DIM       7      7        1     Impairment Code                    
PMIMDESC  DIM       50     50       8     Description                        
PMIMACTV  DIM       1      1        58    Active 1=yes                       
PMIMDACT  DIM       8      8        59    Date Active                        
PMIMDIAC  DIM       8      8        67    Date Inactive                      
PMIMCUID  DIM       10     10       75    User who created record            
PMIMCDAT  DIM       8      8        85    Date record created                
PMIMCTIM  DIM       8      8        93    Time record created                
PMIMUUID  DIM       10     10       101   User who updated the record        
PMIMUDAT  DIM       8      8        111   Date record updated                
PMIMUTIM  DIM       8      8        119   Time record updated                
PMIMHDPE  DIM       7      7        127   HDP Equivalent                     
PMIMGCDE  DIM       3      3        134   Impairment Group Code              
PMIMSPAR  DIM       47     47       137   Spare                              
.
.End of Record                      184  
.
