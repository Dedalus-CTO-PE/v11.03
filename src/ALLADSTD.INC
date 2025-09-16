. *----------------------------------------------------------------------
. * Include Name  :   ALLADSTD.INC
. *
. * Function      :   CGI Variables for ALLADSFD - alladsaf
. *
. * Mods          :   V9.09.01  06/08/2007  Davin  CAR 135538
. *                   Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
ALADS001  DIM       8        Referral Number
ALADS002  DIM       8        Assessment Number
ALADS003  DIM       10       Assessment Type
ALADS004  DIM       1        Active (0=No[default],1=yes)
ALADS005  DIM       3        Department (Cat CG - Indc3=A)
ALADS006  DIM       8        Collection Date
ALADS007  DIM       8        Reminder Date (coldate+remind days)
ALADS008  DIM       1        Assessment Completed (0=No,1=yes)
ALADS009  DIM       3        Outcome Code (Cat OZ)
ALADS010  DIM       10       HCP Performing Assessment 1
ALADS011  DIM       10       HCP 2
ALADS012  DIM       10       HCP 3
ALADS013  DIM       10       HCP 4
ALADS014  DIM       10       HCP 5
ALADS015  DIM       10       HCP 6
ALADS016  DIM       10       HCP 7
ALADS017  DIM       10       HCP 8
ALADS018  DIM       10       HCP 9
ALADS019  DIM       3        User Defined Code 1 (Cat ALDPCT01)
ALADS020  DIM       3        User Defined Code 2 (Cat ALDPCT02)
ALADS021  DIM       3        User Defined Code 3 (Cat ALDPCT03)
ALADS022  DIM       3        User Defined Code 4 (Cat ALDPCT04)
ALADS023  DIM       3        User Defined Code 5 (Cat ALDPCT05)
ALADS024  DIM       3        User Defined Code 6 (Cat ALDPCT06)
ALADS025  DIM       3        User Defined Code 7 (Cat ALDPCT07)
ALADS026  DIM       3        User Defined Code 8 (Cat ALDPCT08)
ALADS027  DIM       3        User Defined Code 9 (Cat ALDPCT09)
ALADS028  DIM       3        User Defined Code 10 (Cat ALDPCT10)
ALADS029  DIM       3        User Defined Code 11 (Cat ALDPCT11)
ALADS030  DIM       3        User Defined Code 12 (Cat ALDPCT12)
ALADS031  DIM       3        User Defined Code 13 (Cat ALDPCT13)
ALADS032  DIM       3        User Defined Code 14 (Cat ALDPCT14)
ALADS033  DIM       3        User Defined Code 15 (Cat ALDPCT15)
ALADS034  DIM       3        User Defined Code 16 (Cat ALDPCT16)
ALADS035  DIM       3        User Defined Code 17 (Cat ALDPCT17)
ALADS036  DIM       3        User Defined Code 18 (Cat ALDPCT18)
ALADS037  DIM       3        User Defined Code 19 (Cat ALDPCT19)
ALADS038  DIM       3        User Defined Code 20 (Cat ALDPCT20)
ALADS039  DIM       3        User Defined Code 21 (Cat ALDPCT21)
ALADS040  DIM       3        User Defined Code 22 (Cat ALDPCT22)
ALADS041  DIM       3        User Defined Code 23 (Cat ALDPCT23)
ALADS042  DIM       3        User Defined Code 24 (Cat ALDPCT24)
ALADS043  DIM       3        User Defined Code 25 (Cat ALDPCT25)
ALADS044  DIM       3        User Defined Code 26 (Cat ALDPCT26)
ALADS045  DIM       5        User Defined Numeric 1
ALADS046  DIM       5        User Defined Numeric 2
ALADS047  DIM       5        User Defined Numeric 3
ALADS048  DIM       5        User Defined Numeric 4
ALADS049  DIM       5        User Defined Numeric 5
ALADS050  DIM       5        User Defined Numeric 6
ALADS051  DIM       5        User Defined Numeric 7
ALADS052  DIM       5        User Defined Numeric 8
ALADS053  DIM       5        User Defined Numeric 9
ALADS054  DIM       5        User Defined Numeric 10
ALADS055  DIM       5        User Defined Numeric 11
ALADS056  DIM       5        User Defined Numeric 12
ALADS057  DIM       5        User Defined Numeric 13
ALADS058  DIM       5        User Defined Numeric 14
ALADS059  DIM       5        User Defined Numeric 15
ALADS060  DIM       8        User Defined Date 1 (ccyymmdd)
ALADS061  DIM       8        User Defined Date 2 (ccyymmdd)
ALADS062  DIM       8        User Defined Date 3 (ccyymmdd)
ALADS063  DIM       8        User Defined Date 4 (ccyymmdd)
ALADS064  DIM       8        User Defined Date 5 (ccyymmdd)
ALADS065  DIM       8        User Defined Date 6 (ccyymmdd)
ALADS066  DIM       8        User Defined Date 7 (ccyymmdd)
ALADS067  DIM       8        User Defined Date 8 (ccyymmdd)
ALADS068  DIM       8        User Defined Date 9 (ccyymmdd)
ALADS069  DIM       8        User Defined Date 10 (ccyymmdd)
ALADS070  DIM       8        User Defined Time 1 (hh:mm:ss)
ALADS071  DIM       8        User Defined Time 2 (hh:mm:ss)
ALADS072  DIM       8        User Defined Time 3 (hh:mm:ss)
ALADS073  DIM       8        User Defined Time 4 (hh:mm:ss)
ALADS074  DIM       8        User Defined Time 5 (hh:mm:ss)
ALADS075  DIM       8        User Defined Time 6 (hh:mm:ss)
ALADS076  DIM       8        User Defined Time 7 (hh:mm:ss)
ALADS077  DIM       8        User Defined Time 8 (hh:mm:ss)
ALADS078  DIM       8        User Defined Time 9 (hh:mm:ss)
ALADS079  DIM       8        User Defined Time 10 (hh:mm:ss)
ALADS080  DIM       3        Three digit number 1
ALADS081  DIM       3        Three digit number 2
ALADS082  DIM       3        Three digit number 3
ALADS083  DIM       3        Three digit number 4
ALADS084  DIM       3        Three digit number 5
ALADS085  DIM       3        Three digit number 6
ALADS086  DIM       3        Three digit number 7
ALADS087  DIM       3        Three digit number 8
ALADS088  DIM       3        Three digit number 9
ALADS089  DIM       3        Three digit number 10
ALADS090  DIM       3        Three digit number 11
ALADS091  DIM       3        Three digit number 12
ALADS092  DIM       3        Three digit number 13
ALADS093  DIM       3        Three digit number 14
ALADS094  DIM       3        Three digit number 15
ALADS095  DIM       3        Three digit number 16
ALADS096  DIM       3        Three digit number 17
ALADS097  DIM       3        Three digit number 18
ALADS098  DIM       3        Three digit number 19
ALADS099  DIM       3        Three digit number 20
ALADS100  DIM       3        Three digit number 21
ALADS101  DIM       3        Three digit number 22
ALADS102  DIM       3        Three digit number 23
ALADS103  DIM       3        Three digit number 24
ALADS104  DIM       3        Three digit number 25
ALADS105  DIM       3        Three digit number 26
ALADS106  DIM       3        Three digit number 27
ALADS107  DIM       3        Three digit number 28
ALADS108  DIM       3        Three digit number 29
ALADS109  DIM       3        Three digit number 30
ALADS110  DIM       50       User Defined Free Text 1
ALADS111  DIM       50       User Defined Free Text 2
ALADS112  DIM       50       User Defined Free Text 3
ALADS113  DIM       50       User Defined Free Text 4
ALADS114  DIM       50       User Defined Free Text 5
ALADS115  DIM       50       User Defined Free Text 6
ALADS116  DIM       50       User Defined Free Text 7
ALADS117  DIM       50       User Defined Free Text 8
ALADS118  DIM       50       User Defined Free Text 9
ALADS119  DIM       50       User Defined Free Text 10
ALADS120  DIM       50       User Defined Free Text 11
ALADS121  DIM       50       User Defined Free Text 12
ALADS122  DIM       50       User Defined Free Text 13
ALADS123  DIM       50       User Defined Free Text 14
ALADS124  DIM       50       User Defined Free Text 15
ALADS125  DIM       50       User Defined Free Text 16
ALADS126  DIM       50       User Defined Free Text 17
ALADS127  DIM       50       User Defined Free Text 18
ALADS128  DIM       50       User Defined Free Text 19
ALADS129  DIM       50       User Defined Free Text 20
ALADS130  DIM       50       User Defined Free Text 21
ALADS131  DIM       50       User Defined Free Text 22
ALADS132  DIM       50       User Defined Free Text 23
ALADS133  DIM       50       User Defined Free Text 24
ALADS134  DIM       50       User Defined Free Text 25
ALADS135  DIM       50       User Defined Free Text 26
ALADS136  DIM       50       User Defined Free Text 27
ALADS137  DIM       50       User Defined Free Text 28
ALADS138  DIM       50       User Defined Free Text 29
ALADS139  DIM       50       User Defined Free Text 30
ALADS140  DIM       1        User Defined Flag 1
ALADS141  DIM       1        User Defined Flag 2
ALADS142  DIM       1        User Defined Flag 3
ALADS143  DIM       1        User Defined Flag 4
ALADS144  DIM       1        User Defined Flag 5
ALADS145  DIM       1        User Defined Flag 6
ALADS146  DIM       1        User Defined Flag 7
ALADS147  DIM       1        User Defined Flag 8
ALADS148  DIM       1        User Defined Flag 9
ALADS149  DIM       1        User Defined Flag 10
ALADS150  DIM       1        User Defined Flag 11
ALADS151  DIM       1        User Defined Flag 12
ALADS152  DIM       1        User Defined Flag 13
ALADS153  DIM       1        User Defined Flag 14
ALADS154  DIM       1        User Defined Flag 15
ALADS155  DIM       1        User Defined Flag 16
ALADS156  DIM       1        User Defined Flag 17
ALADS157  DIM       1        User Defined Flag 18
ALADS158  DIM       1        User Defined Flag 19
ALADS159  DIM       1        User Defined Flag 20
.
USERDFLG  DIM       1
USERFTXT  DIM       50
USER3DNM  DIM       3
USERDFDT  DIM       8
USERDFTM  DIM       8
USERDFNM  DIM       5
