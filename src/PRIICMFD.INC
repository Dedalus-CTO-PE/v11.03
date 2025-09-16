. V10.06.01 17/03/2015 JT C-284113 New FD for Invoice Comment Header            
. *----------------------------------------------------------------------
. * Include Name  :   PRIICMFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Invoice Comment Header details     
. *
. * File Type     :   SQL
. *
. * File Name     :   priicmaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIICMA1   IFILE    SQL, FIXED=204, KEY="U1-8,9-11,12-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRICINVN  DIM       8      8        1     Invoice Number                     
PRICCTYP  DIM       3      3        9     Comment Type                       
.                                         001 - PRI Invoice Comment            
PRICNOTE  DIM       6      6        12    Note Number                        
PRICIDAT  DIM       8      8        18    Input Date (CCYYMMDD)              
PRICITIM  DIM       8      8        26    Input Time (HH:MM:SS)              
PRICIUSR  DIM       10     10       34    Input by WEB User ID (websecaf)    
PRICIOCG  DIM       3      3        44    Occupational Group User ID (Input) 
PRICDIND  DIM       1      1        47    Delete Indicator (0=No,1=Yes)      
PRICDDAT  DIM       8      8        48    Delete Date (CCYYMMDD)             
PRICDTIM  DIM       8      8        56    Delete Time (HH:MM:SS)             
PRICDUSR  DIM       10     10       64    Delete by WEB User ID (websecaf)   
PRICDOCG  DIM       3      3        74    Occupational Group User ID (Delete)
PRICSPAR  DIM       127    127      77    Spare Variable                     
.
.End of Record                      204  
.
