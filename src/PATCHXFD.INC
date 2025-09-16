. V9.10.001 16/06/2008 JH  Created for CAR 169710                            
. V9.10.002 16/06/2008                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PATCHXFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Casemix Code Changes       
. *
. * File Type     :   SQL
. *
. * File Name     :   patchxaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCHXA1   IFILE    SQL, FIXED=50, KEY="U1-8,9-16,17-24"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTCHADM  DIM       8      8        1     Admission Number                   
PTCHDATE  DIM       8      8        9     Date (code valid upto-ccyymmdd)    
PTCHTIME  DIM       8      8        17    Time (code valid upto-hh:mm:ss)    
PTCHCODE  DIM       9      9        25    Casemix Code                       
PTCHSPAR  DIM       16     16       34    Spare                              
.
.End of Record                      50   
.
.Redefine Key Variables
.----------------------
PTCHADMN  FORM      8    
