create table pat10d9f
(
  dpcode      char(9) default ' ' not null,
  ddesc       char(70) default ' ' not null,
  dflag       char(1) default ' ' not null,
  dagegp      char(1) default ' ' not null,
  dlow        decimal(2,0) default 0 not null,
  dhigh       decimal(2,0) default 0 not null,
  pt0d2agp    char(1) default ' ' not null,
  pt0d2all    decimal(2,0) default 0 not null,
  pt0d2ahl    decimal(2,0) default 0 not null,
  dsex        char(1) default ' ' not null,
  pt0dadtp    char(1) default ' ' not null,
  pt0dprfx    char(2) default ' ' not null,
  pt0dsac2    char(7) default ' ' not null,
  ddagger     char(1) default ' ' not null,
  darea       char(1) default ' ' not null,
  pt0dcpra    char(1) default ' ' not null,
  pt0dacrq    char(1) default ' ' not null,
  pt0dmi9c    char(9) default ' ' not null,
  dpt0dcmf    char(2) default ' ' not null,
  dpt0dv1c    char(1) default ' ' not null,
  dpt0dv2c    char(1) default ' ' not null,
  pt0dv1mp    char(9) default ' ' not null,
  dpt0dv3c    char(1) default ' ' not null,
  pt0dv2mp    char(9) default ' ' not null,
  dpt0dv4c    char(1) default ' ' not null,
  dpt0dv5c    char(1) default ' ' not null,
  dpt0dv6c    char(1) default ' ' not null,
  pt0ddsc2    char(200) default ' ' not null,
  dpt0dv7c    char(1) default ' ' not null,
  dpt0dv8c    char(1) default ' ' not null,
  dpt0dv9c    char(1) default ' ' not null,
  pt0dspr7    char(56) default ' ' not null,
  lf          char(1)
);
create unique index pati19d1 on pat10d9f
(
dpcode
);
create unique index pati19d2 on pat10d9f
(
ddesc,
dpcode
);
revoke all on pat10d9f from public ; 
grant select on pat10d9f to public ; 
