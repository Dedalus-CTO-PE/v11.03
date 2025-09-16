create table pcpauddh
(
  pcdhaudd    varchar2(8) default ' ' not null,
  pcdhaudt    varchar2(8) default ' ' not null,
  pcdhaudp    varchar2(2) default ' ' not null,
  pcdhaudr    varchar2(1) default ' ' not null,
  pcdhauds    number(1,0) default 0 not null,
  pcdhaudo    varchar2(4) default ' ' not null,
  dpcdhadm    varchar2(8) default ' ' not null,
  dpcdhtyp    varchar2(1) default ' ' not null,
  pcdhdcod    varchar2(4) default ' ' not null,
  pcdhspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpauddh on pcpauddh
(
pcdhaudd,
pcdhaudt,
pcdhaudp,
pcdhaudr
)
tablespace pas_indx; 
create table pcpdisaf
(
  dpcdhadm    varchar2(8) default ' ' not null,
  dpcdhtyp    varchar2(1) default ' ' not null,
  pcdhdcod    varchar2(4) default ' ' not null,
  pcdhspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpdisa1 primary key( 
dpcdhadm,
dpcdhtyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
