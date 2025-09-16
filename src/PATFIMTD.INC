. *----------------------------------------------------------------------
. * Include Name  :   PATFIMTD.INC
. *
. * Function      :   CGI variables for PATFIMFD - patfimaf.dat
. *
. * V10.06.01 17/03/2012  Patrick Adair  CAR 271541
. *           Updated with new Assessment fields
. * V10.00.00 12/05/2010  Ebon Clements  CAR 220289
. *           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
PTFIM001  DIM       8      Visit Number
PTFIM002  DIM       8      Date of Assessment (ccyymmdd)
PTFIM003  DIM       8      Time of Assessment (hh:mm:ss)
PTFIM004  DIM       1      Assessment Type
PTFIM005  DIM       2      Eating Score
PTFIM006  DIM       2      Eating Goal
PTFIM007  DIM       50     Eating Comments
PTFIM008  DIM       2      Grooming Score
PTFIM009  DIM       2      Grooming Goal
PTFIM010  DIM       50     Grooming Comments
PTFIM011  DIM       2      Bathing Score
PTFIM012  DIM       2      Bathing Goal
PTFIM013  DIM       50     Bathing Comments
PTFIM014  DIM       2      Dressing Upper Body Score
PTFIM015  DIM       2      Dressing Upper Body Goal
PTFIM016  DIM       50     Dressing Upper Body Comments
PTFIM017  DIM       2      Dressing Lower Body Score
PTFIM018  DIM       2      Dressing Lower Body Goal
PTFIM019  DIM       50     Dressing Lower Body Comments
PTFIM020  DIM       2      Toileting Score
PTFIM021  DIM       2      Toileting Goal
PTFIM022  DIM       50     Toileting Comments
PTFIM023  DIM       2      Bladder Management Score
PTFIM024  DIM       2      Bladder Management Goal
PTFIM025  DIM       50     Bladder Management Comments
PTFIM026  DIM       2      Bowel Management Score
PTFIM027  DIM       2      Bowel Management Goal
PTFIM028  DIM       50     Bowel Management Comments
PTFIM029  DIM       2      Transfers - Bed/Chair/W'Chair Score
PTFIM030  DIM       2      Transfers - Bed/Chair/W'Chair Goal
PTFIM031  DIM       50     Transfer-Bed/Chair/W'Chair Comments
PTFIM032  DIM       2      Transfers - Toilet Score
PTFIM033  DIM       2      Transfers - Toilet Goal
PTFIM034  DIM       50     Transfers - Toilet Comments
PTFIM035  DIM       2      Transfers - Bath/Shower Score
PTFIM036  DIM       2      Transfers - Bath/Shower Goal
PTFIM037  DIM       50     Transfers - Bath/Shower Comments
PTFIM038  DIM       3      Location Code (Category SM)
PTFIM039  DIM       2      Locomotion Score
PTFIM040  DIM       2      Locomotion Goal
PTFIM041  DIM       50     Locomotion Comments
PTFIM042  DIM       2      Stairs Score
PTFIM043  DIM       2      Stairs Goal
PTFIM044  DIM       50     Stairs Comments
PTFIM045  DIM       3      Comprehension Code (Category SJ)
PTFIM046  DIM       2      Comprehension Score
PTFIM047  DIM       2      Comprehension Goal
PTFIM048  DIM       50     Comprehension Comments
PTFIM049  DIM       3      Expression Code (Category SK)
PTFIM050  DIM       2      Expression Score
PTFIM051  DIM       2      Expression Goal
PTFIM052  DIM       50     Expression Comments
PTFIM053  DIM       2      Social Interaction Score
PTFIM054  DIM       2      Social Interaction Goal
PTFIM055  DIM       50     Social Interaction Comments
PTFIM056  DIM       2      Problem Solving Score
PTFIM057  DIM       2      Problem Solving Goal
PTFIM058  DIM       50     Problem Solving Comments
PTFIM059  DIM       2      Memory Score
PTFIM060  DIM       2      Memory Goal
PTFIM061  DIM       50     Memory Comments
PTFIM062  DIM       1      Assessment Only
PTFIM063  DIM       10     Assessor's Code (pmshcpaf)
PTFIM064  DIM       3      Assessor's Designation (Cat ad)
PTFIM065  DIM       10     Nurse Code (oprnuraf)
PTFIM066  DIM       10     Nurse User Id (websecaf)
PTFIM067  DIM       8      Date Nurse Updated rec. (ccyymmdd)
PTFIM068  DIM       8      Time Nurse Updated rec. (hh:mm:ss)
PTFIM069  DIM       10     Physiotherapist Code (pmshcpaf)
PTFIM070  DIM       8      Physio. Date Updated rec.(ccyymmdd)
PTFIM071  DIM       8      Physio. Time Updated rec.(hh:mm:ss)
PTFIM072  DIM       10     Occup. Therapist Code (pmshcpaf)
PTFIM073  DIM       8      Occ. Ther. Date Updated (ccyymmdd)
PTFIM074  DIM       8      Occ. Ther. Time Updated (hh:mm:ss)
PTFIM075  DIM       1      Deletion Flag
PTFIM076  DIM       10     WEB User Id Created (websecaf)
PTFIM077  DIM       8      Date Record Created (ccyymmdd)
PTFIM078  DIM       8      Time record Created (hh:mm:ss)
PTFIM079  DIM       10     WEB User Id Updated (websecaf)
PTFIM080  DIM       8      Date Record Updated (ccyymmdd)
PTFIM081  DIM       8      Time Record Updated (hh:mm:ss)
PTFIM082  DIM       10     WEB User Id Deleted (websecaf)
PTFIM083  DIM       8      Date Record Deleted (ccyymmdd)
PTFIM084  DIM       8      Time Record Deleted (hh:mm:ss)
PTFIM085  DIM       7      Impairment Code
PTFIM086  DIM       1      Completed
PTFIM087  DIM       10     User Id who completed assessment
PTFIM088  DIM       8      Date assessment completed
PTFIM089  DIM       8      Time assessment completed
PTFIM090  DIM       3      Reason for delete
