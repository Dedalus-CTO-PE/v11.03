.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATRFNFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    FINANCIAL SUMMARY FOR CASEMIX REVENUE BREAKDOWN *
.  *                    (Accommodation records only)                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patrfnaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 28                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *        V10.12.01 11/01/2018 J.Tan TSK 0848146                      *
.  *                  Added CACCFEE=5 - FI accumulated by 'Claim Type'  *
.  *        V9.04.01  17/08/2004 Lina Vo CAR 52746                      *
.  *                  Added Hospital ID and 2nd index with Hospital ID  *
.  *                  first. Changed 1st index to include Hospital ID.  *
.  *                                                                    *
.  **********************************************************************
.
PATRFNA1   IFILE SQL, FIXED=156, KEY="U1-1,2-7,8-11,12-12,13-25,146-148"
PATRFNA2   IFILE SQL, FIXED=156, KEY="U146-148,1-1,2-7,8-11,12-12,13-25"
. <Same format as PATFINFD>
.
. Note : 
.
.FINCODE     DIM       13         13         13     FINANCE CODE FOR FEES
.
.     AXXXYYYZZZTTT
.     NXXXYYYZZZTTT  - Credit Note
.
.        if CACCFEE = 5 (Accummulated by Claim code) :
.          ACCCXXXYYYZZZTTT
.          NCCCXXXYYYZZZTTT  - Credit Note
.            CCC - Claim code
.
.     A   - A fixed char
.     N   - A fixed char for Credit Note
.     XXX - Revenue breakdown code (category FI)
.
.          If category FI - TCINDC2=A
.             - Accommodation 
.               (system parameter CACCFEE)
.
.               XXX      - Breakdown Code for accommodation
.               YYYZZZTTT  - ACCOMMODATION
.                    YYY - ADMISS TYPE
.                          OR WARD OR CLAIM CODE
.                    ZZZ - BLANK OR
.                          CLAIM TYPE
.          or
.               YYYZZZ  - ACCOMODATION
.                    YYY - WARD OR CLAIM CODE
.                    ZZZ - CLAIM
.                    TTT - ADMISSION TYPE
.
...............................................................................
.
.     If TCINDC2<>A
.        - Miscellaneous item 
.
.        TXXX
.        PXXX  - Credit Note
.
.        if CACCFEE = 5 (Accummulated by Claim code) :
.          TCCCXXX
.          PCCCXXX - Credit Note
.            CCC - Claim code
.
.          T   - A fixed char
.          P   - A fixed char for Credit Note
.          XXX - Breakdown code for Miscellaneous Category Code
.
...............................................................................
.
.     If breakdown code does not exist, the fincode will be setup as follow:
.
.        XAAAAAAAAABBB
.        ZAAAAAAAAABBB  - Credit Note
.             X         - A fixed char
.             Z         - A fixed char for Credit Note
.             AAAAAAAAA - Casemix code
.             BBB       - First three char of Health fund
.
...............................................................................
.
.        Y <spaces>   - only for "To Be Invoiced section"
.
.          Y - A fixed char for Casemix payment accrual balance 
.
.              - the difference between the actual total of lumpsum amount and 
.                the total amount of revenues breakdown.
.
.
