. ************************************************************
. *                P R O G R A M  S U M M A R Y              *
. *                - - - - - - -  - - - - - - -              *
. *                                                          *
. *     COMMON AREA:           COMMON                        *
. *                                                          *
. *     FUNCTION:              THIS IS THE COMMON PART OF ALL*
. *                            PROGRAMS IN ANY SYSTEM        *
. *                                                          *
. *     AUTHOR:                SOMEONE FROM THE PAST         *
. *                                                          *
. ************************************************************
. * V11.02.01  29/03/2022 Jill Parkinson Task 0917341        *
. *            Added REPTNAME                                *
. * Mods     : V5.07     06/10/98  Jim Stathopoulos          *
. *                      507 Changes                         *
. ************************************************************
. *                V5.01.01    10/07/89  R. Romei            *
. *                            16/08/89  Graeme Williams     *
. *                            Added CHOSINDX, CCODDIMA,     *
. *                            and CCODDIMB                  *
. *                V5.01.02    30/09/89 Graeme Williams      *
. *                            Added EXITCHAR                *
. *                V5.01.03    17/07/90 Paul Duncan          *
. *                            Added CNOCOPY                 *
. *                                                          *
. *                                                          *
. *                                                          *
. *                  * A T T E N T I O N *                   *
. *                  - - - - - - - - - - -                   *
. *            THIS PROGRAM IS THE PROPERTY OF               *
. *            INFORMATION BUILDERS (AUSTRALIA) PTY LTD      *
. *            AND MUST NOT BE UTILISED MODIFIED OR          *
. *            COPIED IN ANY MANNER WHATSOEVER WITHOUT       *
. *            THE EXPRESS WRITTEN PERMISSION OF             *
. *            INFORMATION BUILDERS (AUSTRALIA) PTY LTD.     *
. *                                                          *
. ************************************************************
.
ERROR    DIM       *18           * Now Used to pass U/R between Programs
.                                * Char(1-2)=Status, Char(3-10) U/R No.
.                                * Status 01=Local U/R
.                                         02=National NMPI No. for NZ
ERRA     FORM      *1             ***** SYSTEM DATE INDICATOR
SECACC1  DIM       *1
SECACC2  DIM       *1
SECACC3  DIM       *1
SECACC4  DIM       *1
CDD      FORM      *2
CMM      FORM      *2
CYY      FORM      *2
CCC      FORM      *2
PORT     DIM       *2                 /*  FOR THE PAYROLL SYSTEM THIS FIELD IS
.                                         THE SYSTEM ID.
 
PGM      DIM       *8                 /*  FOR PATIENT BILLING THIS IS THE 
.                                         RETURN SYSTEM PROGRAM..IE IBAPAT99
.
FNM      DIM       *5                 /*  ACCOUNTING INDICATOR FOR CHAINING
 
PSEC     FORM      *5
 
IDDD     DIM       *6                * Outpatient Site Code
CPBS     FORM      *1                 /*  FOR THE PAYROLL SYSTEM THIS FIELD IS
.                                         THE FREQUENCY CODE
.
PORTNO    FORM     *2                *  THIS IS THE PORT #
UID       DIM      *3                *  Outpatient Prefix  
PERIOD    FORM     *2                *  COSTING PERIOD
SECLEV    FORM     *1                *  SECURITY LEVEL
PASSCODE  DIM      *4                *  USER'S PASSCODE
PASSCD    DIM      *2                *  PASSCODE CHECK DIGITS
CPPAPER   FORM     *2                *  Report Paper Type
SPLFILE   DIM      *8                *  SPOOL FILE NAME
CPRTFLG   FORM     *2                *  System Printer Flag
.                                        0 = Normal Printing
.                                        1 = No Printing Functions
.                                        2 = Spooling from IBAMENU
.                                        3 = Spooling inside program
.
CNAME     DIM      *35               * COMPANY NAME
CDATE     DIM      *10               * DATE DD/MM/CCYY = AUS
.                                    * DATE MM/DD/CCYY = AMR
.
CPROGLEV  FORM     *1                * PROGRAM SECURITY LEVEL
CPRTGRP   DIM      *2                * PRINTER GROUP
CDEPCDE   DIM      *3                * DEPARTMENT CODE FOR PRINTER SYSTEM
.
CHOSINDX  FORM     *2                * Hospital Unique Index code
CNOCOPY   DIM      *3                * number of copies to print
CCODDIMB  DIM      *3                * Spare variable
EXITCHAR  DIM      *1                * Exit Character from Mandatory fields
CCDEPT    DIM      *3                * Department code
CCMENU    DIM      *8                * Current Menu
REPTNAME  DIM      *50               * Report Name 
.
