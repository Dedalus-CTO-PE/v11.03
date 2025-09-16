create table legpgraf
(
  dlptpgad    char(8) default ' ' not null,
  dlptpgep    char(2) default ' ' not null,
  lptpggpv    char(3) default ' ' not null,
  lptpgndr    char(4) default ' ' not null,
  lptpgnmd    char(4) default ' ' not null,
  lptpgnwg    decimal(10,4) default 0 not null,
  lptpgnal    decimal(6,2) default 0 not null,
  lptpgsdr    char(4) default ' ' not null,
  lptpgsmd    char(4) default ' ' not null,
  lptpgswg    decimal(10,4) default 0 not null,
  lptpgsal    decimal(6,2) default 0 not null,
  lptpgldr    char(4) default ' ' not null,
  lptpglmd    char(4) default ' ' not null,
  lptpglwg    decimal(10,4) default 0 not null,
  lptpglal    decimal(6,2) default 0 not null,
  lptpgpcc    char(1) default ' ' not null,
  lptpgwfi    decimal(16,4) default 0 not null,
  lptpgwva    decimal(16,4) default 0 not null,
  lptpgwto    decimal(16,4) default 0 not null,
  lptpgwwu    decimal(10,4) default 0 not null,
  lptpgwwd    char(13) default ' ' not null,
  lptpgspa    char(35) default ' ' not null,
  lf          char(1)
);
create unique index legpgra1 on legpgraf
(
dlptpgad,
dlptpgep,
lptpggpv
);
create unique index legpgra2 on legpgraf
(
dlptpgad,
lptpggpv,
dlptpgep
);
revoke all on legpgraf from public ; 
grant select on legpgraf to public ; 
