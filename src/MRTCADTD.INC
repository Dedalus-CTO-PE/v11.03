. *----------------------------------------------------------------------
. * Include Name  :   MRTCADTD.INC
. *
. * Function      :   CGI variables for MRTCADFD - mrtcadaf.dat
. *----------------------------------------------------------------------
. *
. * Modifications :
. * V11.03.00 13/07/2023 Bella Turco     TSK 0901388
. *           Created
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
MRCAD001  DIM       8        Admission Number
MRCAD002  DIM       8        Audit Date (ccyymmdd)
MRCAD003  DIM       8        Audit Time (hh:mm:ss)
MRCAD004  DIM       3        Counter
MRCAD005  DIM       2        Record Type
.                            01 = Diagnosis
.                            02 = Procedure
.                            03 = Claim Type
.                            04 = Health Fund
MRCAD006  DIM       1        Prefix
MRCAD007  DIM       9        Diagnosis Code
MRCAD008  DIM       200      Diagnosis Description
MRCAD009  DIM       1        Onset Flag
MRCAD010  DIM       9        Procedure Code
MRCAD011  DIM       200      Procedure Description
MRCAD012  DIM       8        Operation Date (ccyymmdd)
MRCAD013  DIM       8        Operation State Time (hh:mm:ss)
MRCAD014  DIM       8        Operation End Time (hh:mm:ss)
MRCAD015  DIM       10       Operating Surgeon
MRCAD016  DIM       1        DRG Driver
.
