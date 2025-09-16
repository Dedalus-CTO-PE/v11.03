create table ceaperaf
(
  cepeyear    varchar2(4) default ' ' not null,
  cepeper     varchar2(2) default ' ' not null,
  cepedes     varchar2(15) default ' ' not null,
  cepeend     varchar2(8) default ' ' not null,
  cepespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceapera1 primary key( 
cepeyear,
cepeper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ceapera2 on ceaperaf
(
cepeend,
cepeyear,
cepeper
)
  tablespace pas_indx; 
