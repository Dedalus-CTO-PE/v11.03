create table pmsmupaf
(
  pmmuurno    varchar2(8) default ' ' not null,
  pmmucuid    varchar2(8) default ' ' not null,
  pmmucdat    varchar2(8) default ' ' not null,
  pmmuctim    varchar2(8) default ' ' not null,
  pmmuuass    varchar2(10) default ' ' not null,
  pmmudass    varchar2(8) default ' ' not null,
  pmmutass    varchar2(8) default ' ' not null,
  pmmuspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmupa1 primary key( 
pmmuurno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
