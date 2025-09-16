create table patmmbsf
(
  mmcode      char(9) default ' ' not null,
  dmmadmn     char(8) default ' ' not null,
  dmmrecn     char(3) default ' ' not null,
  mmdate      char(8) default ' ' not null,
  mmstim      char(5) default ' ' not null,
  mmetim      char(5) default ' ' not null,
  ptmmdesc    char(70) default ' ' not null,
  ptmmopid    char(10) default ' ' not null,
  ptmmtmno    char(1) default ' ' not null,
  ptmmedat    char(8) default ' ' not null,
  ptmmrpst    char(5) default ' ' not null,
  ptmmrpet    char(5) default ' ' not null,
  ptmmvaid    char(1) default ' ' not null,
  ptmmapra    char(20) default ' ' not null,
  mmspare     char(49) default ' ' not null,
  lf          char(1)
);
create unique index patmmbs1 on patmmbsf
(
dmmadmn,
dmmrecn
);
create unique index patmmbs2 on patmmbsf
(
mmcode,
dmmadmn,
dmmrecn
);
revoke all on patmmbsf from public ; 
grant select on patmmbsf to public ; 
