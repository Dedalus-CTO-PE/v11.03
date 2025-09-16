.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   OUTBOCFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Outpatients       *
.  *                        Clinic Session Booking Table C                *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   outbokcf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :                                                 *
.  *                                                                      *
.  *  Modifications    :   20/09/94  Paul Howells  SRF441025              *
.  *                       Added 2nd index                                *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
OUTBOKC1  IFILE     SQL, FIXED=70, KEY="U1-8"
OUTBOKC2  IFILE     SQL, FIXED=70, KEY="U9-16,1-8"
FILBOKC1  INIT      "bokcf"
.
. Name    Type   Length      Physical   Start   Description
.-------- ----   -------     --------   -----   ---------------------------
.DOBAOUTN DIM      8            8         1     Outpatient Number
OTBCRDAT  DIM      8            8         9     Referal Date
OTBCSPAR  DIM      53           53       17     Spare Variable
.
.End of Record                            70 
.
.OBAOUTNO  FORM     8
.
