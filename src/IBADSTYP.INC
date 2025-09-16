.
.  **************************************************************************
.  *                                                                        *
.  *     Include Name   : IBADSTYP.INC                                      *
.  *                                                                        *
.  *     Programmer     : Peter Eddey 04/07/90                              * 
.  *                                                                        *
.  *     Function       : Variables for type of order                       *
.  *                      Used by programs requiring display of             *
.  *                      available stationery & which use the              *
.  *                      IBASTPDS include.                                 *
.  *                                                                        *
.  **************************************************************************
.  * Mods     :                                                             *
.  *      V11.00.01  28/04/2020  Jill Parkinson Task 0879163                *
.  *                 Added Obsolete in V11 to all 5.18 redundant types      *
.  *      V10.03.01  25/10/2012  Patrick Adair            CAR 273181        *
.  *                 Changed "HONOS Form" to "Assessment Forms"             *
.  *      V10.00.01  20/09/2009  Jill Parkinson CAR 222489                  *
.  *                 Added Medical Booking stationery type                  *
.  *      V9.12.01   21/09/2009  Peter Vela     CAR 205008                  *
.  *                 Changed NSORTY36 description to "Private Prac NHCF"    *
.  *      V9.10.01   24/08/2008  Peter Vela     CAR 151951                  *
.  *                 Changed IBASTP17 description to "Loan Equipment"       *
.  *                 Changed NSORTY04 description to "Allied Health"        *
.  *      V9.08.01   28/08/2007  Jill Habasque  CAR 135539                  *
.  *                 Added var IBASTP19 - HONOS Form                        *
.  *      V9.08.01   20/03/2007  Peter Vela      CAR 128233                 *
.  *                 Changed NSORTY03 to Discharge Summary Request form     *
.  *      V9.04.01   17/03/2005  Lina Vo         CAR 56405                  *
.  *                 Added var IBASTP18 - Theatre Form                      *
.  **************************************************************************
.  *      V9.03.00   01/03/2004  Pat Dirito      CAR 43997                  *
.  *                 Added var IBASTP17 - Allied Health                     *
.  **************************************************************************
.  *      C2.00.02   27/06/2000  Charles Handaya                            *
.  *                 Added new Stationery Types 15 & 16 for Cash Receipt    *
.  *      C2.00.01   05/04/2000  Charles Handaya                            *
.  *                 Added new Stationery Types 13 & 14 for Debtor          *
.  *      C2.00.00   23/02/2000  Davin                                      *
.  *                 - Added NSM order types (replaces NSMDORTY)            *
.  *                 - Combined releases 5 & 6 (all stationery types)       *
.  **************************************************************************
.  *      V5.07.01   09/07/1999  Nicole Harrington                          *
.  *                 Added stationery type 7 - Emergency Form               *
.  *      V5.07.01   31/03/1999  Davin                                      *
.  *                 Added stationery type 6 - Health Fund Claim Form       *
.  *       V5.07     06/10/98  Jim Stathopoulos                             *
.  *                 507 Changes                                            *
.  **************************************************************************
.  *        V5.04.01  21/10/1996    Howellsy    EOC & ACC                   *
.  *                  Added ACC Form. Stationery Type=5                     *
.  *      V6.01.01   22/06/1994  Greg Horvat     V6.02 Upgrade              *
.  *                 Added staitionary type 5 - Health Fund Claim Form      *
.  *                                                                        *
.  **************************************************************************
.
.   
.
.
. -----  Data Variables  -----
.
. NAME     TYPE     DESCRIPTION 
. ----     -----    -----------
IBSTTYPE  FORM     3
.
IBSTPTMP  FORM     3                     * temporary variable to store
.                                          the order type
IBSTPSCR  FORM     2                     * ? routine screen number
IBSTPROW  FORM     2                     * ? routine row number
IBSTPCOL  FORM     2                     * ? routine coloumn number
IBSTPFLG  FORM     1                     * screen full flag (? routine)
.                                          0 = not full
.                                          1 = full
IBASTYP0     INIT      "Reserved"
IBASTYP1     INIT      "Outpatient"
IBASTYP2     INIT      "A & E"
IBASTYP3     INIT      "Inpatient"
IBASTYP4     INIT      "Medical Record Request"
IBASTYP5     INIT      "Health Fund Claim Form"
IBASTYP6     INIT      "Cancer Registration Form"
IBASTYP7     INIT      "Emergency"
IBASTYP8     INIT      "ACC Form"
IBASTYP9     INIT      "Invoice Header"
IBASTP10     INIT      "Invoice Tail"
IBASTP11     INIT      "PRI Invoice Header"
IBASTP12     INIT      "PRI Invoice Tail"
IBASTP13     INIT      "Debtors Header"
IBASTP14     INIT      "Debtors Tail"
IBASTP15     INIT      "Cash Receipt Header"
IBASTP16     INIT      "Cash Receipt Tail"
IBASTP17     INIT      "Loan Equipment"
IBASTP18     INIT      "Theatre Form"
IBASTP19     INIT      "Assessment Forms"                           * Car 273181
IBASTP20     INIT      "Medical Booking"
.
. ---- NSM Variables & Order Types ----
.
NSORDESC  DIM      50                    * stores the order type
.                                          description, returned by
.                                          the NSMORDES routine
.
NSORTNUM  FORM     "40"                  * stores the current number
.                                          of order types ie. if you
.                                          add an order you must update
.                                          this .
NSORTYPE  FORM     3                     * order type parameter to routine
NSORTTMP  FORM     3                     * temporary variable to store
.                                          the order type
NSORTSCR  FORM     2                     * ? routine screen number
NSORTROW  FORM     2                     * ? routine row number
NSORTCOL  FORM     2                     * ? routine coloumn number
NSORTFLG  FORM     1                     * screen full flag (? routine)
.                                          0 = not full
.                                          1 = full
.
NSORTY00  INIT      "Order Special Services (Obsolete V11)"
NSORTY01  INIT      "Order Cancellation  (Obsolete V11)"
NSORTY02  INIT      "Medication Order   (Obsolete V11)"
NSORTY03  INIT      "Dis Summry Req/Incomplete Dis"
NSORTY04  INIT      "Allied Health - Assessments  "
NSORTY05  INIT      "Not currently in use         "
NSORTY06  INIT      "Not currently in use         "
NSORTY07  INIT      "Not currently in use         "
NSORTY08  INIT      "Not currently in use         "
NSORTY09  INIT      "Not currently in use         "
NSORTY10  INIT      "Not currently in use         "
NSORTY11  INIT      "Pathology Order  (Obsolete V11)"
NSORTY12  INIT      "Pathology Test  (Obsolete V11)"
NSORTY13  INIT      "Not currently in use         "
NSORTY14  INIT      "Radiology Order  (Obsolete V11)"
NSORTY15  INIT      "Radiology Test  (Obsolete V11)"
NSORTY16  INIT      "Input Completed Menu  (Obsolete V11)"
NSORTY17  INIT      "Modify Completed Menu  (Obsolete V11)"
NSORTY18  INIT      "Changes to Diet Code  (Obsolete V11)"
NSORTY19  INIT      "Alter to Diet Code  (Obsolete V11)"
NSORTY20  INIT      "Order a Printed Menu  (Obsolete V11)"
NSORTY21  INIT      "Stock Order  (Obsolete V11)" "
NSORTY22  INIT      "Stock Order Detail (Ward) (Obsolete V11)"
NSORTY23  INIT      "Stock Order Detail (Stores) (Obsolete V11)"
NSORTY24  INIT      "Order Equipment  (Obsolete V11)"
NSORTY25  INIT      "Order Equipment Detail  (Obsolete V11)"
NSORTY26  INIT      "Return Equipment  (Obsolete V11)"
NSORTY27  INIT      "Accept/Dispatch Medical Rec.  (Obsolete V11)"
NSORTY28  INIT      "Reserve Medical Record  (Obsolete V11)"
NSORTY29  INIT      "Leave Notification  (Obsolete V11)"
NSORTY30  INIT      "Return From Leave   (Obsolete V11)"
NSORTY31  INIT      "Death Notification   (Obsolete V11)"
NSORTY32  INIT      "Discharge Notification  (Obsolete V11)"
NSORTY33  INIT      "Bed Transfers   (Obsolete V11)"
NSORTY34  INIT      "Theatre Booking  (Obsolete V11)"
NSORTY35  INIT      "Request Outpatient Booking  (Obsolete V11)"
NSORTY36  INIT      "Private Practice Form & NHCF "
NSORTY37  INIT      "Not currently in use         "
NSORTY38  INIT      "Not currently in use         "
NSORTY39  INIT      "Not currently in use         "
NSORTY40  INIT      "Change to Order Priority  (Obsolete V11)"
