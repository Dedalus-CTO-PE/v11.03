create table legdtrof
(
  dlotnumb    char(8) default ' ' not null,
  lotinvno    char(8) default ' ' not null,
  dlottran    char(6) default ' ' not null,
  lotddesc    char(30) default ' ' not null,
  lotdttam    decimal(14,2) default 0 not null,
  lotddate    char(8) default ' ' not null,
  lotitemn    char(9) default ' ' not null,
  lottype     char(2) default ' ' not null,
  lotpayty    decimal(1,0) default 0 not null,
  lotrecep    char(12) default ' ' not null,
  lotinvpr    decimal(1,0) default 0 not null,
  dlotrect    char(1) default ' ' not null,
  lotchgdt    char(8) default ' ' not null,
  lotchgti    char(8) default ' ' not null,
  lotmisgr    char(3) default ' ' not null,
  lotdepty    char(3) default ' ' not null,
  lotbatch    char(8) default ' ' not null,
  lotdtppo    decimal(14,2) default 0 not null,
  lotdtrpo    decimal(14,2) default 0 not null,
  dlotninv    char(1) default ' ' not null,
  lotservs    decimal(2,0) default 0 not null,
  lotdepfl    char(1) default ' ' not null,
  loteffdt    char(8) default ' ' not null,
  lotdtgst    decimal(1,0) default 0 not null,
  lotdtgsc    char(6) default ' ' not null,
  lotdtgsa    decimal(14,2) default 0 not null,
  lotdtssa    char(1) default ' ' not null,
  lotspare    char(22) default ' ' not null,
  lf          char(1)
);
create unique index legdtro1 on legdtrof
(
dlotnumb,
lotinvno,
dlottran
);
create unique index legdtro2 on legdtrof
(
dlotrect,
lotchgdt,
dlotnumb,
dlottran
);
create unique index legdtro3 on legdtrof
(
dlotnumb,
lotinvno,
dlotrect,
lotddate,
dlottran
);
create unique index legdtro4 on legdtrof
(
lotdtssa,
lotinvno,
dlotrect,
dlotnumb,
dlottran
);
revoke all on legdtrof from public ; 
grant select on legdtrof to public ; 
