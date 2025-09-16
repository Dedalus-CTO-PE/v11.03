.-------------------------------------------------------------------------------
. Include Name  :  PMSSNPTD.INC
.
. Function      :  CGI Variables for PMSSNCFD - pmssncaf
.
. Mods : 
. V10.06.01 12/03/2015 Patrick Adair   CAR 308185
.                      Updated for FIM Total Score Range
. V10.05.00 21/07/2014 Patrick Adair   CAR 277093
.                      Created include
.-------------------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMSNC001  DIM       3       AN-SNAP Classification Code
PMSNC002  DIM       2       AN-SNAP Version
PMSNC003  DIM       7       Impairment Code
PMSNC004  DIM       8       Effective Date From
PMSNC005  DIM       8       Effective Date To
PMSNC006  DIM       1       FIM Motor Score Edit
PMSNC007  FORM      2       FIM Motor Score Range Low
PMSNC008  FORM      2       FIM Motor Score Range High
PMSNC009  DIM       1       FIM Cognitive Score Edit
PMSNC010  FORM      2       FIM Cognitive Score Range Low
PMSNC011  FORM      2       FIM Cognitive Score Range High
PMSNC012  DIM       1       Age Range Limit
PMSNC013  FORM      2       Age
PMSNC014  DIM       1       Assessment Only
PMSNC015  DIM       1       FIM Total Score Range
PMSNC016  FORM      3       FIM Total Score Range Low
PMSNC017  FORM      3       FIM Total Score Range Range
