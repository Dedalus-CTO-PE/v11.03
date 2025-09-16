. *************************************************************************
. *                                                                       *
. *  Include Name :   PATFMSFD.INC                                        *
. *                                                                       *
. *  Function     :   File Def'n Include for Financial Management         *
. *                   Interface to Patient Billing                        *
. *                                                                       *
. *  File Type    :   SQL                                                 *
. *                                                                       *
. *  File Name    :   patfmsaf.dat                                        *
. *                                                                       *
. *  Keys         :   KEY5                                                *
. *                                                                       *
. *  Modifications:   V5.01 02/12/1992  Steve Armstrong Q 7437 SRF 115599 *
. *                   Mods for extra CACCFEE option (Ward/Admis. Type)    *
. *                   V5.08 15/02/2000 J.Tan                              *
. *                   Added GST                                           *
. *                   V9.02.00 18/10/2001 J.Tan                           *
. *                   Mods for casemix descriptions                       *
. *                   V9.06.01 16/05/2006 J.Tan  CAR 105459               *
. *                   Added Hospital ID                                   *
. *                   V9.08.01 09/05/2007 J.Tan  CAR 140282               *
. *                   Added Session type for Theatre (SX NZ private G/L)  *
. *                   V10.12.01 11/01/2018 J.Tan TSK 0848146              *
. *                   Added CACCFEE option (FI accummulated by Claim Type)*
. *************************************************************************
.
PATFMSA1  IFILE  SQL, FIXED=114, KEY="U100-102,1-1,2-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFMSUB   DIM       1      1        1     Report Sub Section
.                                          1 - Accommodation
.                                          2 - Theatre
.                                          3 - Misc Items
.                                          5 - Journals
PTFMCOD   DIM       13     13       2     Report Sub Section Code
.                                         All Sub Sections
.                                           Spaces = Default for sub section
.                                         Sub Section 1 
.                                         Accommodation for Non-casemix
.                                         -----------------------------
.                                         AXXX        , XXX  = Adm Type
.                                          or
.                                         AXXXYYY     , XXX  = Ward
.                                                     , YYY  = Claim Type
.                                          or
.                                         AXXXYYY     , XXX  = Ward
.                                                     , YYY  = Admission Type
.                                          or
.                                         AXXX        , XXX  = Claim Type
. 
.                                         Accommodation for Casemix
.                                         -----------------------------
.                                         CXYYY   - Lumpsum
.                                                       X    = Daycase/MSO
.                                                       YYY  = Adm Type
.                                          or
.                                         CXZZZ   - Lumpsum
.                                                       X    = Daycase/MSO
.                                                       ZZZ  = Claim Type
.
.                                         DXXX    - Daily Charge
.                                                       XXX  = Ward
.                                          or
.                                         DZZZ    - Daily Charge
.                                                       ZZZ  = Claim Type
.
.                                         G           ,      = Govt Subs
.
.                                         Sub Section 2
.                                         Theatre for NZ Private
.                                         ----------------------
.                                         FXXX        , XXX  = Session Type
.                                                              (Category TU)
.
.                                         Sub Section 3
.                                         Miscellaneous for Non-casemix
.                                         -----------------------------
.                                         MXXXYYYY    , XXX  = Misc Grp
.                                                     , YYYY = Item Code
.                                          or
.                                         MZZZXXX     , ZZZ  = Claim Type
.                                                     , XXX  = Misc Grp
.
.                                         Miscellaneous for Casemix
.                                         -----------------------------
.                                         TXYYYZZZ    , X    = Daycase/MSO
.                                                     , YYY  = Misc Grp
.                                                     , ZZZ  = Item Code
.                                          or
.                                         TXYYYZZZ    , X    = Daycase/MSO
.                                                     , YYY  = Claim Type
.                                                     , ZZZ  = Misc.Group
.                                         Sub Section 5
.                                         XX          , XX   = Journal Code
.                                         or
.
.                                         YYYXX       , YYY  = Claim Code
.                                                     , XX   = Journal Code
.
.                                         Fees Invoiced
PTFMIDI   DIM       5      5        15    Dissection
PTFMIRE   DIM       4      4        20    Responsibility
PTFMILD   DIM       2      2        24    Ledger
PTFMICA   DIM       12     12       26    Credit Account/Income Account
PTFMIDA   DIM       12     12       38    Debit Account/Debtors Control Account
PTFMIGS   DIM       12     12       50    GST Control Account
.
.                                         Fees to be Invoiced
PTFMTDI   DIM       5      5        62    Dissection
PTFMTRE   DIM       4      4        67    Responsibility
PTFMTLD   DIM       2      2        71    Ledger
PTFMTCA   DIM       12     12       73    Credit Account
PTFMTDA   DIM       12     12       85    Debit Account
.
PTFMBASC  DIM       3      3        97    BAS Code
PTFMHOSP  DIM       3      3        100   Hospital ID (pathspaf)
PTFMSPA   DIM       11     11       103   Spare
.
.End of Record                      114
.
