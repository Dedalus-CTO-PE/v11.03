create table patsaiaf
(
ptsaino     varchar2(3),
ptibano     varchar2(3),
ptsadesc    varchar2(50),
ptsaspar    varchar2(23),
lf          varchar2(1),
constraint patsaia1 primary key( 
ptsaino)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patsaiaf for patsaiaf;
create unique index patsaia2 on patsaiaf
(
ptibano
)
  tablespace pas_indx; 
