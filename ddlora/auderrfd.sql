create table auderraf
(
  auerunq     varchar2(20) default ' ' not null,
  auertrg     varchar2(50) default ' ' not null,
  auererr     varchar2(255) default ' ' not null,
  auerspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint auderra1 primary key( 
auerunq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
