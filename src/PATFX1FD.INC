.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFX1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    PATIENT HEALTH FUND EXTENSION TABLE             *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfx1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  **********************************************************************
.  *     V11.03.01  09/03/2023  Jacob Jackson  TSK 0911166              *
.  *                Add PTFXOHDT, PTFXOHTM & PTFXOHUI for On Hold       *
.  *                functionality.                                      *
.  *     V11.02.01  11/03/2022  Thanh T.       TSK 0818139              *
.  *                Added Is GST applicable flag (PTFXGSTA) and GST     *
.  *                payable code (PTFXGSTC) fields                      *
.  **********************************************************************
.  *     V11.01.01  03/11/2021 J.Tan           TSK 0880410              *
.  *                Moved PTFXRHCD,PTFXRHFT,PTFXHDAT to patfhiaf file   *
.  **********************************************************************
.  *     V10.11.01  25/09/2017 Steve Armstrong TSK 0845865              *
.  *                Added PTFXSMOR and reduced length of PTFXSPAR.      *
.  **********************************************************************
.  *     V10.07.01  21/10/2015 J.Tan            CAR 315453              *
.  *                Added PTFXMFEE - Make Primary Based on MBS Fee      *
.  **********************************************************************
.  *     V10.04.01  18/12/2013 Ania P           CAR 294311              *
.  *                Moved PTFXHDAT out of SPARE                         *
.  **********************************************************************
.  *     V10.03.01  14/05/2012 J.Tan            CAR 255708              *
.  *                Added PTFXHDAT - Hold Invoices From date            *
.  **********************************************************************
.  *     V10.01.01  03/11/2010 Peter Vela       CAR 233037              *
.  *                Added PTFXCEFR - Contracts Effective From           *
.  *                Added PTFXRHCD - Reason for Hold Code               *
.  *                Added PTFXRHFT - Reason for Hold Free Text          *
.  **********************************************************************
.  *     V9.12.01   18/08/2009  Peter Vela      CAR 203723              *
.  *                Added PTFXECLP - Eclipse Participant                *
.  **********************************************************************
.  *     V9.11.01   21/11/2008  Ebon Clements   CAR 183976              *
.  *                Added PTFXSCEM to PTFXSCPP                          *
.  **********************************************************************
.  *     V9.08.01   22/11/2006  Mike Laming     CAR 103368              *
.  *                Change descriptions on PTFXEXTR                     *
.  **********************************************************************
.  *     V9.07.02   21/08/2006 Davin S          CAR 117071              *
.  *                Added new option for EDI - 'extract zero invoices'  *
.  *     V9.07.01   13/07/2006 Ebon Clements    CAR 103368              *
.  *                Added foreign address                               *
.  **********************************************************************
.  *     V9.03.01   15/03/2004 Steve Armstrong  HosClaims Phase 1       *
.  *                Ported FD from 6.11         CAR 48280               *
.  **********************************************************************
.  *     V6.10.01   01/10/2002 Tracey Nguyen  SRF20135 HOSClaims Phase#1*
.  *                Created FD                                          *
.  *                                                                    *
.  **********************************************************************
.
PATFX1A1   IFILE SQL, FIXED=576, KEY="U1-6"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
PTFXHFND   DIM       6           6         1      Health Fund Code
PTFXEXTR   FORM      2           2         7      EDI Extract Flag
.                                                 0 = Not running EDI extract
.                                                 1 = Run HOSClaims EDI extract
.                                                   or Singapore MediSave H/Fund
.                                                 2 = Sing. MediShield InsurCoy
.                                                 3 = Eclipse Gateway Claiming
PTFXTFLG   DIM       1           1         9      EDI Test Flag
.                                                 Blank = Not using EDI 
.                                                 "T" = Test 
.                                                 "P" = Production
PTFXADDR   DIM      60          60        10      EDI Address
PTFXSUBJ   DIM      30          30        70      EDI Subject
PTFXADD1   DIM      35          35       100      Foreign Address Line 1
PTFXADD2   DIM      35          35       135      Foreign Address Line 2
PTFXADD3   DIM      35          35       170      Foreign Address Line 3
PTFXADD4   DIM      35          35       205      Foreign Address Line 4
PTFXPOST   DIM       8           8       240      Foreign Postcode
PTFXZINV   DIM       1           1       248      EDI Zero Invoice Flag
.                                                 0 = Don't send zero invoices
.                                                 1 = Send zero invoices
PTFXSCEM   DIM      80          80       249      Eclipse Sender Contact Email
PTFXSCPN   DIM      40          40       329      Eclipse Sender Contact Name
PTFXSCPP   DIM      20          20       369      Eclipse Sender Contact Phone
PTFXECLP   DIM       3           3       389      Eclipse Participant
PTFXCEFR   DIM       1           1       392      Contracts Effective From 
.                                                 (valid options are)
.                                                 0 - As at the effective date
.                                                 1 - For Admissions From
.                                                 2 - For Discharges From
PTFXRHCD   DIM       3           3       393      Reason for Hold (Cat rh)
PTFXRHFT   DIM      80          80       396      Reason for Hold Free Text
PTFXHDAT   DIM       8           8       476      Hold Invoices From date
PTFXMFEE   DIM       1           1       484      Make Primary Based on MBS Fee
.                                                 blank or 0-No, 1-Yes
PTFXSMOR   DIM       1           1       485      Sending Eclipse IHC MOR
.                                                 segment
.                                                  0 or Blank = No
.                                                  1 = Yes
PTFXGSTA   DIM       1           1       486      Is GST applicatable
.                                                 blank or 0-No, 1-Yes
PTFXGSTC   DIM       6           6       487      GST payable code
PTFXOHDT   DIM       8           8       493      On Hold Last Update Date
PTFXOHTM   DIM       8           8       501      On Hold Last Update Time
PTFXOHUI   DIM      10          10       509      On Hold Last Update User ID
PTFXSPAR   DIM      57          57       519      Spare Variable
.
.End of Record                           576
.
. The following field is using spare variable
.
