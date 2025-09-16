create table pmsckiaf
(
  pmckcntr    varchar2(6) default ' ' not null,
  pmckkkwd    varchar2(15) default ' ' not null,
  pmckspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsckia1 primary key( 
pmckcntr,
pmckkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsckia2 on pmsckiaf
(
pmckkkwd,
pmckcntr
)
  tablespace pas_indx; 
