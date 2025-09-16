create table patw15af
(
pt15drgc    char(4),
pt15drgd    char(60),
pt15sdmt    char(1),
pt15mvel    char(1),
pt15cpay    char(3),
pt15libp    decimal(4,0),
pt15hibp    decimal(4,0),
pt15ilos    decimal(6,2),
pt15sdod    char(1),
pt15tsdw    decimal(10,4),
pt15todw    decimal(10,4),
pt15tlom    decimal(10,4),
pt15timw    decimal(10,4),
pt15thom    decimal(10,4),
pt15thih    decimal(10,4),
pt15spar    char(50),
lf          char(1)
);
create unique index patw15a1 on patw15af
(
pt15drgc
);
revoke all on patw15af from public ; 
grant select on patw15af to public ; 
