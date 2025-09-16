.  ****************************************************************************
.  *                                                                          *
.  *  Include Name : OPRSEMFD.INC                                             *
.  *                                                                          *
.  *  Function     : File Definition include for Theatre                      *
.  *                 SESSION MASTER                                           *
.  *                                                                          *
.  *  File Type    : SQL                                                      *
.  *                                                                          *
.  *  File Name    : oprsemaf.dat                                             *
.  *  Audit File   : opraudsm.dat                                             *
.  *                                                                          *
.  *  Keys         : KEY22                                                    * 
.  *                                                                          *
.  *  Modifications:                                                          *
.  *        V10.14.01 06/03/2019 Jill Parkinson Task 0863524                  *
.  *                  Removed index 1, changed second index to include theatre*
.  *        V9.04.01 17/08/2004 Lina Vo         CAR 52746                     *
.  *                            Added Hospital ID and 2nd index.              *
.  ****************************************************************************
.  *                 16/07/2003 Sylvek Litewka  CAR 38345                     *
.  *                            Added OPSMDGSI-Day/General Surgery Indicator  *
.  *                 28/05/2001 Dean Cramer                                   *
.  *                            Added OPSMSPI1,OPSMSPI2,OPSMNDLK,OPSMSTYP     *
.  *                            Increased record size to 420                  * 
.  *                 29/12/89 Bill Dew : fix year to 53 and duration form4    *
.  *                 08/01/90 BilL DEW  addition of audits                    *
.  *                 05/10/90 Bill Dew : Fix for New theatre system.          *
.  *                 23/07/91 ROD       SRF 109233  Quote 6995                *
.  *                          Added OPSMXDOC                                  *
.  *                 28/08/91 J.Tan      Added session status                 *
.  ****************************************************************************
.Audit File Definition
.---------------------
OPRAUDSM  IFILE     SQL, FIXED=275, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSMAUDD  DIM       8         8       1        Date of change
OPSMAUDT  DIM       8         8       9        Time of change
OPSMAUDP  DIM       2         2       17       Port doing change
OPSMAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPSMAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPSMAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRSEMA1  IFILE     SQL, FIXED=250, KEY="U220-222,1-6,7-7,8-12,82-87"
OPRSEMA2  IFILE     SQL, FIXED=250, KEY="U1-6,7-7,8-12,82-87,220-222"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPSMCLIN  DIM       6        6        1        Clinic/Surgeon
DOPSMDAY  DIM       1        1        7        Day Indicator
.                                                   1 = Monday
.                                                   2 = Tuesday
.                                                   3 = Wednesday
.                                                   4 = Thursday
.                                                   5 = Friday
.                                                   6 = Saturday
.                                                   7 = Sunday
OPSMTIME  DIM       5        5        8        Start Time
OPSMFTYP  FORM      1        2        13       Frequency Type
.                                                   0 = Month
.                                                   1 = Year
OPSMMRFQ  DIM       5        5        15       Month Frequency
OPSMYRFQ  DIM       53       53       20       Year Frequency
OPSMDURA  FORM      4        3        73       Duration
OPSMTPER  DIM       3        3        76       Time Period (Category SP)
OPSMTYPE  DIM       3        3        79       Specialty (Category ST)
OPSMTHET  DIM       6        6        82       Operating Room Code
OPSMENDT  DIM       5        5        88       End Time of Session
OPSMBRKT  FORM      3        3        93       Time for Breaks (min)
OPSMPREP  FORM      2        2        96       Preparation time /patient
OPSMANAE  DIM       6        6        98       Usual Anaesthetic
OPSMXDOC  DIM       6        6        104      Extra doctor for team
OPSMSTAT  FORM      1        2        110      Status
.                                              0 = Active
.                                              1 = Inactive
OPSMSPI1  DIM      50       50        112      Special Instructions 1  
OPSMSPI2  DIM      50       50        162      Special Instructions 2  
OPSMNDLK  DIM       2        2        212      Number of Days to Lock Session
OPSMSTYP  DIM       3        3        214      Session Type (category TU)
OPSMDGSI  DIM       3        3        217      Day/General Surgery Ind (Cat YD)
OPSMHOSP  DIM       3        3        220      Hospital ID (pathspaf)
OPSMSPAR  DIM      27       27        223      Spare
.
.End of Record                        250
.
. Redefine form fields from key
. -----------------------------
OPSMDAYI  FORM      1
.
