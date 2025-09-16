. *----------------------------------------------------------------------
. * Include Name  :   PMSSAWTD.INC
. *
. * Function      :   CGI variables for PMSSAWFD - pmssawaf.dat
. *----------------------------------------------------------------------
. *
. * Modifications :
. * V11.02.01 22/08/2022 Bella Turco     TSK 0906597
. *           Adjusted code for CGI rearrangement of PMSAW004
. * V11.02.00 02/08/2022 Bella Turco     TSK 0906597
. *           Created
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PMSAW001   DIM       6        Contract ID (pmscidaf)
PMSAW002   DIM       3        AN-SNAP Classification (pmssnpaf)
PMSAW003   DIM       2        AN-SNAP Version (pmssnpaf)
PMSAW004   DIM       2        Care type Cat CC UDF6
.                            2=Rehabilitation
.                            3=Palliative Care
.                            4=GEM
.                            5=Psychogeriatric Care
.                            6=Maintenance
PMSAW005   DIM       80       AN-SNAP Description
PMSAW006   DIM       50       Episode Type Description
PMSAW007   DIM       1        Sameday 1=Yes
PMSAW008   FORM      6.2      Average LOS
PMSAW009   FORM      4        Lower Bound (Inlier Bounds)
PMSAW010   FORM      4        Upper Bound (Inlier Bounds)
PMSAW011   FORM      10.4     Same Day (Price Weight)
PMSAW012   FORM      10.4     Short Stay Outlier Per Diem (PW)
PMSAW013   FORM      10.4     Inlier (Price Weight)
PMSAW014   FORM      10.4     Long Stay Outlier Per Diem (PW)
PMSAW015   DIM       8        Date Record Created (CCYYMMDD)
PMSAW016   DIM       8        Time Created (hh:mm:ss)
PMSAW017   DIM       10       Created by (websecaf)
PMSAW018   DIM       8        Updated Date (CCYYMMDD)
PMSAW019   DIM       8        Updated Time (hh:mm:ss)
PMSAW020   DIM       10       Updated by (websecaf)
.
