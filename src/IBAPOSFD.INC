. *****************************************************************************
. *                                                                           *
. *       Include Name : IBAPOSFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for Common                   *
. *                      Postcode Details                                     *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : ibapostf.dat                                         *
. *                                                                           *
. *       Keys         : KEY56    KEY56                                       *
. *                                                                           *
. *       Modifications:                                                      *
. *            V10.14.01 25/03/2019  Peter Vela    Task 0857392               *
. *                      Added IBPORRAV - Regional and Remote Areas Value     *
. *            V10.03.01 15/11/2011  Mike Laming   CAR 240184                 *
. *                      Change Post Code to Dim 8, Add State to both Keys    * 
. *                      & change to KEY56                                    * 
. *             V9.03.01 15/05/2003 Lina Vo  CAR 37504                        *
. *                      Added new field IBPOASGC                             *
. *                                                                           *
. *****************************************************************************
.
IBAPOST1  IFILE SQL, FIXED=100, KEY="U1-8,9-53,54-56"
IBAPOST2  IFILE SQL, FIXED=100, KEY="U9-53,1-8,54-56"
.
.Name     Type    Length   Physical   Start Loc.   Description
.----     ----    ------   --------   ----------   -----------
IBPOPCOD  DIM       8         8           1        Postcode
IBPOSUBR  DIM       45        45          9        Suburb
IBPOSTAT  DIM       3         3           54       State
IBPOASGC  DIM       9         9           57       ABS Australian Standard
.                                                  Geographical Classification
.                                                    Pos 1  ST Code (State)
.                                                    Pos 2-3 SD Code 
.                                                      (Statistical Division)
.                                                    Pos 4-5 SSD Code
.                                                      (Statistical
.                                                              Sub-divisions)
.                                                    Pos 6-9 SLA Code 
.                                                      (Statistical local area)
IBPORRAV  DIM       5         5           66       Regional and Remote Areas Val
IBPOSPAR  DIM       29        29          71       Spare
.
.End of Record                           100
+
.

