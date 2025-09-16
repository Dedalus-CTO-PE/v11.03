create table ccsobpaf
(
  ccobcid     char(6) default ' ' not null,
  ccobref     char(3) default ' ' not null,
  ccobpri     decimal(14,2) default 0 not null,
  ccobspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccsobpa1 on ccsobpaf
(
ccobcid,
ccobref
);
revoke all on ccsobpaf from public ; 
grant select on ccsobpaf to public ; 
