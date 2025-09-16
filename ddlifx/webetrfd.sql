create table webetraf
(
  wbetstat    char(1) default ' ' not null,
  wbettype    char(2) default ' ' not null,
  wbettrid    char(24) default ' ' not null,
  wbetcdte    char(8) default ' ' not null,
  wbetctim    char(8) default ' ' not null,
  wbetbatn    char(8) default ' ' not null,
  wbetinvn    char(8) default ' ' not null,
  wbetudte    char(8) default ' ' not null,
  wbetutim    char(8) default ' ' not null,
  wbetlocn    char(8) default ' ' not null,
  wbetsnid    char(60) default ' ' not null,
  wbetfdtm    char(14) default ' ' not null,
  wbettdtm    char(14) default ' ' not null,
  wbeteror    char(4) default ' ' not null,
  wbetmodl    char(1) default ' ' not null,
  wbetmsid    char(36) default ' ' not null,
  wbetstrd    char(24) default ' ' not null,
  wbetsmid    char(36) default ' ' not null,
  wbetassn    char(40) default ' ' not null,
  wbetlodt    char(25) default ' ' not null,
  wbetpsta    char(30) default ' ' not null,
  wbetrefr    char(10) default ' ' not null,
  wbetreps    char(20) default ' ' not null,
  wbetrtty    char(100) default ' ' not null,
  wbetspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webetra1 on webetraf
(
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
);
create unique index webetra2 on webetraf
(
wbetcdte,
wbetctim,
wbetstat,
wbettype,
wbetlocn,
wbettrid
);
create unique index webetra3 on webetraf
(
wbetstat,
wbetcdte,
wbetctim,
wbettype,
wbetlocn,
wbettrid
);
create unique index webetra4 on webetraf
(
wbettrid,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim
);
create unique index webetra5 on webetraf
(
wbetstrd,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
);
create unique index webetra6 on webetraf
(
wbetmsid,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
);
create unique index webetra7 on webetraf
(
wbetsmid,
wbetstat,
wbettype,
wbetlocn,
wbetcdte,
wbetctim,
wbettrid
);
revoke all on webetraf from public ; 
grant select on webetraf to public ; 
