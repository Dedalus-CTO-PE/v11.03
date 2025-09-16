.******************************************************************************
.* System         : Outpatients                                               *
.*                                                                            *
.* Include Name   : OUT6618V.INC                                              *
.*                                                                            *
.* Function       : To contain the variables for the common code include for  *
.*                  out66 and out18 (out6618c.pbl)                            *
.*                                                                            *
.* Author         : Justin Coates      24/11/1995                             *
.*                                                                            *
.* Modifications  :                                                           *
.******************************************************************************
.
          INC       OPLBVARS/INC
.
CDYSFDTE  DIM       8             * calcdays from date
CDYSTDTE  DIM       8             * calcdays to   date
CDYSDAYS  FORM      6             * calcdays number of days
CDYSYEAR  FORM      2             * calcdays year
FROZEN    FORM      1             * 1=clinic frozen
VAGE      DIM       3
VCASE     DIM       1                   * Case notes flag for working U/R No.
VCTYP     DIM       6                   * Working Clinic Type
VCLIN     DIM       6                   * Working Clinic Id
VCSES     DIM       6                   * Working clinic Session (dudley)
VDATE     DIM       8                   * Working Clinic Date
VDAY      FORM      1                   * Working Clinic Day
VHOSP     DIM       3                   * Working clinic Hospital
VHSP      DIM       3                   * Alternative hospital
VISTYPE   FORM      1                   * 1 = Same vis typ, 1 = Any vis typ
VNAME     DIM       35                  * Name for working U/R Number
VOUTNO    FORM      8                   * working O/P Number
VRREASON  DIM       3                   * Reason for Rescheduling
VSESST    DIM       3                   * Working Session Status
VSITE     DIM       6                   * Working Site
VSTAT     FORM      1                   * Working Status
VTIME     DIM       5                   * Working Clinic Time
VTYPE     DIM       6                   * Working Clinic Type
VURNO     DIM       8                   * Working U/R Number
VVISIT    DIM       3                   * Working Slot Visit Type
.
