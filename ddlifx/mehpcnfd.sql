create table mehpcnaf
(
  mhpnxdat    char(8) default ' ' not null,
  mhpnxnum    char(3) default ' ' not null,
  mhpnvisn    char(8) default ' ' not null,
  mhpnurno    char(8) default ' ' not null,
  mhpnocur    char(3) default ' ' not null,
  mhpnerid    char(9) default ' ' not null,
  mhpncscd    char(20) default ' ' not null,
  mhpncsys    char(2) default ' ' not null,
  mhpndtyp    char(1) default ' ' not null,
  mhpnccod    char(8) default ' ' not null,
  mhpnicid    char(2) default ' ' not null,
  mhpnityp    char(1) default ' ' not null,
  mhpnival    char(8) default ' ' not null,
  mhpnsdat    char(19) default ' ' not null,
  mhpnedat    char(19) default ' ' not null,
  mhpnspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index mehpcna1 on mehpcnaf
(
mhpnxdat,
mhpnxnum,
mhpnvisn,
mhpnurno,
mhpnocur
);
revoke all on mehpcnaf from public ; 
grant select on mehpcnaf to public ; 
