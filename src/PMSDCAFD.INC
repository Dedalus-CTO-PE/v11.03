. V10.01.01 04/02/2011 EC  Created FD  CAR 233928                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSDCAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Deleted Contracts Audit            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdcaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDCAA1   IFILE    SQL, FIXED=221, KEY="U1-8,155-162,163-170,9-11"             
PMSDCAA2   IFILE    SQL, FIXED=221, KEY="U12-17,1-8,155-162,163-170,9-11"       
PMSDCAA3   IFILE    SQL, FIXED=221, KEY="U145-154,155-162,163-170,1-8,9-11"     
PMSDCAA4   IFILE    SQL, FIXED=221, KEY="U12-17,145-154,1-8,155-162,163-170,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDCFILE  DIM       8      8        1     Filename Record Deleted From       
PMDCUNIQ  DIM       3      3        9     Unique Id                          
PMDCCONT  DIM       6      6        12    Contract Id                        
PMDCRKEY  DIM       127    127      18    Key of Deleted Record              
PMDCDUID  DIM       10     10       145   Delete By Web User ID (Websecaf)   
PMDCDDAT  DIM       8      8        155   Deleted Date (CCYYMMDD)            
PMDCDTIM  DIM       8      8        163   Deleted Time (HH:MM:SS)            
PMDCSPAR  DIM       50     50       171   Spare                              
.
.End of Record                      221  
.
