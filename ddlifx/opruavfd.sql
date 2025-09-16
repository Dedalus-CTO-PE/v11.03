create table opruavaf
(
opuathet    char(6),
opuadate    char(8),
opuastim    char(5),
opuaetim    char(5),
opauspar    char(36),
lf          char(1)
);
create unique index opruava1 on opruavaf
(
opuathet,
opuadate,
opuastim
);
revoke all on opruavaf from public ; 
grant select on opruavaf to public ; 
