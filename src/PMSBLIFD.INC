. V9.04.001 03/09/2003 JT  Added Hospital ID                                 
. V9.03.001 30/09/2003 LV  Created new                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSBLIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bulk Invoice Selection List        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbliaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBLIA1   IFILE    SQL, FIXED=100, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBLSEID  DIM       4      4        1     Selection ID.                      
PMBLSEDC  DIM       35     35       5     Selection Description              
PMBLTYPE  DIM       1      1        40    Print Invoice Type                 
.                                         1=All patient last inv sent N days
.                                         2=All disch. patient since keyin date
.                                         3=All disch. patient owing X dollars
.                                         4=All patient disch. from given ward
.                                         5=All patient disch. for given Claim
PMBLSTDT  DIM       8      8        41    Start Date                         
PMBLENDT  DIM       8      8        49    End Date                           
PMBLSTNM  DIM       6      6        57    Start Name                         
PMBLENNM  DIM       6      6        63    End Name                           
PMBLDAYS  FORM      4      3        69    Number of Days                     
PMBLMAMT  FORM      6.2    5        72    Minimum Amount Owing               
PMBLWARD  DIM       3      3        77    Discharge Ward/Claim Type (Cat CL) 
PMBLHOSP  DIM       3      3        80    Hospital ID
PMBLSPAR  DIM       17     17       83    Spare                              
.
.End of Record                      100  
.
