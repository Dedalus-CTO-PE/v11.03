.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBAVARFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for IBA Variable        *
.  *                    Definition File for User Defined Stationery     *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibavaraf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 33, KEY 8                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V10.04.01  18/02/2014  Steve Armstrong  297506                *
.  *                 Updated Stationery Type List values                *
.  *      C2.00.03   21/03/2006  Peter Vela CAR 61299                   *
.  *                 Made DIBVRFNM DIM5 , IBVRFNUM FORM5                *
.  *      C2.00.02   27/06/2000  Charles Handaya                        *
.  *                 Added new Stationery Types 15 & 16 for Cash Receipt*
.  *      C2.00.01   06/05/2000  Charles Handaya                        *
.  *                 Added new Stationery Types 13 & 14 for Debtor      *
.  *      C2.00.00   23/02/2000  Davin                                  *
.  *                 - Combined releases 5 & 6 (all stationery types)   *
.  *                                                                    *
.  **********************************************************************
.
IBAVARD1  IFILE     SQL, FIXED=70, KEY="U1-3,4-33"
IBAVARD2  IFILE     SQL, FIXED=70, KEY="U1-3,34-38"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
DIBVRTYP   DIM      3         3          1        Stationery Type 
.                                                   1 = MR3 (O/P)
.                                                   2 = MR5 (A&E)
.                                                   3 = MR10 (I/P)
.                                                   4 = Medical Record Request
.                                                   5 = Health Fund Claim Form
.                                                   6 = Cancer Reg Form
.                                                   7 = Emergency
.                                                   8 = ACC Form
.                                                   9 = PAT Invoice Header
.                                                  10 = PAT Invoice Tail
.                                                  11 = PRI Invoice Header
.                                                  12 = PRI Invoice Tail
.                                                  13 = Debtors Header
.                                                  14 = Debtors Tail
.                                                  15 = Cash Receipt Header
.                                                  16 = Cash Receipt Tail
.                                                  17 = Loan Equipment
.                                                  18 = Theatre Form
.                                                  19 = Assessment Forms
.                                                  20 = Medical Booking
.                                                  21 = Reserved
.                                                  22 = Reserved
.                                                  23 = Reserved
.                                                  24 = Reserved
.                                                  25 = Reserved
.                                                  26 = Reserved
.                                                  27 = Reserved
.                                                  28 = Reserved
.                                                  29 = Reserved
.                                                  30 = Reserved
.                                                  31 = Reserved
.                                                  32 = Reserved
.                                                  33 = Reserved
.                                                  34 = Reserved
.                                                  35 = Reserved
.                                                  36 = Reserved
.                                                  37 = Reserved
.                                                  38 = Reserved
.                                                  39 = Reserved
.                                                  40 = Order Special Services
.                                                  41 = Order Cancellation
.                                                  42 = Medication Order
.                                                  43 = Dis Summ. Req/Incomp Dis
.                                                  44 = Allied Health
.                                                  45 = Not currently in use
.                                                  46 = Not currently in use
.                                                  47 = Not currently in use
.                                                  48 = Not currently in use
.                                                  49 = Not currently in use
.                                                  50 = Not currently in use
.                                                  51 = Pathology Order
.                                                  52 = Pathology Test
.                                                  53 = Not currently in use
.                                                  54 = Radiology Order
.                                                  55 = Radiology Test
.                                                  56 = Input Completed Menu
.                                                  57 = Modify Completed Menu
.                                                  58 = Changes to Diet Code
.                                                  59 = Alter to Diet Code
.                                                  60 = Order a Printed Menu
.                                                  61 = Stock Order
.                                                  62 = Stock Order Detail(Ward)
.                                                  63 = Stock Order Det.(Stores)
.                                                  64 = Order Equipment
.                                                  65 = Order Equipment Detail
.                                                  66 = Return Equipment
.                                                  67 = Accept/Dispatch Med. Rec
.                                                  68 = Reserve Medical Record
.                                                  69 = Leave Notification
.                                                  70 = Return From Leave
.                                                  71 = Death Notification
.                                                  72 = Discharge Notification
.                                                  73 = Bed Transfers
.                                                  74 = Theatre Booking
.                                                  75 = Request O/P Booking
.                                                  76 = Priv. Prac. Form & NHCF
.                                                  77 = Not currently in use
.                                                  78 = Not currently in use
.                                                  79 = Not currently in use
.                                                  80 = Change to Order Priority
IBVRDESC   DIM      30        30         4        Variable Description
DIBVRFNM   DIM      5         5         34        Field No.
IBVRFLEN   FORM     3         3         39        Field Length
IBVRSPAR   DIM      28        28        42        Spare Variable
.
.End of Record                          70  
.
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
IBVRSTYP    FORM       3          1       Stationery Type
IBVRFNUM    FORM       5          34      Field No.
.
