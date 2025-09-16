.******************************************************************************
.*                                                                            *
.* Include Name   : PATDPTHV.INC                                              *
.*                                                                            *
.* Function       : Variables required for PATDPATH.PBL                       *
.*                                                                            *
.* Modifications  :                                                           *
.*                  23/11/2017 Ania P         TSK 0261630                     *
.*                  Removed use of PRFIXDP (INIT "GDPATH")                    *
.*                  19/04/1998  Steve Armstrong                               *
.*                  Added extra fields for 6th database                       *
.*                  30/10/1995    Justin Coates  (SUHT mods)                  *
.*                  added HDIDNO1-5 for Database ID Number                    *
.*                                                                            *
.******************************************************************************
.
.>>>>>>>  CMDLINE   DIM       80     * this is also needed in your program
.>>>>>>>  XXDPATH   DIM       120    * defined in multmpfd.inc
CFNAMEDP  DIM       8
DIM120    DIM       120
DPTMP     INIT      "/tmp/"
DPTXT     INIT      ".txt"
FILENUM   FORM      2         * the file number to open
GETDPATH  INIT      "GETDPATH"    * program name
HDDESC1   DIM       30        * DESCRIPTION  for Hospital 1
HDDESC2   DIM       30        * DESCRIPTION  for Hospital 2
HDDESC3   DIM       30        * DESCRIPTION  for Hospital 3
HDDESC4   DIM       30        * DESCRIPTION  for Hospital 4
HDDESC5   DIM       30        * DESCRIPTION  for Hospital 5
HDDESC6   DIM       30        * DESCRIPTION  for Hospital 6
HDIDNO1   FORM      2         * ID NUMBER for Hospital 1
HDIDNO2   FORM      2         * ID NUMBER for Hospital 2
HDIDNO3   FORM      2         * ID NUMBER for Hospital 3
HDIDNO4   FORM      2         * ID NUMBER for Hospital 4
HDIDNO5   FORM      2         * ID NUMBER for Hospital 5
HDIDNO6   FORM      2         * ID NUMBER for Hospital 6
HDNAME1   DIM       4         * NAME  for Hospital 1
HDNAME2   DIM       4         * NAME  for Hospital 2
HDNAME3   DIM       4         * NAME  for Hospital 3
HDNAME4   DIM       4         * NAME  for Hospital 4
HDNAME5   DIM       4         * NAME  for Hospital 5
HDNAME6   DIM       4         * NAME  for Hospital 6
HDPATH1   DIM       120       * DPATH for Hospital 1
HDPATH2   DIM       120       * DPATH for Hospital 2
HDPATH3   DIM       120       * DPATH for Hospital 3
HDPATH4   DIM       120       * DPATH for Hospital 4
HDPATH5   DIM       120       * DPATH for Hospital 5
HDPATH6   DIM       120       * DPATH for Hospital 6
OPFILE    DIM       8         * the file name to open
PATH      DIM       60        * exact pathname for files
TEMPDP    FILE      ASCII, FIXED=120
