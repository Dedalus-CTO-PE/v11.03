. V9.08.001 13/03/2007 EC  Created FD CAR 135510                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLDKIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Diagnosis Key Word Index           
. *
. * File Type     :   SQL
. *
. * File Name     :   alldkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLDKIA1   IFILE    SQL, FIXED=53, KEY="U1-3,4-12,13-27"                        
ALLDKIA2   IFILE    SQL, FIXED=53, KEY="U1-3,13-27,4-12"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALDKDEPT  DIM       3      3        1     Department (alldepaf)              
ALDKDIAG  DIM       9      9        4     Diagnosis Code                     
ALDKKKWD  DIM       15     15       13    Key Word                           
ALDKSPAR  DIM       25     25       28    Spare                              
.
.End of Record                      53   
.
