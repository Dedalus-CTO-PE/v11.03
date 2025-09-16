create table allitvaf
(
  alivvisn    varchar2(8) default ' ' not null,
  alivenct    varchar2(8) default ' ' not null,
  alivicnt    varchar2(8) default ' ' not null,
  alivcode    varchar2(9) default ' ' not null,
  alivdura    varchar2(5) default ' ' not null,
  alivcdat    varchar2(8) default ' ' not null,
  alivctim    varchar2(8) default ' ' not null,
  alivcuid    varchar2(10) default ' ' not null,
  alivudat    varchar2(8) default ' ' not null,
  alivutim    varchar2(8) default ' ' not null,
  alivuuid    varchar2(10) default ' ' not null,
  alivspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allitva1 primary key( 
alivvisn,
alivenct,
alivicnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
