. V9.00.001 17/07/2001 dc  created
. V9.04.001 19/08/2005 EC  Added OBMDDDAT,OBMDDTIM and OBMDDDUSE CAR 71403   
. *----------------------------------------------------------------------
. * Include Name  :   OBSMDTFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Patient Medical Notes              
. *
. * File Type     :   SQL
. *
. * File Name     :   obsmdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSMDTA1   IFILE    SQL, FIXED=172, KEY="U1-8,9-14"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBMDURNO  DIM       8      8        1     U/R Number                         
OBMDNOTE  DIM       6      6        9     Note Number                        
OBMDDATE  DIM       8      8        15    Input Date (CCYYMMDD)              
OBMDTIME  DIM       8      8        23    Input Time (HH:MM:SS)              
OBMDUSER  DIM       10     10       31    Input by WEB User ID (websecaf)    
OBMDOCCG  DIM       3      3        41    Occupational Group WEB User ID     
OBMDDELT  DIM       1      1        44    Delete Indicator (0=No,1=Yes)      
OBMDDDAT  DIM       8      8        45    Delete Date (CCYYMMDD)             
OBMDDTIM  DIM       8      8        53    Delete Time (HH:MM:SS)             
OBMDDUSE  DIM       10     10       61    Delete by WEB User ID (websecaf)   
OBMDSPAR  DIM       101    101      71    Spare Variable                     
.
.End of Record                      172  
.
