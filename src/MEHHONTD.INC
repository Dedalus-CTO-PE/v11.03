. *----------------------------------------------------------------------
. * Include Name  :   ALLACTTD.INC
. *
. * Function      :   CGI variables for ALLACTFD - allactaf.dat
. *
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
MHHON001  DIM       8      8        1     Visit Number
MHHON002  DIM       8      8        9     Unique Count
MHHON003  DIM       3      3        17    HONOS Type (Cat hs)
MHHON004  DIM       1      1        20    Active 1=Yes
MHHON005  DIM       1      1        21    Sent (1=Yes)
MHHON006  DIM       8      8        22    HONOS Date (CCYYMMDD)
MHHON007  DIM       3      3        30    Service Setting (Cat ss)
MHHON008  DIM       3      3        33    Reason for Collection (Cat hp)
MHHON009  DIM       10     10       36    Responsible HCP (pmshcpaf)
MHHON010  DIM       10     10       46    Case Team (allcasaf)
MHHON011  DIM       10     10       56    Performing HCP (pmshcpaf)
MHHON012  DIM       10     10       66    WEB User Created (websecaf)
MHHON013  DIM       8      8        76    Date Created (CCYYMMDD)
MHHON014  DIM       8      8        84    Time Updated (HH:MM:SS)
MHHON015  DIM       1      1        92    Completed (1=Yes)
MHHON016  DIM       10     10       93    Web User Completed (websecaf)
MHHON017  DIM       8      8        103   Date Completed (CCYYMMDD)
MHHON018  DIM       8      8        111   Time Completed (HH:MM:SS)
MHHON019  DIM       10     10       119   Web User ID Updated (websecaf)
MHHON020  DIM       8      8        129   Date Updated (CCYYMMDD)
MHHON021  DIM       8      8        137   Time Updated (HH:MM:SS)
MHHON022  DIM       3      3        145   Focus of Care (Cat hf)
MHHON023  DIM       3      3        148   Cultural Support (Cat hc)
MHHON024  DIM       1      1        151   NGO Support (1=Yes)
MHHON025  DIM       1      1        152   NGO Support Accommodation (1=Yes)
MHHON026  DIM       1      1        153   NGO Comm Support Worker (1=Yes)
MHHON027  DIM       1      1        154   Vocational Assistance (1=Yes)
MHHON028  DIM       1      1        155   Non Specific NGO Service (1=Yes)
MHHON029  DIM       3      3        156   Collection Status (Cat ht)
MHHON030  DIM       3      3        159   Mode of Administration (Cat hm)
MHHON031  DIM       1      1        162   Adult Q1
MHHON032  DIM       1      1        163   Adult Q2
MHHON033  DIM       1      1        164   Adult Q3
MHHON034  DIM       1      1        165   Adult Q4
MHHON035  DIM       1      1        166   Adult Q5
MHHON036  DIM       1      1        167   Adult Q6
MHHON037  DIM       1      1        168   Adult Q7
MHHON038  DIM       1      1        169   Adult Q8
MHHON039  DIM       1      1        170   Adult Q8A
MHHON040  DIM       35     35       171   8A Free Text
MHHON041  DIM       1      1        206   Adult Q9
MHHON042  DIM       1      1        207   Adult Q10
MHHON043  DIM       1      1        208   Adult Q11
MHHON044  DIM       1      1        209   Adult Q12
MHHON045  DIM       1      1        210   Child and Youth Q1
MHHON046  DIM       1      1        211   Child and Youth Q2
MHHON047  DIM       1      1        212   Child and Youth Q3
MHHON048  DIM       1      1        213   Child and Youth Q4
MHHON049  DIM       1      1        214   Child and Youth Q5
MHHON050  DIM       1      1        215   Child and Youth Q6
MHHON051  DIM       1      1        216   Child and Youth Q7
MHHON052  DIM       1      1        217   Child and Youth Q8
MHHON053  DIM       1      1        218   Child and Youth Q9
MHHON054  DIM       1      1        219   Child and Youth Q10
MHHON055  DIM       1      1        220   Child and Youth Q11
MHHON056  DIM       1      1        221   Child and Youth Q12
MHHON057  DIM       1      1        222   Child and Youth Q13
MHHON058  DIM       1      1        223   Child and Youth Q14
MHHON059  DIM       1      1        224   Child and Youth Q15
MHHON060  DIM       1      1        225   Learning Disabilities Q1
MHHON061  DIM       1      1        226   Learning Disabilities Q2
MHHON062  DIM       1      1        227   Learning Disabilities Q3
MHHON063  DIM       1      1        228   Learning Disabilities Q4
MHHON064  DIM       1      1        229   Learning Disabilities Q5
MHHON065  DIM       1      1        230   Learning Disabilities Q6
MHHON066  DIM       1      1        231   Learning Disabilities Q7
MHHON067  DIM       1      1        232   Learning Disabilities Q8
MHHON068  DIM       1      1        233   Learning Disabilities Q9
MHHON069  DIM       1      1        234   Learning Disabilities Q10
MHHON070  DIM       1      1        235   Learning Disabilities Q11
MHHON071  DIM       1      1        236   Learning Disabilities Q12
MHHON072  DIM       1      1        237   Learning Disabilities Q13
MHHON073  DIM       1      1        238   Learning Disabilities Q14
MHHON074  DIM       1      1        239   Learning Disabilities Q15
MHHON075  DIM       1      1        240   Learning Disabilities Q16
MHHON076  DIM       1      1        241   Learning Disabilities Q17
MHHON077  DIM       1      1        242   Learning Disabilities Q18
MHHON078  DIM       1      1        243   Secure Q1
MHHON079  DIM       1      1        244   Secure Q2
MHHON080  DIM       1      1        245   Secure Q3
MHHON081  DIM       1      1        246   Secure Q4
MHHON082  DIM       1      1        247   Secure Q5
MHHON083  DIM       1      1        248   Secure Q6
MHHON084  DIM       1      1        249   Secure Q7
MHHON085  DIM       3      3        250   HONOS Version     * was "2" *C-202881
MHHON086  DIM       3      3        253   LD Q3A
MHHON087  DIM       2      2        256   ADOM Mandated/Voluntary
MHHON088  DIM       2      2        258   ADOM Number of Days Covered
MHHON089  DIM       2      2        260   ADOM Co-Existing Problems
MHHON090  DIM       2      2        262   ADOM Question 1
MHHON091  DIM       2      2        264   ADOM Question 2
MHHON092  DIM       2      2        266   ADOM Question 3
MHHON093  DIM       2      2        268   ADOM Question 4
MHHON094  DIM       2      2        270   ADOM Question 5
MHHON095  DIM       2      2        272   ADOM Question 6
MHHON096  DIM       2      2        274   ADOM Question 7a
MHHON097  DIM       2      2        276   ADOM Question 7b
MHHON098  DIM       2      2        278   ADOM Question 7c
MHHON099  DIM       2      2        280   ADOM Question 7d
MHHON100  DIM       2      2        282   ADOM Question 7e
MHHON101  DIM       2      2        284   ADOM Question 7f
MHHON102  DIM       2      2        286   ADOM Question 8
MHHON103  DIM       1      1        288   ADOM Question 9a
MHHON104  DIM       1      1        289   ADOM Question 9b
MHHON105  DIM       1      1        290   ADOM Question 9c
MHHON106  DIM       2      2        291   ADOM Question 10
MHHON107  DIM       1      1        293   ADOM Question 11
MHHON108  DIM       2      2        295   ADOM Question 12
MHHON109  DIM       2      2        297   ADOM Question 13
MHHON110  DIM       2      2        299   ADOM Question 14
MHHON111  DIM       2      2        301   ADOM Question 15
MHHON112  DIM       2      2        303   ADOM Question 16
MHHON113  DIM       2      2        305   ADOM Question 17
MHHON114  DIM       2      2        307   ADOM Question 18
MHHON115  DIM       2      2        309   ADOM Question 19
MHHON116  DIM       8      8        311   ADOM Question 20
MHHON117  DIM       8      8        320   U/R Number
MHHON118  DIM       1      1        328   Delete Flag
MHHON119  DIM       10     10       329   User who deleted assessment
MHHON120  DIM       8      8        339   Date assessment deleted
MHHON121  DIM       8      8        347   Time assessment deleted
MHHON122  DIM       3      3        355   Reason for delete

