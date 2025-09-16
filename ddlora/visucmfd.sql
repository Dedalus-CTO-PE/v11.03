create table visucmaf
(
  vsucvisn    varchar2(8) default ' ' not null,
  vsucctyp    varchar2(3) default ' ' not null,
  vsucucnt    varchar2(3) default ' ' not null,
  vsuclnum    varchar2(3) default ' ' not null,
  vsucline    varchar2(100) default ' ' not null,
  vsuccdat    varchar2(8) default ' ' not null,
  vsucctim    varchar2(8) default ' ' not null,
  vsuccuid    varchar2(10) default ' ' not null,
  vsucudat    varchar2(8) default ' ' not null,
  vsucutim    varchar2(8) default ' ' not null,
  vsucuuid    varchar2(10) default ' ' not null,
  vsucspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint visucma1 primary key( 
vsucvisn,
vsucctyp,
vsucucnt,
vsuclnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
