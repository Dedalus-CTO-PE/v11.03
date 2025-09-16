. *----------------------------------------------------------------------
. * Include Name  :   PMSBRQTD.INC
. *
. * Function      :   CGI variables for PMSBRQFD - pmsbrqaf.dat
. *----------------------------------------------------------------------
.  Modifications Done :
. *----------------------------------------------------------------------
.   V10.15.01  09/10/2019  Thanh T         TSK 0856646
.              Added PMBRQ019 to PMBRQ032
. *----------------------------------------------------------------------
.   V10.09.01  30/11/2016  J.Tan           TSK 0814743
.              Added PMBRQ018
.   V10.05.01  11/08/2014  Don Nguyen      CAR 297774
.              Added PMBRQ016 & PMBRQ017
.   V10.00.01  16/06/2010  Peter Vela      CAR 216620
.              Added PMBRQ015
.   V9.11.01   23/09/2008  Ebon Clements   CAR 174047
.              Added PMBRQ012 to PMBRQ014
.   V9.09.00   08/11/2007  Ebon Clements   CAR 151894
.              Created include                          
. *----------------------------------------------------------------------
.
.Name     Type      Length  Description
.----     ----      ------  -----------
PMBRQ001  DIM       8       Visit Number                       
PMBRQ002  DIM       8       Request Date (ccyymmdd)            
PMBRQ003  DIM       8       Request Time (hh:mm:ss)            
PMBRQ004  DIM       3       Unit (Cat AC)                      
PMBRQ005  DIM       10      Requesting HCP (pmshcpaf)          
PMBRQ006  DIM       3       Type of Bed Required (Cat RT)      
PMBRQ007  DIM       1       Request Status                     
PMBRQ008  DIM       10      Diagnosis                          
PMBRQ009  DIM       3       Expected Ward                      
PMBRQ010  DIM       3       Expected Bed                       
PMBRQ011  DIM       3       Cancellation Reason (Cat cz)
PMBRQ012  DIM       3       Requesting Ward
PMBRQ013  DIM       3       Speciality Bed Required (Cat CG)
PMBRQ014  DIM       3       Preferred Site (pathspaf)
PMBRQ015  DIM       70      Free Format Text
PMBRQ016  DIM       8       Ready Date (ccyymmdd)
PMBRQ017  DIM       8       Ready Time (hh:mm:ss)
PMBRQ018  DIM       5       Admitting Team (pmstemaf)
PMBRQ019  DIM       3       Preferred Ward
PMBRQ020  DIM       1       Spec Feature - Falls Risk
PMBRQ021  DIM       1       Spec Feature - Exist Pressure Injury 
PMBRQ022  DIM       1       Spec Feature - Cognitive Impairment
PMBRQ023  DIM       1       Spec Feature - Companion
PMBRQ024  DIM       1       Spec Feature - TBP (Isolation)
PMBRQ025  DIM       1       Spec Feature - Telemetry
PMBRQ026  DIM       1       Spec Feature - From Resident Care
PMBRQ027  DIM       1       Spec Feature - Other (see notes)
PMBRQ028  DIM       1       Spec Feature - None Required
PMBRQ029  DIM       1       Spec Feature - Mobility Assistance
PMBRQ030  DIM       3       Mobility Assistance Score (Cat m3)
PMBRQ031  DIM       1       Suitable for Ward Transfer
PMBRQ032  DIM       1       Companion Requirement Confirmed
.
