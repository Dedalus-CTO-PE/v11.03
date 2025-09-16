create table patdkiaf
(
  ptdkdoc     varchar2(6) default ' ' not null,
  ptdkkwd     varchar2(15) default ' ' not null,
  ptdkspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdkia1 primary key( 
ptdkdoc,
ptdkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdkia2 on patdkiaf
(
ptdkkwd,
ptdkdoc
)
  tablespace pas_indx; 
