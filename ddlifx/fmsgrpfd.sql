create table fmsgrpaf
(
  fmgpcode    char(3) default ' ' not null,
  fmgpdesc    char(35) default ' ' not null,
  fmgpspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsgrpa1 on fmsgrpaf
(
fmgpcode
);
revoke all on fmsgrpaf from public ; 
grant select on fmsgrpaf to public ; 
