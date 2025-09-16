create table tmpdbpaf
(
  tmdbrecn    char(12) default ' ' not null,
  tmdbtcnt    char(5) default ' ' not null,
  tmdbinvn    char(12) default ' ' not null,
  tmdbilne    char(3) default ' ' not null,
  tmdbpamt    decimal(14,2) default 0 not null,
  tmdbspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index tmpdbpa1 on tmpdbpaf
(
tmdbrecn,
tmdbtcnt,
tmdbinvn,
tmdbilne
);
create unique index tmpdbpa2 on tmpdbpaf
(
tmdbinvn,
tmdbilne,
tmdbrecn,
tmdbtcnt
);
revoke all on tmpdbpaf from public ; 
grant select on tmpdbpaf to public ; 
