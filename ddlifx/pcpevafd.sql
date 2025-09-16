create table pcpaudev
(
pcevaudd    char(8),
pcevaudt    char(8),
pcevaudp    char(2),
pcevaudr    char(1),
pcevauds    decimal(1,0),
pcevaudo    char(4),
pcevuniq    char(10),
pcevdate    char(8),
pcevtime    char(8),
pcevdcod    char(4),
pcevnurs    char(6),
pcevstat    decimal(1,0),
pcevspar    char(11),
lf          char(1)
);
create index pcpaudev on pcpaudev
(
pcevaudd,
pcevaudt,
pcevaudp,
pcevaudr
);
revoke all on pcpaudev from public ; 
grant select on pcpaudev to public ; 
create table pcpevaaf
(
pcevuniq    char(10),
pcevdate    char(8),
pcevtime    char(8),
pcevdcod    char(4),
pcevnurs    char(6),
pcevstat    decimal(1,0),
pcevspar    char(11),
lf          char(1)
);
create unique index pcpevaa1 on pcpevaaf
(
pcevuniq,
pcevdate,
pcevtime
);
revoke all on pcpevaaf from public ; 
grant select on pcpevaaf to public ; 
