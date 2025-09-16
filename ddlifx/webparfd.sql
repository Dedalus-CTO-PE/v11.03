create table webparaf
(
  wbprcode    char(3) default ' ' not null,
  wbprtype    char(1) default ' ' not null,
  wbprname    char(40) default ' ' not null,
  wbprcnum    char(19) default ' ' not null,
  wbprdupd    char(8) default ' ' not null,
  wbprspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpara1 on webparaf
(
wbprcode
);
create unique index webpara2 on webparaf
(
wbprname,
wbprcode
);
revoke all on webparaf from public ; 
grant select on webparaf to public ; 
