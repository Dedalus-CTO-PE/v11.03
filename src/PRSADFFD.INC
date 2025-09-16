. ******************************************************************************
. *                                                                            *
. *  Include Name  : PRSADFFD.INC                                              *
. *                                                                            *
. *  Function      : File Definition include for Patient                       *
. *                  YTD Advised for Previous Month Figures                    *
. *  File Type     : SQL                                                       *
. *                                                                            *
. *  File Name     : prsadfaf.dat                                              *
. *                                                                            *
. *  Keys          : KEY 10                                                    *
. *                                                                            *
. *  Modifications :                                                           *
. ******************************************************************************
.
PRSADFA1  IFILE     SQL, FIXED=23, KEY="U1-8,9-10"
.
. NAME    TYPE      LENGTH   PHYS.  START  DESCRIPTION
. ----    ----      ------   -----  -----  ------------------------
PRAFDATE  DIM       8            8      1  Date figures current upto
PRAFREFR  DIM       2            2      9  Reference field
.                                             Public Hospital
.                                                1 = Public - Acute
.                                                2 = Private - Acute Private
.                                                3 = Compensable - Acute
.                                                4 = Ineligible - Acute
.                                                5 = Public NHT with NH5
.                                                6 = Public NHT without NH5
.                                                7 = Private NHT with NH5
.                                                8 = Private NHT without NH5
.                                                9 = Compensable - Non Acute
.                                               10 = Ineligible - Non Acute
.                                             Private Hospital
.                                                1 = Private - Acute
.                                                2 = Private - Nursing Home Type
.                                                3 = Compensable
.                                                4 = Ineligible
.                                                5 = Public - Under Contract
.                                                6 = Private - Under Contract
PRAFSEPS  FORM      6       4       11        Public Hospital
.                                                Last Month YTD Separations
.                                             Private Hospital
.                                                Last Quarter YTD Separations
PRAFBDAY  FORM      6       4       15        Public Hospital 
.                                                Last Month Bed Days
.                                             Private Hospital
.                                                Last Quarter Bed Days
PRAFSAME  FORM      6       4       19        Public Hospital 
.                                                Last Month Same Day Patients
.                                             Private Hospital
.                                                Last Quarter Same Day Patients
.
.End of record                       23
