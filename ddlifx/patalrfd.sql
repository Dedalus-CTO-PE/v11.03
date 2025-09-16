create table pataudal
(
  ptalaudd    char(8) default ' ' not null,
  ptalaudt    char(8) default ' ' not null,
  ptalaudp    char(2) default ' ' not null,
  ptalaudr    char(1) default ' ' not null,
  ptalauds    decimal(1,0) default 0 not null,
  ptalaudo    char(4) default ' ' not null,
  ptalurno    char(8) default ' ' not null,
  ptalcatg    char(2) default ' ' not null,
  ptalcode    char(3) default ' ' not null,
  ptalcntr    char(3) default ' ' not null,
  ptaldate    char(8) default ' ' not null,
  ptalcdte    char(8) default ' ' not null,
  ptallife    char(1) default ' ' not null,
  ptalreac    char(3) default ' ' not null,
  ptalusid    char(10) default ' ' not null,
  ptallsev    char(1) default ' ' not null,
  ptalrcom    char(20) default ' ' not null,
  ptalrdte    char(8) default ' ' not null,
  ptalicdc    char(9) default ' ' not null,
  ptaldtin    char(8) default ' ' not null,
  ptaledat    char(8) default ' ' not null,
  ptalrqby    char(10) default ' ' not null,
  ptalhosp    char(3) default ' ' not null,
  ptalctim    char(8) default ' ' not null,
  ptaludat    char(8) default ' ' not null,
  ptalutim    char(8) default ' ' not null,
  ptaluuid    char(10) default ' ' not null,
  ptaltpid    char(20) default ' ' not null,
  ptalcpac    char(1) default ' ' not null,
  ptalucpf    char(10) default ' ' not null,
  ptaldcpu    char(8) default ' ' not null,
  ptalspar    char(31) default ' ' not null,
  lf          char(1)
);
create index pataudal on pataudal
(
ptalaudd,
ptalaudt,
ptalaudp,
ptalaudr
);
create index patauda2 on pataudal
(
ptalurno,
ptalaudd,
ptalaudt,
ptalaudp,
ptalaudr
);
revoke all on pataudal from public ; 
grant select on pataudal to public ; 
create table patalrtf
(
  ptalurno    char(8) default ' ' not null,
  ptalcatg    char(2) default ' ' not null,
  ptalcode    char(3) default ' ' not null,
  ptalcntr    char(3) default ' ' not null,
  ptaldate    char(8) default ' ' not null,
  ptalcdte    char(8) default ' ' not null,
  ptallife    char(1) default ' ' not null,
  ptalreac    char(3) default ' ' not null,
  ptalusid    char(10) default ' ' not null,
  ptallsev    char(1) default ' ' not null,
  ptalrcom    char(20) default ' ' not null,
  ptalrdte    char(8) default ' ' not null,
  ptalicdc    char(9) default ' ' not null,
  ptaldtin    char(8) default ' ' not null,
  ptaledat    char(8) default ' ' not null,
  ptalrqby    char(10) default ' ' not null,
  ptalhosp    char(3) default ' ' not null,
  ptalctim    char(8) default ' ' not null,
  ptaludat    char(8) default ' ' not null,
  ptalutim    char(8) default ' ' not null,
  ptaluuid    char(10) default ' ' not null,
  ptaltpid    char(20) default ' ' not null,
  ptalcpac    char(1) default ' ' not null,
  ptalucpf    char(10) default ' ' not null,
  ptaldcpu    char(8) default ' ' not null,
  ptalspar    char(31) default ' ' not null,
  lf          char(1)
);
create unique index patalrt1 on patalrtf
(
ptalurno,
ptalcatg,
ptalcode,
ptalcntr
);
create unique index patalrt2 on patalrtf
(
ptaledat,
ptalurno,
ptalcatg,
ptalcode,
ptalcntr
);
create unique index patalrt3 on patalrtf
(
ptaldtin,
ptalurno,
ptalcatg,
ptalcode,
ptalcntr
);
revoke all on patalrtf from public ; 
grant select on patalrtf to public ; 
