create table patonhaf
(
  ptonvisn    char(8) default ' ' not null,
  ptonvavl    char(2) default ' ' not null,
  ptontdat    char(8) default ' ' not null,
  ptonttim    char(8) default ' ' not null,
  ptonurid    char(10) default ' ' not null,
  ptonreah    char(3) default ' ' not null,
  ptondesc    char(80) default ' ' not null,
  ptonhact    char(1) default ' ' not null,
  ptonclcd    char(3) default ' ' not null,
  ptonhlfu    char(6) default ' ' not null,
  ptonhlin    char(8) default ' ' not null,
  ptonspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patonha1 on patonhaf
(
ptonvisn,
ptontdat,
ptonttim
);
revoke all on patonhaf from public ; 
grant select on patonhaf to public ; 
