create table fmsjtpaf
(
  fmjtjty     char(1) default ' ' not null,
  fmjtjid     char(6) default ' ' not null,
  fmjtper     char(6) default ' ' not null,
  fmjtlno     char(3) default ' ' not null,
  fmjtamt     decimal(14,2) default 0 not null,
  fmjtspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsjtpa1 on fmsjtpaf
(
fmjtjty,
fmjtjid,
fmjtper,
fmjtlno
);
create unique index fmsjtpa2 on fmsjtpaf
(
fmjtjty,
fmjtjid,
fmjtlno,
fmjtper
);
revoke all on fmsjtpaf from public ; 
grant select on fmsjtpaf to public ; 
