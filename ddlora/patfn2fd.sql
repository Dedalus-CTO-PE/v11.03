create table patfn2af
(
  ptfnhfnd    varchar2(6) default ' ' not null,
  ptfnbmvh    number(1,0) default 0 not null,
  ptfnmvrt    number(8,2) default 0 not null,
  ptfnhrmv    number(2,0) default 0 not null,
  ptfnmvbc    varchar2(9) default ' ' not null,
  ptfnhosp    varchar2(3) default ' ' not null,
  ptfnedat    varchar2(8) default ' ' not null,
  ptfnspre    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfn2a1 primary key( 
ptfnhfnd,
ptfnhosp,
ptfnedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patfn2a2 on patfn2af
(
ptfnhosp,
ptfnhfnd,
ptfnedat
)
  tablespace pas_indx; 
