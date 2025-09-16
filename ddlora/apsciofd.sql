create table apscioaf
(
  apciisc     varchar2(1) default ' ' not null,
  apciord     varchar2(7) default ' ' not null,
  apcicrd     varchar2(5) default ' ' not null,
  apcidat     varchar2(8) default ' ' not null,
  apcispa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apscioa1 primary key( 
apciisc,
apciord)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apscioa2 on apscioaf
(
apcicrd,
apcidat,
apciisc,
apciord
)
  tablespace pas_indx; 
