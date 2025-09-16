create table patfn2af
(
  ptfnhfnd    char(6) default ' ' not null,
  ptfnbmvh    decimal(1,0) default 0 not null,
  ptfnmvrt    decimal(8,2) default 0 not null,
  ptfnhrmv    decimal(2,0) default 0 not null,
  ptfnmvbc    char(9) default ' ' not null,
  ptfnhosp    char(3) default ' ' not null,
  ptfnedat    char(8) default ' ' not null,
  ptfnspre    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patfn2a1 on patfn2af
(
ptfnhfnd,
ptfnhosp,
ptfnedat
);
create unique index patfn2a2 on patfn2af
(
ptfnhosp,
ptfnhfnd,
ptfnedat
);
revoke all on patfn2af from public ; 
grant select on patfn2af to public ; 
