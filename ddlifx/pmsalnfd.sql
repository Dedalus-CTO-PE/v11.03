create table pmsaudan
(
  pmanaudd    char(8) default ' ' not null,
  pmanaudt    char(8) default ' ' not null,
  pmanaudp    char(2) default ' ' not null,
  pmanaudr    char(1) default ' ' not null,
  pmanauds    decimal(1,0) default 0 not null,
  pmanaudo    char(4) default ' ' not null,
  pmanurno    char(8) default ' ' not null,
  pmanacat    char(2) default ' ' not null,
  pmanacod    char(3) default ' ' not null,
  pmancntr    char(3) default ' ' not null,
  pmanlnno    char(3) default ' ' not null,
  pmancomm    char(70) default ' ' not null,
  pmanusid    char(10) default ' ' not null,
  pmanspar    char(27) default ' ' not null,
  lf          char(1)
);
create index pmsaudan on pmsaudan
(
pmanaudd,
pmanaudt,
pmanaudp,
pmanaudr
);
create index pmsauda2 on pmsaudan
(
pmanurno,
pmanaudd,
pmanaudt,
pmanaudp,
pmanaudr
);
revoke all on pmsaudan from public ; 
grant select on pmsaudan to public ; 
create table pmsalnaf
(
  pmanurno    char(8) default ' ' not null,
  pmanacat    char(2) default ' ' not null,
  pmanacod    char(3) default ' ' not null,
  pmancntr    char(3) default ' ' not null,
  pmanlnno    char(3) default ' ' not null,
  pmancomm    char(70) default ' ' not null,
  pmanusid    char(10) default ' ' not null,
  pmanspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index pmsalna1 on pmsalnaf
(
pmanurno,
pmanacat,
pmanacod,
pmancntr,
pmanlnno
);
revoke all on pmsalnaf from public ; 
grant select on pmsalnaf to public ; 
