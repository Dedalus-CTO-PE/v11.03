. *----------------------------------------------------------------------
. * Include Name  :   ALLRNWTD.INC
. *
. * Function      :   CGI variables for ALLRNWFD - allrnwaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.08.01  28/04/2016  Ebon Clements TSK 0813977
.             Added ALRNW024 to ALRNW029
.  V10.05.00  16/09/2015  Ebon Clements CAR 291413
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
ALRNW001  DIM       8       Referral/Visit Number
ALRNW002  DIM       8       Date Renewed (CCYYMMDD)
ALRNW003  DIM       8       Renewed Time (HH:MM:SS)
ALRNW004  DIM       10      Renewed By (websecaf)
ALRNW005  DIM       3       Original Type of Ref. (Cat RI)
ALRNW006  DIM       8       Original Expiry Date (CCYYMMDD)
ALRNW007  DIM       8       Original Ref Renewal Date(CCYYMMDD)
ALRNW008  DIM       3       New Type of Ref. (Cat RI)
ALRNW009  DIM       8       New Expiry Date (CCYYMMDD)
ALRNW010  DIM       8       New Ref Renewal Date(CCYYMMDD)
ALRNW011  DIM       1       Status
ALRNW012  DIM       8       Reinstate Ref Date (CCYYMMDD)
ALRNW013  DIM       8       Reinstate Ref Time (HH:MM:SS)
ALRNW014  DIM       10      Reinstate Ref User (websecaf)
ALRNW015  DIM       8       Date Deleted (CCYYMMDD)
ALRNW016  DIM       8       Time Deleted (HH:MM:SS)
ALRNW017  DIM       10      Deleted By (websecaf)
ALRNW018  DIM       8       Date Record Created (CCYYMMDD)
ALRNW019  DIM       8       Time Record Created (HH:MM:SS)
ALRNW020  DIM       10      WEB User ID Created (websecaf)
ALRNW021  DIM       8       Update Date (CCYYMMDD)
ALRNW022  DIM       8       Update Time (HH:MM:SS)
ALRNW023  DIM       10      WEB User ID Updated (websecaf)
ALRNW024  DIM       10      Original Responsible HCP (pmshcpaf)
ALRNW025  DIM       10      New Responsible HCP (pmshcpaf)
ALRNW026  DIM       10      Original Referring HCP (pmshcpaf)
ALRNW027  DIM       10      Original Referring HCP Practice
ALRNW028  DIM       10      New Referring HCP (pmshcpaf)
ALRNW029  DIM       10      New Referring HCP Practice
