. *----------------------------------------------------------------------
. * Include Name  :   PMSAMHTD.INC
. *
. * Function      :   CGI variables for PMSAMHFD - pmsamhaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.03.00  18.05.2023  DA Sarkies        TSK 0923703
.             Created include
.  V10.03.01  24.05.2023  DA Sarkies        TSK 0923703
.             Created TD file for pmsamhaf
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PMAMH001  DIM       6        Contract ID
PMAMH002  DIM       10       AMHCC Code
PMAMH003  DIM       80       AMHCC Description
PMAMH004  FORM      6.2      Average Phase Length (Days)
PMAMH005  FORM      4        Lower Bound (Inlier Bounds)
PMAMH006  FORM      4        Upper Bound (Inlier Bounds)
PMAMH007  FORM      10.4     Short Stay Outlier Base (PW)
PMAMH008  FORM      10.4     Short Stay Outlier Per Diem (PW)
PMAMH009  FORM      10.4     Inlier (Price Weight)
PMAMH010  FORM      10.4     Long Stay Outlier Per Diem (PW)
PMAMH011  FORM      3.2      Private Patient Service Adjustment %

