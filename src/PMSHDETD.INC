. *----------------------------------------------------------------------
. * Include Name  :   PMSHDETD.INC
. *
. * Function      :   CGI variables for PMSHDEFD - pmshdeaf.dat
. *----------------------------------------------------------------------
. *
. * Modifications  :
. * V10.14.02 10/07/2019 Peter Vela TSK 0857392
. *           Added Ventilation, Unknown
. * V10.14.01 02/07/2019 Peter Vela TSK 0857392
. *           Added Age 095 - 099
. *           Added MDC Mental Diseases & Disorders, Alcohol/Drug Use&Induced 
. *           Organic Mental Disorder
. * V10.14.00 15/04/2019 Peter Vela TSK 0857392
. *           Created Include
. *----------------------------------------------------------------------
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHDE001  DIM       6      Contract ID
PMHDE002  DIM       3      HAC Group 01=16 Cat Ha
PMHDE003  DIM       3      HAC Complexity Type
.                                         001 - Charlson
.                                         002 - Age
.                                         003 - MDC
PMHDE004  DIM       3      HAC Complexity Field
.
.         001 - Charlson - 009 - Charlson Score 1
.         001 - Charlson - 010 - Charlson Score 2
.         001 - Charlson - 011 - Charlson Score 3
.         001 - Charlson - 012 - Charlson Score 4
.         001 - Charlson - 013 - Charlson Score 5
.         001 - Charlson - 014 - Charlson Score 6
.         001 - Charlson - 015 - Charlson Score 7
.         001 - Charlson - 016 - Charlson Score 8
.         001 - Charlson - 017 - Charlson Score 9
.         001 - Charlson - 018 - Charlson Score 10
.         001 - Charlson - 019 - Charlson Score 11
.         001 - Charlson - 020 - Charlson Score 12
.         001 - Charlson - 021 - Charlson Score 13
.         001 - Charlson - 022 - Charlson Score 14
.         001 - Charlson - 023 - Charlson Score 15
.         001 - Charlson - 024 - Charlson Score 16
.
.         002 - Age - 025 - Age Range 1 (000-004)
.         002 - Age - 026 - Age Range 2 (005-009)
.         002 - Age - 027 - Age Range 3 (010-014)
.         002 - Age - 028 - Age Range 4 (015-019)
.         002 - Age - 029 - Age Range 5 (020-024)
.         002 - Age - 030 - Age Range 6 (025-029)
.         002 - Age - 031 - Age Range 7 (030-034)
.         002 - Age - 032 - Age Range 8 (035-039)
.         002 - Age - 033 - Age Range 9 (040-044)
.         002 - Age - 034 - Age Range 10 (045-049)
.         002 - Age - 035 - Age Range 11 (050-054)
.         002 - Age - 036 - Age Range 12 (055-059)
.         002 - Age - 037 - Age Range 13 (060-064)
.         002 - Age - 038 - Age Range 14 (065-069)
.         002 - Age - 039 - Age Range 14 (070-074)
.         002 - Age - 040 - Age Range 15 (075-079)
.         002 - Age - 041 - Age Range 16 (080-084)
.         002 - Age - 042 - Age Range 17 (085-089)
.         002 - Age - 043 - Age Range 18 (090-095)
.         002 - Age - 044 - Age Range 19 (095-099)
.
.         003 - MDC - 069 - MDC         (Ventilation)
.         003 - MDC - 045 - MDC 020-103 (Nervous System)
.         003 - MDC - 046 - MDC 113-125 (Eye)
.         003 - MDC - 047 - MDC 129-159 (Ear,Nose,Mouth & Throat)
.         003 - MDC - 048 - MDC 163-208 (Respiratory System)
.         003 - MDC - 049 - MDC 215-316 (Circulatory System)
.         003 - MDC - 050 - MDC 326-395 (Digestive System)
.         003 - MDC - 051 - MDC 405-446 (Hepatobiliary System & Pancreas)
.         003 - MDC - 052 - MDC 553-566 (Musculoskeletal System & Connective
.                                        Tissue)
.         003 - MDC - 053 - MDC 573-607 (Skin,Subcutaneous Tissue & Breast)
.         003 - MDC - 054 - MDC 614-645 (Endocrine,Nutritional & Metabolic)
.         003 - MDC - 055 - MDC 652-700 (Kidney & Urinary Tract)
.         003 - MDC - 056 - MDC 707-730 (Male Reproductive System)
.         003 - MDC - 057 - MDC 734-761 (Female Reproductive System)
.         003 - MDC - 058 - MDC 765-782 (Pregnancy,Childbirt & the Puerperium)
.         003 - MDC - 059 - MDC 789-785 (Newborns & Other Neonates)
.         003 - MDC - 060 - MDC 799-816 (Blood,Blood Forming Organs,
.                                        Immunological Disorder)
.         003 - MDC - 061 - MDC 820-849 (Neoplastic Disorders)
.         003 - MDC - 062 - MDC 853-872 (Infectious & Parasitic Disease)
.         003 - MDC - 067 - MDC         (Mental Diseases & Disorders)
.         003 - MDC - 068 - MDC         (Alcohol/Drug Use&Induced Organic
.                                        Mental Disorder)

.         003 - MDC - 063 - MDC 901-923 (Injuries,Poisonings & Toxic Effects
.                                        of Drugs)
.         003 - MDC - 064 - MDC 927-935 (Burns)
.         003 - MDC - 065 - MDC 939-951 (Factors Influencing Health Status &
.                                        Other Contacts with Health Services)
.         003 - MDC - 070 - MDC          Unknown
.
.         001 - Charlson - 066 - Charlson Score 0
.
.
PMHDE005  FORM      10.4   Complex Val 001 - Charlson - 009 - Charlson Score 1
PMHDE006  DIM       8      Date record created
PMHDE007  DIM       8      Time record created
PMHDE008  DIM       10     Record created by
PMHDE009  DIM       8      Date record updated
PMHDE010  DIM       8      Time record updated
PMHDE011  DIM       10     Record updated by
.
PMHDE012  FORM      10.4   Complex Val 001 - Charlson - 010 - Charlson Score 2
PMHDE013  FORM      10.4   Complex Val 001 - Charlson - 011 - Charlson Score 3
PMHDE014  FORM      10.4   Complex Val 001 - Charlson - 012 - Charlson Score 4
PMHDE015  FORM      10.4   Complex Val 001 - Charlson - 013 - Charlson Score 5
PMHDE016  FORM      10.4   Complex Val 001 - Charlson - 014 - Charlson Score 6
PMHDE017  FORM      10.4   Complex Val 001 - Charlson - 015 - Charlson Score 7
PMHDE018  FORM      10.4   Complex Val 001 - Charlson - 016 - Charlson Score 8
PMHDE019  FORM      10.4   Complex Val 001 - Charlson - 017 - Charlson Score 9
PMHDE020  FORM      10.4   Complex Val 001 - Charlson - 018 - Charlson Score 10
PMHDE021  FORM      10.4   Complex Val 001 - Charlson - 019 - Charlson Score 11
PMHDE022  FORM      10.4   Complex Val 001 - Charlson - 020 - Charlson Score 12
PMHDE023  FORM      10.4   Complex Val 001 - Charlson - 021 - Charlson Score 13
PMHDE024  FORM      10.4   Complex Val 001 - Charlson - 022 - Charlson Score 14
PMHDE025  FORM      10.4   Complex Val 001 - Charlson - 023 - Charlson Score 15
PMHDE026  FORM      10.4   Complex Val 001 - Charlson - 024 - Charlson Score 16
PMHDE027  FORM      10.4   Complex Val 002 - Age - 025 - Age Range 1 (000-004)
PMHDE028  FORM      10.4   Complex Val 002 - Age - 026 - Age Range 2 (005-009)
PMHDE029  FORM      10.4   Complex Val 002 - Age - 027 - Age Range 3 (010-014)
PMHDE030  FORM      10.4   Complex Val 002 - Age - 028 - Age Range 4 (015-019)
PMHDE031  FORM      10.4   Complex Val 002 - Age - 029 - Age Range 5 (020-024)
PMHDE032  FORM      10.4   Complex Val 002 - Age - 030 - Age Range 6 (025-029)
PMHDE033  FORM      10.4   Complex Val 002 - Age - 031 - Age Range 7 (030-034)
PMHDE034  FORM      10.4   Complex Val 002 - Age - 032 - Age Range 8 (035-039)
PMHDE035  FORM      10.4   Complex Val 002 - Age - 033 - Age Range 9 (040-044)
PMHDE036  FORM      10.4   Complex Val 002 - Age - 034 - Age Range 10 (045-049)
PMHDE037  FORM      10.4   Complex Val 002 - Age - 035 - Age Range 11 (050-054)
PMHDE038  FORM      10.4   Complex Val 002 - Age - 036 - Age Range 12 (055-059)
PMHDE039  FORM      10.4   Complex Val 002 - Age - 037 - Age Range 13 (060-064)
PMHDE040  FORM      10.4   Complex Val 002 - Age - 038 - Age Range 14 (065-069)
PMHDE041  FORM      10.4   Complex Val 002 - Age - 039 - Age Range 14 (070-074)
PMHDE042  FORM      10.4   Complex Val 002 - Age - 040 - Age Range 15 (075-079)
PMHDE043  FORM      10.4   Complex Val 002 - Age - 041 - Age Range 16 (080-084)
PMHDE044  FORM      10.4   Complex Val 002 - Age - 042 - Age Range 17 (085-089)
PMHDE045  FORM      10.4   Complex Val 002 - Age - 043 - Age Range 18 (090-095)
PMHDE069  FORM      10.4   Complex Val 002 - Age - 044 - Age Range 19 (095-099)
.
PMHDE046  FORM      10.4   Complex Val 003 - MDC - 045 - MDC 020-103 
.                          (Nervous System)
PMHDE047  FORM      10.4   Complex Val 003 - MDC - 046 - MDC 113-125 (Eye)
PMHDE048  FORM      10.4   Complex Val 003 - MDC - 047 - MDC 129-159 
.                          (Ear,Nose,Mouth & Throat)
PMHDE049  FORM      10.4   Complex Val 003 - MDC - 048 - MDC 163-208 
.                          (Respiratory System)
PMHDE050  FORM      10.4   Complex Val 003 - MDC - 049 - MDC 215-316 
.                          (Circulatory System)
PMHDE051  FORM      10.4   Complex Val 003 - MDC - 050 - MDC 326-395 
.                          (Digestive System)
PMHDE052  FORM      10.4   Complex Val 003 - MDC - 051 - MDC 405-446 
.                          (Hepatobiliary System & Pancreas)
PMHDE053  FORM      10.4   Complex Val 003 - MDC - 052 - MDC 553-566 
.                          (Musculoskeletal System & Connective Tissue)
PMHDE054  FORM      10.4   Complex Val 003 - MDC - 053 - MDC 573-607 
.                          (Skin,Subcutaneous Tissue & Breast)
PMHDE055  FORM      10.4   Complex Val 003 - MDC - 054 - MDC 614-645 
.                          (Endocrine,Nutritional & Metabolic) 
PMHDE056  FORM      10.4   Complex Val 003 - MDC - 055 - MDC 652-700 
.                          (Kidney & Urinary Tract)
PMHDE057  FORM      10.4   Complex Val 003 - MDC - 056 - MDC 707-730 
.                          (Male Reproductive System)
PMHDE058  FORM      10.4   Complex Val 003 - MDC - 057 - MDC 734-761 
.                          (Female Reproductive System)
PMHDE059  FORM      10.4   Complex Val 003 - MDC - 058 - MDC 765-782 
.                          (Pregnancy,Childbirt & the Puerperium)
PMHDE060  FORM      10.4   Complex Val 003 - MDC - 059 - MDC 789-785 
.                          (Newborns & Other Neonates)
PMHDE061  FORM      10.4   Complex Val 003 - MDC - 060 - MDC 799-816 
.                          (Blood,Blood Forming Organs, Immunological Disorder)
PMHDE062  FORM      10.4   Complex Val 003 - MDC - 061 - MDC 820-849 
.                          (Neoplastic Disorders)
PMHDE063  FORM      10.4   Complex Val 003 - MDC - 062 - MDC 853-872 
.                          (Infectious & Parasitic Disease)
PMHDE064  FORM      10.4   Complex Val 003 - MDC - 063 - MDC 901-923 
.                          (Injuries,Poisonings & Toxic Effects of Drugs)
PMHDE065  FORM      10.4   Complex Val 003 - MDC - 064 - MDC 927-935 (Burns)
PMHDE066  FORM      10.4   Complex Val 003 - MDC - 065 - MDC 939-951 
.                          (Factors Influencing Health Status & 
.                           Other Contacts with Health Services)
.
PMHDE067  FORM      10.4   Complex Val 001 - Charlson - 066 - Charlson Score 0
.
PMHDE068  FORM      10.4   Complex Val 003 - MDC - 067 - Mental Diseases & 
.                          Disorders
PMHDE070  FORM      10.4   Complex Val 003 - MDC - 068 - Alcohol/Drug Use&
.                          Induced Organic Mental Disorder
PMHDE071  FORM      10.4   Complex Val 003 - MDC - 069 - Ventilation
PMHDE072  FORM      10.4   Complex Val 003 - MDC - 070 - Unknown
