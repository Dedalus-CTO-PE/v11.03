. *----------------------------------------------------------------------
. * Include Name  :   MEHMDTFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Mental Health Notes                
. *
. * File Type     :   SQL
. *
. * File Name     :   mehmdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHMDTA1   IFILE    SQL, FIXED=157, KEY="U1-8,9-11,12-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHMDURNO  DIM       8      8        1     U/R Number                         
MHMDTYPE  DIM       3      3        9     Comment Type                       
.                                         001 - Legal Status Referral Comments
MHMDNOTE  DIM       6      6        12    Note Number                        
MHMDDATE  DIM       8      8        18    Input Date (CCYYMMDD)              
MHMDTIME  DIM       8      8        26    Input Time (HH:MM:SS)              
MHMDUSER  DIM       10     10       34    Input by WEB User ID (websecaf)    
MHMDOCCG  DIM       3      3        44    Occupational Group WEB User ID     
MHMDDELT  DIM       1      1        47    Delete Indicator (0=No, 1=Yes)     
MHMDDDAT  DIM       8      8        48    Delete Date (CCYYMMDD)             
MHMDDTIM  DIM       8      8        56    Delete Time (HH:MM:SS)             
MHMDDUSE  DIM       10     10       64    Delete by WEB User ID (websecaf)   
MHMDDOCC  DIM       3      3        74    Occupational Grp WEB User ID Delete
MHMDSPAR  DIM       80     80       77    Spare Variable                     
.
.End of Record                      157  
.
