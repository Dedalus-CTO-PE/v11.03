.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATRE1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Person Responsible for Account                  *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patre1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *  **** Programmer Note **************                               *
.  *       Any changes to this FD may also need to be made in PMSQVIFD. *
.  *       Please check this before proceeding.                         *
.  *                                                                    *
.  *                V11.00.01 31.03.2020  J.Tan          TSK 0868813    *
.  *                          Changed PKNAME from DIM30 to DIM80        *
.  *                V10.02.01 17.05.2012  J.Tan          CAR 239592     *
.  *                          Added Surname and Given name              *
.  *                 V9.11.01 23.12.2008  Ebon Clements  CAR 184296     *
.  *                          Changed PKNAME from 20 to 30 characters   *
.  *                    V9.10 04.06.2008  Ebon Clements  CAR 151025     *
.  *                          Added PTREMOBL and PTRESPAR               *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 02.06.89 K.Peak      (IBA)                *
.  *                          Change Admission to 8 characters          *
.  *                    V5.02 12/01/94 I.Rutt                           *
.  *                          Changed address fields to original length *  
.  *                                                                    *
.  **********************************************************************
.
PATRE1A1   IFILE SQL, FIXED=437, KEY="U1-8"
.
.NAME     TYPE     LENGTH    PHYSICAL   START      DESCRIPTION
.----     ----     ------    --------   -----      -----------
DPKADMN   DIM          8           8        1      PATIENT ADMISSION NUMBER
PKNAME    DIM         80          80        9      PERSON RESP FOR A/C NAME
PKADD1    DIM         35          35       89      P.R.A ADDRESS LINE 1
PKADD2    DIM         35          35      124      P.R.A ADDRESS LINE 2
PKSUBR    DIM         35          35      159      P.R.A SUBURB
PKADD4    DIM         35          35      194      P.R.A ADDRESS LINE 4
PKPOST    DIM          8           8      229      P.R.A POSTCODE
PKTELEP   DIM         20          20      237      P.R.A PRIVATE TELEPHONE 
PKTELEB   DIM         20          20      257      P.R.A BUSINESS TELEPHONE 
PKRELP    DIM         10          10      277      P.R.A RELATIONSHIP
PTREMOBL  DIM         20          20      287      P.R.A MOBILE TELEPHONE
PTRESNAM  DIM         40          40      307      Surname or
.                                                  Contact Name for Insurance
PTREGNAM  DIM         40          40      347      Given Name
PTRESPAR  DIM         50          50      387      SPARE        
.
.End of Record                            437
.
.  redefine form fields for key
.  ----------------------------
.NAME     TYPE     LENGTH    START      DESCRIPTION
.----     ----     ------    -----      -----------
PKADMN    FORM        8         1       PATIENT ADMISSION NUMBER
.
