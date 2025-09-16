create table pataudal
(
  ptalaudd    varchar2(8) default ' ' not null,
  ptalaudt    varchar2(8) default ' ' not null,
  ptalaudp    varchar2(2) default ' ' not null,
  ptalaudr    varchar2(1) default ' ' not null,
  ptalauds    number(1,0) default 0 not null,
  ptalaudo    varchar2(4) default ' ' not null,
  ptalurno    varchar2(8) default ' ' not null,
  ptalcatg    varchar2(2) default ' ' not null,
  ptalcode    varchar2(3) default ' ' not null,
  ptalcntr    varchar2(3) default ' ' not null,
  ptaldate    varchar2(8) default ' ' not null,
  ptalcdte    varchar2(8) default ' ' not null,
  ptallife    varchar2(1) default ' ' not null,
  ptalreac    varchar2(3) default ' ' not null,
  ptalusid    varchar2(10) default ' ' not null,
  ptallsev    varchar2(1) default ' ' not null,
  ptalrcom    varchar2(20) default ' ' not null,
  ptalrdte    varchar2(8) default ' ' not null,
  ptalicdc    varchar2(9) default ' ' not null,
  ptaldtin    varchar2(8) default ' ' not null,
  ptaledat    varchar2(8) default ' ' not null,
  ptalrqby    varchar2(10) default ' ' not null,
  ptalhosp    varchar2(3) default ' ' not null,
  ptalctim    varchar2(8) default ' ' not null,
  ptaludat    varchar2(8) default ' ' not null,
  ptalutim    varchar2(8) default ' ' not null,
  ptaluuid    varchar2(10) default ' ' not null,
  ptaltpid    varchar2(20) default ' ' not null,
  ptalcpac    varchar2(1) default ' ' not null,
  ptalucpf    varchar2(10) default ' ' not null,
  ptaldcpu    varchar2(8) default ' ' not null,
  ptalspar    varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pataudal on pataudal
(
ptalaudd,
ptalaudt,
ptalaudp,
ptalaudr
)
tablespace pas_indx; 
create index patauda2 on pataudal
(
ptalurno,
ptalaudd,
ptalaudt,
ptalaudp,
ptalaudr
)
tablespace pas_indx; 
create table patalrtf
(
  ptalurno    varchar2(8) default ' ' not null,
  ptalcatg    varchar2(2) default ' ' not null,
  ptalcode    varchar2(3) default ' ' not null,
  ptalcntr    varchar2(3) default ' ' not null,
  ptaldate    varchar2(8) default ' ' not null,
  ptalcdte    varchar2(8) default ' ' not null,
  ptallife    varchar2(1) default ' ' not null,
  ptalreac    varchar2(3) default ' ' not null,
  ptalusid    varchar2(10) default ' ' not null,
  ptallsev    varchar2(1) default ' ' not null,
  ptalrcom    varchar2(20) default ' ' not null,
  ptalrdte    varchar2(8) default ' ' not null,
  ptalicdc    varchar2(9) default ' ' not null,
  ptaldtin    varchar2(8) default ' ' not null,
  ptaledat    varchar2(8) default ' ' not null,
  ptalrqby    varchar2(10) default ' ' not null,
  ptalhosp    varchar2(3) default ' ' not null,
  ptalctim    varchar2(8) default ' ' not null,
  ptaludat    varchar2(8) default ' ' not null,
  ptalutim    varchar2(8) default ' ' not null,
  ptaluuid    varchar2(10) default ' ' not null,
  ptaltpid    varchar2(20) default ' ' not null,
  ptalcpac    varchar2(1) default ' ' not null,
  ptalucpf    varchar2(10) default ' ' not null,
  ptaldcpu    varchar2(8) default ' ' not null,
  ptalspar    varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patalrt1 primary key( 
ptalurno,
ptalcatg,
ptalcode,
ptalcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patalrt2 on patalrtf
(
ptaledat,
ptalurno,
ptalcatg,
ptalcode,
ptalcntr
)
  tablespace pas_indx; 
create unique index patalrt3 on patalrtf
(
ptaldtin,
ptalurno,
ptalcatg,
ptalcode,
ptalcntr
)
  tablespace pas_indx; 
