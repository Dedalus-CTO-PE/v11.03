.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATICOFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    ICD-9CM Operations                                    *
.  *                                                                          *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : paticdof.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 13, KEY 9                                         *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *          V11.02.01 25/03/2022  Davin        TSK 0917793                  *
.  *                    Added include PATO12FD for ICD10 Edition 12           *
.  *          V10.14.01 14/03/2019  Don Nguyen   TSK 0869412                  *
.  *                    Added include PATO11FD for ICD10 Edition 11           *
.  *          V10.10.01 08/03/2017  Davin        TSK 0833093   HDP 2017/2018  *
.  *                    Added include PAT1XOFD for ICD10 Edition 10           *
.  *          V10.06.01 17/03/2015  Davin        CAR 311669    HDP 2015/2016  *
.  *                    Added include PAT19OFD for ICD10 Edition 9            *
.  *          V10.03.01 23/04/2013  Davin        CAR 284420    HDP 2013/2014  *
.  *                    Added include PAT18OFD for ICD10 Edition 8            *
.  *          V10.00.01 06/04/2010  Mike Laming  CAR 219246    HDP 2010       *
.  *                    Added include PAT17OFD for ICD10 Edition 7            *
.  *           V9.09.01 19/03/2008  Mike Laming  CAR 163918    HDP 2008       *
.  *                    Added include PAT16OFD for ICD10 Edition 6            *
.  *           V9.06.01 15/05/2006  Mike Laming  CAR 105244    2006 HDP       *
.  *                    Added include PAT15OFD for ICD10 Edition 5            *
.  *           V9.03.02 07/06/2004  Henry Son    CAR 49037                    *
.  *                    Added include PAT14OFD for ICD10 Edition 4            *
.  *                    Operation codes.                                      *
.  *           V9.03.01 17.11.2003  Sylvek Litewka  CAR 20222                 *
.  *                    Added include PAT13DFD for ICD10 Version 3            *
.  *                    Operation codes.                                      *
.  *              V5.00 31.03.89 J.Clark     (IBA)                            *
.  *                    Change include heading                                *
.  *                                                                          *
.  ****************************************************************************
.
PATICDO1   IFILE SQL, FIXED=147, KEY="U1-9"
PATICDO2   IFILE SQL, FIXED=147, KEY="U10-13,1-9"
PATICDO3   IFILE SQL, FIXED=147, KEY="U24-93,1-9"
.
. NAME     TYPE  LENGTH   PHYSICAL   START LOC.   DESCRIPTION
. ----     ----  ------   --------   ----------   -----------
OPCODE     DIM      9           9          1      OPERATION CODE
OGPCODE    DIM      4           4         10      GROUP CODE (LEADING ZEROES)
OKEYWD     DIM     10          10         14      KEYWORD
ODESC      DIM     70          70         24      DESCRIPTION
OFLAG      DIM      1           1         94      H = HEADER REC-CANNOT POST TO
.                                                 P = POSTING RECORD
.           what follows are the edit test
.
OAGEGP     DIM      1           1         95      AGE GROUP
.                                                 " " = No age restriction
.                                                 "1" = Age is spec in months,
.                                                      fatal error if within rng
.                                                 "2" = Age is spec in months,
.                                                    warning error if within rng
.                                                 "3" = Age is spec in years,
.                                                      fatal error if within rng
.                                                 "4" = Age is spec in years,
.                                                    warning error if within rng
.                                                 "5" = Age is spec in years,
.                                                     fatal error if outside rng
.                                                 "6" = Age is spec in years,
.                                                   warning error if outside rng
.                                                 "7" = Age is spec in months,
.                                                     fatal error if outside rng
.                                                 "8" = Age is spec in months,
.                                                   warning error if outside rng
OLOW       FORM     2           2         96      LOW LIMIT
OHIGH      FORM     2           2         98      HIGH LIMIT
OSEX       DIM      1           1        100      " " = No sex restraint
.                                                 "1" = If male - then fatal err
.                                                 "2" = If male - then warning
.                                                 "3" = If fmle - then fatal err
.                                                 "4" = If female - then warning
ODAGGER    DIM      1           1        101      Valid entries " ","1 - 5"
OAREA      DIM      1           1        102      " " = No restraint
.                                                 "1" = Fatal error
.                                                 "2" = Warning error
ODIGITS    DIM     10          10        103      Ten occur correspond to the
.                                                 5th digit values 0 to 9 respec
.                                                 "Y" indicates that the digit 
.                                                 corresponding to that position
.                                                 is a valid fifth digit.
.                                                 " " indicates that the digit 
.                                                 corresponding to that position
.                                                 is NOT a valid fifth digit.
OFEE       FORM     5           4        113      MBS sched fee for the operat
OICD10CD   DIM      9           9        117      Equiv. ICD10 Code
PTIOSPAR   DIM     21          21        126
.
.End of Record                           147
.
SOPCODE    DIM        9                  OPERATION CODE
SOGPCODE   DIM        4                  GROUP CODE (LEADING ZEROES)
SOKEYWD    DIM       10                  KEYWORD
SODESC     DIM       70                  DESCRIPTION
SOFLAG     DIM        1                  H = HEADER RECORD-CANNOT POST TO
SOAGEGP    DIM        1                  AGE GROUP
SOLOW      FORM       2                  LOW LIMIT
SOHIGH     FORM       2                  HIGH LIMIT
SOSEX      DIM        1                  " " = No sex restraint
SODAGGER   DIM        1                  Valid entries " ","1 - 5"
SOAREA     DIM        1                  " " = No restraint
SODIGITS   DIM       10                  Ten occurances correspond to the
SOFEE      FORM       5                  MBS schedule fee for the operation
SOICD10    DIM        9                  Equiv. ICD10 Code
.
           INC       PAT10OFD/INC
           INC       PAT13OFD/INC        * ICD10 Operations Version 3
           INC       PAT14OFD/INC        * ICD10 Operations Edition 4
           INC       PAT15OFD/INC        * ICD10 Operations Edition 5 *I-105244
           INC       PAT16OFD/INC        * ICD10 Operations Edition 6 *I-163918
           INC       PAT17OFD/INC        * ICD10 Operations Edition 7 *I-219246
           INC       PAT18OFD/INC        * ICD10 Operations Edition 8 *I-284420
           INC       PAT19OFD/INC        * ICD10 Operations Edition 9 *I-311669
           INC       PAT1XOFD/INC        * ICD10 Operations Edition 10*I-0833093
           INC       PATO11FD/INC        * ICD10 Operations Edition 11
           INC       PATO12FD/INC        * ICD10 Operations Edition 12
