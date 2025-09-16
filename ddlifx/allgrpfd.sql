create table allgrpaf
(
  algpsesn    char(8) default ' ' not null,
  algpurno    char(8) default ' ' not null,
  algprefn    char(8) default ' ' not null,
  algpactv    char(1) default ' ' not null,
  algpcdat    char(8) default ' ' not null,
  algpctim    char(8) default ' ' not null,
  algpcuid    char(10) default ' ' not null,
  algpudat    char(8) default ' ' not null,
  algputim    char(8) default ' ' not null,
  algpuuid    char(10) default ' ' not null,
  algpspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allgrpa1 on allgrpaf
(
algpsesn,
algprefn
);
create unique index allgrpa2 on allgrpaf
(
algpsesn,
algpurno,
algpactv,
algprefn
);
create unique index allgrpa3 on allgrpaf
(
algpurno,
algpsesn,
algprefn
);
revoke all on allgrpaf from public ; 
grant select on allgrpaf to public ; 
