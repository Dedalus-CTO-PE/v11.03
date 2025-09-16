.  ****************************************************************************
.  *                                                                          *
.  *  Include Name    :   PRIFMSFD.INC                                        *
.  *                                                                          *
.  *  Function        :   File Def'n Include for Financial Management         *
.  *                      Interface to Private Practice                       *
.  *                                                                          *
.  *  File Type       :   SQL                                                 *
.  *                                                                          *
.  *  File Name       :   prifmsaf.dat                                        *
.  *                                                                          *
.  *  Keys            :   KEY18                                               *
.  *                                                                          *
.  *  Modifications   :                                                       *
.  *                      V5.08 15/02/2000 J.Tan                              *
.  *                      Added GST                                           *
.  *                      07/10/1997  Steve Armstrong                         *
.  *                      Changed length of FMPPCOD from 14 to 17             *
.  ****************************************************************************
PRIFMSA1  IFILE  SQL, FIXED=119, KEY="U1-1,2-18"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRFMSUB  DIM       1      1        1     Report Sub Section
.                                          1 - Items
.                                          2 - GST
.                                          3 - Journals
PRFMCOD   DIM       17     17       2     Report Sub Section Code
.                                         All Sub Sections
.                                           Spaces = Default for sub section
.                                         Sub Section 1 
.                                           WWW            , WWW  = Set Code
.                                           XXYYYYYYYYYZZZ ,  XX  = Item Flag
.                                                    , YYYYYYYYY  = Item Code
.                                                          , ZZZ  = Sub-Item No
.                                         Sub Section 2
.                                           Z                  = GST
.                                         Sub Section 3
.                                           XX          , XX   = Journal Code
.
.
.                                         Fees Invoiced
PRFMIDI   DIM       5      5        19    Dissection
PRFMIRE   DIM       4      4        24    Responsibility
PRFMILD   DIM       2      2        28    Ledger
PRFMICA   DIM       12     12       30    Credit Account
PRFMIDA   DIM       12     12       42    Debit Account
PRFMIGS   DIM       12     12       54    GST Control Account
.
.                                         Fees to be Invoiced
PRFMTDI   DIM       5      5        66    Dissection
PRFMTRE   DIM       4      4        71    Responsibility
PRFMTLD   DIM       2      2        75    Ledger
PRFMTCA   DIM       12     12       77    Credit Account
PRFMTDA   DIM       12     12       89    Debit Account
.
PRFMBASC  DIM       3      3       101    BAS Code
PRFMSPA   DIM       15     15      104    Spare
.
.End of Record                     119
.
.
.Redefine Form Fields from key
.-----------------------------
.
.Name     Type      Length Start Description
.----     ----      ------ ----- -----------
PRFMSUB   FORM        1      1   Report Sub Section
