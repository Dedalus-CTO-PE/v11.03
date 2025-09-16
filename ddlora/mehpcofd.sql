create table mehpcoaf
(
  mhpoxdat    varchar2(8) default ' ' not null,
  mhpoxnum    varchar2(3) default ' ' not null,
  mhpovisn    varchar2(8) default ' ' not null,
  mhpourno    varchar2(8) default ' ' not null,
  mhpoocur    varchar2(3) default ' ' not null,
  mhpoerid    varchar2(9) default ' ' not null,
  mhpoccod    varchar2(20) default ' ' not null,
  mhporcol    varchar2(4) default ' ' not null,
  mhpocdat    varchar2(19) default ' ' not null,
  mhpowcpn    varchar2(6) default ' ' not null,
  mhpooesp    varchar2(9) default ' ' not null,
  mhpopver    varchar2(4) default ' ' not null,
  mhpofcar    varchar2(4) default ' ' not null,
  mhpospar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpcoa1 primary key( 
mhpoxdat,
mhpoxnum,
mhpovisn,
mhpourno,
mhpoocur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
