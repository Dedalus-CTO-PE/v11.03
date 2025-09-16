create table sindpcaf
(
  sidpcode    char(3) default ' ' not null,
  sidpadd1    char(40) default ' ' not null,
  sidpadd2    char(40) default ' ' not null,
  sidpactv    char(1) default ' ' not null,
  sidpspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index sindpca1 on sindpcaf
(
sidpcode
);
revoke all on sindpcaf from public ; 
grant select on sindpcaf to public ; 
