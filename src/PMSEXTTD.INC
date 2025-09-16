 *----------------------------------------------------------------------
. * Include Name  :   PMSEXTTD.INC
. *
. * Function      :   CGI variables for PMSEXTFD - pmsextaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.04.01  26/02/2013  J.Tan         CAR 275810
.             Added Defence Approval Number and PMKeys Number
.  V10.02.01  18/05/2011  J.Tan         CAR 239592
.             Added Free format address
.  V10.01.00  12/01/2011  Ebon Clements CAR 236087
.             Created include
. *----------------------------------------------------------------------
.Name     Type      Length Description
.----     ----      ------ -----------
PMEXT001  DIM       8      Visit Number
PMEXT002  DIM       3      Claim Code (Cat CL)
PMEXT003  DIM       30     Employer Name
PMEXT004  DIM       35     Employer Address Line 1
PMEXT005  DIM       35     Employer Address Line 2
PMEXT006  DIM       35     Employer Address Line 3
PMEXT007  DIM       35     Employer Address Line 4
PMEXT008  DIM       8      Employer Post Code
PMEXT009  DIM       20     Employer Telephone
PMEXT010  DIM       8      Date of Accident (CCYYMMDD)
PMEXT011  DIM       1      Accepted by Insurance Company
PMEXT012  DIM       6      Insurance Company Code
PMEXT013  DIM       20     Insurance Claim Number
PMEXT014  DIM       40     Insurance Contact Name
PMEXT015  DIM       40     Comment 1
PMEXT016  DIM       40     Comment 2
PMEXT017  DIM       8      U/R
PMEXT018  DIM       8      Visit Date (CCYYMMDD)
PMEXT019  DIM       1      Off Duty Injury
PMEXT020  DIM       3      Service (Cat Ve)
PMEXT021  DIM       50     Rank
PMEXT022  DIM       20     Service Number
PMEXT023  DIM       50     Barracks / Bases
PMEXT024  DIM       3      Millitary Compensation (Cat Vf)
PMEXT025  DIM       50     Unit
PMEXT026  DIM       80     Millitary Comments
PMEXT027  DIM       20     Social Security Number
PMEXT028  DIM       3      Country (Cat C)
PMEXT029  DIM       20     Contact Telephone
PMEXT030  DIM       20     O/S Membership (Health Fund)
PMEXT031  DIM       8      Insurance Expiry Date (CCYYMMDD)
PMEXT032  DIM       1      Send Bill to Local Address
PMEXT033  DIM       1      Travel Insurance
PMEXT034  DIM       20     Travel Insurance Policy Number
PMEXT035  DIM       8      Policy Number Expiry Date(CCYYMMDD)
PMEXT036  DIM       50     Ships Name
PMEXT037  DIM       50     Shipping Agent Name
PMEXT038  DIM       50     Contact Name
PMEXT039  DIM       8      User Defined Date 1 (CCYYMMDD)
PMEXT040  DIM       8      User Defined Date 1 (CCYYMMDD)
PMEXT041  DIM       8      User Defined Date 3 (CCYYMMDD)
PMEXT042  DIM       8      User Defined Date 4 (CCYYMMDD)
PMEXT043  DIM       8      User Defined Date 5 (CCYYMMDD)
PMEXT044  DIM       8      User Defined Time 1 (hh:mm:ss)
PMEXT045  DIM       8      User Defined Time 2 (hh:mm:ss)
PMEXT046  DIM       8      User Defined Time 3 (hh:mm:ss)
PMEXT047  DIM       8      User Defined Time 4 (hh:mm:ss)
PMEXT048  DIM       8      User Defined time 5 (hh:mm:ss)
PMEXT049  DIM       1      User Defined Y/N 1
PMEXT050  DIM       1      User Defined Y/N 2
PMEXT051  DIM       1      User Defined Y/N 3
PMEXT052  DIM       1      User Defined Y/N 4
PMEXT053  DIM       1      User Defined Y/N 5
PMEXT054  DIM       3      User Defined Cat 1 (Cat Vg)
PMEXT055  DIM       3      User Defined Cat 2 (Cat Vh)
PMEXT056  DIM       3      User Defined Cat 3 (Cat Vi)
PMEXT057  DIM       3      User Defined Cat 4 (Cat Vj)
PMEXT058  DIM       3      User Defined Cat 5 (Cat Vk)
PMEXT059  DIM       50     User Defined Comment 1
PMEXT060  DIM       50     User Defined Comment 2
PMEXT061  DIM       50     User Defined Comment 3
PMEXT062  DIM       50     User Defined Comment 4
PMEXT063  DIM       50     User Defined Comment 5
PMEXT064  DIM       30     Solicitor Name
PMEXT065  DIM       35     Solicitor Address Line 1
PMEXT066  DIM       35     Solicitor Address Line 2
PMEXT067  DIM       35     Solicitor Address Line 3
PMEXT068  DIM       35     Solicitor Address Line 4
PMEXT069  DIM       8      Solicitor Post Code
PMEXT070  DIM       20     Solicitor Telephone
PMEXT071  DIM       40     Solicitor Contact Name
PMEXT072  DIM       3      Visa Type (Cat vt)
PMEXT073  DIM       8      Visa Expiry Date (CCYYMMDD)
PMEXT074  DIM       20     Passport Number
PMEXT075  DIM       3      Passport Country (Cat C)
PMEXT076  DIM       3      Overseas Visitor Status (Cat Vl)
PMEXT077  DIM       3      Barracks / Bases Code (Cat ba)
PMEXT078  DIM       30     Employer Contact Name
PMEXT079  DIM       20     Employer Contact Phone
PMEXT080  DIM       35     Free Format Address Line 1
PMEXT081  DIM       35     Free Format Address Line 2
PMEXT082  DIM       35     Free Format Address Line 3
PMEXT083  DIM       35     Free Format Address Line 4
PMEXT084  DIM       8      Free Format Postcode
PMEXT085  DIM       50     Free Format Contact Name
PMEXT086  DIM       20     Free Format Contact Phone Number
PMEXT087  DIM       3      Cause of Injury (Cat IK)
PMEXT088  DIM       3      Injury Code (Cat IJ)
PMEXT089  DIM       3      Work Related (Cat IQ)
PMEXT090  DIM       3      Place injury occured (Cat IP)
PMEXT091  DIM       3      Activity when injured (Cat IO)
PMEXT092  DIM       8      ACC Decline Date (ccyymmdd)
PMEXT093  DIM       8      Accident Time (hh:mm:ss)
PMEXT094  DIM       3      Accident Location (Cat IM)
PMEXT095  DIM       50     Accident Location
PMEXT096  DIM       1      Accident in NZ Y/N (0=No,1=Yes)
PMEXT097  DIM       1      Involves Moving Vehicle on Pub.Road
PMEXT098  DIM       1      Sporting Injury Y/N
PMEXT099  DIM       3      Sport Name (Cat IB)
PMEXT100  DIM       1      Recurring Injury indicator (
PMEXT101  DIM       1      Treatment Injury Claim Y/N
PMEXT102  DIM       3      Employment Status (Cat IF)
PMEXT103  DIM       8      Patient Declaration Dat
PMEXT104  DIM       40     Authorized Representative Giv.Name1
PMEXT105  DIM       40     Authorized Representative Giv.Name2
PMEXT106  DIM       40     Authorized Representative Surname
PMEXT107  DIM       4      Authorized Representative Title
PMEXT108  DIM       10     Authorized Representative Relation
PMEXT109  DIM       1      Assitence is required Y/N 0=No,1=Ye
PMEXT110  DIM       1      Need to call HP Y/N 0=No,1=Yes
PMEXT111  DIM       1      Continue Normal Hours of Work Y/N
PMEXT112  DIM       1      Alternative Work Indicator Y/N
PMEXT113  DIM       3      Type of Alternative Work (Cat IH)
PMEXT114  DIM       8      Start Date of Alternative Work
PMEXT115  DIM       2      Hours per day of Alternative Work
PMEXT116  DIM       3      Unfit for Work For Duration
PMEXT117  DIM       3      Unfit for Work for Type(Cat UI)
PMEXT118  DIM       8      Full Incapacity Start Date
PMEXT119  DIM       8      Return to Normal Work Date
PMEXT120  DIM       1      Claim Status
PMEXT121  DIM       3      Type of Work (Cat IX)
PMEXT122  DIM       50     Other Employment Status
PMEXT123  DIM       10     HCP Treatment Provider
PMEXT124  DIM       20     Authorisation Number
PMEXT125  DIM       8      Authorisation Date
PMEXT126  DIM       20     M.A.B. Reference Number
PMEXT127  DIM       20     Police Station Accident reported to
PMEXT128  DIM       36     Car Rego Number involved
PMEXT129  DIM       1      1=Driver 2=Passenger
PMEXT130  DIM       20     While Eng.in-free format entry
PMEXT131  DIM       30     Patient Injured when
PMEXT132  DIM       10     Mode of Transport
PMEXT133  DIM       30     Mechanism of severist injury
PMEXT134  DIM       20     Region of severist injury
PMEXT135  DIM       30     Other Driver details line 1
PMEXT136  DIM       30     Other Driver details line 2
PMEXT137  DIM       30     Other Driver details line 3
PMEXT138  DIM       1      TAC Clm Form completed/Settle MVIT?
PMEXT139  DIM       3      Role in Accident (Cat RA)
PMEXT140  DIM       3      Alternate Election (Cat CL)
PMEXT141  DIM       1      Police Office 1=Yes 0=No
PMEXT142  DIM       20     ID Number
PMEXT143  DIM       6      Name of School
PMEXT144  DIM       20     Defence Approval Number (DAN)
PMEXT145  DIM       20     PMKeys Number



