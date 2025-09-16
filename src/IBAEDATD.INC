. *----------------------------------------------------------------------
. * Include Name  :   IBAEDATD.INC
. *
. * Function      :   CGI variables for IBAEDAFD - ibaedaaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.         V9.10.00  16/05/2008  Mike Laming   CAR 152286
.                   Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
IBEDA001  DIM      8       U/R Number                 ibeaurno
IBEDA002  DIM      8       Visit Number               ibeavisn
IBEDA003  DIM      8       Counter                    ibeacntr
IBEDA004  DIM      1       Flag Field 01 (0=No,1=Yes) ibeafl01
IBEDA005  DIM      1       Flag Field 02 (0=No,1=Yes) ibeafl02
IBEDA006  DIM      1       Flag Field 03 (0=No,1=Yes) ibeafl03
IBEDA007  DIM      1       Flag Field 04 (0=No,1=Yes) ibeafl04
IBEDA008  DIM      1       Flag Field 05 (0=No,1=Yes) ibeafl05
IBEDA009  DIM      1       Flag Field 06 (0=No,1=Yes) ibeafl06
IBEDA010  DIM      1       Flag Field 07 (0=No,1=Yes) ibeafl07
IBEDA011  DIM      1       Flag Field 08 (0=No,1=Yes) ibeafl08
IBEDA012  DIM      1       Flag Field 09 (0=No,1=Yes) ibeafl09
IBEDA013  DIM      1       Flag Field 10 (0=No,1=Yes) ibeafl10
IBEDA014  DIM      1       Flag Field 11 (0=No,1=Yes) ibeafl11
IBEDA015  DIM      1       Flag Field 12 (0=No,1=Yes) ibeafl12
IBEDA016  DIM      1       Flag Field 13 (0=No,1=Yes) ibeafl13
IBEDA017  DIM      1       Flag Field 14 (0=No,1=Yes) ibeafl14
IBEDA018  DIM      1       Flag Field 15 (0=No,1=Yes) ibeafl15
IBEDA019  DIM      1       Flag Field 16 (0=No,1=Yes) ibeafl16
IBEDA020  DIM      1       Flag Field 17 (0=No,1=Yes) ibeafl17
IBEDA021  DIM      1       Flag Field 18 (0=No,1=Yes) ibeafl18
IBEDA022  DIM      1       Flag Field 19 (0=No,1=Yes) ibaeal19
IBEDA023  DIM      1       Flag Field 20 (0=No,1=Yes) ibeafl20
IBEDA024  DIM      1       Flag Field 21 (0=No,1=Yes) ibeafl21
IBEDA025  DIM      1       Flag Field 22 (0=No,1=Yes) ibeafl22
IBEDA026  DIM      1       Flag Field 23 (0=No,1=Yes) ibeafl23
IBEDA027  DIM      1       Flag Field 24 (0=No,1=Yes) ibeafl24
IBEDA028  DIM      1       Flag Field 25 (0=No,1=Yes) ibeafl25
IBEDA029  DIM      1       Flag Field 26 (0=No,1=Yes) ibeafl26
IBEDA030  DIM      1       Flag Field 27 (0=No,1=Yes) ibeafl27
IBEDA031  DIM      1       Flag Field 28 (0=No,1=Yes) ibeafl28
IBEDA032  DIM      1       Flag Field 29 (0=No,1=Yes) ibeafl29
IBEDA033  DIM      1       Flag Field 30 (0=No,1=Yes) ibeafl30
IBEDA034  DIM      1       Flag Field 31 (0=No,1=Yes) ibeafl31
IBEDA035  DIM      1       Flag Field 32 (0=No,1=Yes) ibeafl32
IBEDA036  DIM      1       Flag Field 33 (0=No,1=Yes) ibeafl33
IBEDA037  DIM      1       Flag Field 34 (0=No,1=Yes) ibeafl34
IBEDA038  DIM      1       Flag Field 35 (0=No,1=Yes) ibeafl35
IBEDA039  DIM      1       Flag Field 36 (0=No,1=Yes) ibeafl36
IBEDA040  DIM      1       Flag Field 37 (0=No,1=Yes) ibeafl37
IBEDA041  DIM      1       Flag Field 38 (0=No,1=Yes) ibeafl38
IBEDA042  DIM      1       Flag Field 39 (0=No,1=Yes) ibeafl39
IBEDA043  DIM      1       Flag Field 40 (0=No,1=Yes) ibeafl40
IBEDA044  DIM      1       Flag Field 41 (0=No,1=Yes) ibeafl41
IBEDA045  DIM      1       Flag Field 42 (0=No,1=Yes) ibeafl42
IBEDA046  DIM      1       Flag Field 43 (0=No,1=Yes) ibeafl43
IBEDA047  DIM      1       Flag Field 44 (0=No,1=Yes) ibeafl44
IBEDA048  DIM      1       Flag Field 45 (0=No,1=Yes) ibeafl45
IBEDA049  DIM      1       Numeric Code  1 ( 0 to 9 ) ibeacd01
IBEDA050  DIM      1       Numeric Code  2 ( 0 to 9 ) ibeacd02
IBEDA051  DIM      1       Numeric Code  3 ( 0 to 9 ) ibeacd03
IBEDA052  DIM      1       Numeric Code  4 ( 0 to 9 ) ibeacd04
IBEDA053  DIM      1       Numeric Code  5 ( 0 to 9 ) ibeacd05
IBEDA054  DIM      2       Large Num.Code 1 ( 00 to 99 ) ibealc01
IBEDA055  DIM      2       Large Num.Code 2 ( 00 to 99 ) ibealc02
IBEDA056  DIM      2       Large Num.Code 3 ( 00 to 99 ) ibealc03
IBEDA057  DIM      2       Large Num.Code 4 ( 00 to 99 ) ibealc04
IBEDA058  DIM      6       Small Char Fld 01          ibeasd01
IBEDA059  DIM      6       Small Char Fld 02          ibeasd02
IBEDA060  DIM      8       Small Char Fld 03          ibeasd03
IBEDA061  DIM      8       Small Char Fld 04          ibeasd04
IBEDA062  DIM      10      Small Char Fld 05          ibeasd05
IBEDA063  DIM      50      Medium Free Format 01      ibeamd01
IBEDA064  DIM      50      Medium Free Format 02      ibeamd02
IBEDA065  DIM      50      Medium Free Format 03      ibeamd03
IBEDA066  DIM      50      Medium Free Format 04      ibeamd04
IBEDA067  DIM      50      Medium Free Format 05      ibeamd05
IBEDA068  DIM      70      Large Free Format 01       ibeald01
IBEDA069  DIM      70      Large Free Format 02       ibeald02
IBEDA070  DIM      70      Large Free Format 03       ibeald03
IBEDA071  DIM      70      Large Free Format 04       ibeald04
IBEDA072  DIM      70      Large Free Format 05       ibeald05
IBEDA073  DIM      70      Large Free Format 06       ibeald06
IBEDA074  DIM      70      Large Free Format 07       ibeald07
IBEDA075  DIM      70      Large Free Format 08       ibeald08
IBEDA076  DIM      70      Large Free Format 09       ibeald09
IBEDA077  DIM      70      Large Free Format 10       ibeald10
IBEDA078  DIM      200     XLarge Free Format 01      ibeaxl01
IBEDA079  DIM      200     XLarge Free Format 02      ibeaxl02
IBEDA080  DIM      200     XLarge Free Format 03      ibeaxl03
IBEDA081  DIM      200     XLarge Free Format 04      ibeaxl04
IBEDA082  DIM      200     XLarge Free Format 05      ibeaxl05
IBEDA083  DIM      200     XLarge Free Format 06      ibeaxl06
IBEDA084  DIM      200     XLarge Free Format 07      ibeaxl07
IBEDA085  DIM      200     XLarge Free Format 08      ibeaxl08
IBEDA086  DIM      8       Date Record Created (CCYYMMDD) ibeacdat
IBEDA087  DIM      8       Time Record Created (HH:MM:SS) ibeactim
IBEDA088  DIM      10      WEB User ID Created (websecaf) ibeacuid
IBEDA089  DIM      8       Date Record Updated (CCYYMMDD) ibeaudat
IBEDA090  DIM      8       Time Record Updated (HH:MM:SS) ibeautim
IBEDA091  DIM      10      WEB User ID Updated (websecaf) ibeauuid
IBEDA092  DIM      27      Spare Variable             ibeaspar
.
.
DIM20A    DIM       20
DIM50A    DIM       50
DIM70A    DIM       70
DIM200A   DIM       200
EDAFLAG   DIM       1
EDAFLG2   DIM       2
PLC001    INIT      "Mainstream"
PLC002    INIT      "Alternative"
PLC003    INIT      "Distance"
ENG001    INIT      "Very High"
ENG002    INIT      "High"
ENG003    INIT      "Average"
ENG004    INIT      "Some Engagement"
ENG005    INIT      "Little Engagement"
ENG006    INIT      "Special provision required"
YEAR01    INIT      "Prep"
YEAR02    INIT      "Year 1"
YEAR03    INIT      "Year 2"
YEAR04    INIT      "Year 3"
YEAR05    INIT      "Year 4"
YEAR06    INIT      "Year 5"
YEAR07    INIT      "Year 6"
YEAR08    INIT      "Year 7"
YEAR09    INIT      "Year 8"
YEAR10    INIT      "Year 9"
YEAR11    INIT      "Year 10"
YEAR12    INIT      "Year 11"
YEAR13    INIT      "Year 12"
YEAR14    INIT      "Uni    "
GEN001    INIT      "Excellent"
GEN002    INIT      "Very Good"
GEN003    INIT      "Good"
GEN004    INIT      "Average"
GEN005    INIT      "Below Average"
GEN006    INIT      "Some Engagement"
GEN007    INIT      "Not Motivated"
ATT001    INIT      "High"
ATT002    INIT      "Medium"
ATT003    INIT      "Low"
ATT004    INIT      "Refusal"
TEST01    INIT      "Test 1"
TEST03    INIT      "Test 2"
TEST02    INIT      "Test 3"
