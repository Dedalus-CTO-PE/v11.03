create table outartaf
(
  otarurno    char(8) default ' ' not null,
  otarrefn    char(8) default ' ' not null,
  otarrqdt    char(8) default ' ' not null,
  otarrqtm    char(8) default ' ' not null,
  otarrdep    char(3) default ' ' not null,
  otaradep    char(3) default ' ' not null,
  otarprdt    char(8) default ' ' not null,
  otarprhs    char(3) default ' ' not null,
  otarprsi    char(6) default ' ' not null,
  otarclty    char(6) default ' ' not null,
  otarclid    char(6) default ' ' not null,
  otarvist    char(3) default ' ' not null,
  otartrrq    char(3) default ' ' not null,
  otarpcom    char(50) default ' ' not null,
  otarfinc    char(3) default ' ' not null,
  otarprio    char(3) default ' ' not null,
  otarsorf    char(3) default ' ' not null,
  otarsarr    char(3) default ' ' not null,
  otaroobn    char(8) default ' ' not null,
  otarstat    char(1) default ' ' not null,
  otarrreq    char(3) default ' ' not null,
  otarrcan    char(3) default ' ' not null,
  otarcadt    char(8) default ' ' not null,
  otarcatm    char(8) default ' ' not null,
  otarcaus    char(10) default ' ' not null,
  otarbkno    char(8) default ' ' not null,
  otarbksi    char(6) default ' ' not null,
  otarbkcl    char(6) default ' ' not null,
  otarbkdt    char(8) default ' ' not null,
  otarclst    char(5) default ' ' not null,
  otarclsn    char(3) default ' ' not null,
  otarcltm    char(5) default ' ' not null,
  otarbkid    char(10) default ' ' not null,
  otarcdat    char(8) default ' ' not null,
  otarctim    char(8) default ' ' not null,
  otarcuid    char(10) default ' ' not null,
  otarcpdt    char(8) default ' ' not null,
  otarcptm    char(8) default ' ' not null,
  otarcpid    char(10) default ' ' not null,
  otarfsrc    char(3) default ' ' not null,
  otarintr    char(1) default ' ' not null,
  otarlng1    char(3) default ' ' not null,
  otarcmid    char(10) default ' ' not null,
  otarspar    char(23) default ' ' not null,
  lf          char(1)
);
create unique index outarta1 on outartaf
(
otarurno,
otarrefn,
otarrqdt,
otarrqtm
);
create unique index outarta2 on outartaf
(
otarstat,
otarrqdt,
otarrqtm,
otarurno,
otarrefn
);
create unique index outarta3 on outartaf
(
otarprdt,
otarstat,
otarrqdt,
otarrqtm,
otarurno,
otarrefn
);
create unique index outarta4 on outartaf
(
otarprhs,
otarprsi,
otarstat,
otarrqdt,
otarrqtm,
otarurno,
otarrefn
);
revoke all on outartaf from public ; 
grant select on outartaf to public ; 
