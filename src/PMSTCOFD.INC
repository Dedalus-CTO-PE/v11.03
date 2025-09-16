. V9.03.001 16/06/2004 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSTCOFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   General HCP Comments               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmstcoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSTCOA1   IFILE    SQL, FIXED=143, KEY="U1-10,11-13,14-16"                     
PMSTCOA2   IFILE    SQL, FIXED=143, KEY="U1-10,14-16,11-13"                     
PMSTCOA3   IFILE    SQL, FIXED=143, KEY="U11-13,14-16,1-10"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMTCCODE  DIM       10     10       1     HCP Code                           
PMTCTCOM  DIM       3      3        11    Type of Comments (Cat TZ)          
PMTCLNUM  DIM       3      3        14    Line Number                        
PMTCCOMM  DIM       70     70       17    Comment                            
PMTCUDAT  DIM       8      8        87    Update Date (CCYYMMDD)             
PMTCUTIM  DIM       8      8        95    Update Time (HH:MM:SS)             
PMTCUUID  DIM       10     10       103   WEB User Id Updated (websecaf)     
PMTCSPAR  DIM       30     30       113   Spare                              
.
.End of Record                      143  
.
