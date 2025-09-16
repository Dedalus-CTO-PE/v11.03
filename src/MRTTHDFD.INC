. 5.09 .002 03/10/2000                                                       
. *----------------------------------------------------------------------
. * Include Name  :   MRTTHDFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Record Template Header     
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtthdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTTHDR1   IFILE    SQL, FIXED=121, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRTHTMID  DIM       4      4        1     Template ID                        
MRTHDESC  DIM       35     35       5     Description                        
MRTHACTV  DIM       1      1        40    Active indicator                   
MRTHSPAR  DIM       80     80       41    Spare                              
.
.End of Record                      121  
.
