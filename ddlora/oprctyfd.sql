create table oprctyaf
(
  opcyuniq    varchar2(10) default ' ' not null,
  opcyteam    varchar2(1) default ' ' not null,
  opcycntr    varchar2(2) default ' ' not null,
  opcyitem    varchar2(9) default ' ' not null,
  opcyctyp    varchar2(1) default ' ' not null,
  opcyquan    number(4,0) default 0 not null,
  opcycdat    varchar2(8) default ' ' not null,
  opcyctim    varchar2(8) default ' ' not null,
  opcycuid    varchar2(10) default ' ' not null,
  opcyudat    varchar2(8) default ' ' not null,
  opcyutim    varchar2(8) default ' ' not null,
  opcyuuid    varchar2(10) default ' ' not null,
  opcyspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprctya1 primary key( 
opcyuniq,
opcyteam,
opcycntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprctya2 on oprctyaf
(
opcyuniq,
opcyteam,
opcyitem,
opcycntr
)
  tablespace pas_indx; 
