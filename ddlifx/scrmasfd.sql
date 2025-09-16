create table scrmasaf
(
  scmapid     char(8) default ' ' not null,
  scmasid     char(2) default ' ' not null,
  scmades     char(35) default ' ' not null,
  scmatop     decimal(2,0) default 0 not null,
  scmalef     decimal(3,0) default 0 not null,
  scmabot     decimal(2,0) default 0 not null,
  scmarig     decimal(3,0) default 0 not null,
  scmacbf     char(8) default ' ' not null,
  scmacaf     char(8) default ' ' not null,
  scmatyp     decimal(2,0) default 0 not null,
  scmasex     char(1) default ' ' not null,
  scmafsc     char(2) default ' ' not null,
  scmaclr     char(1) default ' ' not null,
  scmafpr     char(8) default ' ' not null,
  scmaspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index scrmasa1 on scrmasaf
(
scmapid,
scmasid
);
revoke all on scrmasaf from public ; 
grant select on scrmasaf to public ; 
