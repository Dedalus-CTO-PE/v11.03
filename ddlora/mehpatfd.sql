create table mehpataf
(
  mhptxdat    varchar2(8) default ' ' not null,
  mhptxnum    varchar2(3) default ' ' not null,
  mhptvisn    varchar2(8) default ' ' not null,
  mhpturno    varchar2(8) default ' ' not null,
  mhptocur    varchar2(5) default ' ' not null,
  mhpterid    varchar2(9) default ' ' not null,
  mhptacid    varchar2(3) default ' ' not null,
  mhptatyp    varchar2(3) default ' ' not null,
  mhptaset    varchar2(2) default ' ' not null,
  mhptwcpn    varchar2(6) default ' ' not null,
  mhptsdat    varchar2(19) default ' ' not null,
  mhptedat    varchar2(19) default ' ' not null,
  mhptfamw    varchar2(1) default ' ' not null,
  mhptspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpata1 primary key( 
mhptxdat,
mhptxnum,
mhptvisn,
mhpturno,
mhptocur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
