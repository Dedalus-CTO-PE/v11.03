create table allrlnaf
(
  alrlvisn    char(8) default ' ' not null,
  alrllnkv    char(8) default ' ' not null,
  alrlcdat    char(8) default ' ' not null,
  alrlctim    char(8) default ' ' not null,
  alrlcuid    char(10) default ' ' not null,
  alrlspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allrlna1 on allrlnaf
(
alrlvisn,
alrllnkv
);
create unique index allrlna2 on allrlnaf
(
alrllnkv,
alrlvisn
);
revoke all on allrlnaf from public ; 
grant select on allrlnaf to public ; 
