. *****************************************************************************
. *                                                                           *
. *      Include Name : PATADRFD.INC                                          *
. *                                                                           *
. *      Function     : File Definition include for Charging                  *
. *                                                                           *
. *                                                                           *
. *      File Type    : ASCII                                                 *
. *                                                                           *
. *      File Name    : patraud.txt                                           *
. *                                                                           *
. *      Modifications:                                                       *
. *      V10.11.01  20/07/2017  Peter Vela    TSK 0835226                     *
. *                 Added SPTMCEHC Health Care Provider (Eclipse)             *
. *      V10.01.01  29/11/2010  Mike Laming   CAR 233046                      *
. *                 Added fields SPTMCHFT (Table Type) & SPTMCETD (Effective  *
. *                 To Date)                                                  *
. *      V10.00.01  06/05/2010  J.Tan     CAR 220887                          *
. *                 Added Eclipse Eq.,type of service and Active/Inactive flag*
. *       V9.09.01  29/01/2008  Peter Vela     CAR 155334                     *
. *                 Added SPTMCPRT                                            *
. *       V9.07.01  12/09/2006  Mike Laming   CAR 103365                      *
. *                 Added SPTMCALF                                            *
. *       V9.03.01  09/09/2003  Lina Vo   CAR 40497                           *
. *                 Added SPTMCCFC,SPTMCKRE,SPTMCCOB,SPTMCTAT,SPTMCTAD &      *
. *                 SPTMCEFD.                                                 *
. *       V5.08.02  15/08/2000  Caleb Sharman                                 *
. *                 Changed Health Fund variables to be 8 chars               *
. *       V5.08.01  10/07/2000  Greg Horvat                                   *
. *                 Added SPTMCGSA SPTMCGSC & SPTMCEDI                        *
. *                     V5.07.001 27/08/1998 Glenn  507 Changes               *
. *                     V5.03.01  05/10/1995   MATT                           *
. *                               Redefined PATRAUD as SFILE                  *
. *                     V5.00 31.03.89 J.Clark     (IBA)                      *
. *                         Change include heading                            *
. *       V5.01.02  12/06/92  Graeme Williams               SRF 114865        *
. *                 Changes for 9 character misc items                        *
. *                                                                           *
. *****************************************************************************
 IFGE     $$VER,7
PATRAUD     SFILE    ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATRAUD     FILE     ASCII, FIXED=256
 XIF
.
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
.SECTOR     FORM         5         1      NEXT AVAILABLE SECTOR
.
.End of Record
.
.    SECTOR          :
.
.NAME       TYPE    LENGTH         START      DESCRIPTION
.----       ----    ------         -----      -----------
.ADD        DIM          2             1      AUDIT DAY
.AMM        DIM          2             3      AUDIT MONTH
.ACC        DIM          2             5      audit century
.AYY        DIM          2             7      AUDIT YEAR
.TIMEIS     DIM          8             9      AUDIT TIME  (HH:MM:SS)
.ACTION     DIM          1            17      ACTION
.                                             A == ADDED
.                                             B == BEFORE CHANGE
.                                             C == CHANGED TO
.OPERCODE   DIM          4            18      OPERATOR CODE
SMCLMCOD   DIM            3           22     CLAIM CODE
SMHFUND    DIM            6           25     HEALTH FUND
SMHFTAB    DIM            8           31     HEALTH FUND TABLE (Not in Use)
SMCHARGE   DIM            9           39     CHARGE CODE
SMDESC     DIM           30           48     DESCRIPTION
SMITMTYP   FORM           1           78     CHARGE TYPE 
.                                            2 = THEATRE FEE
.                                            3 = MISC. ITEM
.
SMMSCGRP   DIM            3           79     MISC CHARGE GROUP (CATEGORY FI)
SMPATPOR   FORM         6.2           82     PATIENT PORTION    
SMHFPOR    FORM         6.2           91     REBATE  PORTION
SMNINV     FORM           1          100     NUMBER OF INVOICES - 1 or 2 ONLY
SMINDIC    FORM           1          101     INDICATOR FOR CHANGING DESC.
.                                            0 = NO
.                                            1 = YES
SPTMCGSA   FORM           1          102     Is GST applicable to charge
SPTMCGSC   DIM            6          103     GST paybale code from GST rate tble
SPTMCEDI   DIM           10          109     EDI equivalent
SPTMCCFC   FORM           1          119     Casemix funding Chargeable
SPTMCKRE   DIM            1          120     Keyin rebate portion
SPTMCCOB   DIM            1          121     Charge on behalf of doctor
SPTMCTAT   DIM            1          122     TAC type        
SPTMCTAD   DIM            4          123     TAC Duration (mins)
SPTMCEFD   DIM            8          127     Effective Date CCYYMMDD
SPTMCALF   DIM            3          135     Alt. MISC CHARGE GROUP (CAT FI)
SPTMCPRT   DIM            1          138     Prosthetic for tracking
.                                            0=NO
.                                            1=YES
SPTMCECE   DIM           11          139     Eclipse Equivalent
SPTMCECT   DIM            2          150     Eclipse Type of Service
SPTMCACT   DIM            1          152     Active/Inactive Flag
.                                            (Blank or 0 = Active)
.                                            (1 = Inactive)
SPTMCHFT   DIM            3          153     H/F Table Type (Cat "HT")
SPTMCETD   DIM            8          156     Effective To Date (CCYYMMDD)
SPTMCEHC   DIM            2          164     Health Care Provider (Eclipse)
.End of Record                       166
.
