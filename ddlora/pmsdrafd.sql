create table pmsdraaf
(
  pmdrdoct    varchar2(10) default ' ' not null,
  pmdrarra    varchar2(3) default ' ' not null,
  pmdrafdt    varchar2(8) default ' ' not null,
  pmdratdt    varchar2(8) default ' ' not null,
  pmdrcuid    varchar2(10) default ' ' not null,
  pmdrcdat    varchar2(8) default ' ' not null,
  pmdrctim    varchar2(8) default ' ' not null,
  pmdruuid    varchar2(10) default ' ' not null,
  pmdrudat    varchar2(8) default ' ' not null,
  pmdrutim    varchar2(8) default ' ' not null,
  pmdrspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdraa1 primary key( 
pmdrdoct,
pmdrarra)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsdraa2 on pmsdraaf
(
pmdrdoct,
pmdrafdt,
pmdrarra
)
  tablespace pas_indx; 
