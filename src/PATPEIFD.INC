. v9.03.002 09/02/2004 DS  Added status 4                                    
. V9.02.001 08/04/2003
. *----------------------------------------------------------------------
. * Include Name  :   PATPEIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   PRS2 Exclusion/Inclusion file      
. *
. * File Type     :   SQL
. *
. * File Name     :   patpeiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATPEIO1   IFILE    SQL, FIXED=89, KEY="U1-8,9-16"                              
PATPEIO2   IFILE    SQL, FIXED=89, KEY="U1-8,17-17,9-16"                        
PATPEIO3   IFILE    SQL, FIXED=89, KEY="U9-16,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTPESTDT  DIM       8      8        1     Extract start date (CCYYMMDD)      
DPTPEADM  DIM       8      8        9     Admission no                       
DPTPESTA  DIM       1      1        17    Status                             
.                                         1=Exclude
.                                         2=Include
.                                         3=Delete
.                                         4=Include and Delete
PTPEDATE  DIM       8      8        18    Date of status                     
PTPERESN  DIM       3      3        26    Reason (Cat RN)                    
PTPEOPER  DIM       10     10       29    Web User ID                        
PTPESPAR  DIM       50     50       39    Spare                              
.
.End of Record                      89   
.
.Redefine Key Variables
.----------------------
PTPEADMN  FORM      8    
PTPESTAT  FORM      1    
