.  **********************************************************************
.  *                                                                    *
.  *     Include Name : BOKSTAFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Def'n Include for Booking                  *
.  *                    Booking Statistics                              *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : bokstaaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 9                                           *
.  *                                                                    *
.  *     Modifications: V5.00 04.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.           INC       BOKSTAIO.INC
.
BOKBSTA1    IFILE  SQL, FIXED=64, KEY="U1-3,4-9"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
BSTYPE      DIM       3           3      1      Booking Type (Category BK)
BSDATE      DIM       6           6      4      Century,Year,Period (CCYYMM)
.
BSBOOKS     FORM      6           4     10      No.Bookings          (IBABOK01)
BSADMTS     FORM      6           4     14         Pre-Admissions    (IBAPAT31)
BSDELVY     FORM      6           4     18         Deliverys         (IBAMAT01)
BSUNDLV     FORM      6           4     22         Un-Delivered      (** ALL **)
.                                       UNDEL= +BSBOOKS-CANCB-CANCP-DELV
BSCANCB     FORM      6           4     26         Book Removals (IBABOK02)
BSCANCP     FORM      6           4     30      Pre-Adm Removals (IBAPAT03)
BSDSCHS     FORM      6           4     34              Discharges    (IBAPAT34)
.
BSLOCK      DIM       2           2     38      Locking Indicator
BSDEPOS     FORM      6           4     40      Dept Paid (PREAD=Y) (IBABOK01)
BSSPARE     DIM      20          20     44      Spare
.
.End of Record                          64
.
