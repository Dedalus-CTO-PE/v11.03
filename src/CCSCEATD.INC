. *----------------------------------------------------------------------
. * Include Name  :   CCSCEATD.INC
. *
. * Function      :   CGI variables for CCSCEAFD - ccsceaaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V9.03.01   11/03/2004  Ebon Clements             CAR 46515
.             Added CSCEA026
.  V9.03.00   09/01/2003  Ebon Clements             CAR 45487
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
CSCEA001  DIM       4       Extract ID
CSCEA002  DIM       35      Description
CSCEA003  DIM       2       Hospital
CSCEA004  DIM       8       From Discharge Date
CSCEA005  DIM       8       To Discharge Date
CSCEA006  DIM       8       From Admission Date
CSCEA007  DIM       8       To Admission Date
CSCEA008  DIM       1       Include Incomplete Episodes 0=No
CSCEA009  DIM       1       Visit Type (0=All)
CSCEA010  DIM       1       Include Day Cases 0=No
CSCEA011  DIM       4       From Cost Model (Blank = Actuals)
CSCEA012  DIM       4       From Year
CSCEA013  DIM       4       To Cost Model
CSCEA014  DIM       4       To Year
CSCEA015  DIM       1       Create Resource Usage Analysis
CSCEA016  DIM       3       Level 1 Casemix Type
CSCEA017  DIM       3       Level 2 Casemix Type
CSCEA018  DIM       3       Level 3 Casemix Type
CSCEA019  DIM       1       Update Statistics Min,Max&Var 0=No
CSCEA020  DIM       1       Replace Income with Payment Model X
CSCEA021  DIM       1       Replace Cost with Payment Model X
CSCEA022  DIM       1       Replace Inc. with Theatre Time X
CSCEA023  DIM       1       Replace Cost with Theatre Time X
CSCEA024  DIM       3       Split Cost Model 1 (Southland)
CSCEA025  DIM       3       Split Cost Model 2 (Southland)
CSCEA026  DIM       1       Process Status                   
