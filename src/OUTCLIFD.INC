.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTCLIFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Clinic Table                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outcliaf.dat                                    *
.  *     Audit File   : outaudcl.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY14, KEY20, KEY44                             *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V10.11.01 26/07/2017  Ebon Clements    TSK 0268970            *
.  *                Removed index 2, 3 and 4                            *
.  *      V10.06.01 12/03/2015  Ebon Clements    CAR 268970             *
.  *                Added index 6                                       *
.  *      V9.04.00  06/06/2005  Ebon Clements    CAR 61334              *
.  *                Added index 5                                       *
.  *      V9.02.01  31/01/2003  Lina Vo                                 *
.  *                Added FILAUDCL                                      *
.  *      V9.02.00  29/11/2002  Lina Vo                                 *
.  *                Added site specific variable FILCLIA3, FILCLIA4     *
.  *      V5.09.B01 01/02/2001  Greg Horvat                             *
.  *                Removed the save variables as they werent used      *
.  *                    V5.08.01  04/03/2000  Steve Armstrong           *
.  *                              Mods to include effective date        *
.  *                              Added audit fields                    *
.  **********************************************************************
.  *                    V5.07.00  28.07.1999 Pat Dirito                 *
.  *                              Added new variable OTCLIACT           *
.  **********************************************************************
.  *                    V5.06.01  29.10.98 B.G.Ackland                  *
.  *                              Added Index by Doctor for Web Access  *
.  **********************************************************************
.  *                    V5.03.01  04.01.95 Max White     SRF 440959     *
.  *                              Added OCACCONS                        *
.  **********************************************************************
.  *                    V5.00     03.05.89 H.Donnard   (IBA)            *
.  *                              Change include heading                *
.  **********************************************************************
.
.Audit File Definition
.---------------------
OUTAUDCL   IFILE SQL, FIXED=93, KEY="D1-8,9-16,17-18,19-19"
FILAUDCL   INIT     "audcl"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTCLAUDD  DIM       8      8        1     Date of Change
OTCLAUDT  DIM       8      8        9     Time of Change
OTCLAUDP  DIM       2      2        17    Port Doing Change
OTCLAUDR  DIM       1      1        19    Record Type
.                                              A = Added
.                                              B = Before image
.                                              C = After Image
.                                              D = Delete
OTCLAUDS  FORM      1      2        20    Record Status
.                                              1 = Not Printed
.                                              2 = Printed
OTCLAUDO  DIM       4      4        22    Operator of Change
.
.
.Data File Definition
.--------------------
OUTCLIA1    IFILE    SQL, FIXED=68, KEY="U1-6,7-12,13-20"
OUTCLIA5    IFILE    SQL, FIXED=68, KEY="U1-6,27-56,7-12,13-20"
OUTCLIA6    IFILE    SQL, FIXED=68, KEY="U21-26,7-12,13-20,1-6"
.
FILCLIA1    INIT     "cliaf"
FILCLIA5    INIT     "cliaf"
FILCLIA6    INIT     "cliaf"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
OCASITE      DIM        6         6      1      SITE CODE
OCACLIN      DIM        6         6      7      CLINIC ID 
OCADATE      DIM        8         8     13      Effective Date (ccyymmdd)
OCADOCT      DIM        6         6     21      DOCTOR CODE - OPTIONAL
OCADESC      DIM       30        30     27      CLINIC DESCRIPTION -
.                                                  (If No Doctor Code Used)
OCACCONS     DIM        6         6     57      CONSULTANT CODE (CMDS)
OTCLIACT     DIM        1         1     63      CLINIC INACTIVE 1=YES 
OCASPARE     DIM        4         4     64      ****  SPARE  ****
.
.End of record                        68
