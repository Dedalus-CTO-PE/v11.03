. V9.03.001 09/07/2004 PV  CAR 50359 Added PMMDDAT, PMMDDTIM, PMMDDUSE,PMMDDOCC
. V9.02.001 12/11/2002 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSMDTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   General Patient Notes              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMDTA1   IFILE    SQL, FIXED=172, KEY="U1-8,9-14"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMDURNO  DIM       8      8        1     U/R Number                         
PMMDNOTE  DIM       6      6        9     Note Numb                          
PMMDDATE  DIM       8      8        15    Input Date (CCYYMMDD)              
PMMDTIME  DIM       8      8        23    Input Time (HH:MM:SS)              
PMMDUSER  DIM       10     10       31    Input by WEB User ID (websecaf)    
PMMDOCCG  DIM       3      3        41    Occupational Group WEB User ID     
PMMDDELT  DIM       1      1        44    Delete Indicator (0=No,1=Yes)      
PMMDDDAT  DIM       8      8        45    Delete Date (CCYYMMDD)
PMMDDTIM  DIM       8      8        53    Delete Time (HH:MM:SS)
PMMDDUSE  DIM       10     10       61    Delete by WEB User ID (websecaf)
PMMDDOCC  DIM       3      3        71    Occupational Group WEB User ID Delete
PMMDSPAR  DIM       98     98       74    Spare Variable                     
.
.End of Record                      172  
.
