create table nzpirnaf
(
  nzirhosp    varchar2(3) default ' ' not null,
  nzirirng    varchar2(3) default ' ' not null,
  nzirdesc    varchar2(40) default ' ' not null,
  nzirnext    number(8,0) default 0 not null,
  nzirmaxi    number(8,0) default 0 not null,
  nzirspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpirna1 primary key( 
nzirhosp,
nzirirng)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpirna2 on nzpirnaf
(
nzirirng,
nzirhosp
)
  tablespace pas_indx; 
