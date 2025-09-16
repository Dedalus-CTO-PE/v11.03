. *----------------------------------------------------------------------
. * Include Name  :   PMSRESTD.INC
. *
. * Function      :   CGI variables for PMSRESFD - Residency file
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.02.01  20/07/2011  J.Tan         CAR 239592
.             Added free format Name of school
.  V10.02.00  07/06/2011  J.Tan         CAR 239592
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
PMRES001  DIM       3       Country of Residency
PMRES002  DIM       8       Temp Residence Expiry date
PMRES003  DIM       8       Resident Granted date
PMRES004  DIM       127     Comments
PMRES005  DIM       10      Visa number
PMRES006  DIM       8       Visa Expiry Date (CCYYMMDD)
PMRES007  DIM       3       Visa Type (Cat vt)
PMRES008  DIM       20      Passport Number
PMRES009  DIM       8       Passport Expiry Date (CCYYMMDD)
PMRES010  DIM       3       Passport Country of Issue (Cat C)
PMRES011  DIM       6       Insurance Code
PMRES012  DIM       20      Insurance Fund Membership Number
PMRES013  DIM       8       Insurance Expiry Date (ccyymmdd)
PMRES014  DIM       20      Student Number
PMRES015  DIM       6       Name of School (pateoraf)
PMRES016  DIM       50      Employer Name
PMRES017  DIM       35      Employer Address Line 1
PMRES018  DIM       35      Employer Address Line 2
PMRES019  DIM       35      Employer Address Line 3
PMRES020  DIM       35      Employer Address Line 4
PMRES021  DIM       8       Employer Postcode
PMRES022  DIM       1       Send Bill to Local Address
PMRES023  DIM       1       Travel Insurance 0=No, 1=Yes
PMRES024  DIM       20      Travel Insurance Policy Number
PMRES025  DIM       8       Policy Number Expiry Date CCYYMMDD
PMRES026  DIM       50      Comment 1
PMRES027  DIM       50      Comment 2
PMRES028  DIM       50      Comment 3
PMRES029  DIM       50      Comment 4
PMRES030  DIM       50      Comment 5
PMRES031  DIM       50      Employer Contact Name
PMRES032  DIM       20      Employer Phone
PMRES033  DIM       30      Free format Name of school
PMRES034  DIM       35      School Address line1
PMRES035  DIM       35      School Address line2
PMRES036  DIM       35      School Address line3
PMRES037  DIM       35      School Address line4
PMRES038  DIM       8       School postcode
PMRES039  DIM       50      School Contact Name
PMRES040  DIM       20      School Phone
