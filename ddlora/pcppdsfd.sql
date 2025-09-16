create table pcpaudpd
(
  pcpdaudd    varchar2(8) default ' ' not null,
  pcpdaudt    varchar2(8) default ' ' not null,
  pcpdaudp    varchar2(2) default ' ' not null,
  pcpdaudr    varchar2(1) default ' ' not null,
  pcpdauds    number(1,0) default 0 not null,
  pcpdaudo    varchar2(4) default ' ' not null,
  dpcpdadm    varchar2(8) default ' ' not null,
  pcpddcod    varchar2(4) default ' ' not null,
  dpcpdlin    varchar2(2) default ' ' not null,
  pcpddesc    varchar2(60) default ' ' not null,
  pcpdspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudpd on pcpaudpd
(
pcpdaudd,
pcpdaudt,
pcpdaudp,
pcpdaudr
)
tablespace pas_indx; 
create table pcppdsaf
(
  dpcpdadm    varchar2(8) default ' ' not null,
  pcpddcod    varchar2(4) default ' ' not null,
  dpcpdlin    varchar2(2) default ' ' not null,
  pcpddesc    varchar2(60) default ' ' not null,
  pcpdspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcppdsa1 primary key( 
dpcpdadm,
pcpddcod,
dpcpdlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
