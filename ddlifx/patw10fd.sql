create table patw10af
(
pt10drgc    char(4),
pt10drgd    char(60),
pt10sdmt    char(1),
pt10mvel    char(1),
pt10cpay    char(3),
pt10libp    decimal(4,0),
pt10hibp    decimal(4,0),
pt10ilos    decimal(6,2),
pt10sdod    char(1),
pt10tsdw    decimal(10,4),
pt10todw    decimal(10,4),
pt10tlom    decimal(10,4),
pt10timw    decimal(10,4),
pt10thom    decimal(10,4),
pt10spar    char(50),
lf          char(1)
);
create unique index patw10a1 on patw10af
(
pt10drgc
);
revoke all on patw10af from public ; 
grant select on patw10af to public ; 
