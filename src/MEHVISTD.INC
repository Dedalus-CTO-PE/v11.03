.--------------------------------------------------------------------------
.MEHVISTD.INC
.---------------------------------------------------------------------------
.  Mental Health Visit file
MEHVS001  DIM       8    Admission Number
MEHVS002  DIM       1    Current Visit Status
.                          0 = Pre-admitted
.                          1 = In Hospital
.                          2 = On short term leave
.                          3 = On trial leave
.                          4 = On holiday leave
.                          5 = A. W. O. L.
.                          6 = Discharged
.                          7 = Community Health (MH)(Open Case)
.                          8 = Comm. Health (Closed Case))
MEHVS003  DIM       8    Next legal status review date ccyymmdd
MEHVS004  DIM       30   Therapist
MEHVS005  DIM       35   Address admitted from (line 1)
MEHVS006  DIM       35   Address admitted from (line 2)
MEHVS007  DIM       35   Address admitted from (line 3)
MEHVS008  DIM       35   Address admitted from (line 4)
MEHVS009  DIM       8    Postcode admitted from
MEHVS010  DIM       4    Spare variable for postcode expansion
MEHVS011  DIM       3    Accomodation type (Cat AY)
MEHVS012  DIM       8    Referral Date (ccyymmdd)
MEHVS013  DIM       8    First Contact date (ccyymmdd)
MEHVS014  DIM       8    Reception order date (ccyymmdd)
MEHVS015  FORM      1    Visits Restricted ?
.                          1 = Yes ; 2 = No
MEHVS016  DIM       3    Benefit type (Cat BY)
MEHVS017  DIM       30   Benefit paid to
MEHVS018  FORM      1    Maximised benefit ?
.                          1 = Yes ; 2 = No ; 3 = unknown
MEHVS019  DIM       8    Maximised date (ccyymmdd)
MEHVS020  FORM      1    Supported by a benefit ?
.                          1 = Yes ; 2 = No
MEHVS021  DIM       3    User defined field 1 (Cat V1)
MEHVS022  DIM       3    User defined field 2 (Cat V2)
MEHVS023  DIM       3    User defined field 3 (Cat V3)
MEHVS024  DIM       3    User defined field 4 (Cat V4)
MEHVS025  DIM       3    User defined field 5 (Cat V5)
MEHVS026  DIM       3    Type of Admission  (Cat TA)
MEHVS027  DIM       3    Mental Category    (Cat MH)
MEHVS028  DIM       3    Psychiatric Patient Status (Cat PT)
MEHVS029  DIM       30   Lawyer
MEHVS030  DIM       3    Who Holds the Order (Cat OH)
MEHVS031  DIM       8    Next CJA Review Date (ccyymmdd)
MEHVS032  DIM       8    Expected Date of Reduction (ccyymmdd)
MEHVS033  DIM       8    S.76 Review Date (ccyymmdd)
MEHVS034  DIM       3    Legal Status (Category LS) (mehlegaf)
MEHVS035  DIM       8    Legal Status date (ccyymmdd)(mehlegaf)
MEHVS036  DIM       3    Criminal Justice code (Category CJ)(mehcjaaf)
MEHVS037  DIM       5    Legal Status time (mehlegaf)
MEHVS038  DIM       3    UDF V1-V5 from MHCEMPST parameter
MEHVS039  DIM       3    UDF U1-U0 from PTCNSORP parameter
MEHVS040  DIM       3    UDF W5-W9 from PTCNFPST parameter
MEHVS041  DIM       8    Reception order Time (HH:MM:SS)
MEHVS042  DIM       8    Planned Discharge Date (ccyymmdd)
MEHVS043  DIM       8    Planned Discharge Time (HH:MM:SS)
MEHVS044  DIM       10   Case Manager
MEHVS045  DIM       10   Psych Clinic
MEHVS046  DIM       3    Transport Order (CAT TO)
MEHVS047  DIM       1    Patient Documentation Given?
MEHVS048  DIM       3    Accomodation Type 2 (CAT ay)
MEHVS049  DIM       1    Recieved Under MH Act?
MEHVS050  DIM       3    Clinician Referring Under MH Act
.                        (Role) (CAT rm)
MEHVS051  DIM       8    Referral Time (HH:MM:SS)
MEHVS052  DIM       8    Admit MH Act Date (ccyymmdd)
MEHVS053  DIM       8    Admit MH Act Time (HH:MM:SS)
MEHVS054  DIM       6    External MH Clinic Name
