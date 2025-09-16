create table patpgraf
(
  dptpgadm    char(8) default ' ' not null,
  dptpgepn    char(2) default ' ' not null,
  ptpggpvr    char(3) default ' ' not null,
  ptpgndrg    char(4) default ' ' not null,
  ptpgnmdc    char(4) default ' ' not null,
  ptpgnwgt    decimal(10,4) default 0 not null,
  ptpgnals    decimal(6,2) default 0 not null,
  ptpgsdrg    char(4) default ' ' not null,
  ptpgsmdc    char(4) default ' ' not null,
  ptpgswgt    decimal(10,4) default 0 not null,
  ptpgsals    decimal(6,2) default 0 not null,
  ptpgldrg    char(4) default ' ' not null,
  ptpglmdc    char(4) default ' ' not null,
  ptpglwgt    decimal(10,4) default 0 not null,
  ptpglals    decimal(6,2) default 0 not null,
  ptpgpccl    char(1) default ' ' not null,
  ptpgwfix    decimal(16,4) default 0 not null,
  ptpgwvar    decimal(16,4) default 0 not null,
  ptpgwtol    decimal(16,4) default 0 not null,
  ptpgwwtu    decimal(10,4) default 0 not null,
  ptpgwwtd    char(13) default ' ' not null,
  ptpgecrw    char(11) default ' ' not null,
  ptpgspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index patpgra1 on patpgraf
(
dptpgadm,
dptpgepn,
ptpggpvr
);
create unique index patpgra2 on patpgraf
(
dptpgadm,
ptpggpvr,
dptpgepn
);
revoke all on patpgraf from public ; 
grant select on patpgraf to public ; 
