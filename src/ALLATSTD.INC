. *----------------------------------------------------------------------
. * Include Name  :   ALLATSTD.INC
. *
. * Function      :   CGI Variables for ALLATSFD - allatsaf
. *
. * Mods          :   V9.09.01  06/08/2007  Davin  CAR 135538
. *                   Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
ALATS001  DIM       10       Assessment Type
ALATS002  DIM       30       Assessment Type Description
ALATS003  DIM       1        Active (0=No[default],1=yes)
ALATS004  DIM       3        Department (Cat CG - Indc3=A)
ALATS005  DIM       8        Commencement Date (>=current date)
ALATS006  DIM       8        Finish Date
ALATS007  DIM       3        Reminder Days (max=999)
ALATS008  DIM       18       HTML Template Name
.
