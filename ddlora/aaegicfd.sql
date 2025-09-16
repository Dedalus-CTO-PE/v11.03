create table aaegicaf
(
  aeiccode    varchar2(4) default ' ' not null,
  aeicdesc    varchar2(20) default ' ' not null,
  aeicsuba    varchar2(1) default ' ' not null,
  aeicspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegica1 primary key( 
aeiccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
