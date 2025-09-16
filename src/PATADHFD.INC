. V5.07.001 27/08/1998 Glenn  507 Changes
. **********************************************************************
. *                                                                    *
. *     Include Name : PATADHFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for Health Fund Audit   * 
. *                                                                    *
. *                                                                    *
. *     File Type    : ASCII                                           *
. *                                                                    *
. *     File Name    : pathaud.txt                                     *
. *                                                                    *
. *     Modifications:                                                 *
. *     V9.02.01   23/05/2001 Glenn Saunders srf10215                  *
. *                Added PTHFUMTD indicator                            *
. *     V5.08.01  15/08/2000  Caleb Sharman                            *
. *               Changed Health Fund variables to be 8 chars          *
. *     V5.03.03   06/12/1995   Greg Horvat                            *
. *                Added SHFHCPE                                       *
. *     V5.03.02   16/10/1995   Greg Horvat     SRF 611799             *
. *                Added SHFHGRP                                       *
. *     V5.03.01   05/10/1995   MATT                                   *
. *                Changed PATHAUD definition to SFILE                 *
. *                                                                    *
. **********************************************************************
.
 IFGE     $$VER,7
PATHAUD     SFILE   ASCII, FIXED=256
 XIF
 IFEQ     $$VER,6
PATHAUD     FILE    ASCII, FIXED=256
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
.NAME       TYPE    LENGTH         START     DESCRIPTION
.----       ----    ------         -----     -----------
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
.
SHCODE      DIM          6            1      FUND NUMBER
SHFTABL     DIM          8            7      FUND TABLE
SHFNAME     DIM         30           15      FUND NAME
SHFADD1     DIM         30           45      HEALTH FUND ADD 1
SHFADD2     DIM         30           75      HEALTH FUND ADD 2
SHFTELE     DIM         12          105      HEALTH FUND TELEPHONE
SHFBAND     FORM         2          117      THEATRE CHARGING INDICATOR
SHFHDP      DIM          4          119      HDP EQUIVALENT
SHFFAXN     DIM         12          123      FAX NUMBER
SHFBCAT     DIM          3          135      BILLING CATEGORY
SHFHGRP     DIM          6          138      Health Fund Group
SHFHCPE     DIM          6          144      HCP Equivalent
SHFACTV     DIM          1          150      Active/Inactive Indicator
SHFGRPV     DIM          3          151      Version of Grouper
STHFUMTD    DIM          1          154      Use Matrix default indicator
SPTFNSPAR   DIM          2          155      SPARE VARIABLE
