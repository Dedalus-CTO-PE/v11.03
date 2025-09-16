create table pcpaudou
(
  pcotaudd    varchar2(8) default ' ' not null,
  pcotaudt    varchar2(8) default ' ' not null,
  pcotaudp    varchar2(2) default ' ' not null,
  pcotaudr    varchar2(1) default ' ' not null,
  pcotauds    number(1,0) default 0 not null,
  pcotaudo    varchar2(4) default ' ' not null,
  pcotuniq    varchar2(10) default ' ' not null,
  pcotcode    varchar2(9) default ' ' not null,
  pcotdcod    varchar2(4) default ' ' not null,
  pcotdate    varchar2(8) default ' ' not null,
  pcottype    number(1,0) default 0 not null,
  pcotdywk    number(3,0) default 0 not null,
  pcotspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudou on pcpaudou
(
pcotaudd,
pcotaudt,
pcotaudp,
pcotaudr
)
tablespace pas_indx; 
create table pcpoutaf
(
  pcotuniq    varchar2(10) default ' ' not null,
  pcotcode    varchar2(9) default ' ' not null,
  pcotdcod    varchar2(4) default ' ' not null,
  pcotdate    varchar2(8) default ' ' not null,
  pcottype    number(1,0) default 0 not null,
  pcotdywk    number(3,0) default 0 not null,
  pcotspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpouta1 primary key( 
pcotuniq,
pcotcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
