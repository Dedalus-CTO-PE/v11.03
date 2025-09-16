. *----------------------------------------------------------------------
. * Include Name  :   PMSTSPTD.INC
. *
. * Function      :   CGI variables for PMSTSPFD - pmstspaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V9.12.01   25.09.2009  Ebon Clements CAR 202769
.             Added PMTSP054, PMTSP055 and PMTSP056
.  V9.07.01   17/08/2006  Ebon Clements CAR 110245
.             Added PMTSP052 and PMTSP053
.  V9.06.01   24/04/2006  Ebon Clements CAR 102863
.             Fixed description of PMTSP041
.  V9.05.00   06/05/2006  Ebon Clements CAR 89302
.             Created Include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
PMTSP001  DIM       8       Patient U/R Number
PMTSP002  DIM       8       Visit Number
PMTSP003  DIM       3       Unique Number
PMTSP004  DIM       8       Transport Date (CCYYMMDD)
PMTSP005  DIM       8       Transport Time (hh:mm:ss)
PMTSP006  DIM       35      Pick Up Address Line 1
PMTSP007  DIM       35      Pick Up Address Line 2
PMTSP008  DIM       35      Pick Up Address Line 3
PMTSP009  DIM       35      Pick Up Address Line 4
PMTSP010  DIM       8       Pick Up Post Code
PMTSP011  DIM       20      Pick Up Telephone Private
PMTSP012  DIM       20      Pick Up Telephone Business
PMTSP013  DIM       20      Pick Up Telephone Mobile
PMTSP014  DIM       80      Pick Up Email
PMTSP015  DIM       20      Pick Up Melway Ref
PMTSP016  DIM       35      Return Address Line 1
PMTSP017  DIM       35      Return Address Line 2
PMTSP018  DIM       35      Return Address Line 3
PMTSP019  DIM       35      Return Address Line 4
PMTSP020  DIM       8       Return Post Code
PMTSP021  DIM       20      Return Telephone Private
PMTSP022  DIM       20      Return Telephone Business
PMTSP023  DIM       20      Return Telephone Mobile
PMTSP024  DIM       80      Return Email
PMTSP025  DIM       20      Return Melway Ref
PMTSP026  DIM       1       Return Address Same As Pick Up
PMTSP027  DIM       35      Destination Address Line 1
PMTSP028  DIM       35      Destination Address Line 2
PMTSP029  DIM       35      Destination Address Line 3
PMTSP030  DIM       35      Destination Address Line 4
PMTSP031  DIM       8       Destination Post Code
PMTSP032  DIM       20      Destination Telephone Private
PMTSP033  DIM       20      Destination Telephone Business
PMTSP034  DIM       20      Destination Telephone Mobile
PMTSP035  DIM       80      Destination Email
PMTSP036  DIM       20      Destination Melway Ref
PMTSP037  DIM       3       Facility (Cat fa)
PMTSP038  DIM       3       Transport In (Cat OB)
PMTSP039  DIM       3       Mobility (Cat pn)
PMTSP040  DIM       1       Transport Booked 0=No 1=Yes
PMTSP041  DIM       3       Aides (CAT po)
PMTSP042  DIM       3       Mental State (Cat pp)
PMTSP043  DIM       3       Special Arrangements (Cat SA)
PMTSP044  DIM       10      Cost Centre
PMTSP045  DIM       3       Claim Code (Cat CL)
PMTSP046  DIM       1       Ambulance Subscriber 0=No 1=Yes
PMTSP047  DIM       10      Ambulance Subscription Number
PMTSP048  DIM       1       M40 Card Subscriber 0=No 1=Yes
PMTSP049  DIM       20      M40 Card Number
PMTSP050  DIM       8       M40 Card Expiry Date
PMTSP051  DIM       3       Run Number In
PMTSP052  DIM       3       Run Number Out
PMTSP053  DIM       3       Transport Out (Cat OB)
PMTSP054  DIM       8       Return Transport Date (ccyymmdd)
PMTSP055  DIM       8       Return Transport Time (hh:mm:ss)
PMTSP056  DIM       1       Return Transport Booked
