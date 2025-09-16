. 1    .900 04/07/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   PATNIPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Non-Inpatient Billing Charges      
. *
. * File Type     :   SQL
. *
. * File Name     :   patnipbf.dat
. * 
. * Modifications :   
. *                   V9.02.02 26/11/2001 J.Tan
. *                          Fixed description for System code
. *                   V9.02.01 11/10/2001 J.Tan
. *                          Fixed description of clinic type/indicator
. *                   V9.00  04.07.01 Dean Cramer
. *                          Include via generator and change
. *                          field names as per existing - add variables
. *                   V5.00  31.03.89 J.Clark          (IBA)
. *                          Change include heading.
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATNIPB1   IFILE    SQL, FIXED=75, KEY="U1-1,2-4,5-7,8-10,11-13"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DNBSYST   DIM       1      1        1     System Code (PATVISFD)             
.                                         1 = A & E
.                                         2 = Outpatients
NBINDC    DIM       3      3        2     Clinic Indicator (category CI)     
.                                         A & E = SP3
.                                         Outpatients (OMACIND)
NBRESD    DIM       3      3        5     Resident Status (category T or EL)_
NBCOMP    DIM       3      3        8     Compensation Code (categ. CL or EM)
NBINDV    DIM       3      3        11    Visit Type (category CV) 
.                                         A & E = Discharge status (category ED)
NBDESC    DIM       30     30       14    Description                        
NBITEM    DIM       3      3        44    Item Group (category FI)           
NBAMT     FORM      12.2   8        47    Amount                             
NBSPARX   DIM       20     20       55    Spare Variable                     
.
.End of Record                      75   
.
.Redefine Key Variables
.----------------------
NBSYST    FORM      1               1     System Code (PATVISFD)
NBAMNT    FORM      6.2             47    Amount
