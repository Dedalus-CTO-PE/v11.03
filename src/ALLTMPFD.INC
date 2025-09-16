. V10.04.01 27/12/2013 PA C-294443 Moved ALTMYRC out of spare variable 
. V10.03.01 05/07/2012 PV  CAR-261649 ALTMTYRC - Type of Record
. V9.00.001 20/05/2001 SB  Created F
. *----------------------------------------------------------------------
. * Include Name  :   ALLTMPFD.INC
. *
. * Function      :   File Def'n Include for Allied Healt
. *                   Template Mapping
. *
. * File Type     :   SQL
. *
. * File Name     :   alltmpaf.dat
. *
. * Index Values  :   KEY16
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLTMPA1   IFILE    SQL, FIXED=153, KEY="U1-3,4-11,12-13,14-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALTMDEPT  DIM       3      3        1     Department Code (alldepaf)
ALTMMPSV  DIM       8      8        4     Map from Server
ALTMMPRP  DIM       2      2        12    Map from Report
ALTMMPTP  DIM       3      3        14    Map from Template
ALTMMPTT  DIM       3      3        17    Map to Template
ALTMDESC  DIM       30     30       20    Description
ALTMCDAT  DIM       8      8        50    Date Record Created (CCYYMMDD)
ALTMCTIM  DIM       8      8        58    Time Record Created (HH:MM:SS)
ALTMCUID  DIM       10     10       66    WEB User ID Created (websecaf)
ALTMUDAT  DIM       8      8        76    Date Record Updated (CCYYMMDD)
ALTMUTIM  DIM       8      8        84    Time Record Updated (HH:MM:SS)
ALTMUUID  DIM       10     10       92    WEB User ID Updated (websecaf)
ALTMTYRC  DIM       1      1        102   Type of Record
.                                         0 - alldepaf
.                                         1 - emrsitaf
ALTMSPAR  DIM       50     50       103   Spare Variable
.
.End of Record                      153  
.
