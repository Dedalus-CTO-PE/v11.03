create table pmscuraf
(
  pmcuvisn    varchar2(8) default ' ' not null,
  pmcusurn    varchar2(40) default ' ' not null,
  pmcugnam    varchar2(40) default ' ' not null,
  pmcuurno    varchar2(8) default ' ' not null,
  pmcudate    varchar2(8) default ' ' not null,
  pmculocn    varchar2(50) default ' ' not null,
  pmcusyst    varchar2(1) default ' ' not null,
  pmcuosit    varchar2(6) default ' ' not null,
  pmcuhosp    varchar2(3) default ' ' not null,
  pmcugnm2    varchar2(40) default ' ' not null,
  pmcutsta    varchar2(2) default ' ' not null,
  pmcutloc    varchar2(6) default ' ' not null,
  pmcuspar    varchar2(33) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmscura1 primary key( 
pmcuvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmscura2 on pmscuraf
(
pmcusurn,
pmcugnam,
pmcuurno,
pmcuvisn
)
  tablespace pas_indx; 
create unique index pmscura3 on pmscuraf
(
pmcuurno,
pmcuvisn
)
  tablespace pas_indx; 
create unique index pmscura4 on pmscuraf
(
pmcudate,
pmcuvisn
)
  tablespace pas_indx; 
create unique index pmscura5 on pmscuraf
(
pmcusyst,
pmcusurn,
pmcugnam,
pmcuurno,
pmcuvisn
)
  tablespace pas_indx; 
create unique index pmscura6 on pmscuraf
(
pmcuhosp,
pmcusurn,
pmcugnam,
pmcuurno,
pmcuvisn
)
  tablespace pas_indx; 
create unique index pmscura7 on pmscuraf
(
pmcugnam,
pmcusurn,
pmcuvisn
)
  tablespace pas_indx; 
