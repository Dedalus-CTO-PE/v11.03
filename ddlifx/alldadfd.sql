create table alldadaf
(
  aldavisn    char(8) default ' ' not null,
  aldafhos    char(5) default ' ' not null,
  aldathos    char(5) default ' ' not null,
  aldaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index alldada1 on alldadaf
(
aldavisn
);
revoke all on alldadaf from public ; 
grant select on alldadaf to public ; 
