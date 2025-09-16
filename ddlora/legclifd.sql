create table legcliaf
(
  locasite    varchar2(6) default ' ' not null,
  locaclin    varchar2(6) default ' ' not null,
  locadoct    varchar2(6) default ' ' not null,
  locadesc    varchar2(30) default ' ' not null,
  locaccon    varchar2(6) default ' ' not null,
  lotcliac    varchar2(1) default ' ' not null,
  locaspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legclia1 primary key( 
locasite,
locaclin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legclia2 on legcliaf
(
locaclin
)
  tablespace pas_indx; 
create unique index legclia3 on legcliaf
(
locadoct,
locaclin
)
  tablespace pas_indx; 
create unique index legclia4 on legcliaf
(
locadesc,
locaclin
)
  tablespace pas_indx; 
