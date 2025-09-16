create table allrkiaf
(
  alrkdept    varchar2(3) default ' ' not null,
  alrkproc    varchar2(9) default ' ' not null,
  alrkkkwd    varchar2(15) default ' ' not null,
  alrkspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrkia1 primary key( 
alrkdept,
alrkproc,
alrkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allrkia2 on allrkiaf
(
alrkdept,
alrkkkwd,
alrkproc
)
  tablespace pas_indx; 
