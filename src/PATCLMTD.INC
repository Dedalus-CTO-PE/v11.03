. * Function      :   CGI Variables for PATWC1FD - patwc1af
. *
. * Mods          :
. *       V10.14.01 04/03/2019 Richa Phogat   TSK 0869551
. *                 Added PTCLM089
. *       V10.09.01 29/11/2016 Jill Parkinson TSK 0822329
. *                 Added PTCLM084-PTCLM088         
. *       V10.05.01 10.09.2014 J.Tan          CAR 274958
. *                 Added Employer code PTCLM083
. *       V10.03.01 10/10/2012 Patrick Adair  CAR 273294
. *                 Added Insurance Company Code for PATWMAFD
. *       V10.01.01 18/01/2011  Ebon Clements    CAR 236087
. *                 Changed PTCLM050 to DIM 20
. *       V9.10.00  01/05/2008  Mike Laming  CAR 153670
. *                 Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTCLM001  DIM       30     * PATWC1FD-WCENAME   EMPLOYER NAME
PTCLM002  DIM       35     * PATWC1FD-WCEADD1   EMPLOYER ADDRESS LINE 1
PTCLM003  DIM       35     * PATWC1FD-WCEADD2   EMPLOYER ADDRESS LINE 2
PTCLM004  DIM       35     * PATWC1FD-WCEADD3   EMPLOYER ADDRESS LINE 3
PTCLM005  DIM       35     * PATWC1FD-WCEADD4   EMPLOYER ADDRESS LINE 4
PTCLM006  DIM       8      * PATWC1FD-WCEPOST   EMPLOYER POSTCODE
PTCLM007  DIM       20     * PATWC1FD-WCETELE   EMPLOYER TELEPHONE
PTCLM008  DIM       8      * PATWC1FD-WCACDAT   DATE OF ACCIDENT (YYMMDD)
PTCLM009  DIM       1      * PATWC1FD-WCACCPT   ACCEPTED BY INSURANCE COMPANY
PTCLM010  DIM       6      * PATWC1FD-WCICODE   INSURANCE COMPANY CODE
PTCLM011  DIM       20     * PATWC1FD-WCCLMNO   INSURANCE CLAIM NUMBER 
PTCLM012  DIM       40     * PATWC1FD-WCCOMN1   COMMENTS
PTCLM013  DIM       40     * PATWC1FD-WCCOMN2   COMMENTS
.
PTCLM014  DIM       20     * PATWVEFD-VCLMNO    CLAIM NUMBER
.
PTCLM015  DIM       20     * PATWMAFD-MREFNO    M.A.B. REFERENCE NUMBER
PTCLM016  DIM       8      * PATWMAFD-MACDAT    DATE OF ACCIDENT (YYMMDD)
PTCLM017  DIM       20     * PATWMAFD-MPOLIC    POLICE STAT. ACCT REPORTED TO
PTCLM018  DIM       36     * PATWMAFD-MCREGO    CAR REGO NUMBERS INVOLVED
PTCLM019  DIM       30     * PATWMAFD-MOTHDET1  OTHER DRIVER DETAILS LINE 1
PTCLM020  DIM       30     * PATWMAFD-MOTHDET2  """     ""      ""     LINE 2"
PTCLM021  DIM       30     * PATWMAFD-MOTHDET3  """     ""      ""     LINE 3"
PTCLM022  DIM       10     * PATWMAFD-MMDTRANS  MODE OF TRANSPORT 
PTCLM023  DIM       1      * PATWMAFD-MDPINDIC  "1= DRIVER   2= PASSENGER"
PTCLM024  DIM       20     * PATWMAFD-MENGAGED  WHILE ENG IN-FREE FORMAT ENTRY
PTCLM025  DIM       30     * PATWMAFD-MPINJURE  PATIENT INJURED WHEN
PTCLM026  DIM       30     * PATWMAFD-MMECHSEV  MECHANISM OF SEVERIST INJURY
PTCLM027  DIM       20     * PATWMAFD-MREGNSEV  REGION OF SEVERIST INJURY
PTCLM028  DIM       30     * PATWMAFD-MSNAME    SOLICITOR NAME
PTCLM029  DIM       12     * PATWMAFD-MSTELE    SOLICITOR TELEPHONE
PTCLM030  DIM       40     * PATWMAFD-MACLOC    ACCIDENT LOCATION
PTCLM031  DIM       1      * PATWMAFD-PTWMTACF  TAC CLAIM FORM COMPLETED ?
PTCLM032  DIM       3      * PATWMAFD-PTWMTYPE  Role in Accident (CAT RA)
.
PTCLM033  DIM       50     * PMSWX1FD-PMWXALOC  Accident Location
PTCLM034  DIM       3      * PMSWX1FD-PMWXCINJ  Cause of Injury (Cat IK)
PTCLM035  DIM       3      * PMSWX1FD-PMWXICOD  Injury Code (Cat IJ)
PTCLM036  DIM       40     * PMSWX1FD-PMWXCNAM  Contact Name
.
PTCLM037  DIM       30     * PMSCTCFD-PMCTSNAM  Solicitor's name
PTCLM038  DIM       35     * PMSCTCFD-PMCTSAD1  Solicitor's address line 1
PTCLM039  DIM       35     * PMSCTCFD-PMCTSAD2  Solicitor's address line 2
PTCLM040  DIM       35     * PMSCTCFD-PMCTSAD3  Solicitor's address line 3
PTCLM041  DIM       35     * PMSCTCFD-PMCTSAD4  Solicitor's address line 4
PTCLM042  DIM       8      * PMSCTCFD-PMCTSPCO  Solicitor's postcode
PTCLM043  DIM       12     * PMSCTCFD-PMCTSPHN  Solicitor's phone number
PTCLM044  DIM       30     * PMSCTCFD-PMCTCONT  Contact Name
PTCLM045  DIM       20     * PMSCTCFD-PMCTREFN  Reference Number
.
PTCLM046  DIM       3      * PMSWX1FD-PMWXACCF  Work Related (Cat IQ)
PTCLM047  DIM       3      * PMSWX1FD-PMWXPLIN  Place injury occurred (Cat IP)
PTCLM048  DIM       3      * PMSWX1FD-PMWXACTI  Activity when injured (Cat IO)
PTCLM049  DIM       8      * PMSWX1FD-PMWXADTE  ACC Decline Date (ccyymmdd)
.
PTCLM050  DIM       20     * PATWVEFD-PTWVAUTH  AUTHORISATION NUMBER
PTCLM051  DIM       8      * PATWVEFD-PTWVDATE  AUTHORISATION DATE
.
PTCLM052  DIM       8      * PMSWX1FD-PMWXATME  Accident Time (hh:mm:ss)
PTCLM053  DIM       3      * PMSWX1FD-PMWXACLC  Accident Location (Cat IM)
PTCLM054  DIM       1      * PMSWX1FD-PMWXAINZ  Accident in NZ Y/N
PTCLM055  DIM       1      * PMSWX1FD-PMWXMOVV  Involve Moving Veh.on Public Rd
PTCLM056  DIM       1      * PMSWX1FD-PMWXSPTI  Sporting Injury Y/N
PTCLM057  DIM       3      * PMSWX1FD-PMWXSPRT  Sport Name (Category IB)
PTCLM058  DIM       1      * PMSWX1FD-PMWXRECI  Recurring Injury Indicator Y/N
PTCLM059  DIM       1      * PMSWX1FD-PMWXTRIC  Treatment Injury Claim Y/N
PTCLM060  DIM       3      * PMSWX1FD-PMWXESTA  Employment Status (Cat IF)
PTCLM061  DIM       8      * PMSWX1FD-PMWXPDDT  Patient Declaration Date
PTCLM062  DIM       20     * PMSWX1FD-PMWXARG1  Authorized Rep.Given Name1
PTCLM063  DIM       20     * PMSWX1FD-PMWXARG2  Authorized Rep.Given Name2
PTCLM064  DIM       25     * PMSWX1FD-PMWXARSN  Authorized Rep.Surname
PTCLM065  DIM       4      * PMSWX1FD-PMWXARTL  Authorized Representative Title
PTCLM066  DIM       10     * PMSWX1FD-PMWXARRP  Authorized Rep. Relation
PTCLM067  DIM       1      * PMSWX1FD-PMWXASST  Assistance is Required Y/N
PTCLM068  DIM       1      * PMSWX1FD-PMWXNEED  Need to call HP Y/N
PTCLM069  DIM       1      * PMSWX1FD-PMWXCONT  Contin. Normal Hours of Work Y/N
PTCLM070  DIM       1      * PMSWX1FD-PMWXALTW  Alternative Work Indicator Y/N
PTCLM071  DIM       3      * PMSWX1FD-PMWXTYPA  Type of Alternative Work(Cat IH)
PTCLM072  DIM       8      * PMSWX1FD-PMWXSALT  Start Date of Alternative Work
PTCLM073  DIM       2      * PMSWX1FD-PMWXHPDA  Hours per day of Alt.Work
PTCLM074  DIM       3      * PMSWX1FD-PMWXUNFD  Unfit for Work For Duration
PTCLM075  DIM       3      * PMSWX1FD-PMWXUNFT  Unfit for Work For Type(Cat UI)
PTCLM076  DIM       8      * PMSWX1FD-PMWXFISD  Full Incapacity Start Date
PTCLM077  DIM       8      * PMSWX1FD-PMWXRNWD  Return to Normal Work Date
PTCLM078  DIM       1      * PMSWX1FD-PMWXCSTA  Claim Status
PTCLM079  DIM       3      * PMSWX1FD-PMWXTWRK  Type of Work (Category IX)
PTCLM080  DIM       50     * PMSWX1FD-PMWXOEST  Other Employment Status
PTCLM081  DIM       10     * PMSWX1FD-PMWXTPRO  HDP Treatment Provider
PTCLM082  DIM       6      * PATWMAFD-PTWMICDE  Insurance Company Code
PTCLM083  DIM       6      * PMSWX1FD-PMWXECOD  Employer Code (pateoraf)
PTCLM084  DIM       1      * PMSWX1FD-PMWXGRAD  Gradual process injury Y/N
PTCLM085  DIM       1      * PMSWX1FD-PMWXAHOS  Admitted to hospital Y/N
PTCLM086  DIM       1      * PMSWX1FD-PMWXVCON  Verbal conssent Y/N     
PTCLM087  DIM       10     * PMSWX1FD-PMWXAPPR  Approving HCP
PTCLM088  DIM       20     * PMSWX1FD-PMWXPORD  Purchase order number    
PTCLM089  DIM       10     * PMSWX1FD-PMWXVHCP  Verbal Consent Gained By HCP
.
