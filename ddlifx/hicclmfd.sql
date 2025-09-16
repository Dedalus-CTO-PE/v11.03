create table hicclmaf
(
  hcclclmn    char(8) default ' ' not null,
  hcclstat    char(2) default ' ' not null,
  hcclbtch    char(5) default ' ' not null,
  hcclvisn    char(8) default ' ' not null,
  hcclvtyp    decimal(2,0) default 0 not null,
  hcclurno    char(8) default ' ' not null,
  hcclpmci    char(8) default ' ' not null,
  hcclpyee    char(10) default ' ' not null,
  hcclpsrv    char(10) default ' ' not null,
  hcclmpra    char(6) default ' ' not null,
  hccldate    char(8) default ' ' not null,
  hccladoc    char(10) default ' ' not null,
  hcclsite    char(6) default ' ' not null,
  hcclctyp    char(6) default ' ' not null,
  hcclclid    char(6) default ' ' not null,
  hcclpind    char(3) default ' ' not null,
  hcclmitm    decimal(1,0) default 0 not null,
  hcclsent    char(8) default ' ' not null,
  hcclrecp    char(8) default ' ' not null,
  hcclpbat    char(8) default ' ' not null,
  hcclnbat    char(8) default ' ' not null,
  hcclcamn    decimal(14,2) default 0 not null,
  hcclrcva    decimal(14,2) default 0 not null,
  hcclreja    decimal(14,2) default 0 not null,
  hcclwoff    decimal(14,2) default 0 not null,
  hccltrin    decimal(14,2) default 0 not null,
  hccladjm    decimal(14,2) default 0 not null,
  hcclcdat    char(8) default ' ' not null,
  hcclctim    char(8) default ' ' not null,
  hcclcuid    char(10) default ' ' not null,
  hccludat    char(8) default ' ' not null,
  hcclutim    char(8) default ' ' not null,
  hccluuid    char(10) default ' ' not null,
  hcclvpos    char(2) default ' ' not null,
  hcclpnum    char(5) default ' ' not null,
  hcclspar    char(45) default ' ' not null,
  lf          char(1)
);
create unique index hicclma1 on hicclmaf
(
hcclclmn
);
create unique index hicclma2 on hicclmaf
(
hcclvisn,
hcclclmn
);
create unique index hicclma3 on hicclmaf
(
hcclurno,
hcclclmn
);
create unique index hicclma4 on hicclmaf
(
hcclpsrv,
hccldate,
hcclclmn
);
create unique index hicclma5 on hicclmaf
(
hcclsite,
hcclctyp,
hccldate,
hcclclmn
);
create unique index hicclma6 on hicclmaf
(
hcclsite,
hcclclid,
hccldate,
hcclclmn
);
create unique index hicclma7 on hicclmaf
(
hcclbtch,
hcclvpos,
hcclclmn
);
create unique index hicclma8 on hicclmaf
(
hcclstat,
hccldate,
hcclclmn
);
revoke all on hicclmaf from public ; 
grant select on hicclmaf to public ; 
