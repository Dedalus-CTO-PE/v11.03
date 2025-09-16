create table oprotsaf
(
opotdate    char(8),
opottype    char(3),
opotperd    char(1),
opotuser    char(3),
opotncas    decimal(6,0),
opotnopr    decimal(6,0),
opottime    decimal(6,0),
opotdofw    decimal(1,0),
opotspar    char(7),
lf          char(1)
);
create unique index oprotsa1 on oprotsaf
(
opotdate,
opottype,
opotperd,
opotuser
);
revoke all on oprotsaf from public ; 
grant select on oprotsaf to public ; 
