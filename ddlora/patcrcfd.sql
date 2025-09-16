create table patcrcaf
(
  dptcrbil    varchar2(8) default ' ' not null,
  ptcrdoct    varchar2(10) default ' ' not null,
  ptcrrefd    varchar2(10) default ' ' not null,
  dptcrcnt    varchar2(3) default ' ' not null,
  ptcrcmnt    varchar2(40) default ' ' not null,
  ptcrdate    varchar2(8) default ' ' not null,
  ptcramnt    number(5,2) default 0 not null,
  ptcrmisc    varchar2(9) default ' ' not null,
  ptcrspec    varchar2(3) default ' ' not null,
  ptcrtime    varchar2(8) default ' ' not null,
  ptcractn    varchar2(3) default ' ' not null,
  ptcrunit    varchar2(3) default ' ' not null,
  ptcrcomm    varchar2(100) default ' ' not null,
  ptcrspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcrca1 primary key( 
dptcrbil,
ptcrdoct,
ptcrrefd,
dptcrcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcrca2 on patcrcaf
(
ptcrdoct,
ptcrrefd,
ptcrdate,
dptcrbil,
dptcrcnt
)
  tablespace pas_indx; 
create unique index patcrca3 on patcrcaf
(
ptcrrefd,
ptcrdoct,
ptcrdate,
dptcrbil,
dptcrcnt
)
  tablespace pas_indx; 
create unique index patcrca4 on patcrcaf
(
ptcrdoct,
ptcrrefd,
dptcrbil,
ptcrdate,
dptcrcnt
)
  tablespace pas_indx; 
create unique index patcrca5 on patcrcaf
(
ptcrdate,
ptcrdoct,
ptcrrefd,
dptcrbil,
dptcrcnt
)
  tablespace pas_indx; 
