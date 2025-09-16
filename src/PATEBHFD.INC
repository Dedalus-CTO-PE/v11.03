. ************************************************************************
. *                                                                      *
. *  Include Name : PATEBHFD.INC                                         *
. *                                                                      *
. *  Function     : File definition include for the EDI batch header     *
. *                 file                                                 *
. *                                                                      *
. *  File Type    : SQL                                                  *
. *                                                                      *
. *  File Name    : patebhaf.dat                                         *
. *                                                                      *
. *  Keys         : KEY8                                                 *
. *                                                                      *
. *  Modifications:                                                      *
. *  V9.08.01  22/11/2006  Mike Laming    CAR 103368                     *
. *            Add more descriptions to DPTEHEET for CCPS EDI Extract    *
. *  V9.03.01  22/03/2004  Steve Armstrong   Phase 2 HosClaims (48453)   *
. *            Modified values for DPTEHFLG                              *
. *               0 = Extracted                                          *
. *               1 = Sent (to Fund)                                     *
. *               2 = Acknowledged (received by Fund)                    *
. *               3 = Negative Acknowledgement (not received by Fund)    *
. *            15/03/2004  Steve Armstrong   HosClaim Phase 1 (CAR 48280)*
. *            Added PTEHEFNM & DPTEHFLG                                 *
. *  V5.08.00  06/07/2000  Greg Horvat                                   *
. *            Ported from release 6.07                                  *
. *  V6.06.01  17/11/1999  Andrew Peel                                   *
. *            Added PTEHEETP - EDI extract type                         *
. *                                                                      *
. ************************************************************************
.
PATEBHA1  IFILE     SQL, FIXED=100, KEY="U1-8"
PATEBHA2  IFILE     SQL, FIXED=100, KEY="U82-83,1-8"
.
.Name     Type   Length  Physical  Start Loc.  Description
.----     ----   ------  --------  ----------  -----------
PTEHBTHN  DIM       8        8          1      Batch no
PTEHHFGP  DIM       6        6          9      Health fund group
PTEHSTDT  DIM       8        8         15      Start date (ccyymmdd)
PTEHEDDT  DIM       8        8         23      End date (ccyymmdd)
PTEHBHTL  FORM    12.2       8         31      Batch total
PTEHTRIB  FORM      6        4         39      Total records in batch
PTEHDTBC  DIM       8        8         43      Date batch created (ccyymmdd)
PTEHTMBC  DIM       8        8         51      Time batch created (hh:mm:ss)
PTEHOPER  DIM       4        4         59      Operator
DPTEHEET  DIM       1        1         63      EDI extract type
.                                                0 - Health fund
.                                                1 - TAC
.                                              CCPS Extract                   
.                                                0 = Medical only             
.                                                1 = Claims
.                                                2 = Cancellations
PTEHEFNM  DIM       18       18        64      Extract Filename
DPTEHFLG  DIM       2        2         82      Extract Flag
.                                                0 = Extracted
.                                                1 = Sent (to Fund)
.                                                2 = Acknowledged (received by
.                                                    Fund)
.                                                3 = Nack (not received by Fund)
.                                               ?? = Processed
PTEHSPAR  DIM       16       16        84      Spare variable
.
.End of Record                        100
.
. Redefine form fields from key
. -----------------------------
. Name    Type   Length  Start Loc.  Description
. ----    ----   ------  ----------  -----------
PTEHEETP  FORM      1        63      EDI extract type
PTEHFLAG  FORM      2        82      Extract Flag
+
.

