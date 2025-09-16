. *----------------------------------------------------------------------
. * Include Name  :   EMRRVSTD.INC
. *
. * Function      :   CGI variables for EMRRVSFD - emrrvsaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.03.00  29/10/2012  Ebon Clements CAR 266929
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
EMRVS001  DIM       3      3        1     Research Code (Cat eu)
EMRVS002  DIM       8      8        4     Start Date (CCYYMMDD)
EMRVS003  DIM       8      8        12    Visit Number
EMRVS004  DIM       1      1        20    Project Status
.
EMRVPST0  INIT      "Suggested"
EMRVPST1  INIT      "Accepted"
EMRVPST2  INIT      "Rejected"
