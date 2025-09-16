create table alldiaaf
(
  aldidept    varchar2(3) default ' ' not null,
  aldidiag    varchar2(9) default ' ' not null,
  aldidesc    varchar2(80) default ' ' not null,
  aldiicd     varchar2(9) default ' ' not null,
  aldiactv    varchar2(1) default ' ' not null,
  aldicdat    varchar2(8) default ' ' not null,
  aldictim    varchar2(8) default ' ' not null,
  aldicuid    varchar2(10) default ' ' not null,
  aldiudat    varchar2(8) default ' ' not null,
  aldiutim    varchar2(8) default ' ' not null,
  aldiuuid    varchar2(10) default ' ' not null,
  aldimhdp    varchar2(4) default ' ' not null,
  aldimhcp    varchar2(4) default ' ' not null,
  aldisdat    varchar2(8) default ' ' not null,
  aldiedat    varchar2(8) default ' ' not null,
  aldispar    varchar2(34) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alldiaa1 primary key( 
aldidept,
aldidiag)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alldiaa2 on alldiaaf
(
aldidept,
aldidesc,
aldidiag
)
  tablespace pas_indx; 
