.------------------------------------------------------------------------
. Function      : Add one second to date/time common variable.
.                 to be used with ADDSECTM.PBL 
.------------------------------------------------------------------------
. Modifications
.------------------------------------------------------------------------
. V10.14.00  16/08/2019  Thanh T.       TSK 0837991
.            Initial version
.------------------------------------------------------------------------
ADATTIME  DIM       14     * Input/output Parameter Date/Time
                           * (ccyymmddhhmmss)
ASECDATE  DIM       8      * Date
ASECHH    DIM       2      * Hour
ASECMM    DIM       2      * Minute
ASECSS    DIM       2      * Second
