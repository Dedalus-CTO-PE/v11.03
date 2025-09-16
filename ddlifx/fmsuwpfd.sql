create table fmsuwpaf
(
  fmuwledg    char(2) default ' ' not null,
  fmuwacct    char(12) default ' ' not null,
  fmuwlno     char(3) default ' ' not null,
  fmuwline    char(70) default ' ' not null,
  fmuwspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsuwpa1 on fmsuwpaf
(
fmuwledg,
fmuwacct,
fmuwlno
);
revoke all on fmsuwpaf from public ; 
grant select on fmsuwpaf to public ; 
