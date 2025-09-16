create table allcctaf
(
  alccdept    char(3) default ' ' not null,
  alcccont    char(3) default ' ' not null,
  alcccdat    char(8) default ' ' not null,
  alccctim    char(8) default ' ' not null,
  alcccuid    char(10) default ' ' not null,
  alccudat    char(8) default ' ' not null,
  alccutim    char(8) default ' ' not null,
  alccuuid    char(10) default ' ' not null,
  alccspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allccta1 on allcctaf
(
alccdept,
alcccont
);
revoke all on allcctaf from public ; 
grant select on allcctaf to public ; 
