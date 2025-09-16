. *-----------------------------------------------------------------------------
. * Include Name  :  PMSAPGTD.INC
. *
. * Function      :  CGI Variables for PMSAPGFD - pmsapgaf
. *
. * Mods          :  
. * V10.10.01 16/03/2017  Jill Parkinson TSK 0818098
. *           Added in pmapg093 and pmapg094  
. * V10.03.00 30/03/2012 Patrick Adair   CAR 257776
. *           Created include
. *-----------------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMAPG001  DIM       8       U/R Number
PMAPG002  DIM       3       Admission Type (Cat A)
PMAPG003  DIM       3       Claim Code (cat CL)
PMAPG004  DIM       6       Health Fund
PMAPG005  DIM       3       Health Fund Table Type (Cat HT)
PMAPG006  DIM       8       Expiry Date (CCYYMMDD)
PMAPG007  DIM       8       Program Code
PMAPG008  DIM       7       Impairment Code (pmsimpaf)
PMAPG009  DIM       2       AN-SNAP Version (pmssnpaf)
PMAPG010  DIM       3       AN-SNAP Classification (pmssnpaf)
PMAPG011  DIM       3       Mode of Episode Start (Cat px)
PMAPG012  DIM       3       Mode of Episode End (Cat pw)
PMAPG013  DIM       1       First Admission for this Impairment
PMAPG014  DIM       1       Current Impairment due to Trauma
PMAPG015  DIM       8       Date of relevant acute admission
PMAPG016  DIM       3       Time since onset of chronic conditi
PMAPG017  DIM       1       Existing Co-morbility
PMAPG018  DIM       3       Co-morbidity 1
PMAPG019  DIM       3       Co-morbidity 2
PMAPG020  DIM       3       Co-morbidity 3
PMAPG021  DIM       3       Co-morbidity 4
PMAPG022  DIM       3       Complication 1
PMAPG023  DIM       3       Complication 2
PMAPG024  DIM       3       Complication 3
PMAPG025  DIM       3       Complication 4
PMAPG026  DIM       1       Assesment Only
PMAPG027  DIM       3       Accomm Prior to Admission (Cat py)
PMAPG028  DIM       3       Accommodation post disch (Cat pz)
PMAPG029  DIM       3       Level Supp Rcvd Prior to Admiss (ar
PMAPG030  DIM       3       Level Supp Rcvd Post Dischge (as)
PMAPG031  DIM       3       Employment Status (Cat KD)
PMAPG032  DIM       8       Referral Date
PMAPG033  DIM       8       Date Assessed by Rehab Team
PMAPG034  DIM       1       Svce Rcvd Prior - Domestic
PMAPG035  DIM       1       Svce Rcvd Prior - Social
PMAPG036  DIM       1       Svce Rcvd Prior - Nursing
PMAPG037  DIM       1       Svce Rcvd Prior - Allied Health Car
PMAPG038  DIM       1       Svce Rcvd Prior - Personal Care
PMAPG039  DIM       1       Svce Rcvd Prior - Meals
PMAPG040  DIM       1       Svce Rcvd Prior - Prov of goods/equ
PMAPG041  DIM       1       Svce Rcvd Prior - Transport Service
PMAPG042  DIM       1       Svce Rcvd Prior - Case Management
PMAPG043  DIM       8       Date of Relevant Acute Episode
PMAPG044  DIM       3       Employment Status after Discharge (Cat KD)
PMAPG045  DIM       8       Date Clinically Ready for Discharge
PMAPG046  DIM       1       Svce Rcvd Post - Domestic Assistanc
PMAPG047  DIM       1       Svce Rcvd Post - Social
PMAPG048  DIM       1       Svce Rcvd Post - Nursing
PMAPG049  DIM       1       Svce Rcvd Post - Allied Health Care
PMAPG050  DIM       1       Svce Rcvd Post - Personal Care
PMAPG051  DIM       1       Svce Rcvd Post - Meals
PMAPG052  DIM       1       Svce Rcvd Post - Prov of goods/equi
PMAPG053  DIM       1       Svce Rcvd Post - Transport Services
PMAPG054  DIM       1       Svce Rcvd Post - Case Management
PMAPG055  DIM       8       Date Emereged from PTA
PMAPG056  DIM       1       Chronic Amnesiac
PMAPG057  DIM       3       Episode Start ASIA Score A,B,C or D (Cat ra)
PMAPG058  DIM       3       Episode Start Level of Spinal Chord (Cat rb)
PMAPG059  DIM       3       Episode End Level of Spinal Chord I (Cat rb)
PMAPG060  DIM       1       Ventilator Dependant at Episode End
PMAPG061  DIM       3       Episode End ASIA Score A,B,C or D (Cat ra)
PMAPG062  DIM       8       Date Ready For Casting
PMAPG063  DIM       3       Phase of Amputee Care at Episode St
PMAPG064  DIM       1       Delayed Wound Phase of Care during
PMAPG065  DIM       1       Pre Prosthetic Phase of Care during
PMAPG066  DIM       1       Prosthetic Phase of Care during Epi
PMAPG067  DIM       3       Phase of Amputee Care at Episode En
PMAPG068  DIM       1       Prosthetic? 
PMAPG069  DIM       8       Date First Prosthetic Fitting
PMAPG070  DIM       3       Reason for Delay in Fitting
PMAPG071  FORM      2.1     Discharge Timed Up and Go
PMAPG072  FORM      3.1     Discharge 6 Minute walk test
PMAPG073  FORM      2.1     Discharge 10 Metre Walk
PMAPG074  DIM       3       Fraility (pre-morbid) (Cat rg)
PMAPG075  DIM       1       Participation in Therapy from Day 1
PMAPG076  DIM       1       Fallen last 12 Months
PMAPG077  DIM       1       Weight Loss >10% in last 12 Months
PMAPG078  DIM       10      Date Clinically Ready for Rehab Car
PMAPG079  DIM       3       Iterim Destination (Cat pz)
PMAPG080  DIM       8       User Defined Date 1
PMAPG081  DIM       8       User Defined Date 2
PMAPG082  DIM       8       User Defined Date 3
PMAPG083  DIM       3       User Defined Category 1
PMAPG084  DIM       3       User Defined Category 2
PMAPG085  DIM       3       User Defined Category 3
PMAPG086  DIM       3       User Defined Category 4
PMAPG087  DIM       3       User Defined Category 5
PMAPG088  DIM       1       User Defined yes/no 1
PMAPG089  DIM       1       User Defined yes/no 2
PMAPG090  DIM       1       User Defined yes/no 3
PMAPG091  DIM       1       User Defined yes/no 4
PMAPG092  DIM       1       User Defined yes/no 5
PMAPG093  DIM       4       Discharge Timed up and go seconds
PMAPG094  DIM       4       Discharge 10 metre walk test seconds
.
. *-----------------------------------------------------------------------------
. * Include Name  :  PMSPITTD.INC
. *
. * Function      :  CGI Variables for PMSPITFD - pmspitaf
. *
. * Mods          :  V10.03.00 30/03/2012 Patrick Adair   CAR 257776
. *                            Created include
. *-----------------------------------------------------------------------------
.Name     Type      Length  Description
.----     ----      ------  -----------
PMPIT001  DIM       8       U/R Number
PMPIT002  DIM       3       Admission Type (Cat A)
PMPIT003  DIM       3       Claim Code (cat CL)
PMPIT004  DIM       6       Health Fund
PMPIT005  DIM       3       Health Fund Table Type (Cat HT)
PMPIT006  DIM       8       Expiry Date (CCYYMMDD)
PMPIT007  DIM       5       Count
PMPIT008  DIM       3       Reason for Interruption
PMPIT009  DIM       8       From Date
PMPIT010  DIM       8       To Date
PMPIT011  DIM       1       Deleted (1=Deleted)

