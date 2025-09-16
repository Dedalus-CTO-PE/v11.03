.******************************************************************************
.* System   :  Inpatients                                                     *
.* Program  :  INPPLTDF.INC                                                   *
.* Desc     :  Data definitions for Patient Letter printing                   *
.******************************************************************************
.* Date     :  14/11/2018                                                     *
.* Author   :  Don Nguyen                                                     *
.* Comment  :  Includes Patient Letter printing variables                     *
.******************************************************************************
.* Modifications  :                                                           *
.*                                                                            *
.*       V10.13.00  14/11/2018  Don Nguyen       TSK 0863187                  *
.*                  Created new                                               *
.******************************************************************************
.
BOTTMARG  FORM      3        * bottom margin
CONAME    DIM       35
CONTTYPE  DIM       1
COUNT     FORM      2
COUNTER   FORM      2
DATELINE  DIM       19
DIM8      DIM       8
DIM20     DIM       20
DIM70     DIM       70
DISPSTRN  DIM       70
DSCHFLAG  FORM      1
DUMMY     DIM       1
ENDSTR    FORM      2
FIRSTCH   FORM      1
FORM3     FORM      3
FORM3A    FORM      3
IBCNMHOS  FORM      1
IHINUMBR  DIM       20
LEFTMARG  FORM      3        * left margin
LETRCOMM  DIM       1        * Letter Communication Method
.                                0 or Blank = Printed Letter
.                                1 = SMS Notification
LETTDATE  DIM       10
LETTFORM  FORM      3
LINE      DIM       65
MLETPLEN  FORM      3        * length to print to
PERCPOS   FORM      2
PHYSPAGE  FORM      3        * Physical paper length
PRTSTRNG  DIM       70
.
RGPRSURG  DIM       25       * Registered GP PRACTICE vars
RGPRSAD1  DIM       35
RGPRSAD2  DIM       35
RGPRSAD3  DIM       35
RGPRSAD4  DIM       35
RGPRFAXN  DIM       20
RGPRSPCD  DIM       8
RGPRTELE  DIM       20
.
RFPRSURG  DIM       25       * Referring GP PRACTICE vars
RFPRSAD1  DIM       35
RFPRSAD2  DIM       35
RFPRSAD3  DIM       35
RFPRSAD4  DIM       35
RFPRFAXN  DIM       20
RFPRSPCD  DIM       8
RFPRTELE  DIM       20
.
SRCHNUM   FORM      3
STARTSTR  FORM      2
TEMP2     FORM      2
TEMP3     FORM      3
TEMP70    DIM       70
TOPMARG   FORM      3        * top margin
.
.**********************************************************************
.*                           CONSTANTS                                *
.**********************************************************************
CATTC     INIT      "tc"
CODEA     INIT      "A "
CODEC     INIT      "C "
CODECC    INIT      "CC"
CODECL    INIT      "CL"
CODEDX    INIT      "DX"
CODEP     INIT      "P "
CODEP1    INIT      "P1"
CODEP2    INIT      "P2"
CODEP3    INIT      "P3"
CODEPV    INIT      "PV"
CODER     INIT      "R "
CODES     INIT      "S "
CODEU1    INIT      "U1"
CODEU2    INIT      "U2"
CODEU3    INIT      "U3"
CODEU4    INIT      "U4"
CODEU5    INIT      "U5"
CODEVA    INIT      "VA"
CODEVB    INIT      "VB"
CODEVI    INIT      "VI"
CODEVJ    INIT      "VJ"
CODEVK    INIT      "VK"
CODEVR    INIT      "VR"
.
DEXT      DIM       3
DEXT1     INIT      "st"
DEXT2     INIT      "nd"
DEXT3     INIT      "rd"
DEXT4     INIT      "th"
.
MONTH     DIM       9
MONTH1    INIT      "January"
MONTH2    INIT      "February"
MONTH3    INIT      "March"
MONTH4    INIT      "April"
MONTH5    INIT      "May"
MONTH6    INIT      "June"
MONTH7    INIT      "July"
MONTH8    INIT      "August"
MONTH9    INIT      "September"
MONTH10   INIT      "October"
MONTH11   INIT      "November"
MONTH12   INIT      "December"
.
REPSTR    INIT      "a0b0c0d0e0f0g0h0i0j0k0l0m0n0o0p0q0r0s0t0u0v0w0x0y0z0"
SP40      INIT      "                                        "
SPECCHAR  INIT      "%"
STAR51    INIT      "***************************************************"
STAR56    INIT      "********************************************************"
.
ZEROS8    INIT      "0000    "
