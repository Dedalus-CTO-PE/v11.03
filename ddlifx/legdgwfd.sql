create table legdgwaf
(
  lptdwdrg    char(4) default ' ' not null,
  lptdwmdc    char(4) default ' ' not null,
  lptdwdes    char(60) default ' ' not null,
  lptdwlow    decimal(5,2) default 0 not null,
  lptdwhig    decimal(5,2) default 0 not null,
  lptdwrwg    decimal(9,6) default 0 not null,
  lptdwcls    char(2) default ' ' not null,
  lptdwdgv    char(3) default ' ' not null,
  lptdwspa    char(21) default ' ' not null,
  lf          char(1)
);
create unique index legdgwa1 on legdgwaf
(
lptdwdrg,
lptdwdgv
);
create unique index legdgwa2 on legdgwaf
(
lptdwmdc,
lptdwdrg,
lptdwdgv
);
create unique index legdgwa3 on legdgwaf
(
lptdwdes,
lptdwdrg,
lptdwdgv
);
revoke all on legdgwaf from public ; 
grant select on legdgwaf to public ; 
