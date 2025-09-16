create table mrtlocaf
(
  mrlocode    char(4) default ' ' not null,
  mrlodesc    char(30) default ' ' not null,
  mrlotype    char(3) default ' ' not null,
  mrloindc    char(1) default ' ' not null,
  mrlostat    decimal(1,0) default 0 not null,
  mrlousag    decimal(1,0) default 0 not null,
  mrloprnt    char(6) default ' ' not null,
  mrlostcd    char(6) default ' ' not null,
  mrlohosp    char(3) default ' ' not null,
  mrloprlc    char(1) default ' ' not null,
  mrlobprn    char(6) default ' ' not null,
  mrlotrec    char(1) default ' ' not null,
  mrlospar    char(99) default ' ' not null,
  lf          char(1)
);
create unique index mrtloca1 on mrtlocaf
(
mrlohosp,
mrlocode
);
create unique index mrtloca2 on mrtlocaf
(
mrloindc,
mrlohosp,
mrlocode
);
create unique index mrtloca3 on mrtlocaf
(
mrlodesc,
mrlohosp,
mrlocode
);
create unique index mrtloca4 on mrtlocaf
(
mrlocode,
mrlohosp
);
revoke all on mrtlocaf from public ; 
grant select on mrtlocaf to public ; 
