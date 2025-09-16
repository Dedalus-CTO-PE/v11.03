. *----------------------------------------------------------------------
. * Include Name  :   PMSLTFTD.INC
. *
. * Function      :   CGI Variables for PMSLTFFD - pmsltfaf
. *
. * Mods          :   
. *                  V10.05.01 02.09.2014 J.Tan         CAR 298984
. *                            Added Patient on a Payment plan
. *                  V10.03.01 09.08.2013 Peter Vela    CAR 287592
. *                            Added PMSFL033 Number of Records
. *                  V10.00.01 01.04.2010 J.Tan         CAR 218426
. *                            Added new fields (healthfund,ins.) to pmsltfaf
. *                   V9.04.01 30.08.2004 Jill Habasque CAR 53930
. *                            Added hospital ID
. *                   V9.02.03 08.06.2004 Lina Vo    CAR 50536
. *                            Changed PMSFL021 from DIM 9 to FORM 7.2
. *                   V9.02.02 02.11.2001 Kuldeep Singh 
. *                            Modify for letter code and date
. *                   V9.02.01 03.10.2001 Kuldeep Singh 
. *                            Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length                  Description
.----     ----      ------                  -----------
PMSFL001  DIM       4                      * Selection ID.
PMSFL002  DIM       35                     * Selection Description
PMSFL003  DIM       8                      * Visit Date From (ccyymmdd)
PMSFL004  DIM       8                      * Visit Date To (ccyymmdd)
PMSFL005  DIM       8                      * Discharge Date From (ccyymmdd)
PMSFL006  DIM       8                      * Dischrage Date To (ccyymmdd)
PMSFL007  DIM       20                     * Surname From
PMSFL008  DIM       20                     * Surname To
PMSFL009  DIM       3                      * Last Letter Sent Code From
PMSFL010  DIM       3                      * Last Letter Sent Code To
PMSFL011  DIM       8                      * Last Letter Date From (ccyymmdd)
PMSFL012  DIM       8                      * Last Letter Date To (ccyymmdd)
PMSFL013  DIM       3                      * Future Action From (category FA)
PMSFL014  DIM       3                      * Future Action To (category FA)
PMSFL015  DIM       8                      * Future Action Date From (ccyymmdd)
PMSFL016  DIM       8                      * Future Action Date To (ccyymmdd)
PMSFL017  DIM       3                      * Claim Code From (category CL)
PMSFL018  DIM       3                      * Claim Code To (category CL)
PMSFL019  DIM       3                      * Admission Type From (category A)
PMSFL020  DIM       3                      * Admission Type To (category A)
PMSFL021  FORM      7.2                    * Outstanding Amount Lower Limit
PMSFL022  DIM       1                      * Ignore Insurance Invoices
PMSFL023  DIM       8                      * Fund Payment Date From (ccyymmdd)
PMSFL024  DIM       8                      * Fund Payment Date From (ccyymmdd)
PMSFL025  DIM       1                      * Deceased Status
PMSFL026  DIM       1                      * System
PMSFL027  DIM       3                      * Letter code
PMSFL028  DIM       8                      * Date of Letter 
PMSFL029  DIM       3                      * Hospital ID    
PMSFL030  DIM       6                      * Health Fund                 
PMSFL031  DIM       6                      * Insurance Code                     
PMSFL032  DIM       9                      * Miscellaneous Charge Code          
PMSFL033  DIM       5                      * Number of Records
PMSFL034  DIM       3                      * Patient on Payment Plan 
.                                            1=Yes,2=Exclude
.
