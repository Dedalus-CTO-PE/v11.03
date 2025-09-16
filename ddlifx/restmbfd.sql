create table restmbaf
(
retbucs     char(12),
retbcod     char(12),
retbdes     char(50),
retbprg     char(8),
retbrep     char(2),
retbtem     char(3),
retbcum     char(1),
retbur1     char(25),
retbur2     char(25),
retbud1     char(8),
retbud2     char(8),
retbuy1     char(1),
retbuy2     char(1),
retbspa     char(19),
lf          char(1)
);
create unique index restmba1 on restmbaf
(
retbucs,
retbcod
);
revoke all on restmbaf from public ; 
grant select on restmbaf to public ; 
