create table oprtpsaf
(
  optpspec    varchar2(3) default ' ' not null,
  optptrpr    varchar2(15) default ' ' not null,
  optphosp    varchar2(3) default ' ' not null,
  optpspar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprtpsa1 primary key( 
optpspec,
optphosp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
