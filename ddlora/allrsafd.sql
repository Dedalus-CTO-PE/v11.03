create table allrsaaf
(
  alravisn    varchar2(8) default ' ' not null,
  alraladm    varchar2(8) default ' ' not null,
  alracdat    varchar2(8) default ' ' not null,
  alractim    varchar2(8) default ' ' not null,
  alracuid    varchar2(10) default ' ' not null,
  alraudat    varchar2(8) default ' ' not null,
  alrautim    varchar2(8) default ' ' not null,
  alrauuid    varchar2(10) default ' ' not null,
  alraspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrsaa1 primary key( 
alravisn,
alraladm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allrsaa2 on allrsaaf
(
alraladm,
alravisn
)
  tablespace pas_indx; 
