create table pcpauddb
(
pcdbaudd    char(8),
pcdbaudt    char(8),
pcdbaudp    char(2),
pcdbaudr    char(1),
pcdbauds    decimal(1,0),
pcdbaudo    char(4),
dpcdbtyp    char(2),
pcdbclss    char(9),
pcdbcode    char(9),
pcdbspar    char(9),
lf          char(1)
);
create index pcpauddb on pcpauddb
(
pcdbaudd,
pcdbaudt,
pcdbaudp,
pcdbaudr
);
revoke all on pcpauddb from public ; 
grant select on pcpauddb to public ; 
create table pcpdbsaf
(
dpcdbtyp    char(2),
pcdbclss    char(9),
pcdbcode    char(9),
pcdbspar    char(9),
lf          char(1)
);
create unique index pcpdbsa1 on pcpdbsaf
(
dpcdbtyp,
pcdbclss,
pcdbcode
);
revoke all on pcpdbsaf from public ; 
grant select on pcpdbsaf to public ; 
