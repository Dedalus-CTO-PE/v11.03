. ****************************************************************************
. *                                                                          *
. * Include Name  : CCICLIFD                                                 *
. *                                                                          *
. * Function      : File definition include for Clinical Costing             *
. *                      Site File                                           *
. *                                                                          *
. * File Type     : SQL                                                      *
. *                                                                          *
. * File Name     : ccicliaf.dat                                             *
. *                                                                          *
. * Keys          :                                                          *
. *                                                                          *
. * Modifications :                                                          *
. ****************************************************************************
CCICLIA1     IFILE     SQL, FIXED=23, KEY="U1-6,7-12"
.
.NAME        TYPE    LENGTH    PHYSICAL   START   DESCRIPTION
.----        ----    ------    --------   -----   -----------
CCCLSITE     DIM       6          6         1     O/P Site       
CCCLCTYP     DIM       6          6         7     O/P Clinic Type Code
CCCLSPAR     DIM      10         10        13     Spare
.
.End of Record                             23
.
