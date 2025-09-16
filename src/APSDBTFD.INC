. *********************************************************
. *                                                       *
. * Include Name :  APSDBTFD                              *
. *                                                       *
. * Function     :  File Definition Include for           *
. *                 Direct Bank Transfer Datafile         *
. *                                                       *
. * File Type    :  ASCII                                 *
. *                                                       *
. * File Name    :  dbtfilef.dat                          *
. *                                                       *
. * Modifications:  V6.00  02.08.96  B.G.Ackland (I.B.A.) *
. *                        Copy from Payroll              *
. *                                                       *
. *********************************************************
DBTFILE FILE  ASCII, FIXED=121
DBTHEAD FILE  ASCII, FIXED=121
DBTEOF  FILE  ASCII, FIXED=121
.
ABA         INIT     "ABA"
HDR         INIT     "HDR"
EOF         INIT     "EOF"
.
.Name       Type     Length   Position    Description
.
.------------------------------------------------------------------------------
.                    DESCRIPTIVE Record
.------------------------------------------------------------------------------
.
S0RECTYP    FORM      "0"           1     Record Type 0
S0FILL1     INIT      "                 "
.                                2-18     Blanks (17)
S0RLSEQ     DIM         2       19-20     Reel Sequence No.
S0BNKNAM    DIM         3       21-23     User's Bank Name
S0FILL2     INIT      "       "
.                               24-30     Blanks (7)
S0USRNAM    DIM        26       31-56     Name of User supplying tape
S0USRNUM    DIM         6       57-62     Number of User supplying tape
S0DESC      DIM        12       63-74     Description of entries on tape
S0DATE      DIM         6       75-80     Processing Date in DDMMYY format
S0FILL3     INIT      "                                        "
.                              81-120     Blanks (40)
.
.End of Record                    121
.
.------------------------------------------------------------------------------
.                    DETAIL Record
.------------------------------------------------------------------------------
.
S1RECTYP    FORM      "1"           1     Record Type 1
S1BSBNUM    DIM         7         2-8     Bank/State/Branch Number (XXX-XXX)
S1ACCNUM    DIM         9        9-17     Credit/Debit Account Number
S1INDCTR    INIT      " "          18     Indicator (usually blank)
S1TRCODE    FORM        2       19-20     Transaction Code
S1AMOUNT    DIM        10       21-30     Amount (in cents without punctuation)
S1ACTITL    DIM        32       31-62     Credit/Debit Account Title
S1LDGREF    DIM        18       63-80     Lodgement Reference
S1TRCBSB    DIM         7       81-87     Trace BSB No. (XXX-XXX)
S1TRCACC    DIM         9       88-96     Trace Account No.
S1REMNAM    DIM        16      97-112     Name of Remitter (entry originator)
S1WHTAX     INIT   "00000000" 112-120     Amount of Withholding Tax (cents)
.
.End of Record                    121
.------------------------------------------------------------------------------
.                    FILE TOTAL Record
.------------------------------------------------------------------------------
.
S7RECTYP    FORM      "7"           1     Record Type 7
S7BSBNUM    INIT      "999-999"   2-8     Bank/State/Branch Number (999-999)
S7FILL1     INIT      "            "
.                                9-20     Blanks (12)
S7BRHNET    DIM        10       21-30     File NET Total Amount
S7BRHCRE    DIM        10       31-40     File CREDIT Total Amount
S7BRHDEB    DIM        10       41-50     File DEBIT Total Amount
S7FILL2     INIT       "                        "
.                               51-74     Blanks (24)
S7RECCNT    DIM         6       75-80     Total no of Type 1 records for File
S7FILL3     INIT       "                                        "
.                              81-120     Blanks (40)
.
.End of Record                    121
.
. New Zealand Transfer Format
.
DBTRECNZ    DIM       127                 Output to File for Comma Sep Values
S1NZACC     DIM       16                  Account Number
S1NZOPC     DIM       12                  Other Party code for HWK
NZUNIQID    FORM      6
NZHASH11    FORM      11                  Hash Total Calculation Field
NZHASHTT    FORM      16                  Hash Total Calculation Field
.
