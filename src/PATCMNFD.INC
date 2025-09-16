.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCMNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Comments                                        *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patcmntf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 10                                          *
.  *                                                                    *
.  *     Modifications: V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.02 01.06.89 K.Peak      (IBA)                *
.  *                          Change Admission to 8 characters          *
.  *                                                                    *
.  **********************************************************************
.
PATCMNT1   IFILE SQL, FIXED=81, KEY="U1-8,9-10"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DPCADMN    DIM      8            8        1       ADMISSION NUMBER
DPCLNO     DIM      2            2        9       LINE NUMBER ON CURRENT PAGE
PCLINE     DIM      70          70        11      COMMENT LINE
.
.End of Record
.
.          Variables used in comments maintenance
.
PCENDP     FORM        2
PCDIM127   DIM         127
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
PCADMN     FORM        8             1       ADMISSION NUMBER
PCLNO      FORM        2             9       LINE NUMBER ON CURRENT PAGE
