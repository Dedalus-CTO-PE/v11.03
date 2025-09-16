.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGCLIFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Clinic Table                                    *
.  *                    Legacy Visits                                   *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legcliaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 6  KEY 12                                   *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V9.03.00  05/05/2004  Ebon Clements    CAR 49209              *
.  *                Ported from 6.11                                    *
.  *                                                                    *
.  **********************************************************************
.
LEGCLIA1    IFILE    SQL, FIXED=80, KEY="U1-6,7-12"
LEGCLIA2    IFILE    SQL, FIXED=80, KEY="U7-12"
LEGCLIA3    IFILE    SQL, FIXED=80, KEY="U13-18,7-12"
LEGCLIA4    IFILE    SQL, FIXED=80, KEY="U19-48,7-12"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
LOCASITE     DIM        6         6      1      SITE CODE
LOCACLIN     DIM        6         6      7      CLINIC ID
LOCADOCT     DIM        6         6     13      DOCTOR CODE - OPTIONAL
LOCADESC     DIM       30        30     19      CLINIC DESCRIPTION -
.                                                  (If No Doctor Code Used)
LOCACCON     DIM        6         6     49      CONSULTANT CODE (CMDS)
LOTCLIAC     DIM        1         1     55      CLINIC INACTIVE 1=YES
LOCASPAR     DIM       24        24     56      ****  SPARE  ****
.
.End of record                          80
.
LSOCASIT     DIM          6         1      Save variable for SITE CODE
LSOCACLI     DIM          6         7      Save variable for CLINIC ID
+
.

