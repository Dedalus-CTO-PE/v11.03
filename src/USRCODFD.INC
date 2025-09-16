. USRCODFD.PBL
.-------------
.
.     USED IN INCLUDE  :   USRDSCOD
.
.      A MAXIMUM OF TEN USER DEFINED VARIABLES AT ANY ONE TIME
.
. NAME     TYPE      LENGTH     DESCRIPTION
. ----     ----      ------     -----------
TVERT      FORM        2        Line Pos of FIRST User defined field
.                               *** THIS MUST ALWAYS BE THE FIRST **** 
.
TFIELD     FORM        2        FIRST Actual Starting Field
.                               eg. The first user defined field is "26"
.                               *** THIS MUST ALWAYS BE THE FIRST **** 
TXFIELD     FORM        2       XTRA SPARE
.
TCOL      FORM         2        Coloumn Postition of KEYIN
TCOL1     FORM         2                          of SCRDISP
TCOL2     FORM         2                          of COLON =TCOL-2
TCOL3     FORM         2                          of DESCRIPTION = TCOL +4
.
TUTYPE     DIM         1        STARTING CHARACTER OF CATAGOERIES
.                               EG TUTYPE="N" FOR CATAS N1,N2,N3...N0
.
.
TONOFF     FORM         1       **** IS CATEGORY ON or OFF *****
TONOFF1    FORM         1       ON = 1
TONOFF2    FORM         1       ON = 1
TONOFF3    FORM         1       ON = 1
TONOFF4    FORM         1       ON = 1
TONOFF5    FORM         1       ON = 1
TONOFF6    FORM         1       ON = 1
TONOFF7    FORM         1       ON = 1
TONOFF8    FORM         1       ON = 1
TONOFF9    FORM         1       ON = 1
TONOFF10   FORM         1       ON = 1
.
TMANDT     FORM         1       **** IS CATAGORY MATDATORY *****
TMANDT1    FORM         1       YES = 1
TMANDT2    FORM         1       YES = 1
TMANDT3    FORM         1       YES = 1
TMANDT4    FORM         1       YES = 1
TMANDT5    FORM         1       YES = 1
TMANDT6    FORM         1       YES = 1
TMANDT7    FORM         1       YES = 1
TMANDT8    FORM         1       YES = 1
TMANDT9    FORM         1       YES = 1
TMANDT10   FORM         1       YES = 1
.
TUCATA     DIM         2        **** CURRENT USERS CATALOGS *****
TUCATA1    DIM         2        CATA N1
TUCATA2    DIM         2        CATA N2
TUCATA3    DIM         2        CATA N3
TUCATA4    DIM         2        CATA N4
TUCATA5    DIM         2        CATA N5
TUCATA6    DIM         2        CATA N6
TUCATA7    DIM         2        CATA N7
TUCATA8    DIM         2        CATA N8
TUCATA9    DIM         2        CATA N9
TUCATA10   DIM         2        CATA N0
.
TUCODE     DIM         3        **** CURRENT USERS CODELOGS *****
TUCODE1    DIM         3        CODE N1
TUCODE2    DIM         3        CODE N2
TUCODE3    DIM         3        CODE N3
TUCODE4    DIM         3        CODE N4
TUCODE5    DIM         3        CODE N5
TUCODE6    DIM         3        CODE N6
TUCODE7    DIM         3        CODE N7
TUCODE8    DIM         3        CODE N8
TUCODE9    DIM         3        CODE N9
TUCODE10   DIM         3        CODE N0
.
TDESCLN    FORM        1        LENGTH 0=20,1=15,2=10,..
TDESC15    DIM         15       TABLE DESCRIPTION SHORT
TDESC10    DIM         10       TABLE DESCRIPTION SHORT
.
