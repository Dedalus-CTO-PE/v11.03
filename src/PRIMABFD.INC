.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIMABFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Transport Accident Commission Details         *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   primabdf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 16                                        *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIMABD1   IFILE SQL, FIXED=459, KEY="U1-8,9-16"
PRIMABD2   IFILE SQL, FIXED=459, KEY="U9-16,1-8"
.
.Name     Type      Length Physical Start Description 
.----     ----      ------ -------- ----- -----------
PRMAINVN  DIM       8      8        1     Invoice Number
DPRMAUNQ  DIM       8      8        9     Unique Claim Number
.
PRMAREFN  DIM       20     20       17    M.A.B. Reference Number
PRMAPOLS  DIM       20     20       37    Police Station Accident Reported To
PRMASOLN  DIM       30     30       57    Solictor Name 
PRMASAD1  DIM       25     25       87    Solicitor address line 1
PRMASAD2  DIM       25     25       112   Solicitor address line 2
PRMASAD3  DIM       25     25       137   Solicitor address line 3
PRMASPCD  DIM       4      4        162   Solicitor postcode
PRMASOLT  DIM       12     12       166   Solicitor Telephone
PRMAREGO  DIM       36     36       178   Car Registration Numbers Involved
PRMAALOC  DIM       40     40       214   Accident Location
PRMAATIM  DIM       5      5        254   Accident Time
PRMAENGD  DIM       20     20       259   While Engaged In
PRMAINJD  DIM       30     30       279   Patient Injured When
PRMAUDF1  DIM       3      3        309   User Defined Field 1 (Category MO)
PRMAUDF2  DIM       3      3        312   User Defined Field 2 (Category MP)
PRMAMSEV  DIM       30     30       315   Mechanism of Severist Injury
PRMARSEV  DIM       20     20       345   Region of Severist Injury
PRMAODD1  DIM       30     30       365   Other Driver Details Line 1
PRMAODD2  DIM       30     30       395   Other Driver Details Line 2
PRMAODD3  DIM       30     30       425   Other Driver Details Line 3
.
PRMASPAR  DIM       4      4        455   Spare Variable
.
.End of Record                      459
.
.
. Redefine form fields from key
. -----------------------------
.
PRMAUNIQ  FORM      8
