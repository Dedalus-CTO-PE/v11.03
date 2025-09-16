. V11.01.01 28/07/2021 JT C-0905305 Added AECC Class.
. V10.14.01 27/03/2019 JT C-0857392 Cread new FD
. *----------------------------------------------------------------------
. * Include Name  :   EMRPWDFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   ABF EMR Department Price Weight    
. *
. * File Type     :   SQL
. *
. * File Name     :   emrpwdaf.dat
. *
. * Index Values  :   KEY12   KEY12                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRPWDA1   IFILE    SQL, FIXED=203, KEY="U1-6,7-12"
EMRPWDA2   IFILE    SQL, FIXED=203, KEY="U7-12,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMPWCNTR  DIM       6      6        1     Contract ID                        
EMPWURGV  DIM       6      6        7     URG V1.4 Value/Code or AECC Class  
EMPWURGD  DIM       80     80       13    URG V1.4 Description               
EMPWPWEI  FORM      10.4   8        93    Price Weight                       
EMPWCDAT  DIM       8      8        101   Date record created                
EMPWCTIM  DIM       8      8        109   Time record created                
EMPWCUID  DIM       10     10       117   Record created by                  
EMPWUDAT  DIM       8      8        127   Date record updated                
EMPWUTIM  DIM       8      8        135   Time record updated                
EMPWUUID  DIM       10     10       143   Record updated by                  
EMPWSPAR  DIM       50     50       153   Spare variable                     
.
.End of Record                      203  
.
