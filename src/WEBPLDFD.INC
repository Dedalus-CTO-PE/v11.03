. 5.09 .001 01/02/2001 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   WEBPLDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Web User ID Lists Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   webpldaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPLDA1   IFILE    SQL, FIXED=127, KEY="U1-10,11-13"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPDWUID  DIM       10     10       1     Web User ID                        
WBPDLNUM  DIM       3      3        11    List Number                        
WBPDDESC  DIM       30     30       14    List Description                   
WBPDBSPG  DIM       3      3        44    Business Server Page               
WBPDSPAR  DIM       80     80       47    Spare                              
.
.End of Record                      127  
.
