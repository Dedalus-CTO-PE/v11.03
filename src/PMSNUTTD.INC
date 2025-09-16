.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PMSNUTTD.INC                                    *
.  *                                                                    *
.  *     Function     : CGI variables for Nutrition Table               *
.  *                                                                    *
.  *     File Name    : pmsnutaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY16,                                          *
.  *                    KEY19 (Audit file),                             *
.  *                                                                    *
.  *     Programmer   : G.Saunders                                      *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *        V10.05.00   13.10.2014   Ebon Clements  CAR 300196          *
.  *                    Added PMNUT042 to PMNUT048                      *
.  *        v9.02.00    02.11.2001   G.Saunders                         *
.  *                    Created based on fields in PMSNUTFD             *
.  *                                                                    *
.  **********************************************************************
.
.
PMNUT001  DIM       8                          Admission no.      
PMNUT002  DIM       8                          Meal Date (CCYYMMDD)
.
PMNUT003  DIM      16                          Date & time - record created
PMNUT004  DIM      16                          Date & time - record updated
PMNUT005  DIM      10                          Web User Id - record created
PMNUT006  DIM      10                          Web User Id - record updated
.
PMNUT007  DIM       3                          Main Diet Type (Cat MJ)
PMNUT008  DIM       3                          Ward for meals
PMNUT009  DIM       3                          Serving Size (Cat MS)
PMNUT010  DIM      10                          Name of Dietician
PMNUT011  DIM      20                          Dietician's Pager Number
PMNUT012  DIM       3                          Menu/Assistance Lvl (Cat MK)
.
PMNUT013  DIM       3                          Fluids    (Cat MU)
PMNUT014  DIM       3                          Teat type (Cat MT)
PMNUT015  DIM       3                          Additives (Cat MW)
PMNUT016  DIM       3                          Volume    (Cat MV)
.
PMNUT017  DIM       3                          Meal  1 code (Cat MJ)
PMNUT018  DIM       3                          Meal  2 code (Cat MM)
PMNUT019  DIM       3                          Meal  3 code (Cat MJ)
PMNUT020  DIM       3                          Meal  4 code (Cat MM)
PMNUT021  DIM       3                          Meal  5 code (Cat MJ)
PMNUT022  DIM       3                          Meal  6 code (Cat MM)
PMNUT023  DIM       3                          Meal  7 code
PMNUT024  DIM       3                          Meal  8 code
PMNUT025  DIM       3                          Meal  9 code
PMNUT026  DIM       3                          Meal 10 code
.
PMNUT027  FORM      1                          Meal Status
PMNUT028  FORM      1                          Belt line ticket printed ?
PMNUT029  FORM      1                          Menu type printed
PMNUT030  DIM      16                          Date & time meal was printed
.
PMNUT031  DIM      40                          Dietary Comment field 1         
PMNUT032  DIM      40                          Dietary Comment field 2        
PMNUT033  DIM      40                          Dietary Comment field 3        
PMNUT034  DIM      40                          Dietary Comment field 4        
PMNUT035  DIM      40                          Dietary Comment field 5       
.
PMNUT036  DIM       3                          User defined field 1
PMNUT037  DIM       3                          User defined field 2
PMNUT038  DIM       3                          User defined field 3
PMNUT039  DIM       3                          User defined field 4
PMNUT040  DIM       3                          User defined field 5
.
PMNUT041  DIM       1                          Fasting Indicator   
.
PMNUT042  DIM      40                          Breakfast Supplement Text
PMNUT043  DIM      40                          Morning Tea Supplement Text
PMNUT044  DIM      40                          Lunch Supplement Text
PMNUT045  DIM      40                          Afternoon Tea Supplement Text
PMNUT046  DIM      40                          Dinner Supplement Text
PMNUT047  DIM      40                          Supper Supplement Text
PMNUT048  DIM       3                          Diet Code (Cat DC)
