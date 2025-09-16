create table outphoaf
(
  ophdate     char(8) default ' ' not null,
  ophdesc     char(30) default ' ' not null,
  ophhosp     char(3) default ' ' not null,
  ophspare    char(8) default ' ' not null,
  lf          char(1)
);
create unique index outphoa1 on outphoaf
(
ophdate,
ophhosp
);
create unique index outphoa2 on outphoaf
(
ophdesc,
ophdate,
ophhosp
);
create unique index outphoa3 on outphoaf
(
ophhosp,
ophdate
);
revoke all on outphoaf from public ; 
grant select on outphoaf to public ; 
