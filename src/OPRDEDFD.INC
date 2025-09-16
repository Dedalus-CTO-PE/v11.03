. V10.08.01 31/03/2016 - SA TSK 0321157  Added OPDDTYPE values 014,015
.                        016,017,018,019,020,021,022,023
. V10.04.01 14/02/2014 - Added Theatre Bookings Request comments
.                        CAR 218689 - PV
. V9.12.001 27/10/2009 - Added waiting list comments CAR 207399 (DS)
. V9.11.001 12/12/2008 - Added recovery comments CAR 166942
. V5.09.001 29/06/2000                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OPRDEDFD.INC
. *
. * Function      :   File Def'n Include for Theatre                            
. *                   Operation Comments                 
. *
. * File Type     :   SQL
. *
. * File Name     :   oprdedaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRDEDA1   IFILE    SQL, FIXED=107, KEY="U1-10,11-13,14-16"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPDDUNIQ  DIM       10     10       1     Unique ID for Theatre Booking      
OPDDTYPE  DIM       3      3        11    Comment Type                       
.                                         001 = Inner-Operative Complications
.                                         002 = Preadmission & Operation Notes
.                                         003 = Findings at Operation
.                                         004 = Procedure Description
.                                         005 = Post-Operative Instructions
.                                         006 = Management Plan
.                                         007 = Post-Operative Complications
.                                         008 = Day Procedure Comments
.                                         009 = Theatre Booking Comments
.                                         010 = Recovery Comments
.                                         011 = Waiting List Comments
.                                         012 = Theatre Bookings Request
.                                               Comments
.                                         014 = Pre-Operative Checklist Comments
.                                         015 = Pre Skin Incision Timeout
.                                               Surgeon Comments
.                                         016 = Pre Skin Incision Timeout
.                                               Anaesthetist Comments
.                                         017 = Pre Skin Incision Timeout
.                                               Nursing Comments
.                                         018 = Pre Skin Incision Timeout
.                                               Comments
.                                         019 = Visitor in Attendance
.                                         020 = Diathermy Comments
.                                         021 = Specimen Comments
.                                         022 = Medication Comments
.                                         023 = Other Aid Comments
OPDDLINE  DIM       3      3        14    Line Number                        
OPDDDATA  DIM       70     70       17    Data                               
OPDDSPA   DIM       20     20       87    Spare                              
.
.End of Record                      107  
.
