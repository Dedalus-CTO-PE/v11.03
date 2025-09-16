.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   EMRMANFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Emergency         *
.  *                        Screen Mandatory Fields                       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   emrmanaf.dat                                  * 
.  *  Audit File                                                          *
.  *                                                                      * 
.  *  Keys              :   Key 7                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
EMRMANA1   IFILE SQL, FIXED=20, KEY="U1-2,3-7"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DEMMASCR  DIM         2       2       1   Screen Number
DEMMAFLD  DIM         5       5       3   Screen Field Number
EMMARESP  DIM         1       1       8   Responsible Staff
.                                          1=Clerk
.                                          2=Doctor
.                                          3=Nurse
EMMASPAR  DIM        11      11       9   Spare Variable
.
.End of Record                      20
.
. Redefine form fields for key fields
. -----------------------------------
EMMASCRN  FORM        2
EMMAFELD  FORM        5
