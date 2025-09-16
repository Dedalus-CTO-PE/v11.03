. *----------------------------------------------------------------------
. * Include Name  :   WEBOEMTD.INC
. *
. * Function      :   CGI variables for WEBOEMFD - weboemaf.dat                 
. *----------------------------------------------------------------------
. *
. * Modifications :  V11.01.01 30/11/2021 Peter Vela 0914306
. *                   Created include
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
WEBOM001  DIM       8      Visit Number
WEBOM002  DIM       3      Report Counter (right just.)
WEBOM003  DIM       2      OEC Status Flag
WEBOM004  DIM       8      U/R Number
WEBOM005  DIM       20     Account Reference ID
WEBOM006  DIM       24     Transaction ID
WEBOM007  DIM       8      Date of Request (ccyymmdd)
WEBOM008  DIM       2      Extraction Type
WEBOM009  DIM       4      Error Code
WEBOM010  DIM       500    Error Description
WEBOM011  DIM       8      Date Created (ccyymmdd)
WEBOM012  DIM       8      Time Created (hh:mm:ss)
WEBOM013  DIM       8      Date Updated (ccyymmdd)
WEBOM014  DIM       8      Time Updated (hh:mm:ss)
WEBOM015  DIM       3      Hospital Id
.
DSPWBOM0  INIT      "Waiting"
DSPWBOM1  INIT      "Extracted"
DSPWBOM2  INIT      "Received"
DSPWBOM3  INIT      "SA Error"
DSPWBOM4  INIT      "Data Error"
DSPWBOM5  INIT      "Rej Reported"
DSPWBOM6  INIT      "Comp Reported"
DSPWBOM7  INIT      "HF Unavailable"
