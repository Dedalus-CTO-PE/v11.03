create table outmxsaf
(
otxssite    char(6),
otxsclin    char(6),
dotxsday    char(1),
otxstime    char(5),
dotxscnt    char(2),
otxsdoct    char(6),
otxsspec    char(3),
otxcspar    char(20),
lf          char(1)
);
create unique index outmxsa1 on outmxsaf
(
otxssite,
otxsclin,
dotxsday,
otxstime,
dotxscnt
);
revoke all on outmxsaf from public ; 
grant select on outmxsaf to public ; 
