create table patgsrnf
(
  gsrurno     char(8) default ' ' not null,
  dgsrbill    char(8) default ' ' not null,
  gsrsnam     char(30) default ' ' not null,
  gsrgnam     char(30) default ' ' not null,
  gsrskey     char(10) default ' ' not null,
  gsrgkey1    char(8) default ' ' not null,
  gsrgkey2    char(8) default ' ' not null,
  gsrsys      decimal(1,0) default 0 not null,
  gsrdob      char(8) default ' ' not null,
  gsrsex      char(1) default ' ' not null,
  ptgsgnm2    char(30) default ' ' not null,
  gsrspare    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patgsrn1 on patgsrnf
(
gsrurno,
dgsrbill,
gsrsnam,
gsrgnam,
ptgsgnm2,
gsrdob,
gsrsex
);
create  index patgsrn2 on patgsrnf
(
gsrsnam,
gsrgnam,
ptgsgnm2,
gsrdob
);
create  index patgsrn3 on patgsrnf
(
gsrskey,
gsrgkey1,
gsrgkey2,
gsrdob
);
create  index patgsrn4 on patgsrnf
(
gsrskey,
gsrgkey2,
gsrgkey1,
gsrdob
);
create  index patgsrn5 on patgsrnf
(
gsrskey,
gsrsnam,
gsrgnam,
ptgsgnm2
);
create  index patgsrn6 on patgsrnf
(
gsrdob,
gsrsnam,
gsrgnam,
ptgsgnm2
);
create  index patgsrn7 on patgsrnf
(
gsrdob,
gsrskey,
gsrsnam,
gsrgnam,
ptgsgnm2
);
create  index patgsrn8 on patgsrnf
(
gsrskey,
gsrgnam,
ptgsgnm2,
gsrdob,
gsrsnam
);
revoke all on patgsrnf from public ; 
grant select on patgsrnf to public ; 
