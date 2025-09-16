create table ibapolaf
(
  ibpluniq    char(10) default ' ' not null,
  ibpltype    char(3) default ' ' not null,
  ibplurno    char(8) default ' ' not null,
  ibplvisn    char(8) default ' ' not null,
  ibplskey    char(40) default ' ' not null,
  ibplpscd    char(4) default ' ' not null,
  ibplspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index ibapola1 on ibapolaf
(
ibpluniq
);
revoke all on ibapolaf from public ; 
grant select on ibapolaf to public ; 
