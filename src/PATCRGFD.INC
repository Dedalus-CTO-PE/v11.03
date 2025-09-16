. ******************************************************************************
. *                                                                            *
. * Include Name  : PATCRGFD.INC                                               *
. *                                                                            *
. * Function      : File Definition include for Patient                        *
. *                 Cancer Registration Header                                 *
. *                                                                            *
. *                                                                            *
. * File Type     : SQL                                                        *
. * File Name     : patcrgaf.dat                                               *
. * Keys          : Key 8, Key 16                                              *
. *                                                                            *
. * Modifications : V9.02.01  08/07/2002  Pat Dirito  SRF 18264                *
. *                 Added Converted record(Y/N), Primary Site and              *
. *                 Histological Site                                          *
. *                 V5.03.01  08/06/1995  Matt                                 *
. *                 Changed fild name                                          *
. ******************************************************************************
.
PATCRGA1  IFILE     SQL, FIXED=50, KEY="U1-8"
PATCRGA2  IFILE     SQL, FIXED=50, KEY="U9-16,1-8"
.
. Name     Type      Length  Phys.  Start  Description
. -------  ----      ------  -----  -----  ----------------------------------
DPTCRADN  DIM       8          8       1  PATIENT ADMISSION NO.
PTCRURNO  DIM       8          8       9  PATIENT U.R NO.
PTCRMULT  DIM       3          3      17  Mulitple Primaries.
PTCRSTAY  FORM      2          2      20  Length to stay in NZ (Yrs.) 
PTCRVERT  DIM       1          1      22  Converted Record 0=No 1=Yes
PTCRPRIM  DIM       9          9      23  Primary Site (ICD10 Code)
PTCRHIST  DIM       9          9      32  Histological Site (ICD10 Code)
PTCRSPAR  DIM       9          9      41  Spare
.
.End of Record                        50
.
.  redefine form fields for key
.  ----------------------------
. Name     Type      Length  Description
. -------  ----      ------  ---------------------
PTCRADNO  FORM      8       PATIENT ADMISSION NO.
.
