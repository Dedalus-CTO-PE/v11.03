. 5.01 .001 15/03/1993 SOG CREATED                                           
. 5.02 .001 28/03/1995 Helen Crick  Standardised FD                             
. *----------------------------------------------------------------------
. * Include Name  :   OUTRAPFD.INC
. *
. * Function      :   File Def'n Include for Outpatients
. *                   Re-Appointments
. *
. * File Type     :   SQL
. *
. * File Name     :   outrapaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTRAPA1  IFILE     SQL, FIXED=60, KEY="U1-8,9-16"
OUTRAPA2  IFILE     SQL, FIXED=60, KEY="U9-16,1-8"
.
FILRAPA1   INIT      "rapaf"
FILRAPA2   INIT      "rapaf"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DOTRPOBK  DIM       8        8         1     Original Booking Number
DOTRPRBK  DIM       8        8         9     Re-Appointment Booking Number
OTRPDATE  DIM       8        8        17     Date Re-Appointment Made
OTRPTIME  DIM       5        5        25     Time Re-Appointment Made
OTRPLOGI  DIM       4        4        30     Login Id of Operator
OTRPSPAR  DIM      26       26        34     Spare
.
.End of Record                        60
.
. ---  Form Field Redefines  ---
.
OTRPOBKN  FORM      8
OTRPRBKN  FORM      8
.
