create table patceraf
(
  ptceurno    varchar2(8) default ' ' not null,
  ptcetype    varchar2(3) default ' ' not null,
  ptcefdat    varchar2(8) default ' ' not null,
  ptcetdat    varchar2(8) default ' ' not null,
  ptcesdat    varchar2(8) default ' ' not null,
  ptcedcod    varchar2(10) default ' ' not null,
  ptcesent    varchar2(1) default ' ' not null,
  ptcecsta    varchar2(3) default ' ' not null,
  ptcespar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcera1 primary key( 
ptceurno,
ptcetype,
ptcefdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcera2 on patceraf
(
ptceurno,
ptcefdat,
ptcetype
)
  tablespace pas_indx; 
