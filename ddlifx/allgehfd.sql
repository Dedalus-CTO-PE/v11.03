create table allgehaf
(
  algccont    char(8) default ' ' not null,
  algchcpc    char(10) default ' ' not null,
  algcspec    char(3) default ' ' not null,
  algchsta    char(3) default ' ' not null,
  algccdat    char(8) default ' ' not null,
  algcctim    char(8) default ' ' not null,
  algccuid    char(10) default ' ' not null,
  algcudat    char(8) default ' ' not null,
  algcutim    char(8) default ' ' not null,
  algcuuid    char(10) default ' ' not null,
  algcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allgeha1 on allgehaf
(
algccont,
algchcpc,
algcspec
);
revoke all on allgehaf from public ; 
grant select on allgehaf to public ; 
