create table pmsecaaf
(
pmeainvn    varchar2(8),
pmeadate    varchar2(8),
pmeatime    varchar2(8),
pmeabatn    varchar2(8),
pmeastat    number(2,0),
pmeatype    varchar2(2),
pmeaoper    varchar2(10),
pmeatrid    varchar2(24),
pmeaeror    varchar2(4),
pmeaerot    varchar2(100),
pmeaspar    varchar2(31),
lf          varchar2(1),
constraint pmsecaa1 primary key( 
pmeainvn,
pmeadate,
pmeatime,
pmeatype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsecaaf for pmsecaaf;
create unique index pmsecaa2 on pmsecaaf
(
pmeadate,
pmeatime,
pmeatype,
pmeainvn
)
  tablespace pas_indx; 
create unique index pmsecaa3 on pmsecaaf
(
pmeainvn,
pmeabatn,
pmeadate,
pmeatime,
pmeatype
)
  tablespace pas_indx; 
