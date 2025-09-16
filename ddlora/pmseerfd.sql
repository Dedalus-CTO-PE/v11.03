create table pmseeraf
(
  pmeruniq    varchar2(20) default ' ' not null,
  pmerdate    varchar2(8) default ' ' not null,
  pmertime    varchar2(8) default ' ' not null,
  pmermess    varchar2(200) default ' ' not null,
  pmerspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmseera1 primary key( 
pmeruniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
