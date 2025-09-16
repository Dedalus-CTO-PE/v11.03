create table nhirelaf
(
  nhrercd     varchar2(2) default ' ' not null,
  nhredes     varchar2(25) default ' ' not null,
  nhrespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhirela1 primary key( 
nhrercd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
