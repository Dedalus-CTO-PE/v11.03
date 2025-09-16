create table allmaiaf
(
  almaequi    varchar2(10) default ' ' not null,
  almamnum    varchar2(8) default ' ' not null,
  almamdat    varchar2(8) default ' ' not null,
  almamtim    varchar2(8) default ' ' not null,
  almacond    varchar2(3) default ' ' not null,
  almahdat    varchar2(8) default ' ' not null,
  almahnum    varchar2(10) default ' ' not null,
  almacdat    varchar2(8) default ' ' not null,
  almactim    varchar2(8) default ' ' not null,
  almacusr    varchar2(10) default ' ' not null,
  almaudat    varchar2(8) default ' ' not null,
  almautim    varchar2(8) default ' ' not null,
  almauusr    varchar2(10) default ' ' not null,
  almaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allmaia1 primary key( 
almaequi,
almamnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allmaia2 on allmaiaf
(
almaequi,
almamdat,
almamnum
)
  tablespace pas_indx; 
