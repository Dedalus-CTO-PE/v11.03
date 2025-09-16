.--------------------------------------------------------------------------
.MEHDLVTD.INC
.
.   V9.02.00 01/11/2002 Jill Habasque- Created
.            26/02/2008 J.Tan   CAR 156964
.                       Added name of person escorting the patient
. 
.---------------------------------------------------------------------------
.  Mental Health Discharge to Leave Details
MEHDL001  DIM       8    Admission Number
MEHDL002  DIM       35   Address Line 1
MEHDL003  DIM       35   Address Line 2
MEHDL004  DIM       35   Address Line 3
MEHDL005  DIM       35   Address Line 4
MEHDL006  DIM       8    Post Code
MEHDL007  DIM       4    Spare for post code                 
MEHDL008  DIM       3    Accomodation type(Cat AY)
MEHDL009  DIM       3    Referred to(Cat RE)
MEHDL010  DIM       3    Staying With(Cat SW)
MEHDL011  FORM      1    Letter to DOM Nurse 1=Yes 2=No  
MEHDL012  FORM      1    Letter to GP  Nurse 1=Yes 2=No  
MEHDL013  FORM      1    Notice to trustee 1=Yes 2=No  
MEHDL014  FORM      1    DOH informed of notifiable disease 1=Yes 2=No  
MEHDL015  FORM      1    Outpatient Appointment 1=Yes 2=No  
MEHDL016  FORM      1    Community service register 1=Yes 2=No  
MEHDL017  DIM       8    Date on community service register
MEHDL018  DIM       3    Community service follow up type 
MEHDL019  DIM       8    Community service follow up date 
MEHDL020  DIM       3    User defined field 1 (Cat W5)
MEHDL021  DIM       3    User defined field 2 (Cat W6)
MEHDL022  DIM       3    User defined field 3 (Cat W7)
MEHDL023  DIM       3    User defined field 4 (Cat W8)
MEHDL024  DIM       3    User defined field 5 (Cat W9)
MEHDL025  DIM       20   Name of Person escorting the patient


