create table visintaf
(
  vsinvisn    varchar2(8) default ' ' not null,
  vsindate    varchar2(8) default ' ' not null,
  vsintime    varchar2(8) default ' ' not null,
  vsintype    number(2,0) default 0 not null,
  vsinsubk    varchar2(50) default ' ' not null,
  vsinwuid    varchar2(10) default ' ' not null,
  vsinnotf    varchar2(1) default ' ' not null,
  vsinudc1    varchar2(3) default ' ' not null,
  vsinudc2    varchar2(3) default ' ' not null,
  vsinudc3    varchar2(3) default ' ' not null,
  vsinudc4    varchar2(3) default ' ' not null,
  vsinintp    varchar2(10) default ' ' not null,
  vsinconf    varchar2(1) default ' ' not null,
  vsinchon    varchar2(1) default ' ' not null,
  vsinspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint visinta1 primary key( 
vsinvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index visinta2 on visintaf
(
vsindate,
vsintime,
vsinvisn
)
  tablespace pas_indx; 
