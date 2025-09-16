. *----------------------------------------------------------------------
. * Include Name  :   WEBOECTD.INC
. *
. * Function      :   CGI variables for WEBOECFD - weboecaf.dat                 
. *----------------------------------------------------------------------
. *
. * Modifications :  V11.00.01 24/08/2020 Peter Vela CAR 0895969
. *                   Created include
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
WEBOC001  DIM       8      Visit Number
WEBOC002  DIM       3      Report Counter (right just.)
WEBOC003  DIM       2      OEC Status Flag
WEBOC004  DIM       8      U/R Number
WEBOC005  DIM       20     Account Reference ID
WEBOC006  DIM       24     Transaction ID
WEBOC007  DIM       8      Date of Request (ccyymmdd)
WEBOC008  DIM       2      Extraction Type
WEBOC009  DIM       4      Error Code
WEBOC010  DIM       100    Error Description
WEBOC011  DIM       8      Date Created (ccyymmdd)
WEBOC012  DIM       8      Time Created (hh:mm:ss)
WEBOC013  DIM       8      Date Updated (ccyymmdd)
WEBOC014  DIM       8      Time Updated (hh:mm:ss)
WEBOC015  DIM       3      Hospital Id
.
DSPWBOC0  INIT      "Waiting"
DSPWBOC1  INIT      "Extracted"
DSPWBOC2  INIT      "Received"
DSPWBOC3  INIT      "SA Error"
DSPWBOC4  INIT      "Data Error"
DSPWBOC5  INIT      "Rej Reported"
DSPWBOC6  INIT      "Comp Reported"
DSPWBOC7  INIT      "HF Unavailable"
