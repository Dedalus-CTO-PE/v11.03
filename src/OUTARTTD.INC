.*-----------------------------------------------------------------------------
.* Include Name  :   OUTARTTD.INC
.*
.* Function      :   CGI Variables for OUTARTFD - outartaf
.*
.* Mods          :   
.*        V10.10.01 20/03/2017  Ebon Clements TSK 0815431
.*                  Added OTART040 - Comment unique id
.*        V10.03.02 23/01/2013  Ebon Clements CAR 262292
.*                  Added interpreter and language
.*        V10.03.01 15/12/2011  Ebon Clements CAR 255521
.*                  Added funding source
.*        V10.02.00 03/05/2011  Mike Laming   CAR 240720
.*                  Created for Outpatient Appointment Request Table
.*-----------------------------------------------------------------------------
.
.Name     Type      Length                Description
.----     ----      ------                -----------
OTART001  DIM       8                     UR Number
OTART002  DIM       8                     Linked A/H Referral Number
OTART003  DIM       8                     Request Date
OTART004  DIM       8                     Request Time
OTART005  DIM       3                     Requesting Department      (Cat.AC)
OTART006  DIM       3                     Appointment with Department(Cat.AC)
OTART007  DIM       8                     Preferred Date
OTART008  DIM       3                     Preferred Hospital
OTART009  DIM       6                     Preferred Site
OTART010  DIM       6                     Clinic Type
OTART011  DIM       6                     Clinic Id
OTART012  DIM       3                     Visit Type                 (Cat.CV)
OTART013  DIM       3                     Transport Required         (Cat.OB)
OTART014  DIM       50                    Presenting Complaint
OTART015  DIM       3                     Financial Class            (Cat.CL)
OTART016  DIM       3                     Priority                   (Cat.PR)
OTART017  DIM       3                     Source of Referral OSTCATG.OUTSITAF
OTART018  DIM       3                     Special Arrangements       (Cat.SA)
OTART019  DIM       8                     Original O/P Booking Number
OTART020  DIM       1                     Status   0, 1, 2 or 3
OTART021  DIM       3                     Reason for Request         (Cat.XX)
OTART022  DIM       3                     Reason for Cancellation    (Cat.CB)
OTART023  DIM       8                     Date Request Cancelled
OTART024  DIM       8                     Time Request Cancelled
OTART025  DIM       10                    User who Cancelled Request
OTART026  DIM       8                     Booking Number
OTART027  DIM       6                     Clinic Site of Booking
OTART028  DIM       6                     Clinic Id of Booking
OTART029  DIM       8                     Date of Booking
OTART030  DIM       5                     Clinic Start Time
OTART031  DIM       3                     Clinic Slot Number
OTART032  DIM       5                     Clinic Slot Time
OTART033  DIM       10                    User who created Booking
. 
OTART034  DIM       8                     Date Request Completed
OTART035  DIM       8                     Time Request Completed
OTART036  DIM       10                    User who Completed Request
OTART037  DIM       3                     Funding Source (Cat cx)
OTART038  DIM       1                     Interpreter Required? (0=NO,1=YES)
OTART039  DIM       3                     Preferred Language 1 (Cat LA)
OTART040  DIM       10                    Comment Unique ID
.
. Appointment Status Descriptions
.
APPREQST  INIT      "Requested"
APPRESCH  INIT      "Pending Reschedule"
APPBOOKD  INIT      "Booked"
APPCANCL  INIT      "Cancelled"
