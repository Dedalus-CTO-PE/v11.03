create table allvreaf
(
  alvrstat    char(1) default ' ' not null,
  alvrurno    char(8) default ' ' not null,
  alvrvisn    char(8) default ' ' not null,
  alvrmtyp    char(7) default ' ' not null,
  alvrecod    char(4) default ' ' not null,
  alvrcont    char(8) default ' ' not null,
  alvrspar    char(32) default ' ' not null,
  lf          char(1)
);
create unique index allvrea1 on allvreaf
(
alvrstat,
alvrurno,
alvrvisn
);
revoke all on allvreaf from public ; 
grant select on allvreaf to public ; 
