create table patcrcaf
(
  dptcrbil    char(8) default ' ' not null,
  ptcrdoct    char(10) default ' ' not null,
  ptcrrefd    char(10) default ' ' not null,
  dptcrcnt    char(3) default ' ' not null,
  ptcrcmnt    char(40) default ' ' not null,
  ptcrdate    char(8) default ' ' not null,
  ptcramnt    decimal(5,2) default 0 not null,
  ptcrmisc    char(9) default ' ' not null,
  ptcrspec    char(3) default ' ' not null,
  ptcrtime    char(8) default ' ' not null,
  ptcractn    char(3) default ' ' not null,
  ptcrunit    char(3) default ' ' not null,
  ptcrcomm    char(100) default ' ' not null,
  ptcrspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patcrca1 on patcrcaf
(
dptcrbil,
ptcrdoct,
ptcrrefd,
dptcrcnt
);
create unique index patcrca2 on patcrcaf
(
ptcrdoct,
ptcrrefd,
ptcrdate,
dptcrbil,
dptcrcnt
);
create unique index patcrca3 on patcrcaf
(
ptcrrefd,
ptcrdoct,
ptcrdate,
dptcrbil,
dptcrcnt
);
create unique index patcrca4 on patcrcaf
(
ptcrdoct,
ptcrrefd,
dptcrbil,
ptcrdate,
dptcrcnt
);
create unique index patcrca5 on patcrcaf
(
ptcrdate,
ptcrdoct,
ptcrrefd,
dptcrbil,
dptcrcnt
);
revoke all on patcrcaf from public ; 
grant select on patcrcaf to public ; 
