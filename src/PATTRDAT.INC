. *****************************************************************************
. * Filename      : PATTRDAT.INC                                              *
. * System        : Patient management system                                 *
. *****************************************************************************
. * Function      : Data variables for the PATTRRAT include                   *
. *****************************************************************************
.
NEWTATYP  DIM       3         * admission type to be charged
NEWTDEPT  DIM       3         * department to be charged
NEWTWARD  DIM       3         * ward code to be charged
NEWTBTYP  DIM       3         * bed type to be charged
NEWTCHST  DIM       3         * chargeable status (for PATRATE1)
NEWTDATE  DIM       8         * Date to calculate rate for (CCYYMMDD)
NEWTPPOR  FORM      6.2       * Patient portion of new rate
NEWTRPOR  FORM      6.2       * Rebate portion of new rate
NEWTXTRA  FORM      6.2       * Extra charge for new rate
NEWTBEND  FORM      3         * ending number of days for charge
