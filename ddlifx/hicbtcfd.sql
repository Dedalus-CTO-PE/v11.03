create table hicbtcaf
(
  hcbtbtch    char(5) default ' ' not null,
  hcbtpmci    char(8) default ' ' not null,
  hcbtpyee    char(10) default ' ' not null,
  hcbtpsrv    char(10) default ' ' not null,
  hcbtmpra    char(6) default ' ' not null,
  hcbtdate    char(8) default ' ' not null,
  hcbtsite    char(6) default ' ' not null,
  hcbtctyp    char(6) default ' ' not null,
  hcbtclid    char(6) default ' ' not null,
  hcbtcamt    decimal(14,2) default 0 not null,
  hcbtamtr    decimal(14,2) default 0 not null,
  hcbtreja    decimal(14,2) default 0 not null,
  hcbtwoff    decimal(14,2) default 0 not null,
  hcbttrin    decimal(14,2) default 0 not null,
  hcbtsize    decimal(3,0) default 0 not null,
  hcbtstat    char(2) default ' ' not null,
  hcbtadjm    decimal(14,2) default 0 not null,
  hcbtcmnt    char(3) default ' ' not null,
  hcbthcop    char(8) default ' ' not null,
  hcbtfndr    char(8) default ' ' not null,
  hcbtdepd    char(8) default ' ' not null,
  hcbtcdat    char(8) default ' ' not null,
  hcbtctim    char(8) default ' ' not null,
  hcbtcuid    char(10) default ' ' not null,
  hcbtudat    char(8) default ' ' not null,
  hcbtutim    char(8) default ' ' not null,
  hcbtuuid    char(10) default ' ' not null,
  hcbtefnm    char(40) default ' ' not null,
  hcbtsent    char(1) default ' ' not null,
  hcbttdat    char(8) default ' ' not null,
  hcbtspar    char(43) default ' ' not null,
  lf          char(1)
);
create unique index hicbtca1 on hicbtcaf
(
hcbtbtch,
hcbtpsrv,
hcbtpmci,
hcbtpyee
);
create unique index hicbtca2 on hicbtcaf
(
hcbtpsrv,
hcbtstat,
hcbtdate,
hcbtpmci,
hcbtpyee,
hcbtbtch
);
create unique index hicbtca3 on hicbtcaf
(
hcbtsite,
hcbtclid,
hcbtstat,
hcbtdate,
hcbtpsrv,
hcbtpmci,
hcbtpyee,
hcbtbtch
);
create unique index hicbtca4 on hicbtcaf
(
hcbtdate,
hcbtstat,
hcbtpsrv,
hcbtpmci,
hcbtpyee,
hcbtbtch
);
create unique index hicbtca5 on hicbtcaf
(
hcbtstat,
hcbtpsrv,
hcbtpmci,
hcbtpyee,
hcbtbtch
);
create unique index hicbtca6 on hicbtcaf
(
hcbtmpra,
hcbtstat,
hcbtdate,
hcbtpmci,
hcbtpyee,
hcbtbtch
);
revoke all on hicbtcaf from public ; 
grant select on hicbtcaf to public ; 
