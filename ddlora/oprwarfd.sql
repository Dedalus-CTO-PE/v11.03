create table oprwaraf
(
  opwadate    varchar2(6) default ' ' not null,
  opwaward    varchar2(3) default ' ' not null,
  opwancas    number(6,0) default 0 not null,
  opwanopr    number(6,0) default 0 not null,
  opwaspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprwara1 primary key( 
opwadate,
opwaward)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
