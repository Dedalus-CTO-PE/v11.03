create table apstfbaf
(
  aptfbat     varchar2(5) default ' ' not null,
  aptftran    varchar2(5) default ' ' not null,
  aptfdate    varchar2(8) default ' ' not null,
  aptfspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apstfba1 primary key( 
aptfbat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apstfba2 on apstfbaf
(
aptftran,
aptfbat
)
  tablespace pas_indx; 
