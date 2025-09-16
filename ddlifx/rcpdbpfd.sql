create table rcpdbpaf
(
  rcdbrecn    char(12) default ' ' not null,
  rcdbtcnt    char(5) default ' ' not null,
  rcdbinvn    char(12) default ' ' not null,
  rcdbilne    char(3) default ' ' not null,
  rcdbpamt    decimal(14,2) default 0 not null,
  rcdbspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index rcpdbpa1 on rcpdbpaf
(
rcdbrecn,
rcdbtcnt,
rcdbinvn,
rcdbilne
);
create unique index rcpdbpa2 on rcpdbpaf
(
rcdbinvn,
rcdbilne,
rcdbrecn,
rcdbtcnt
);
revoke all on rcpdbpaf from public ; 
grant select on rcpdbpaf to public ; 
