create table patclpaf
(
  ptclvisn    char(8) default ' ' not null,
  ptclclty    char(3) default ' ' not null,
  ptclinvn    char(8) default ' ' not null,
  ptclsnam    char(40) default ' ' not null,
  ptclgnam    char(40) default ' ' not null,
  ptcladd1    char(35) default ' ' not null,
  ptcladd2    char(35) default ' ' not null,
  ptcladd3    char(35) default ' ' not null,
  ptcladd4    char(35) default ' ' not null,
  ptclpcod    char(8) default ' ' not null,
  ptclpphn    char(20) default ' ' not null,
  ptclbphn    char(20) default ' ' not null,
  ptclmphn    char(20) default ' ' not null,
  ptclemal    char(80) default ' ' not null,
  ptclrltn    char(10) default ' ' not null,
  ptclspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index patclpa1 on patclpaf
(
ptclvisn,
ptclclty,
ptclinvn
);
revoke all on patclpaf from public ; 
grant select on patclpaf to public ; 
