. V10.04.01 30/12/2013 Patrick Adair       CAR 294445
.           Moved PTINARCE out of spare variable
. V10.03.01 10/10/2012 Patrick Adair       CAR 273294
.           Added AROC Equivalent Code
. V10.02.01 13/05/2010 J.Tan               CAR 239592
.           Added Fax number, email address, service code and claim type
. V10.00.01 10/05/2010 Steve Armstrong     CAR 169939
.           Added PTINACTV and PTINSPAR
. V9.11.01  15/12/2008 Ebon Clements       CAR 183976
.           Added PTINSCEM to PTINSCPP
. V9.04.01  03/08/05 J.Tan                 CAR 62750
.           Removed redefined amount variables
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIN1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Insurance Details                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patin1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 12 , KEY 6                                  *
.  *                                                                    *
.  **********************************************************************
.
PATIN1A1   IFILE SQL, FIXED=558, KEY="U1-6"
PATIN1A2   IFILE SQL, FIXED=558, KEY="U251-256,1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
ICODE      DIM       6           6         1      INSURANCE NUMBER
INAME      DIM      30          30         7      INSURANCE NAME
IADD1      DIM      35          35        37      INSURANCE ADDRESS LINE 1
IADD2      DIM      35          35        72      INSURANCE ADDRESS LINE 2
IADD3      DIM      35          35       107      INSURANCE ADDRESS LINE 3
IADD4      DIM      35          35       142      INSURANCE ADDRESS LINE 3
IPOST      DIM       8           8       177      INSURANCE POSTCODE
ICONT      DIM      30          30       185      INSURANCE CONTACT
ITELEB     DIM      20          20       215      TELEPHONE - BUSINESS
IBILL      FORM    12.2          8       235      AMOUNT TO BE BILLED
IAOUT      FORM    12.2          8       243      AMOUNT OUTSTANDING
ISORT      DIM      6            6       251      SORT KEY
PTINSCEM   DIM      80          80       257      ECLIPSE SENDER CONTACT EMAIL
PTINSCPN   DIM      40          40       337      ECLIPSE SENDER CONTACT NAME
PTINSCPP   DIM      20          20       377      ECLIPSE SENDER CONTACT PHONE
PTINACTV   DIM       1           1       397      Active Flag
.                                                   0 or Blank = Yes
.                                                   1 = No
PTINFAXN   DIM      20          20       398      Fax Number
PTINEMAI   DIM      80          80       418      Email Address
PTINSERV   DIM       3           3       498      Service Code (Cat Ve)
PTINCLAI   DIM       3           3       501      Claim Code (Cat CL)
PTINARCE   DIM       3           3       504      AROC Equivalent Code
PTINSPAR   DIM      51          51       507      Spare Variable
.
.End of Record                           558
.
.           SPARE VARIABLES
.
SICODE      DIM      6                    INSURANCE NUMBER
SINAME      DIM     30                    INSURANCE NAME
SIADD1      DIM     35                    INSURANCE ADDRESS LINE 1
SIADD2      DIM     35                    INSURANCE ADDRESS LINE 2
SIADD3      DIM     35                    INSURANCE ADDRESS LINE 3
SIADD4      DIM     35                    INSURANCE ADDRESS LINE 4
SIPOST      DIM      8                    INSURANCE POSTCODE
SICONT      DIM     30                    INSURANCE CONTACT
SITELEB     DIM     20                    TELEPHONE - BUSINESS
SIBILL      FORM   12.2                   AMOUNT TO BE BILLED
SIAOUT      FORM   12.2                   AMOUNT OUTSTANDING
SISORT      DIM     6                     SORT KEY
.
