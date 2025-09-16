. V10.04.01 10/02/2014 PA C-273419 Increased description length                 
. V9.10.001 06/06/2008 JH  Increased description length                         
. *----------------------------------------------------------------------
. * Include Name  :   MRTTDTFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Record Template Details    
. *
. * File Type     :   SQL
. *
. * File Name     :   mrttdtaf.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTTDTR1   IFILE    SQL, FIXED=299, KEY="U1-4,5-5,6-8"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRTDTMNO  DIM       4      4        1     Template Number                    
MRTDRECT  DIM       1      1        5     Record Type (D/O)                  
MRTDSEQN  DIM       3      3        6     Sequence Number                    
MRTDDEST  DIM       1      1        9     Prefix for ICD Code                
MRTDDECD  DIM       9      9        10    Disease/Operation Code             
MRTDDESC  DIM       200    200      19    Description                        
MRTDSPAR  DIM       80     80       219   Spare                              
.
.End of Record                      299  
.
