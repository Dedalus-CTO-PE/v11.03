create table pmspyraf
(
  pmpyurno    varchar2(8) default ' ' not null,
  pmpyclty    varchar2(3) default ' ' not null,
  pmpyefdt    varchar2(8) default ' ' not null,
  pmpydeft    varchar2(1) default ' ' not null,
  pmpyetdt    varchar2(8) default ' ' not null,
  pmpytitl    varchar2(4) default ' ' not null,
  pmpysnam    varchar2(40) default ' ' not null,
  pmpygnam    varchar2(40) default ' ' not null,
  pmpysgnm    varchar2(40) default ' ' not null,
  pmpyadd1    varchar2(35) default ' ' not null,
  pmpyadd2    varchar2(35) default ' ' not null,
  pmpyadd3    varchar2(35) default ' ' not null,
  pmpyadd4    varchar2(35) default ' ' not null,
  pmpypost    varchar2(8) default ' ' not null,
  pmpyrelp    varchar2(10) default ' ' not null,
  pmpytelp    varchar2(20) default ' ' not null,
  pmpytelb    varchar2(20) default ' ' not null,
  pmpytelm    varchar2(20) default ' ' not null,
  pmpyemai    varchar2(80) default ' ' not null,
  pmpycuid    varchar2(10) default ' ' not null,
  pmpycdat    varchar2(8) default ' ' not null,
  pmpyctim    varchar2(8) default ' ' not null,
  pmpyuuid    varchar2(10) default ' ' not null,
  pmpyudat    varchar2(8) default ' ' not null,
  pmpyutim    varchar2(8) default ' ' not null,
  pmpyspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmspyra1 primary key( 
pmpyurno,
pmpyclty,
pmpyefdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmspyra2 on pmspyraf
(
pmpyurno,
pmpyefdt,
pmpyclty
)
  tablespace pas_indx; 
