. *----------------------------------------------------------------------
. * Include Name  :   PMSARQTD.INC
. *
. * Function      :   CGI variables for PMSARQFD - pmsarqaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
.
.  V10.09.01  06/12/2016  Don Nguyen        TSK 0323730
.             Added PMARQ064 - Approval Required Reason (Cat Ar)
.  V10.03.02  21/10/2013  Ebon Clements     CAR 291974
.             Changed PMARQ027 name to preferred language
.  V10.03.01  03/10/2013  Ebon Clements     CAR 275205
.             Added PMARQ063 - Transfer source
.  V10.03.00  29/08/2013  Ebon Clements     CAR 275205
.             Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
PMARQ001  DIM       10      Admission Request Number
PMARQ002  DIM       8       U/R Number
PMARQ003  DIM       8       Visit Number
PMARQ004  DIM       8       Request Date (CCYYMMDD)
PMARQ005  DIM       8       Request Time (HH:MM:SS)
PMARQ006  DIM       1       Request Type
PMARQ007  DIM       10      Responsible Clinicial (pmshcpaf)
PMARQ008  DIM       3       Unit (Cat WU)
PMARQ009  DIM       5       Team
PMARQ010  DIM       3       Priority (Cat TP)
PMARQ011  DIM       40      Diagnosis
PMARQ012  DIM       9       Principal Procedure
PMARQ013  DIM       80      Procedure Description Comments
PMARQ014  DIM       9       Additional Procedure 1
PMARQ015  DIM       9       Additional Procedure 2
PMARQ016  DIM       3       Side of Surgery (Cat XX)
PMARQ017  DIM       1       Consent Obtained
PMARQ018  DIM       3       Consent Obtained Reason (Cat XX)
PMARQ019  DIM       3       Proc. Can Be Performed By (Cat XX)
PMARQ020  DIM       3       Intended Hospital (pathspaf)
PMARQ021  DIM       1       Patient Suitable For Another Hospit
PMARQ022  DIM       3       Preferred Hospital (pathspaf)
PMARQ023  DIM       8       Preferred/Proposed Admission Date
PMARQ024  DIM       3       Type of Bed Required (Cat XX)
PMARQ025  DIM       1       Admit Night Prior
PMARQ026  DIM       3       Critical Care Bed Required
PMARQ027  DIM       3       Preferred Language
PMARQ028  DIM       3       Anaesthetic Type
PMARQ029  DIM       5       Operation Duration
PMARQ030  DIM       3       Pre-Anaesthetic Review Code
PMARQ031  DIM       3       Clinical Triage Code
PMARQ032  DIM       6       Height
PMARQ033  DIM       6       Weight
PMARQ034  DIM       5       Calculated BMI
PMARQ035  DIM       3       Anti-Coagulants
PMARQ036  DIM       1       Referral to Anti-Coagulant Clinic
PMARQ037  DIM       1       Anti-Platelet
PMARQ038  DIM       3       Initial Tertiary Care Reason Cat WH
PMARQ039  DIM       3       Interpreter Required
PMARQ040  DIM       3       Financial Class
PMARQ041  DIM       3       Source of Referral
PMARQ042  DIM       10      Referring Clinician (pmshcpaf)
PMARQ043  DIM       10      Practice
PMARQ044  DIM       2       Practice Count
PMARQ045  DIM       3       Listing Status
PMARQ046  DIM       3       Intended Stay
PMARQ047  DIM       3       Short Notice
PMARQ048  DIM       4       Planned Length of Stay
PMARQ049  DIM       3       Non WA Hospital Contact
PMARQ050  DIM       8       Procedure Date (CCYYMMDD)
PMARQ051  DIM       3       Theatre Location
PMARQ052  DIM       1       Implants Required
PMARQ053  DIM       80      Implants Description
PMARQ054  DIM       1       Implants Ordered
PMARQ055  DIM       1       Bone Graft
PMARQ056  DIM       1       Ex Fix Removal
PMARQ057  DIM       1       Request Status
PMARQ058  DIM       1       Medical Authorisation App.
PMARQ059  DIM       1       Theatre Request
PMARQ060  DIM       1       Recurring Care
PMARQ061  DIM       3       Reason Returned to Clinician Cat yr
PMARQ062  DIM       3       Reason For Removal (Cat ys)
PMARQ063  DIM       5       Transfer Source (patvadaf)
PMARQ064  DIM       3       Approval Required Reason (Cat Ar)

