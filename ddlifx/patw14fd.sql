create table patw14af
(
pt14drgc    char(4),
pt14drgd    char(60),
pt14sdmt    char(1),
pt14mvel    char(1),
pt14cpay    char(3),
pt14libp    decimal(4,0),
pt14hibp    decimal(4,0),
pt14ilos    decimal(6,2),
pt14sdod    char(1),
pt14tsdw    decimal(10,4),
pt14todw    decimal(10,4),
pt14tlom    decimal(10,4),
pt14timw    decimal(10,4),
pt14thom    decimal(10,4),
pt14thih    decimal(10,4),
pt14spar    char(50),
lf          char(1)
);
create unique index patw14a1 on patw14af
(
pt14drgc
);
revoke all on patw14af from public ; 
grant select on patw14af to public ; 
