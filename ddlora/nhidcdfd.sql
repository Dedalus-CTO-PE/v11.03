create table nhidcdaf
(
  nhdcdcd     varchar2(1) default ' ' not null,
  nhdcdes     varchar2(25) default ' ' not null,
  nhdciba     varchar2(3) default ' ' not null,
  nhdcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhidcda1 primary key( 
nhdcdcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
