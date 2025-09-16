create table patgsrnf
(
  gsrurno     varchar2(8) default ' ' not null,
  dgsrbill    varchar2(8) default ' ' not null,
  gsrsnam     varchar2(30) default ' ' not null,
  gsrgnam     varchar2(30) default ' ' not null,
  gsrskey     varchar2(10) default ' ' not null,
  gsrgkey1    varchar2(8) default ' ' not null,
  gsrgkey2    varchar2(8) default ' ' not null,
  gsrsys      number(1,0) default 0 not null,
  gsrdob      varchar2(8) default ' ' not null,
  gsrsex      varchar2(1) default ' ' not null,
  ptgsgnm2    varchar2(30) default ' ' not null,
  gsrspare    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patgsrn1 primary key( 
gsrurno,
dgsrbill,
gsrsnam,
gsrgnam,
ptgsgnm2,
gsrdob,
gsrsex)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create  index patgsrn2 on patgsrnf
(
gsrsnam,
gsrgnam,
ptgsgnm2,
gsrdob
)
  tablespace pas_indx; 
create  index patgsrn3 on patgsrnf
(
gsrskey,
gsrgkey1,
gsrgkey2,
gsrdob
)
  tablespace pas_indx; 
create  index patgsrn4 on patgsrnf
(
gsrskey,
gsrgkey2,
gsrgkey1,
gsrdob
)
  tablespace pas_indx; 
create  index patgsrn5 on patgsrnf
(
gsrskey,
gsrsnam,
gsrgnam,
ptgsgnm2
)
  tablespace pas_indx; 
create  index patgsrn6 on patgsrnf
(
gsrdob,
gsrsnam,
gsrgnam,
ptgsgnm2
)
  tablespace pas_indx; 
create  index patgsrn7 on patgsrnf
(
gsrdob,
gsrskey,
gsrsnam,
gsrgnam,
ptgsgnm2
)
  tablespace pas_indx; 
create  index patgsrn8 on patgsrnf
(
gsrskey,
gsrgnam,
ptgsgnm2,
gsrdob,
gsrsnam
)
  tablespace pas_indx; 
