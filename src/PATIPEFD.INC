.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATIPEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Invoices Pending                                *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patipenf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *     V10.03.01  08/05/2012 J.Tan          CAR 284289                *
.  *                Added Status for Change Adm.date and Cancel Movement*
.  *     V10.01.01  24/11/2010 Ebon Clements  CAR 233198                *
.  *                Added reason for hold and record status             *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change Admission to 8 characters          *
.  *                    V5.02 03.09.90 K.Peak      (IBA)                *
.  *                          Added IPSYSTM type 5 - day centre         *
.  *                                                                    *
.  **********************************************************************
.
PATIPEN1   IFILE SQL, FIXED=150, KEY="U1-8"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DIPADMNO   DIM       8           8         1      ADM NO WITH INVOICES PENDING
IPSYSTM    FORM      1           2         9      SYSTEM INDICATOR
.                                                    1 = A + E
.                                                    2 = Outpatients
.                                                    3 = Inpatients
.                                                    4 = Other Financial
.                                                    5 = Day Centre     
IPSITE     DIM       6           6        11      SITE CODE (OUTPATIENTS ONLY)
PTIPRHLD   DIM       3           3        17      Reason for Hold (Cat rh)
PTIPRDES   DIM       80          80       20      Reason for Hold Free Text
PTIPRSTA   DIM       1           1        100     Record Status
.                                                 1 - Admission
.                                                 2 - Undischarge
.                                                 3 - Change of Discharge Date
.                                                 4 - Update Discharge
.                                                 5 - Bed Fee Update
.                                                 6 - Credit 
.                                                 7 - Add Item
.                                                 8 - Change of Admission Date
.                                                 9 - Cancel Movement
PTIPSVAR   DIM       49          49       101     Spare Variable
.
.End of Record                            150
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
IPADMNO    FORM         8             1      ADM NO WITH INVOICES PENDING
