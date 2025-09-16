create table patw11af
(
pt11drgc    char(4),
pt11drgd    char(60),
pt11sdmt    char(1),
pt11mvel    char(1),
pt11cpay    char(3),
pt11libp    decimal(4,0),
pt11hibp    decimal(4,0),
pt11ilos    decimal(6,2),
pt11sdod    char(1),
pt11tsdw    decimal(10,4),
pt11todw    decimal(10,4),
pt11tlom    decimal(10,4),
pt11timw    decimal(10,4),
pt11thom    decimal(10,4),
pt11thih    decimal(10,4),
pt11spar    char(50),
lf          char(1)
);
create unique index patw11a1 on patw11af
(
pt11drgc
);
revoke all on patw11af from public ; 
grant select on patw11af to public ; 
