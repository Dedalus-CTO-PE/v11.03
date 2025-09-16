. V9.09.001 18/12/2007 JH  Added doctor code                                 
. V9.11.001 23/09/2008 EC  Added PMBCFTRC CAR 174051                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSBDCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Bed Closure Details        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbdcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBDCA1   IFILE    SQL, FIXED=206, KEY="U1-3,4-6,7-14,15-22"                   
PMSBDCA2   IFILE    SQL, FIXED=206, KEY="U23-23,7-14,15-22,1-3,4-6"             
PMSBDCA3   IFILE    SQL, FIXED=206, KEY="U40-40,24-31,32-39,1-3,4-6,7-14,15-22" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBCWARD  DIM       3      3        1     Ward from Ward/Bed file            
PMBCBED   DIM       3      3        4     Bed from Ward/Bed file             
PMBCFRDT  DIM       8      8        7     Closed From Date (CCYYMMDD)        
PMBCFRTM  DIM       8      8        15    Closed From Time (HH:MM:SS)        
PMBCFRPR  DIM       1      1        23    Closed From Processed Indicator    
PMBCTODT  DIM       8      8        24    Closed To Date (CCYYMMDD)          
PMBCTOTM  DIM       8      8        32    Closed To Time (HH:MM:SS)          
PMBCTOPR  DIM       1      1        40    Closed To Processed Indicator      
PMBCREAS  DIM       3      3        41    Reason for Bed Closure (Cat BU)    
PMBCCRDT  DIM       8      8        44    Date Record Created (CCYYMMDD)     
PMBCCRTM  DIM       8      8        52    Time Record Created (HH:MM:SS)     
PMBCCRID  DIM       10     10       60    User ID - Creator                  
PMBCUPDT  DIM       8      8        70    Date Record Updated (CCYYMMDD)     
PMBCUPTM  DIM       8      8        78    Time Record Updated (HH:MM:SS)     
PMBCUPID  DIM       10     10       86    User ID - Last Update              
PMBCDOCT  DIM       10     10       96    Doctor Code (pmshcpaf)             
PMBCFTRC  DIM       50     50       106   Free Text Reason for Closure       
PMBCSPAR  DIM       50     50       156   Spare                              
.
.End of Record                      206  
.
