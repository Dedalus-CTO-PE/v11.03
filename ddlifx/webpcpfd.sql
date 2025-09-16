create table webpcpaf
(
  wbpccode    char(3) default ' ' not null,
  wbpccpid    char(3) default ' ' not null,
  wbpcscid    char(3) default ' ' not null,
  wbpccvid    char(1) default ' ' not null,
  wbpccnam    char(70) default ' ' not null,
  wbpccrol    char(6) default ' ' not null,
  wbpcspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpcpa1 on webpcpaf
(
wbpccode,
wbpccpid,
wbpcscid
);
create unique index webpcpa2 on webpcpaf
(
wbpccpid,
wbpccode,
wbpcscid
);
revoke all on webpcpaf from public ; 
grant select on webpcpaf to public ; 
