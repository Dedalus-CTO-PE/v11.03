create table sinkexaf
(
  sikekwd     varchar2(15) default ' ' not null,
  sikespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinkexa1 primary key( 
sikekwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
