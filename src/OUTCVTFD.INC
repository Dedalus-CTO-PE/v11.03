. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTCVTFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Outpatients                   *
. *                 Clinic Type Linked Visit Types Table                      *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outcvtaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 15                                                    *
. *                                                                           *
. * Modifications :                                                           *
. *       V10.15.00 16/10/2019  Ebon Clements TSK 0308709                     *
. *                 Created file                                              * 
. *****************************************************************************
.
.    IO INC       OUTCVTIO
.
OUTCVTA1  IFILE     SQL, FIXED=66, KEY="U1-6,7-12,13-15"
FILCVTA1  INIT      "cvtaf"
.
.NAME     TYPE   LENGTH  PHYS  START  DESCRIPTION
.----     ----   ------  ----  -----  --------------------------------
OCVTSITE  DIM       6       6      1  Site Code
OCVTCTYP  DIM       6       6      7  Clinic Type
OCVTCVTY  DIM       3       3     13  Linked Visit Type (Category CV)
OCVTSPAR  DIM       50      50    16  Spare                              
.
.End of record                    66
