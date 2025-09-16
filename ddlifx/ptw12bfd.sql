create table patw12bf
(
pt12drgc    char(4),
pt12drgd    char(60),
pt12sdmt    char(1),
pt12mvel    char(1),
pt12cpay    char(3),
pt12libp    decimal(4,0),
pt12hibp    decimal(4,0),
pt12ilos    decimal(6,2),
pt12sdod    char(1),
pt12tsdw    decimal(10,4),
pt12todw    decimal(10,4),
pt12tlom    decimal(10,4),
pt12timw    decimal(10,4),
pt12thom    decimal(10,4),
pt12thih    decimal(10,4),
pt12spar    char(50),
lf          char(1)
);
create unique index patw12b1 on patw12bf
(
pt12drgc
);
revoke all on patw12bf from public ; 
grant select on patw12bf to public ; 
