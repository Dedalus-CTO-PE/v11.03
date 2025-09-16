create table oprdpfaf
(
  opdfcode    char(6) default ' ' not null,
  opdfpref    char(9) default ' ' not null,
  opdfclss    char(3) default ' ' not null,
  opdftype    char(1) default ' ' not null,
  opdfitem    char(15) default ' ' not null,
  opdfqty     decimal(3,0) default 0 not null,
  opdfhosp    char(3) default ' ' not null,
  opdfspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index oprdpfa1 on oprdpfaf
(
opdfcode,
opdfpref,
opdfclss,
opdftype,
opdfitem,
opdfhosp
);
revoke all on oprdpfaf from public ; 
grant select on oprdpfaf to public ; 
