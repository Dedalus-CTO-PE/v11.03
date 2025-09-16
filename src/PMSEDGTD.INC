.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PMSEDGTD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for                           *
.  *                    Effective DRG cgi variables                           *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *       V10.08.00    26/08/2016  Don Nguyen     TSK 0312570                *
.  *                    Created include                                       *
.  ****************************************************************************
.
.Name     Type   Length   Description
.----     ----   ------   -----------
PMSED001  DIM    1        Record Type
.                          1 = Health Fund (patfn1af)
.                          2 = Claim Code (Cat CL - patcodes)
.                          3 = State
.                          4 = Hospital(pathspaf)/Health Fund
.                          5 = Hospital/Claim Code
.                          6 = Hospital/State
PMSED002  DIM    30       Key Value
.                          Value based on Record Type, eg:
.                           Health Fund
.                           Claim Code
.                           State
.                            0 = Not Australia
.                            1 = New Zealand
.                            2 = New South Wales
.                            3 = Victoria
.                            4 = Queensland
.                            5 = South Australia
.                            6 = Western Australia
.                            7 = Tasmania
.                            8 = Northern Territory
.                            9 = Australian Capital Territory
.                           Hospital/Health Fund
.                           Hospital/Claim Code
.                           Hospital/State
PMSED003  DIM    3        DRG Version
.                          041, 042, 050, 051, 052, 060, 062, 070, 080
PMSED004  DIM    3        3M Pay Code
PMSED005  DIM    8        DRG Effective From Date (ccyymmdd)
PMSED006  DIM    8        DRG Effective To Date (ccyymmdd)
PMSED007  DIM    10       Created by User Id (websecaf)
PMSED008  DIM    8        Date Record Created (ccyymmdd)
PMSED009  DIM    8        Time Record Created (hh:mm:ss)
PMSED010  DIM    10       Updated by User Id (websecaf)
PMSED011  DIM    8        Date Record Updated (ccyymmdd)
PMSED012  DIM    8        Time Record Updated (hh:mm:ss)
PMSED013  DIM    50       Comments
.
