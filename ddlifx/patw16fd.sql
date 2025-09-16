create table patw16af
(
pt16drgc    char(4),
pt16drgd    char(60),
pt16sdmt    char(1),
pt16mvel    char(1),
pt16cpay    char(3),
pt16libp    decimal(4,0),
pt16hibp    decimal(4,0),
pt16ilos    decimal(6,2),
pt16sdod    char(1),
pt16tsdw    decimal(10,4),
pt16todw    decimal(10,4),
pt16tlom    decimal(10,4),
pt16timw    decimal(10,4),
pt16thom    decimal(10,4),
pt16thih    decimal(10,4),
pt16spar    char(50),
lf          char(1)
);
create unique index patw16a1 on patw16af
(
pt16drgc
);
revoke all on patw16af from public ; 
grant select on patw16af to public ; 
