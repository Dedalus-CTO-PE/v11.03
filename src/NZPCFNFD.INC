. V9.08.003 22/11/2006 JH  Added hospital code                               
. V9.08.004 22/11/2006                                                       
. V9.08.005 22/11/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   NZPCFNFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Contract Funding File   
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpcfnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPCFNA1   IFILE    SQL, FIXED=391, KEY="U1-3,4-6,7-12,13-21,22-22,23-30"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZCFHOSP  DIM       3      3        1     Hospital -pathspaf or blank for all
NZCFCLMC  DIM       3      3        4     Claim Code (Cat CL)                
NZCFCNTR  DIM       6      6        7     Contract (Health Fund)             
NZCFCPRC  DIM       9      9        13    Contract Procedure Code            
NZCFSTYP  DIM       1      1        22    Start Type 1=Adm.From 
NZCFSDAT  DIM       8      8        23    Start Date (ccyymmdd)              
NZCFEDAT  DIM       8      8        31    End Date (ccyymmdd)                
NZCFBDET  FORM      1      2        39    Invoice Billing Details 1=Yes 0=No 
NZCFHNAM  DIM       35     35       41    Hospital Name                      
NZCFHAD1  DIM       35     35       76    Hospital Address Line 1            
NZCFHAD2  DIM       35     35       111   Hospital Address Line 2            
NZCFHAD3  DIM       35     35       146   Hospital Address Line 3            
NZCFHAD4  DIM       35     35       181   Hospital Address Line 4            
NZCFSPRI  FORM      3.2    4        216   % for Funder same as Primary Funder
NZCFDPRI  FORM      3.2    4        220   % for Funder diff.from Prim.Funder 
NZCFRPRO  DIM       1      1        224   Related Prov.Invoice Info.1=Yes0=No
NZCFREFN  DIM       15     15       225   Reference Number                   
NZCFVNID  DIM       15     15       240   Vendor ID char                     
NZCFELOS  FORM      4      3        255   Expected Length of Stay            
NZCFDOCS  DIM       1      1        258   Doctor Specific (mltcfnaf) 1=Yes   
NZCFCDAT  DIM       8      8        259   Date Record Created (ccyymmdd)     
NZCFCTIM  DIM       8      8        267   Time Record Created (hh:mm:ss)     
NZCFCUID  DIM       10     10       275   WEB User ID Created (websecaf)     
NZCFUDAT  DIM       8      8        285   Date Record Updated (ccyymmdd)     
NZCFUTIM  DIM       8      8        293   Time Record Updated (hh:mm:ss)     
NZCFUUID  DIM       10     10       301   WEB User ID Updated (websecaf)     
NZCFSPAR  DIM       80     80       311   Spare Variable                     
.
.End of Record                      391  
.
