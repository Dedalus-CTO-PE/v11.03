create table pcpauddh
(
pcdhaudd    char(8),
pcdhaudt    char(8),
pcdhaudp    char(2),
pcdhaudr    char(1),
pcdhauds    decimal(1,0),
pcdhaudo    char(4),
dpcdhadm    char(8),
dpcdhtyp    char(1),
pcdhdcod    char(4),
pcdhspar    char(11),
lf          char(1)
);
create index pcpauddh on pcpauddh
(
pcdhaudd,
pcdhaudt,
pcdhaudp,
pcdhaudr
);
revoke all on pcpauddh from public ; 
grant select on pcpauddh to public ; 
create table pcpdisaf
(
dpcdhadm    char(8),
dpcdhtyp    char(1),
pcdhdcod    char(4),
pcdhspar    char(11),
lf          char(1)
);
create unique index pcpdisa1 on pcpdisaf
(
dpcdhadm,
dpcdhtyp
);
revoke all on pcpdisaf from public ; 
grant select on pcpdisaf to public ; 
