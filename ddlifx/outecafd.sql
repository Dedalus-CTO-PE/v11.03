create table outecaaf
(
  oteainvn    char(8) default ' ' not null,
  oteadate    char(8) default ' ' not null,
  oteatime    char(8) default ' ' not null,
  oteabatn    char(8) default ' ' not null,
  oteastat    decimal(2,0) default 0 not null,
  oteatype    char(2) default ' ' not null,
  oteaoper    char(10) default ' ' not null,
  oteatrid    char(24) default ' ' not null,
  oteaeror    char(4) default ' ' not null,
  oteaerot    char(100) default ' ' not null,
  oteamodl    char(1) default ' ' not null,
  oteaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outecaa1 on outecaaf
(
oteainvn,
oteadate,
oteatime,
oteatype,
oteamodl
);
create unique index outecaa2 on outecaaf
(
oteadate,
oteatime,
oteatype,
oteainvn,
oteamodl
);
create unique index outecaa3 on outecaaf
(
oteainvn,
oteabatn,
oteadate,
oteatime,
oteatype,
oteamodl
);
revoke all on outecaaf from public ; 
grant select on outecaaf to public ; 
