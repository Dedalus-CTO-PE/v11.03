. ******************************************************************************
. *                                                                            *
. *  Include Name     :  PATDLTFD.INC                                          *
. *                                                                            *
. *  Function         :  File Def'n Include for Patient                        *
. *                      Doctors Letters                                       *
. *                                                                            *
. *  File Type        :  SQL                                                   *
. *                                                                            *
. *  File Name        :  patdltaf.dat                                          *
. *                                                                            *
. *  Keys             :  KEY 6, KEY 6                                          *
. *                                                                            *
. *  I/O Include      :  PATDLTIO.INC                                          *
. *                                                                            *
. *  Author           :  Justin Coates 26/02/1991                              *
. *                                                                            *
. *  Modifications    :                                                        *
. *       V10.07.01 21/10/2015  Ebon Clements   CAR 320819                     *
. *                 Added PTDLACTV                                             *
. ******************************************************************************
.
.Data File Definition
.--------------------
.
PATDLTA1  IFILE     SQL, FIXED=99, KEY="U1-3,4-6"
PATDLTA2  IFILE     SQL, FIXED=99, KEY="U4-6,1-3"
.
. Name    Type      Length  Physical  Start  Description
. ----    ----      ------  --------  -----  -----------
DPTDLLTN  DIM       3           3         1  Letter Number
DPTDLLIN  DIM       3           3         4  Line number for letter
PTDLTEXT  DIM       70         70         7  Line of letter
PTDLLVAR  FORM      1           2        77  Variable present
.                                              1 = Yes, 0 = No
PTDLPBOT  FORM      2           2        79  Letter bottom margin
PTDLPTOP  FORM      2           2        81  Letter top margin
PTDLPPAG  FORM      2           2        83  Physical paper length (# of lines)
PTDLPTAB  FORM      2           2        85  Letter left margin
PTDLACTV  DIM       1           1        87  Active
.                                            Blank or 0 = Active, 1 = Inactive
PTDLSPAR  DIM       11         11        88  Spare variable
.End of Record                           99
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length  Description
. ----    ----      ------  -----------
PTDLLTNO  FORM      3       Letter Number
PTDLLINO  FORM      3       Line Number for letter
.
