. *----------------------------------------------------------------------
. * Include Name  :   PMSOECTD.INC
. *
. * Function      :   CGI variables for PMSOECFD - pmsoecaf.dat                 
. *----------------------------------------------------------------------
. *
. * Modifications :   V9.11.01 25/02/2009 Peter Vela CAR 183976
. *                   Created include
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PMSOC001  DIM       8      Visit Number
PMSOC002  DIM       3      Report Counter (right just.)
PMSOC003  DIM       2      OEC Status Flag
PMSOC004  DIM       8      U/R Number
PMSOC005  DIM       20     Account Reference ID
PMSOC006  DIM       24     Transaction ID
PMSOC007  DIM       8      Date of Request (ccyymmdd)
PMSOC008  DIM       2      Extraction Type
PMSOC009  DIM       4      Error Code
PMSOC010  DIM       100    Error Description
PMSOC011  DIM       8      Date Created (ccyymmdd)
PMSOC012  DIM       8      Time Created (hh:mm:ss)
PMSOC013  DIM       8      Date Updated (ccyymmdd)
PMSOC014  DIM       8      Time Updated (hh:mm:ss)
PMSOC015  DIM       3      Hospital Id
.
DSPPMOE0  INIT      "Waiting"
DSPPMOE1  INIT      "Extracted"
DSPPMOE2  INIT      "Received"
DSPPMOE3  INIT      "SA Error"
DSPPMOE4  INIT      "Data Error"
DSPPMOE5  INIT      "Rej Reported"
DSPPMOE6  INIT      "Comp Reported"
DSPPMOE7  INIT      "HF Unavailable"
