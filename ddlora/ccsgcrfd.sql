create table ccsgcraf
(
  ccgchcd     varchar2(2) default ' ' not null,
  ccgcdpt     varchar2(8) default ' ' not null,
  ccgcgcd     varchar2(4) default ' ' not null,
  ccgccty     varchar2(4) default ' ' not null,
  ccgcrvi     number(18,6) default 0 not null,
  ccgcspa     varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsgcra1 primary key( 
ccgchcd,
ccgcdpt,
ccgcgcd,
ccgccty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
