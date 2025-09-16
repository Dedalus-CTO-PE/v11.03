create table allhhdaf
(
  alhhfnam    varchar2(20) default ' ' not null,
  alhhsdat    varchar2(8) default ' ' not null,
  alhhedat    varchar2(8) default ' ' not null,
  alhhstat    varchar2(1) default ' ' not null,
  alhhspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allhhda1 primary key( 
alhhfnam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allhhda2 on allhhdaf
(
alhhsdat,
alhhfnam
)
  tablespace pas_indx; 
