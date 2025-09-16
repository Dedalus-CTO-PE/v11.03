. V5.09.001 17/01/2001 BGA Make same as 6.09
. V5.08.001 15/08/2000 CS  Health Fund to be 8 characters
. V5.07.001 14/08/1998 Glenn 507 Changes
. **********************************************************************
. *                                                                    *
. *     Include Name : PATBFEFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for                     *
. *                     BED FEES FILE                                  *
. *                                                                    *
. *     File Type    : SQL                                             *
. *                                                                    *
. *     File Name    : patbfeef.dat                                    *
. *                                                                    *
. *     Keys         : KEY 26                                          *
. *                                                                    *
. *          V10.01.01 10/03/2010  J.Tan         CAR 233034            *
. *                    Mods HF table to HF Table type and add JHSBFEFD *
. *          V9.07.01  12/07/2006  Mike Laming   CAR 111521            *
. *                    Change SBFPAT & SBFHF to Form 8.2               *
. *          V9.04.01  03/08/05 J.Tan    CAR 62750                     *
. *                    Removed redefined amount variables              *
. *                                                                    *
. **********************************************************************
.
PATBFEE1   IFILE SQL, FIXED=97, KEY="U1-3,4-9,10-12,13-15,16-18,70-75,19-21"
PATBFEE2   IFILE SQL, FIXED=97, KEY="U1-3,4-9,13-15,16-18,10-12,70-75,19-21"
PATBFEE3   IFILE SQL, FIXED=97, KEY="U70-75,1-3,4-9,10-12,13-15,16-18,19-21"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
BFCLM      DIM      3            3        1       CLM CODE (CODES FILE CAT. CL)
BFHFUND    DIM      6            6        4       HEALTH FUND (PATFNDH FILE)
PTBFHTYP   DIM      3            3        10      Health Fund Table Type(Cat.HT)
BFATYPE    DIM      3            3        13      ADMISSION TYPE (CODES CAT. A)
BFBTYPE    DIM      3            3        16      BED TYPE (CODES CAT. BT)
DBFENDDY   DIM      3            3        19      HIGHEST DAY IN PERIOD
BFPAT      FORM  12.2            8        22      PATIENT PORTION OF RATE
BFHF       FORM  12.2            8        30      REBATE PORTION OF RATE
BFNINV     FORM     1            2        38      No OF INVOICES (1 OR 2 ONLY)
BFDESC     DIM     30           30        40      DESCRIPTION
PTBFCNID   DIM      6            6        70      Contract ID
BFSPARE    DIM     21           21        76      SPARE VARIABLES
.
.End of Record                            97
.
SBFCLM     DIM         3                     CLAIM CODE (CODES FILE CAT. CL)
SBFHFUND   DIM         6                     HEALTH FUND (PATFNDH FILE)
SPTBFHTY   DIM         3                     HEALTH FUND TABLE TYPE (PATFNDH)
SBFEXTFD   DIM         4                     EXTENSION FIELD
SBFATYPE   DIM         3                     ADMISSION TYPE (CODES CAT. A)
SBFBTYPE   DIM         3                     BED TYPE (CODES CAT. BT)
SBFENDDY   FORM        3                     HIGHEST DAY IN PERIOD
SBFPAT     FORM      8.2                     PATIENT PORTION OF RATE
SBFHF      FORM      8.2                     REBATE PORTION OF RATE
SBFNINV    FORM        1                     NUMBER OF INVOICES (1 OR 2 ONLY)
SBFDESC    DIM        30                     DESCRIPTION
SBFHDP     DIM         4                     **** NO LONGER USED ****
.
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
BFENDDY    FORM        3                     HIGHEST DAY IN PERIOD
.
           INC         JHSBFEFD/INC
