. V9.02.001 10/01/2002 EC  Added MRPDRMOR                                   
. V5.01.001 27/11/1991 GKW Created FD                                        
. *----------------------------------------------------------------------
. *----------------------------------------------------------------------
. * Include Name  :   MRTPDSFD.INC
. *
. * Function      :   File Def'n Include for Medical Records Tracking
. *                   Post Discharge Header
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtpdsaf.dat
. *
. *----------------------------------------------------------------------
.Data File Definition
.--------------------
MRTPDSA1   IFILE    SQL, FIXED=71, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DMRPDADM  DIM       8      8        1     Event number (admission number)
MRPDDOCT  DIM       6      6        9     Doctor responsible
MRPDSTAT  DIM       3      3        15    Current status (Cat CP)
MRPDDATE  DIM       8      8        18    Date of current status
MRPDTIME  DIM       5      5        26    Time of current status
MRPDRMOR  DIM       3      3        31    RMO Responsible CAT MO
MRPDSPAR  DIM       37     37       34    Spare                              
.
.End of Record                      71  
.
.Redefine Key Variables
.----------------------
MRPDADMN  FORM      8    
