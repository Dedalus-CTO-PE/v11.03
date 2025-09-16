. *******************************************************************
. *                                                                 *
. *  Include Name : PMSNUTFD.INC                                    *
. *                                                                 *
. *  Function     : File Definition include for Nutrition Table     *
. *                                                                 *
. *  File Type    : SQL                                             *
. *                                                                 *
. *  File Name    : pmsnutaf.dat                                    *
. *                                                                 *
. *  Keys         : KEY16                                           *
. *                                                                 *
. *  Programmer   : G.Saunders                                      *
. *                                                                 *
. *  Modifications:                                                 *
. *     V10.05.00   27/08/2014  Steve Armstrong  CAR 298445         *
. *                 Added PMNUBSUP, PMNUMSUP, PMNULSUP, PMNUASUP,   *
. *                 PMNUDSUP, PMNUSSUP & PMNUDIET.                  *
. *     V10.01.00   19/11/2010  Steve Armstrong  CAR 234061         *
. *                 Mods to change the admission number field to    *
. *                 a DIM field instead of a FORM field.            *
. *     V9.02.00    31.10.2001   G.Saunders                         *
. *                 Created based on fields in CATCOMFD             *
. *                                                                 *
. *******************************************************************
.
.Data File Definition
.--------------------
.
PMSNUTA1  IFILE     SQL, FIXED=693, KEY="U1-8,9-16"
PMSNUTA2  IFILE     SQL, FIXED=693, KEY="U9-16,1-8"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.  DESCRIPTION
. ----    ----   ------  --------  ----------  -----------
PMNUADMN  DIM       8        8          1      Admission no.      
PMNUDATE  DIM       8        8          9      Meal Date (CCYYMMDD)
.
PMNUCRTD  DIM      16       16         17      Date & time - record created
PMNUUPDD  DIM      16       16         33      Date & time - record updated
PMNUCRTU  DIM      10       10         49      Web User Id - record created
PMNUUPDU  DIM      10       10         59      Web User Id - record updated
.
PMNUDTYP  DIM       3        3         69      Main Diet Type (Cat MJ)
PMNUWARD  DIM       3        3         72      Ward for meals
PMNUSIZE  DIM       3        3         75      Serving Size (Cat MS)
PMNUDCDE  DIM      10       10         78      Name of Dietician
PMNUPAGN  DIM      20       20         88      Dietician's Pager Number
PMNUALVL  DIM       3        3        108      Menu/Assistance Lvl (Cat MK)
.
PMNUFLUI  DIM       3        3        111      Fluids    (Cat MU)
PMNUTEAT  DIM       3        3        114      Teat type (Cat MT)
PMNUADTV  DIM       3        3        117      Additives (Cat MW)
PMNUVOLU  DIM       3        3        120      Volume    (Cat MV)
.
.                                              Meal information codes
.
PMNUML01  DIM       3        3        123      Meal  1 code (Cat MJ)
PMNUML02  DIM       3        3        126      Meal  2 code (Cat MM)
PMNUML03  DIM       3        3        129      Meal  3 code (Cat MJ)
PMNUML04  DIM       3        3        132      Meal  4 code (Cat MM)
PMNUML05  DIM       3        3        135      Meal  5 code (Cat MJ)
PMNUML06  DIM       3        3        138      Meal  6 code (Cat MM)
PMNUML07  DIM       3        3        141      Meal  7 code
PMNUML08  DIM       3        3        144      Meal  8 code
PMNUML09  DIM       3        3        147      Meal  9 code
PMNUML10  DIM       3        3        150      Meal 10 code
.
.                                              Menu printing information
.
PMNUSTAT  FORM      1        2        153      Meal Status
.                                               0 = Menu Not Printed
.                                               1 = Menu Printed
.                                               2 = Menu Returned
PMNUBELT  FORM      1        2        155      Belt line ticket printed ?
.                                               1 = Yes
.                                               2 = No
PMNUMTYP  FORM      1        2        157      Menu type printed
.                                               1 = Standard Menu- from menu fle
.                                               2 = Daily Special- no ward code
.                                               3 = Daily Special- with ward cde
.                                               4 = Fasting
PMNUPRNT  DIM      16       16        159      Date & time meal was printed
.                                                (CCYYMMDDHH:MM:SS)
.
.                                              Comment fields           
.
PMNUCOM1  DIM      40       40        175      Dietary Comment field 1         
PMNUCOM2  DIM      40       40        215      Dietary Comment field 2        
PMNUCOM3  DIM      40       40        255      Dietary Comment field 3        
PMNUCOM4  DIM      40       40        295      Dietary Comment field 4        
PMNUCOM5  DIM      40       40        335      Dietary Comment field 5       
.
.                                              User defined information
.
PMNUUDF1  DIM       3        3        375      User defined field 1
PMNUUDF2  DIM       3        3        378      User defined field 2
PMNUUDF3  DIM       3        3        381      User defined field 3
PMNUUDF4  DIM       3        3        384      User defined field 4
PMNUUDF5  DIM       3        3        387      User defined field 5
.
PMNUFAST  DIM       1        1        390      Fasting indicator    
PMNUBSUP  DIM      40       40        391      Breakfast Supplement Text
PMNUMSUP  DIM      40       40        431      Morning Tea Supplement Text
PMNULSUP  DIM      40       40        471      Lunch Supplement Text
PMNUASUP  DIM      40       40        511      Afternoon Tea Supplement Text
PMNUDSUP  DIM      40       40        551      Dinner Supplement Text
PMNUSSUP  DIM      40       40        591      Supper Supplement Text
PMNUDIET  DIM       3        3        631      Diet Code (Cat DC)
.
PMNUSPAR  DIM      59       59        634      Spare Variable
.
.End of Record                        693
