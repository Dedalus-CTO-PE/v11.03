create table apsimsaf
(
  apimbch     char(5) default ' ' not null,
  apimcrd     char(5) default ' ' not null,
  apimref     char(15) default ' ' not null,
  apimdoc     char(15) default ' ' not null,
  apimtyp     char(1) default ' ' not null,
  apimupd     char(1) default ' ' not null,
  apimout     char(1) default ' ' not null,
  apimter     char(2) default ' ' not null,
  apimidt     char(8) default ' ' not null,
  apimddt     char(8) default ' ' not null,
  apimpdt     char(8) default ' ' not null,
  apimtdt     char(8) default ' ' not null,
  apimtot     decimal(14,2) default 0 not null,
  apimdis     decimal(14,2) default 0 not null,
  apimgst     decimal(14,2) default 0 not null,
  apimpay     decimal(14,2) default 0 not null,
  apimcm1     char(70) default ' ' not null,
  apimcm2     char(70) default ' ' not null,
  apimicm     char(35) default ' ' not null,
  apimpayg    char(1) default ' ' not null,
  apimspa     char(29) default ' ' not null,
  lf          char(1)
);
create unique index apsimsa1 on apsimsaf
(
apimbch,
apimcrd,
apimref,
apimdoc
);
create unique index apsimsa2 on apsimsaf
(
apimcrd,
apimidt,
apimref,
apimdoc,
apimbch
);
create unique index apsimsa3 on apsimsaf
(
apimcrd,
apimref,
apimdoc,
apimbch
);
create unique index apsimsa4 on apsimsaf
(
apimcrd,
apimdoc,
apimref,
apimbch
);
create unique index apsimsa5 on apsimsaf
(
apimbch,
apimcrd,
apimdoc,
apimref
);
create unique index apsimsa6 on apsimsaf
(
apimout,
apimcrd,
apimref,
apimdoc,
apimbch
);
revoke all on apsimsaf from public ; 
grant select on apsimsaf to public ; 
