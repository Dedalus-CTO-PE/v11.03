. 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : IBAPORFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Common              *
.  *                      System Port Details                           *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : ibaportf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 2                                           *
.  *                                                                    *
.  *     Modifications: V5.00 15.08.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                                                                    *
.  **********************************************************************
.
IBAPORT1    IFILE    SQL, FIXED=102, KEY="U1-2"
.
.NAME       TYPE     LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----     ------  --------   -----     -----------
IBAPPORT     DIM          2        2        1     TERMINAL PORT NUMBER
.
IBAPPROG     DIM          8        8        3     PROGRAM NAME
IBAPUSER     DIM          4        4       11     USER CODE
IBAPDATE     DIM          8        8       15     DATE  (CCYYMMDD)
IBAPTIME     DIM          8        8       23     TIME ENTERED PROGRAM
IBAPDESC     DIM         30       30       31     PROGRAM DESC (FROM IBASECUR)
IBAPIDNT     DIM          3        3       61     SYSTEM IDENTIFIER
.
IBAPSPAR     DIM         38       38       64      SPARE 
.
.End of record                            102
.
IBAPDIM2     DIM          2                        EXTRA VARIABLES USED IN IO
IBAPDIM3     DIM          3                        EXTRA VARIABLES USED IN IO
.
