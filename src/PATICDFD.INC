.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATICDFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    ICD-9CM Diseases                                      *
.  *                                                                          *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : paticddf.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 13 , KEY 9                                        *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *          V11.02.01 25/03/2022  Davin        TSK 0917793                  *
.  *                    Added include PATD12FD for ICD10 Edition 12           *
.  *          V10.14.01 14/03/2019  Don Nguyen   TSK 0869412                  *
.  *                    Added include PATD11FD for ICD10 Edition 11           *
.  *          V10.10.01 08/03/2017  Davin        TSK 0833093   HDP 2017/2018  *
.  *                    Added include PAT1XDFD for ICD10 Edition 10           *
.  *          V10.06.01 17/04/2015  Davin        CAR 311669    HDP 2015/2016  *
.  *                    Added include PAT19DFD for ICD10 Edition 9            *
.  *          V10.03.01 23/04/2013  Davin        CAR 284420    HDP 2013/2014  *
.  *                    Added include PAT18DFD for ICD10 Edition 8            *
.  *          V10.00.01 06/04/2010  Mike Laming  CAR 219246    HDP 2010       *
.  *                    Added include PAT17DFD for ICD10 Edition 7            *
.  *           V9.09.01 19/03/2008  Mike Laming  CAR 163918    HDP 2008       *
.  *                    Added include PAT16DFD for ICD10 Edition 6            *
.  *           V9.06.01 15/05/2006  Mike Laming  CAR 105244    2006 HDP       *
.  *                    Added include PAT15DFD for ICD10 Edition 5            *
.  *           V9.03.02 07/06/2004  Henry Son    CAR 49037                    *
.  *                    Added include PAT14DFD for ICD10 Edition 4            *
.  *                    Disease codes.                                        *
.  *           V9.03.01 17.11.2003  Sylvek Litewka  CAR 20222                 *
.  *                    Added include PAT13DFD for ICD10 Version 3            *
.  *                    Disease codes.                                        *
.  *              V5.00 31.03.89 J.Clark     (IBA)                            *
.  *                    Change include heading                                *
.  *                                                                          *
.  ****************************************************************************
.
PATICDD1   IFILE SQL, FIXED=143, KEY="U1-9"
PATICDD2   IFILE SQL, FIXED=143, KEY="U10-13,1-9"
PATICDD3   IFILE SQL, FIXED=143, KEY="U24-93,1-9"
.
. NAME     TYPE  LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----     ----  ------  -------- ----------   -----------
DPCODE     DIM      9          9        1      DISEASES CODE
DGPCODE    DIM      4          4       10      GROUP CODE (LEADING ZEROES)
DKEYWD     DIM     10         10       14      KEYWORD
DDESC      DIM     70         70       24      DESCRIPTION
DFLAG      DIM      1          1       94      H = HEADER RECORD-CANNOT POST TO
.                                              P = POSTING RECORD
.           what follows are the edit test
.
DAGEGP     DIM      1          1       95      AGE GROUP
.                                              " " = No age restriction
.                                              "1" = Age is specified in months,
.                                                    fatal error if within range
.                                              "2" = Age is specified in months,
.                                                  warning error if within range
.                                              "3" = Age is specified in years,
.                                                    fatal error if within range
.                                              "4" = Age is specified in years,
.                                                  warning error if within range
.                                              "5" = Age is specified in years,
.                                                   fatal error if outside range
.                                              "6" = Age is specified in years,
.                                                 warning error if outside range
.                                              "7" = Age is specified in months,
.                                                   fatal error if outside range
.                                              "8" = Age is specified in months,
.                                                 warning error if outside range
DLOW       FORM     2          2       96      LOW LIMIT
DHIGH      FORM     2          2       98      HIGH LIMIT
DSEX       DIM      1          1      100      " " = No sex restraint
.                                              "1" = If male - then fatal error
.                                              "2" = If male - then warning
.                                              "3" = If fmale - then fatal error
.                                              "4" = If female - then warning
DDAGGER    DIM      1          1      101      Valid entries " ","1 - 5"
DAREA      DIM      1          1      102      " " = No restraint
.                                              "1" = Fatal error
.                                              "2" = Warning error
DDIGITS    DIM     10         10      103      Ten occurrences correspond to the
.                                              5fth digit values 0 to 9 respec.
.                                              "Y" indicates that the digit 
.                                                corresponding to that position
.                                                is a valid fifth digit.
.                                              " " indicates that the digit 
.                                                corresponding to that position
.                                                is NOT a valid fifth digit.
.
DICD10CD   DIM        9        9      113      Mapped ICD10 disease code
ICDSPARE   DIM       21       21      122
.
.End of Record                        143
.
SDPCODE    DIM        9                  DISEASES CODE
SDGPCODE   DIM        4                  GROUP CODE (LEADING ZEROES)
SDKEYWD    DIM       10                  KEYWORD
SDDESC     DIM       70                  DESCRIPTION
SDFLAG     DIM        1                  H = HEADER RECORD-CANNOT POST TO
SDAGEGP    DIM        1                  AGE GROUP
SDLOW      FORM       2                  LOW LIMIT
SDHIGH     FORM       2                  HIGH LIMIT
SDSEX      DIM        1                  " " = No sex restraint
SDDAGGER   DIM        1                  Valid entries " ","1 - 5"
SDAREA     DIM        1                  " " = No restraint
SDDIGITS   DIM       10                  Ten occurrences correspond to the
SDICD10C   DIM        8   
.
           INC       PAT10DFD/INC
           INC       PAT13DFD/INC        * ICD10 Disease Version 3 
           INC       PAT14DFD/INC        * ICD10 Disease Edition 4 
           INC       PAT15DFD/INC        * ICD10 Disease Edition 5    *I-105244
           INC       PAT16DFD/INC        * ICD10 Disease Edition 6    *I-163918
           INC       PAT17DFD/INC        * ICD10 Disease Edition 7    *I-219246
           INC       PAT18DFD/INC        * ICD10 Disease Edition 8    *I-284420
           INC       PAT19DFD/INC        * ICD10 Disease Edition 9    *I-311669
           INC       PAT1XDFD/INC        * ICD10 Disease Edition 10   *I-0833093
           INC       PATD11FD/INC        * ICD10 Disease Edition 11
           INC       PATD12FD/INC        * ICD10 Disease Edition 12
