create table apsapyaf
(
  apapcrd     char(5) default ' ' not null,
  apapref     char(15) default ' ' not null,
  apaptyp     char(1) default ' ' not null,
  apapdoc     char(15) default ' ' not null,
  apapord     char(8) default ' ' not null,
  apaplin     char(3) default ' ' not null,
  apapbch     char(5) default ' ' not null,
  apappay     decimal(14,2) default 0 not null,
  apapgst     decimal(14,2) default 0 not null,
  apaptpy     decimal(14,2) default 0 not null,
  apapchq     char(15) default ' ' not null,
  apapdat     char(8) default ' ' not null,
  apappyc     char(15) default ' ' not null,
  apappyd     char(8) default ' ' not null,
  apappyb     char(5) default ' ' not null,
  apapdof     char(8) default ' ' not null,
  apapdue     char(8) default ' ' not null,
  apappin     char(1) default ' ' not null,
  apapmdi     char(3) default ' ' not null,
  apapsky     char(6) default ' ' not null,
  apappor     char(1) default ' ' not null,
  apapgmt     char(1) default ' ' not null,
  apappayg    char(1) default ' ' not null,
  apapspa     char(17) default ' ' not null,
  lf          char(1)
);
create unique index apsapya1 on apsapyaf
(
apapcrd,
apapref,
apaptyp,
apapdoc,
apapord,
apaplin,
apapbch
);
create unique index apsapya2 on apsapyaf
(
apapcrd,
apapref,
apaptyp,
apapord,
apaplin,
apapdoc,
apapbch
);
create unique index apsapya3 on apsapyaf
(
apapcrd,
apapmdi,
apapref,
apaptyp,
apapdoc,
apapord,
apaplin,
apapbch
);
create unique index apsapya4 on apsapyaf
(
apapsky,
apapcrd,
apapref,
apaptyp,
apapdoc,
apapord,
apaplin,
apapbch
);
revoke all on apsapyaf from public ; 
grant select on apsapyaf to public ; 
