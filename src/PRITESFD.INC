.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRITESFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Pathology Test                                *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   pritestf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 17, KEY 22                                *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *      V6.01.01  11/05/1994  Graeme Williams   SRF 129360              *
.  *                Added "Standard Abbreviation" field (replaced spare)  *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRITEST1   IFILE SQL, FIXED=81, KEY="U1-9,10-17"
PRITEST2   IFILE SQL, FIXED=81, KEY="U69-73,1-9,10-17"
PRITEST3   IFILE SQL, FIXED=81, KEY="U18-47,1-9,10-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRTECODE  DIM       9      9        1     Test Code
PRTEDATE  DIM       8      8        10    Date Effective From
.
PRTEDESC  DIM       30     30       18    Test Description
PRTEITMN  DIM       9      9        48    MBS Item Number
PRTESUBN  DIM       3      3        57    MBS Subitem Number
PRTEAMAN  DIM       9      9        60    AMA Item Number
PRTEMSER  DIM       5      5        69    Multiple Services Code
PRTETESN  FORM      3      3        74    Number of Procedures
.
PRTEABRV  DIM       4      4        77    Standard Abbreviation
.
.End of Record                      81
.
