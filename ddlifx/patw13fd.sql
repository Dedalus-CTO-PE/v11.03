create table patw13af
(
pt13drgc    char(4),
pt13drgd    char(60),
pt13sdmt    char(1),
pt13mvel    char(1),
pt13cpay    char(3),
pt13libp    decimal(4,0),
pt13hibp    decimal(4,0),
pt13ilos    decimal(6,2),
pt13sdod    char(1),
pt13tsdw    decimal(10,4),
pt13todw    decimal(10,4),
pt13tlom    decimal(10,4),
pt13timw    decimal(10,4),
pt13thom    decimal(10,4),
pt13thih    decimal(10,4),
pt13spar    char(50),
lf          char(1)
);
create unique index patw13a1 on patw13af
(
pt13drgc
);
revoke all on patw13af from public ; 
grant select on patw13af to public ; 
