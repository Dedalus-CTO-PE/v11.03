.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   OUTQTYFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Queueing Clinic Type Details Message File     *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   outqtyaf.dat                                  *
.  *                                                                      *
.  *  Keys              :                                                 *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *               V10.03.01 03/01/2012  Davin CAR 252936                 *
.  *                         Created FD                                   *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
OUTQTYA1   IFILE SQL, FIXED=185, KEY="U1-20"
.
.Name      Type   Length Physical Start Description
.----      ----   ------ -------- ----- -----------
DOTQTMES   DIM      20      20      1   Message Id
.
.          OUTCTYFD variables
.
.OCTSITE   DIM       6       6     21   SITE CODE
.OCTCTYP   DIM       6       6     27   CLINIC TYPE
.OCTGRP    DIM       3       3     33   GROUP CODE (CG)
.OCTDESC   DIM      30      30     36   CLINIC TYPE DESCRIPTION
.OCTXBOK   DIM       2       2     66   Extra Booking screen Id
.OCTXATT   DIM       2       2     68   Extra Attendee screen Id
.OCTBKT    DIM       3       3     70   Booking Template
.OCTATT    DIM       3       3     73   Attendance Template
.OCTACT    DIM       1       1     76   Clinic Inactive 1=Yes
.OCTVACS   DIM       3       3     77   VACS Code (Category CQ)
.OCTWUNIT  DIM       3       3     80   Waiting List Unit (Category WU)
.OCTUSDF1  DIM       1       1     83   User Defined Field 1
.OCTUSDF2  DIM       1       1     84   User Defined Field 2
OTQTSPAR   DIM     100     100     85   Spare
.
.End of Record                    185
.
.Redefine Key Variables
.----------------------
OTQTMESI   FORM      20
