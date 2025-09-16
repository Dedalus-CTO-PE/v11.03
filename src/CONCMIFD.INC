. V5.01.001 19/12/1995 GKW Created File
. *----------------------------------------------------------------------
. * Include Name  :   CONCMIFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   Contracting Casemix Interface (SUHT/SCHST)
. *
. * File Type     :   SQL
. *
. * File Name     :   concmiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CONCMIA1   IFILE    SQL, FIXED=44, KEY="U1-8"
CONCMIA2   IFILE    SQL, FIXED=44, KEY="U18-19,17-17,9-16,1-8"
CONCMIA3   IFILE    SQL, FIXED=44, KEY="U18-19,20-23,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DCOCMADM  DIM       8      8        1     Visit Number
COCMLCHG  DIM       8      8        9     Date of last change
COCMSEND  DIM       1      1        17    Record to be sent flag
.                                           "Y" = Yes, "N" = No
DCOCMTYP  DIM       2      2        18    Record type
.                                           1 = A&E
.                                           2 = Outpatient
.                                           3 = I/P (Inc W/L and bookings)
.                                           7 = Ward Attender
.                                           8 = Ad-hoc Attender
COCMRUNN  DIM       4      4        20    Last Run Number Details Sent In
COCMTCHG  DIM       5      5        24    Time of last change
COCMSPAR  DIM       15     15       29    Spare Variable
.
.End of Record                      44
.
.Redefine Key Variables
.----------------------
COCMADMN  FORM      8
COCMTYPE  FORM      2
