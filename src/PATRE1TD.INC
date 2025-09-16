. *----------------------------------------------------------------------
. *  Include Name  :   PATRE1TD.INC
. *
. *  Function      :   CGI variables for Person Responsible for Account
. *----------------------------------------------------------------------
. *
. * Modifications  :
. *       V11.00.01 02/04/2020  J.Tan             TSK 0868813
. *                 Changed PTPRA001 to DIM80
. *       V9.11.01  23/12/2008  Ebon Clements  CAR 184296
. *                 Changed PTPRA001 from 20 to 30 characters
. *       V9.10.00  Created Include - added PTPRA010 cgi var. (PTREMOBL)
. *----------------------------------------------------------------------
.
.Name     Type    Length   Description
.----     ----    ------   -----------
PTPRA001  DIM       80     PERSON RESP FOR A/C NAME 
PTPRA002  DIM       35     P.R.A ADDRESS LINE 1
PTPRA003  DIM       35     P.R.A ADDRESS LINE 2
PTPRA004  DIM       35     P.R.A SUBURB
PTPRA005  DIM       35     P.R.A ADDRESS LINE 4
PTPRA006  DIM       8      P.R.A POSTCODE
PTPRA007  DIM       20     P.R.A PRIVATE TELEPHONE
PTPRA008  DIM       20     P.R.A BUSINESS TELEPHONE
PTPRA009  DIM       10     P.R.A RELATIONSHIP
PTPRA010  DIM       20     P.R.A MOBILE TELEPHONE
.
PRAUPDFL  FORM      1                       * Update Flag
.
SPKMOBL   DIM       20                      * this should be in PATAK1FD/IO !!
