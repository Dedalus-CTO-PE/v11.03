create table outectaf
(
  otechosp    char(3) default ' ' not null,
  dotecflg    char(2) default ' ' not null,
  otecmodl    char(1) default ' ' not null,
  otecuniq    char(8) default ' ' not null,
  otecinvn    char(8) default ' ' not null,
  otecbatn    char(8) default ' ' not null,
  otecurno    char(8) default ' ' not null,
  otecpbat    char(8) default ' ' not null,
  otecnbat    char(8) default ' ' not null,
  otectrid    char(24) default ' ' not null,
  otecamtc    decimal(14,2) default 0 not null,
  otecamtp    decimal(14,2) default 0 not null,
  otecpdat    char(8) default ' ' not null,
  otecstat    char(2) default ' ' not null,
  otecclid    char(6) default ' ' not null,
  otecrkey    char(24) default ' ' not null,
  otecokey    char(36) default ' ' not null,
  otecspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outecta1 on outectaf
(
otechosp,
dotecflg,
otecmodl,
otecuniq,
otecinvn,
otecbatn
);
create unique index outecta2 on outectaf
(
otecinvn,
otecbatn,
otecmodl
);
create unique index outecta3 on outectaf
(
otecbatn,
otecuniq,
otecinvn
);
create unique index outecta4 on outectaf
(
otecuniq,
otecinvn,
otecbatn
);
create unique index outecta5 on outectaf
(
otechosp,
otecurno,
otecuniq,
otecinvn,
otecbatn
);
create unique index outecta6 on outectaf
(
otectrid,
otecinvn,
otecbatn
);
revoke all on outectaf from public ; 
grant select on outectaf to public ; 
