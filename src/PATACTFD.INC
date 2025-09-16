. ************************************************************************* 
. *         Include Name : PATACTFD.INC                                   * 
. *                                                                       * 
. *         Function     : File definition include for Patient            *
. *                        Account Status Validation                      *
. *                                                                       *
. *         File Type    : SQL                                            *
. *                                                                       *
. *         File Name    : patactaf.dat                                   *
. *                                                                       *
. *         Keys         : KEY 5                                          *
. *                                                                       *
. *         Modificications :                                             *
. *       V9.03.01  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2  *
. *                 - Add Sex Description routine SEXDSC00 with Code "R" -*
. *                 "Intersex" added                                      *
. *       V9.00.B01 06/06/2001  Steve Downing                             *
. *                 Changed the accommdation type variable to be a dim    *
. *                 rather than be redefined as a form                    *
. *                                                                       *
. *                           V5.01.01 17/08/90 Glen Hobby                *
. *                                 FD written                            *
. *                           V5.01.02 04/02/91 DIG                       *
. *                                 Added Medicare Suffixes 6 + 7         *
. *                           V5.03.03 23/08/95  MATT                     *
. *                                 Changed file type to be SQL           *
. *                           V5.03.04 1/2/96   Whirlpool                 *
. *                                 Changed Care type to dim to allow "U" *
. *                                                                       *
. *************************************************************************
.
PATACTA1     IFILE SQL, FIXED=20, KEY="U1-3,4-4,5-6"    * was 1-3,4-4,5-5
.
. NAME       TYPE  LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----       ----  ------  --------  ----------  -----------
PTACCLSS     DIM   3       3         1           Account Class
PTACACCM     DIM   1       1         4           Accommodation Type
PTACCARE     DIM   2       2         5           Care Type             *C-49016
PTACMEDI     FORM  2       2         7           Medicare suffix
.                                                1 = N-E
.                                                2 = Name, C-U
.                                                3 = Name, C-U, BAB
.                                                4 = Name, C-U, BAB, P-N
.                                                5 = Name, C-U, BAB, P-N, N-E
.                                                6 = Name, C-U, N-E
.                                                7 = Name, C-U, BAB, N-E
.                                                8 = C-U
PTACSPAR     DIM   11      11        9           Spare variable        *C-49016
.
.End of record                      20
.
