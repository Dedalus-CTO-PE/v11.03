. *----------------------------------------------------------------------
. * Include Name  :   OPRSESTD.INC
. *
. * Function      :   CGI variables for OPRSESFD - oprsesaf
. *
. * Modifications :
. *----------------------------------------------------------------------
. * V11.00.01 20/10/2020  Thanh T            TSK 0887468
. *           Added OPSES085 - Update Session Default Team Arrived
. *           Theatre case
. * V10.05.02 06/11/2014  Don Nguyen             CAR 304059
. *           Added OPSES078-OPSES084 and SHRTTIME
. * V10.05.01 07/08/2014 Peter Vela              CAR 283302
. *           Added OPSECNDT, OPSECNTM, OPSECNID
. * V9.08.01 28/09/2006 Ebon Clements            CAR 119991
. *          Added OPSEHOSP
. * V9.04.01 08/03/2005 Lina Vo                  CAR 56404
. *          Added OPSEFIND & OPSEFINT - Finalisation Date and Time.
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
OPSES001  DIM       8       * Session Date
OPSES002  DIM       5       * Start Time
OPSES003  DIM       6       * Clinic/Surgeon
OPSES004  DIM       1       * Suspend Session 1=Yes 2=No
OPSES005  FORM      1       * Day Indicator Mon..Sun (1..7)
OPSES006  DIM       8       * Booking Date
OPSES007  DIM       5       * Expected End of Session (HH:MM)  
OPSES008  FORM      4       * Expected Duration (min)
OPSES009  FORM      3       * Time for breaks (min)
OPSES010  FORM      2       * Preperation time/patient (min)
OPSES011  DIM       3       * Time Period (cat SP)
OPSES012  DIM       3       * Session Type (cat ST)
OPSES013  DIM       6       * Default Operating Room Code
OPSES014  DIM       6       * Session co-ordinator
OPSES015  DIM       6       * Anaesthetist
OPSES016  FORM      1       * Session Status 0=Cancelled 1=Active-booked 
.                                            2=Active-Extra session  
OPSES017  FORM      4       * Total time currently booked  
OPSES018  DIM       5       * Actual Start Time (HH:MM)
OPSES019  DIM       5       * Actual End Time (HH:MM)
OPSES020  FORM      4       * Actual Duration
OPSES021  DIM       3       * Overtime Code (Cat OO)
OPSES022  DIM       3       * Delay Code (cat OD)
OPSES023  DIM       3       * Cancellation Reason (cat OC)
OPSES024  DIM       3       * Doctor Type 1 (Cat OP)  
OPSES025  DIM       3       * Doctor Type 2 (Cat OP)  
OPSES026  DIM       3       * Doctor Type 3 (Cat OP)  
OPSES027  DIM       3       * Doctor Type 4 (Cat OP)  
OPSES028  DIM       3       * Doctor Type 5 (Cat OP)  
OPSES029  DIM       3       * Doctor Type 6 (Cat OP)  
OPSES030  DIM       3       * Doctor Type 7 (Cat OP)  
OPSES031  DIM       3       * Doctor Type 8 (Cat OP)  
OPSES032  DIM       6       * Doctor Code 1
OPSES033  DIM       6       * Doctor Code 2
OPSES034  DIM       6       * Doctor Code 3
OPSES035  DIM       6       * Doctor Code 4
OPSES036  DIM       6       * Doctor Code 5
OPSES037  DIM       6       * Doctor Code 6
OPSES038  DIM       6       * Doctor Code 7
OPSES039  DIM       6       * Doctor Code 8
OPSES040  DIM       3       * Supervision Level 1 (cat OS)
OPSES041  DIM       3       * Supervision Level 2 (cat OS)
OPSES042  DIM       3       * Supervision Level 3 (cat OS)
OPSES043  DIM       3       * Supervision Level 4 (cat OS)
OPSES044  DIM       3       * Supervision Level 5 (cat OS)
OPSES045  DIM       3       * Supervision Level 6 (cat OS)
OPSES046  DIM       3       * Supervision Level 7 (cat OS)
OPSES047  DIM       3       * Supervision Level 8 (cat OS)
OPSES048  DIM       3       * Nurse Type 1 (cat ON)  
OPSES049  DIM       3       * Nurse Type 2 (cat ON)  
OPSES050  DIM       3       * Nurse Type 3 (cat ON)  
OPSES051  DIM       3       * Nurse Type 4 (cat ON)  
OPSES052  DIM       3       * Nurse Type 5 (cat ON)  
OPSES053  DIM       3       * Nurse Type 6 (cat ON)  
OPSES054  DIM       6       * Nurse Code 6 1
OPSES055  DIM       6       * Nurse Code 6 2
OPSES056  DIM       6       * Nurse Code 6 3
OPSES057  DIM       6       * Nurse Code 6 4
OPSES058  DIM       6       * Nurse Code 6 5
OPSES059  DIM       6       * Nurse Code 6 6
OPSES060  DIM       3       * User Defined 1 (cat Q6)
OPSES061  DIM       3       * User Defined 2 (cat Q7)
OPSES062  DIM       3       * User Defined 3 (cat Q8)
OPSES063  DIM       3       * User Defined 4 (cat Q9)
OPSES064  DIM       6       * Extar Doctor for Team
OPSES065  DIM       8       * Actual Start Date
OPSES066  DIM       8       * Actual End Date
OPSES067  DIM       50      * Special Instructions 1
OPSES068  DIM       50      * Special Instructions 2
OPSES069  DIM       2       * Number of Days to Lock Session
OPSES070  DIM       3       * Session Type (category TU)
OPSES071  DIM       3       * Day/General Surgery Indicator (cat YD)
OPSES072  DIM       8       * Finalisation Date (CCYYMMDD)
OPSES073  DIM       8       * Finalisation Time (HH:MM:SS)
OPSES074  DIM       3       * Hospital
OPSES075  DIM       8       * Date Cancellation Notified
OPSES076  DIM       8       * Time Cancellation Notified
OPSES077  DIM       10      * User ID who cancelled session (websecaf.WBSEUID)
OPSES078  DIM       1       * Default Team Completed (0 or Blank = No, 1 = Yes)
OPSES079  DIM       10      * User who Completed Default Team
OPSES080  DIM       8       * Date Default Team Completed
OPSES081  DIM       8       * Time Default Team Completed
OPSES082  DIM       10      * User who Updated Default Team
OPSES083  DIM       8       * Date Default Team Updated
OPSES084  DIM       8       * Time Default Team Updated
OPSES085  DIM       1       * Update Session Default Team Arrived Theatre case
.
SHRTTIME  DIM       5       * Short time (hh:mm)
