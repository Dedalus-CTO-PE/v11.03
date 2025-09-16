create table pmsukiaf
(
  pmukvsid    varchar2(3) default ' ' not null,
  pmukcode    varchar2(30) default ' ' not null,
  pmukkkwd    varchar2(50) default ' ' not null,
  pmukspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsukia1 primary key( 
pmukvsid,
pmukcode,
pmukkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsukia2 on pmsukiaf
(
pmukvsid,
pmukkkwd,
pmukcode
)
  tablespace pas_indx; 
