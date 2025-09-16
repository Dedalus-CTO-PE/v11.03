.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   HL7RERFD.INC                                  *
.  *                                                                      *
.  *  Function          :   HL7 Error Table                               *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   hl7reraf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY23                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
HL7RERA1   IFILE SQL, FIXED=120, KEY="U1-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DH7RRMES  DIM       20       20       1   Message Id
DH7RRCNT  DIM       3        3       21   Sequential Error Count
H7RRDESC  DIM       70       70      24   Error Description
H7RRCODE  DIM       3        3       94   Error Code (HL7)
H7RRSPAR  DIM       23       23      97   Spare Variable
.
.End of Record                      120
.
. Redefine FORM fields from key
. -----------------------------
H7RRMESI  FORM      20
H7RRSCNT  FORM      3
