. *----------------------------------------------------------------------
. * Include Name  :   PATFN2TD.INC
. *
. * Function      :   CGI variables for Overnight tables
. * Modifications :
. *
. *        V11.02.00 05/04/2022 J.Tan   TSK 0814566
. *                  Created
. *----------------------------------------------------------------------
.
.  Modifications  :
.
.Health Fund On Hold Invoice
.
.Name     Type      Length   Description
.----     ----      ------   -----------
FNEXT001  DIM       6         * Health Fund Code
FNEXT002  FORM      1         * Billing Mech. Ventilation Hrs
.                               0=No, 1=Yes
FNEXT003  FORM      6.2       * Mech. Ventilation Daily Rate
FNEXT004  FORM      2         * Hours for MV Additional Day
FNEXT005  DIM       9         * Misc. charge code for Mech vent
FNEXT006  DIM       3         * Hospital Code
FNEXT007  DIM       8         * Effective Todate
.
