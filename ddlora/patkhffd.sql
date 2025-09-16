create table patkhfaf
(
  pthffun     varchar2(6) default ' ' not null,
  pthftab     varchar2(8) default ' ' not null,
  pthfkwd     varchar2(15) default ' ' not null,
  pthfspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkhfa1 primary key( 
pthffun,
pthftab,
pthfkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkhfa2 on patkhfaf
(
pthfkwd,
pthffun,
pthftab
)
  tablespace pas_indx; 
