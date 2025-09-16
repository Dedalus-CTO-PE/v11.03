create table hicbcnaf
(
  hcbcpmci    char(8) default ' ' not null,
  hcbcpyee    char(10) default ' ' not null,
  hcbcpsrv    char(10) default ' ' not null,
  hcbcbtch    char(5) default ' ' not null,
  hcbcbcnt    decimal(3,0) default 0 not null,
  hcbcstat    char(1) default ' ' not null,
  hcbccdat    char(8) default ' ' not null,
  hcbcctim    char(8) default ' ' not null,
  hcbccuid    char(10) default ' ' not null,
  hcbcudat    char(8) default ' ' not null,
  hcbcutim    char(8) default ' ' not null,
  hcbcuuid    char(10) default ' ' not null,
  hcbcspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index hicbcna1 on hicbcnaf
(
hcbcpmci,
hcbcpyee,
hcbcpsrv,
hcbcbtch
);
create unique index hicbcna2 on hicbcnaf
(
hcbcbtch,
hcbcpmci,
hcbcpyee,
hcbcpsrv
);
revoke all on hicbcnaf from public ; 
grant select on hicbcnaf to public ; 
