create table mrttdtaf
(
  mrtdtmno    char(4) default ' ' not null,
  mrtdrect    char(1) default ' ' not null,
  mrtdseqn    char(3) default ' ' not null,
  mrtddest    char(1) default ' ' not null,
  mrtddecd    char(9) default ' ' not null,
  mrtddesc    char(200) default ' ' not null,
  mrtdspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index mrttdtr1 on mrttdtaf
(
mrtdtmno,
mrtdrect,
mrtdseqn
);
revoke all on mrttdtaf from public ; 
grant select on mrttdtaf to public ; 
