. *-----------------------------------------------------------------------------
. * Include Name  : PMSRUGTD.INC
. *
. * Function      : CGI Variables for PMSRUGFD - pmsrugaf
. *
. * Mods          :
. * V10.06.01 17/03/2015 Patrick Adair   CAR 271541
. *                      Created include
. *-----------------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMRUG001  DIM       8       Visit Number
PMRUG002  DIM       8       Assessment Date
PMRUG003  DIM       8       Assessment Time
PMRUG004  DIM       1       Type of Assessment
.                              0 - Palliative
.                              1 - Maintenance
PMRUG005  DIM       1       Admission for Assessment only
.                              1 = Scores non Mandatory
.                              2 = Scores are Mandatory
PMRUG006  DIM       8       Phase Start Date
PMRUG007  DIM       8       Phase End Date
PMRUG008  DIM       3       Phase Type
PMRUG009  DIM       3       Maintenance Type
PMRUG010  DIM       1       RUG-ADL Bed Mobility
PMRUG011  DIM       1       RUG-ADL Toileting
PMRUG012  DIM       1       RUG-ADL Transfers
PMRUG013  DIM       1       RUG-ADL Eating
PMRUG014  DIM       10      User who created record
PMRUG015  DIM       8       Date record created
PMRUG016  DIM       8       Time record created
PMRUG017  DIM       10      User who updated record
PMRUG018  DIM       8       Date record updated
PMRUG019  DIM       8       Time record updated
PMRUG020  DIM       1       Delete Flag
PMRUG021  DIM       10      User who deleted record
PMRUG022  DIM       8       Date record deleted
PMRUG023  DIM       8       Time record deleted
PMRUG024  DIM       3       Reason for delete
PMRUG025  DIM       1       Completed
.                              0 or blank = No
.                              1 = Yes
PMRUG026  DIM       10      User who completed assessment
PMRUG027  DIM       8       Date assessment completed
PMRUG028  DIM       8       Time assessment completed
