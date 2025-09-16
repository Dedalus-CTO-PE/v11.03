. *-----------------------------------------------------------------------------
. * Include Name  :  PMSSNPTD.INC
. *
. * Function      :  CGI Variables for PMSSNPFD - pmssnpaf
. *
. * Modifications :
. * V10.08.01 29/03/2016 Peter Vela      CAR 0813961
. *           Fixed length of PMSNP002
. * V10.06.01 10/06/2015 Patrick Adair   CAR 290369
. *           Added cgi's for PMSNHDPE, PMSNHCPE & PMSNANSE
. *-----------------------------------------------------------------------------
. * V10.03.00 09/03/2012 Patrick Adair   CAR 257776
. *           Created include
. *-----------------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMSNP001  DIM       3       Class Code
PMSNP002  DIM       2       Version
PMSNP003  DIM       50      Description
PMSNP004  DIM       1       Episode Type
PMSNP005  DIM       1       Active (1=yes)
PMSNP006  DIM       8       Date Active
PMSNP007  DIM       8       Date Inactive
PMSNP008  DIM       10      User who created record
PMSNP009  DIM       8       Date record created
PMSNP010  DIM       8       Time record created
PMSNP011  DIM       10      User who updated record
PMSNP012  DIM       8       Date record updated
PMSNP013  DIM       8       Time record updated
PMSNP014  DIM       4       HDP Equivalent
PMSNP015  DIM       4       HCP Equivalent
PMSNP016  DIM       3       AN SNAP Equivalent
