. 9.10 .001 17/07/2008 JH  Created for CAR 174030                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSMSWFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Multiple Specialty Wards           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmswaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMSWA1   IFILE    SQL, FIXED=97, KEY="U1-3,4-6,7-9,10-12"                     
PMSMSWA2   IFILE    SQL, FIXED=97, KEY="U1-3,4-6,7-9,13-14,10-12"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMWHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
PMMWWARD  DIM       3      3        4     Ward Code                          
PMMWBEDC  DIM       3      3        7     Bed                                
PMMWWCLS  DIM       3      3        10    Ward Classification (Cat CG)       
PMMWORDP  DIM       2      2        13    Order of preference                
PMMWWEBC  DIM       10     10       15    Web user id created (websecaf)     
PMMWDATC  DIM       8      8        25    Date created (CCYYMMDD)            
PMMWTIMC  DIM       8      8        33    Time created (HH:MM:SS)            
PMMWWEBU  DIM       10     10       41    Web user id updated (websecaf)     
PMMWDATU  DIM       8      8        51    Date updated (CCYYMMDD)            
PMMWTIMU  DIM       8      8        59    Time updated (HH:MM:SS)            
PMMWSPAR  DIM       30     30       67    Spare                              
.
.End of Record                      97   
.
