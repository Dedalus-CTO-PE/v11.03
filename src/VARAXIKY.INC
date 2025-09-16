.******************************************************************************
.* System         : Mental Health                                             *
.*                                                                            *
.* Include Name   : VARAXIKY.INC                                              *
.*                                                                            *
.* Function       : Variables and FD's required for MEHAXIKY.PBL              *
.*                                                                            *
.* Author         : Justin Coates                                             *
.*                                                                            *
.* Date Written   : 20/09/1991                                                *
.*                                                                            *
.* Modifications  :                                                           *
.******************************************************************************
.
          INC       MEHAXIFD/INC            * axis I & II codes file
.
.         variables for MEHAXIKY.PBL
.
AXICODE   DIM       9         * entered code 
AXIDESC   DIM       30        * description for code
AXIDFLT   DIM       9         * default code
AXIEXIST  FORM      1         * should code exist Yes = 1
AXITYPE   FORM      1         * the type of code to enter 
.
