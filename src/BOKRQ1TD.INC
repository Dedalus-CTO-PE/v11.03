. *----------------------------------------------------------------------
. * Include Name  :   BOKRQ1TD.INC
. *
. * Function      :   CGI variables for BOKRQ1TD - Theatre Bookings Table
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.04.01  12/02/2014  Peter Vela    CAR 218689
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
BKREQ001  DIM       8       UR Number
BKREQ002  DIM       8       Visit Number
BKREQ003  DIM       3       Booking Type CAT BK (HDP Eq UNS)
BKREQ004  DIM       10      Unique Booking Request Number
BKREQ005  DIM       1       Status 0 = unscheduled/requested
BKREQ006  DIM       3       Hospital (if multihospital)
BKREQ007  DIM       3       Priority CAT rp
BKREQ008  DIM       40      Surname
BKREQ009  DIM       40      Given Name
BKREQ010  DIM       8       Date of Birth
BKREQ011  DIM       1       Gender/Sex
BKREQ012  DIM       10      Requesting Doctor
BKREQ013  DIM       3       Unit
BKREQ014  DIM       8       Clock Start Date
BKREQ015  DIM       8       Clock Start Time
BKREQ016  DIM       100     Contact
BKREQ017  DIM       50      Patient Location
BKREQ018  DIM       3       Admitting Point CAT ap
BKREQ019  DIM       3       Expected Post Op Ward
BKREQ020  DIM       10      Surgeon
BKREQ021  DIM       6       Theatre
BKREQ022  DIM       3       Anaesthetic Code CAT OA
BKREQ023  DIM       9       MBS Code 1
BKREQ024  DIM       9       MBS Code 2
BKREQ025  DIM       9       MBS Code 3
BKREQ026  DIM       80      MBS Full Description 1
BKREQ027  DIM       80      MBS Full Description 2
BKREQ028  DIM       80      MBS Full Description 3
BKREQ029  DIM       40      Prosthesis Required
BKREQ030  DIM       3       Duration (minutes)
BKREQ031  DIM       3       Infection Status CAT OK
BKREQ032  DIM       3       Equipment 1 CAT XE
BKREQ033  DIM       3       Equipment 2 CAT XE
BKREQ034  DIM       3       Equipment 3 CAT XE
BKREQ035  DIM       8       Date Request Created
BKREQ036  DIM       8       Time Request Created
BKREQ037  DIM       10      Used who created (websecaf)
BKREQ038  DIM       8       Date Request Updated
BKREQ039  DIM       8       Time Request Updated
BKREQ040  DIM       10      User who Updated (websecaf)
BKREQ041  DIM       8       Cancellation Date
BKREQ042  DIM       8       Cancellation Time
BKREQ043  DIM       10      User who Cancelled (websecaf)
BKREQ044  DIM       3       Cancellation Code CAT BC
BKREQ045  DIM       3       Operation Type CAT OY
BKREQ046  DIM       3       Transport Code CAR OR
BKREQ047  DIM       3       Arrival Transport Code CAT SI
BKREQ048  DIM       3       Admission Type CAT P
BKREQ049  DIM       3       Claim Type CAT CL
BKREQ050  DIM       3       Expected LOS (days)
BKREQ051  DIM       3       Category Y6
BKREQ052  DIM       3       Category Y7
BKREQ053  DIM       3       Category Y8
BKREQ054  DIM       3       Category Y9
BKREQ055  DIM       3       Admission Source CAT S
BKREQ056  DIM       3       Blood Type CAT BO
BKREQ057  DIM       3       Equipment Loaned CAT XO
BKREQ058  DIM       1       Consent Obtained (N=No Y=Yes)
BKREQ059  DIM       8       Consent Change Date (ccyymmdd)
